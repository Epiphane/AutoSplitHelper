#include "AlpakitReleaseWidget.h"
#include "Alpakit.h"
#include "AlpakitModEntryList.h"
#include "AlpakitSettings.h"
#include "AlpakitStyle.h"
#include "ModTargetsConfig.h"

#define LOCTEXT_NAMESPACE "AlpakitWidget"

void SAlpakitReleaseWidget::Construct(const FArguments& InArgs) {
    const float TargetColumnWidth = 90;

    FString TargetSMLVersion = TEXT("^") + FAlpakitModule::GetCurrentSMLVersion();
    FString TargetGameVersion = FAlpakitModule::GetCurrentGameVersion();

    ChildSlot[
        SNew(SVerticalBox)
        +SVerticalBox::Slot().FillHeight(1).Padding(3)[
            SAssignNew(ModList, SAlpakitModEntryList)
            .BarSlot()[
                SNew(SHorizontalBox)
                + SHorizontalBox::Slot().AutoWidth()[
                    SNew(SButton)
                    .Text(LOCTEXT("PackageModAlpakitAllRelease", "Alpakit Selected (Release)"))
                    .ToolTipText(LOCTEXT("PackageModAlpakitAllRelease_Tooltip", "For each selected mod, prepare the multi-target zip for upload to the Mod Repository.\nThe targets included in the zip are controlled by what you have marked in Release Targets.\nCan build Shipping C++ as required."))
                    .OnClicked_Lambda([this] {
                        PackageAllMods();
                        return FReply::Handled();
                    })
                    .IsEnabled(this, &SAlpakitReleaseWidget::IsPackageButtonEnabled)
                ]
            ]
            .SearchTrail() [
                SNew(SHorizontalBox)
                    +SHorizontalBox::Slot().AutoWidth().VAlign(VAlign_Fill).Padding(15,0, 5, 0)[
                        SNew(SSeparator)
                        .Orientation(Orient_Vertical)
                    ]

                    +SHorizontalBox::Slot().AutoWidth().VAlign(VAlign_Center).Padding(5, 0, 15, 0)[
                        SNew(SVerticalBox)
                            +SVerticalBox::Slot().AutoHeight().HAlign(HAlign_Center).Padding(0, 0, 0, 5)[
                                SNew(STextBlock)
                                .ToolTipText(LOCTEXT("ReleaseTargets_Tooltip", "Select what target platforms this mod supports."))
                                .Text(LOCTEXT("ReleaseTargets", "Release Targets"))
                            ]
                            +SVerticalBox::Slot().AutoHeight().HAlign(HAlign_Center).Padding(0, 5, 0, 0)[
                                SNew(SHorizontalBox)
                                    +SHorizontalBox::Slot().AutoWidth().VAlign(VAlign_Center).Padding(5,0)[
                                        SNew(STextBlock)
                                        .Text(LOCTEXT("ReleaseWindows", "Windows"))
                                        .Justification(ETextJustify::Type::Center)
                                        .MinDesiredWidth(TargetColumnWidth)
                                    ]
                        
                                    +SHorizontalBox::Slot().AutoWidth().VAlign(VAlign_Center).Padding(5,0)[
                                        SNew(STextBlock)
                                        .Text(LOCTEXT("ReleaseWindowsServer", "Windows Server"))
                                        .Justification(ETextJustify::Type::Center)
                                        .MinDesiredWidth(TargetColumnWidth)
                                    ]
                        
                                    +SHorizontalBox::Slot().AutoWidth().VAlign(VAlign_Center).Padding(5,0)[
                                        SNew(STextBlock)
                                        .Text(LOCTEXT("ReleaseLinuxServer", "Linux Server"))
                                        .Justification(ETextJustify::Type::Center)
                                        .MinDesiredWidth(TargetColumnWidth)
                                    ]
                            ]
                    ]
            ]
            .ModEntryLead_Lambda([this] (const TSharedRef<IPlugin>& Mod) {
                return SNew(SButton)
                        .Text(LOCTEXT("PackageModAlpakit", "Alpakit!"))
                        .OnClicked_Lambda([this, Mod]{
                            FAlpakitModule::Get().PackageModsRelease({Mod});
                            return FReply::Handled();
                        })
                        .ToolTipText_Lambda([this, Mod]{
                            // TODO localize correctly
                            return FText::FromString(FString::Printf(TEXT("Alpakit Release just %s\n\nPackage this mod for Release Targets, and archive in the multi-target zip for upload to the Mod Repository.\nCan build Shipping C++ as required."), *Mod->GetName()));
                        })
                        .IsEnabled_Lambda([this]{
                            return !FAlpakitModule::Get().IsPackaging();
                        });
            })
            .ModEntryTrail_Lambda([this, TargetColumnWidth, TargetSMLVersion, TargetGameVersion] (const TSharedRef<IPlugin>& Mod) {
                TSharedRef<FModTargetsConfig> ModTargetsConfig = ModTargetsConfigs.FindOrAdd(Mod->GetName(), MakeShared<FModTargetsConfig>(Mod));

                return SNew(SBox)
                    .Padding(5, 0, 5, 0)
                    .Content()[
                        SNew(SHorizontalBox)
                        + SHorizontalBox::Slot().AutoWidth().Padding(5,0)[
                            SNew(SBox)
                            .HAlign(HAlign_Center)
                            .Visibility_Lambda([this, Mod, TargetSMLVersion]
                            {
                                FString SMLVersion = GetModSMLDependencyVersion(Mod);
                                if (SMLVersion.IsEmpty() || SMLVersion == TargetSMLVersion)
                                    return EVisibility::Hidden;
                                return EVisibility::Visible;
                            })
                            .Content()[
                                SNew(SButton)
                                .Content()
                                [
                                    SNew(SImage)
                                    .Image(FAlpakitStyle::Get().GetBrush("Alpakit.Warning"))
                                ]
                                .ToolTipText_Lambda([Mod, TargetSMLVersion]
                                {
                                    return FText::Format(LOCTEXT("UpdateSMLVersionTooltip", "This mod depends on SML {0}, but the project is using SML {1}. Click to update"), FText::FromString(GetModSMLDependencyVersion(Mod)), FText::FromString(TargetSMLVersion));
                                })
                                .OnClicked_Lambda([this, Mod, TargetSMLVersion]
                                {
                                    SetModSMLDependencyVersion(Mod, TargetSMLVersion);
                                    return FReply::Handled();
                                })
                            ]
                        ]
                        + SHorizontalBox::Slot().AutoWidth().Padding(5,0)[
                            SNew(SBox)
                            .HAlign(HAlign_Center)
                            .Visibility_Lambda([this, Mod, TargetGameVersion]
                            {
                                FString GameVersion = GetModGameVersion(Mod);
                                if (GameVersion == TargetGameVersion)
                                    return EVisibility::Hidden;
                                return EVisibility::Visible;
                            })
                            .Content()[
                                SNew(SButton)
                                .Content()
                                [
                                    SNew(SImage)
                                    .Image(FAlpakitStyle::Get().GetBrush("Alpakit.Warning"))
                                ]
                                .ToolTipText_Lambda([Mod, TargetGameVersion]
                                {
                                    FString CurrentGameVersion = GetModGameVersion(Mod);
                                    if (CurrentGameVersion.IsEmpty()) {
                                        CurrentGameVersion = "(unspecified)";
                                    }
                                    return FText::Format(LOCTEXT("UpdateGameVersionTooltip", "This mod uses game version {0}, but the project is {1}. Click to update"), FText::FromString(CurrentGameVersion), FText::FromString(TargetGameVersion));
                                })
                                .OnClicked_Lambda([this, Mod, TargetGameVersion]
                                {
                                    SetModGameVersion(Mod, TargetGameVersion);
                                    return FReply::Handled();
                                })
                            ]
                        ]
                        + SHorizontalBox::Slot().AutoWidth().Padding(5,0)[
                            SNew(SBox)
                            .MinDesiredWidth(TargetColumnWidth)
                            .HAlign(HAlign_Center)
                            .Content()[
                                SNew(SCheckBox)
                                .IsChecked(ModTargetsConfig->bWindows ? ECheckBoxState::Checked : ECheckBoxState::Unchecked)
                                .OnCheckStateChanged_Lambda([this, ModTargetsConfig](ECheckBoxState State) {
                                    ModTargetsConfig->bWindows = State == ECheckBoxState::Checked;
                                    ModTargetsConfig->Save();
                                })
                            ]
                        ]
                        + SHorizontalBox::Slot().AutoWidth().Padding(5,0)[
                            SNew(SBox)
                            .MinDesiredWidth(TargetColumnWidth)
                            .HAlign(HAlign_Center)
                            .Content()[
                                SNew(SCheckBox)
                                .IsChecked(ModTargetsConfig->bWindowsServer ? ECheckBoxState::Checked : ECheckBoxState::Unchecked)
                                .OnCheckStateChanged_Lambda([this, ModTargetsConfig](ECheckBoxState State) {
                                    ModTargetsConfig->bWindowsServer = State == ECheckBoxState::Checked;
                                    ModTargetsConfig->Save();
                                })
                            ]
                        ]
                        + SHorizontalBox::Slot().AutoWidth().Padding(5,0)[
                            SNew(SBox)
                            .MinDesiredWidth(TargetColumnWidth)
                            .HAlign(HAlign_Center)
                            .Content()[
                                SNew(SCheckBox)
                                    .IsChecked(ModTargetsConfig->bLinuxServer ? ECheckBoxState::Checked : ECheckBoxState::Unchecked)
                                    .OnCheckStateChanged_Lambda([this, ModTargetsConfig](ECheckBoxState State) {
                                        ModTargetsConfig->bLinuxServer = State == ECheckBoxState::Checked;
                                        ModTargetsConfig->Save();
                                    })
                            ]
                        ]
                ];
            })
        ]
    ];
}

