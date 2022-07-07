// This file has been automatically generated by the Unreal Header Implementation tool

#include "UI/FGComboBoxSearch.h"
#include "Widgets/Layout/SSpacer.h"

#if WITH_EDITOR
const FText UFGComboBoxSearch::GetPaletteCategory(){ return FText(); }
#endif 
void UFGComboBoxSearch::AddOption(const FString& Option){ }
bool UFGComboBoxSearch::RemoveOption(const FString& Option){ return bool(); }
int32 UFGComboBoxSearch::FindOptionIndex(const FString& Option) const{ return int32(); }
FString UFGComboBoxSearch::GetOptionAtIndex(int32 Index) const{ return FString(); }
void UFGComboBoxSearch::ClearOptions(){ }
void UFGComboBoxSearch::ClearSelection(){ }
void UFGComboBoxSearch::RefreshOptions(){ }
void UFGComboBoxSearch::SetSelectedOption(FString Option){ }
void UFGComboBoxSearch::SetSelectedIndex(const int32 Index){ }
FString UFGComboBoxSearch::GetSelectedOption() const{ return FString(); }
int32 UFGComboBoxSearch::GetSelectedIndex() const{ return int32(); }
int32 UFGComboBoxSearch::GetOptionCount() const{ return int32(); }
bool UFGComboBoxSearch::IsOpen() const{ return bool(); }
void UFGComboBoxSearch::ReleaseSlateResources(bool bReleaseChildren){ Super::ReleaseSlateResources(bReleaseChildren); }
void UFGComboBoxSearch::PostInitProperties(){ Super::PostInitProperties(); }
void UFGComboBoxSearch::Serialize(FArchive& Ar){ Super::Serialize(Ar); }
void UFGComboBoxSearch::PostLoad(){ Super::PostLoad(); }
void UFGComboBoxSearch::UpdateOrGenerateWidget(TSharedPtr<FString> Item){ }
TSharedRef<SWidget> UFGComboBoxSearch::HandleGenerateWidget(TSharedPtr<FString> Item) const {
  return SNew(SSpacer);
}
void UFGComboBoxSearch::HandleSelectionChanged(TSharedPtr<FString> Item, ESelectInfo::Type SelectionType){ }
void UFGComboBoxSearch::HandleOpening(){ }
TSharedRef<SWidget> UFGComboBoxSearch::RebuildWidget(){ return Super::RebuildWidget(); }
UFGComboBoxSearch::UFGComboBoxSearch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
	this->SelectedOption = TEXT("");
	this->ContentPadding.Left = 4.0;
	this->ContentPadding.Top = 2.0;
	this->ContentPadding.Right = 4.0;
	this->ContentPadding.Bottom = 2.0;
	this->MaxListHeight = 450.0;
	this->HasDownArrow = true;
	this->EnableGamepadNavigationMode = true;
	this->Font.FontObject = FSoftObjectPath("/Engine/EngineFonts/Roboto.Roboto").ResolveObject();
	this->Font.FontMaterial = nullptr;
	this->Font.OutlineSettings.OutlineSize = 0;
	this->Font.OutlineSettings.bSeparateFillAlpha = false;
	this->Font.OutlineSettings.bApplyOutlineToDropShadows = false;
	this->Font.OutlineSettings.OutlineMaterial = nullptr;
	this->Font.OutlineSettings.OutlineColor = FLinearColor(0.0, 0.0, 0.0, 1.0);
	this->Font.TypefaceFontName = TEXT("Bold");
	this->Font.Size = 16;
	this->Font.LetterSpacing = 0;
	this->bIsFocusable = true;
}