FString SAlpakitReleaseWidget::GetModSMLDependencyVersion(TSharedRef<IPlugin> Mod)
{
    FPluginDescriptor Descriptor = Mod->GetDescriptor();
    FPluginReferenceDescriptor* SMLDependency = Descriptor.Plugins.FindByPredicate([](FPluginReferenceDescriptor& Dependency)
    {
        return Dependency.Name == TEXT("SML");
    });
    if (SMLDependency != nullptr)
    {
        FString SemVersion;
        SMLDependency->GetAdditionalStringField(TEXT("SemVersion"), SemVersion);
        return SemVersion;
    }
    
    return TEXT("");
}

void SAlpakitReleaseWidget::SetModSMLDependencyVersion(TSharedRef<IPlugin> Mod, FString Version)
{
    FPluginDescriptor Descriptor = Mod->GetDescriptor();
    FPluginReferenceDescriptor* SMLDependency = Descriptor.Plugins.FindByPredicate([](FPluginReferenceDescriptor& Dependency)
    {
        return Dependency.Name == TEXT("SML");
    });
    if (SMLDependency == nullptr)
        return;
    SMLDependency->AdditionalFieldsToWrite.Add(TEXT("SemVersion"), MakeShared<FJsonValueString>(Version));
    FText Error;
    Mod->UpdateDescriptor(Descriptor, Error);
}

FString SAlpakitReleaseWidget::GetModGameVersion(TSharedRef<IPlugin> Mod)
{
    FPluginDescriptor Descriptor = Mod->GetDescriptor();
    FString GameVersion;

    // FPluginDescriptor does not have GetAdditionalStringField for some reason
    TSharedPtr<FJsonValue>* GameVersionValue = Descriptor.AdditionalFieldsToWrite.Find(TEXT("GameVersion"));
    if (GameVersionValue != nullptr)
        GameVersion = (*GameVersionValue)->AsString();
    else
        Descriptor.CachedJson->TryGetStringField(TEXT("GameVersion"), GameVersion);
    return GameVersion;
}

void SAlpakitReleaseWidget::SetModGameVersion(TSharedRef<IPlugin> Mod, FString Version)
{
    FPluginDescriptor Descriptor = Mod->GetDescriptor();
    Descriptor.AdditionalFieldsToWrite.Add(TEXT("GameVersion"), MakeShared<FJsonValueString>(Version));
    FText Error;
    Mod->UpdateDescriptor(Descriptor, Error);
}

FReply SAlpakitReleaseWidget::PackageAllMods() {
    FAlpakitModule& AlpakitModule = FModuleManager::GetModuleChecked<FAlpakitModule>(TEXT("Alpakit"));

    TArray<TSharedRef<IPlugin>> ModsToPackage;
    
    UAlpakitSettings* Settings = UAlpakitSettings::Get();
    for (TSharedRef<IPlugin> Mod : ModList->GetFilteredMods()) {
        if (Settings->ModSelection.FindOrAdd(Mod->GetName(), false)) {
            ModsToPackage.Add(Mod);
        }
    }

    AlpakitModule.PackageModsRelease(ModsToPackage);

    return FReply::Handled();
}

bool SAlpakitReleaseWidget::IsPackageButtonEnabled() const {
	return !FAlpakitModule::Get().IsPackaging();
}

#undef LOCTEXT_NAMESPACE
