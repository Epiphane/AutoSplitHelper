// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGCheatManager.h"

void UFGCheatManager::InitCheatManager(){ }
bool UFGCheatManager::IsSupportedForNetworking() const{ return bool(); }
int32 UFGCheatManager::GetFunctionCallspace(UFunction* Function, FFrame* Stack){ return int32(); }
bool UFGCheatManager::CallRemoteFunction(UFunction* Function, void* Parameters, FOutParmRec* OutParms, FFrame* Stack){ return bool(); }
void UFGCheatManager::PreSave(const ITargetPlatform* TargetPlatform){ }
bool UFGCheatManager::ReplicateSubobjects( UActorChannel *Channel,  FOutBunch *Bunch, FReplicationFlags *RepFlags){ return bool(); }
void UFGCheatManager::CacheFunctionCategoryMapping(){ }
void UFGCheatManager::InitDefaultCheats(){ }
bool UFGCheatManager::IsClient() const{ return bool(); }
void UFGCheatManager::Server_NoCost_Implementation(bool enabled){ }
void UFGCheatManager::NoCost(bool enabled){ }
bool UFGCheatManager::NoCost_Get(){ return bool(); }
void UFGCheatManager::Server_NoPower_Implementation(bool enabled){ }
void UFGCheatManager::NoPower(bool enabled){ }
bool UFGCheatManager::NoPower_Get(){ return bool(); }
void UFGCheatManager::Server_NoFuel_Implementation(bool enabled){ }
void UFGCheatManager::NoFuel(bool enabled){ }
bool UFGCheatManager::NoFuel_Get(){ return bool(); }
void UFGCheatManager::NoMessages(bool enabled){ }
bool UFGCheatManager::NoMessages_Get(){ return bool(); }
void UFGCheatManager::TurboBuildMode(bool enabled){ }
bool UFGCheatManager::TurboBuildMode_Get(){ return bool(); }
void UFGCheatManager::TurboProductionMode(bool enabled){ }
bool UFGCheatManager::TurboMode_Get(){ return bool(); }
void UFGCheatManager::Server_GiveItemStacks_Implementation( AFGCharacterPlayer* character, TSubclassOf<  UFGItemDescriptor > resource, int32 numberOfStacks){ }
void UFGCheatManager::GiveItemStacks(TSubclassOf<  UFGItemDescriptor > resource, int32 numberOfStacks){ }
void UFGCheatManager::Server_GiveItemsSingle_Implementation( AFGCharacterPlayer* character, TSubclassOf<  UFGItemDescriptor > resource, int32 numberOfItems){ }
void UFGCheatManager::GiveItemsSingle(TSubclassOf<  UFGItemDescriptor > resource, int32 numberOfItems){ }
void UFGCheatManager::Server_GiveResourceSinkCoupons_Implementation(int32 numCoupons){ }
void UFGCheatManager::GiveResourceSinkCoupons(int32 numCoupons){ }
void UFGCheatManager::DrawSphere(int32 radius){ }
void UFGCheatManager::PlayerFly(bool flyModeEnabled){ }
void UFGCheatManager::Server_PlayerAllFly_Implementation(bool flyModeEnabled){ }
void UFGCheatManager::PlayerAllFly(bool flyModeEnabled){ }
bool UFGCheatManager::PlayerAllFly_Get(){ return bool(); }
bool UFGCheatManager::PlayerFly_Get(){ return bool(); }
void UFGCheatManager::PlayerNoClipModeOnFly(bool ghostMode){ }
bool UFGCheatManager::PlayerNoClipModeOnFly_Get(){ return bool(); }
void UFGCheatManager::UpdatePlayerNametags(){ }
void UFGCheatManager::ClearGiveItemPopularList(){ }
void UFGCheatManager::Server_GiveAllSchematics_Implementation(){ }
void UFGCheatManager::GiveAllSchematics(){ }
void UFGCheatManager::Server_GiveAllSchematicsAndPhases_Implementation(){ }
void UFGCheatManager::GiveAllSchematicsAndPhases(){ }
void UFGCheatManager::Server_GiveAvailableSchematics_Implementation(){ }
void UFGCheatManager::GiveAvailableSchematics(){ }
void UFGCheatManager::Server_GiveActiveMilestoneSchematic_Implementation(){ }
void UFGCheatManager::GiveActiveMilestoneSchematic(){ }
void UFGCheatManager::Server_GiveCheatSchematics_Implementation(){ }
void UFGCheatManager::GiveCheatSchematics(){ }
void UFGCheatManager::Server_GivePrototypeSchematics_Implementation(){ }
void UFGCheatManager::GivePrototypeSchematics(){ }
void UFGCheatManager::Server_GiveStorySchematics_Implementation(){ }
void UFGCheatManager::GiveStorySchematics(){ }
void UFGCheatManager::Server_GiveAllResearchTrees_Implementation(){ }
void UFGCheatManager::GiveAllResearchTrees(){ }
void UFGCheatManager::TriggerNextPrimaryStoryMessageInQueue(){ }
void UFGCheatManager::TriggerNextSecondaryStoryMessageInQueue(int32 storyQueueIndex){ }
void UFGCheatManager::TriggerNextFloatingMessageInPrimaryQueue(){ }
void UFGCheatManager::TriggerRandomTriggeredBarksMessage(){ }
void UFGCheatManager::StartNextStoryQueue(){ }
void UFGCheatManager::ResetAllStoryQueues(){ }
void UFGCheatManager::ResetCurrentStoryQueue(){ }
void UFGCheatManager::Server_RebuildPowerCircuits_Implementation(){ }
void UFGCheatManager::RebuildPowerCircuits(){ }
void UFGCheatManager::Server_EnableBuildableTick_Implementation(bool enable){ }
void UFGCheatManager::EnableBuildableTick(bool enable){ }
bool UFGCheatManager::EnableBuildableTick_Get(){ return bool(); }
void UFGCheatManager::EnablePlayerFOV(bool enable){ }
bool UFGCheatManager::EnablePlayerFOV_Get(){ return bool(); }
void UFGCheatManager::DestroyPawn(){ }
void UFGCheatManager::RemoveFoliageOneByOne(int32 maxNumInstances){ }
void UFGCheatManager::Server_RemoveFoliageOneByOne_Implementation(int32 maxNumInstances){ }
void UFGCheatManager::RemoveFoliageInBulk(int32 maxNumInstances){ }
void UFGCheatManager::Server_RemoveFoliageInBulk_Implementation(int32 maxNumInstances){ }
void UFGCheatManager::RemoveFoliageByTarget(float radius){ }
void UFGCheatManager::Server_RemoveFoliageByTarget_Implementation(float radius){ }
void UFGCheatManager::Server_SetCreatureHostility_Implementation(ECreatureHostility hostility){ }
void UFGCheatManager::SetCreatureHostility(ECreatureHostility hostility){ }
void UFGCheatManager::SetCreatureStressEnabled(bool enable){ }
void UFGCheatManager::Server_SpawnCreature_Implementation(TSubclassOf<  AFGCreature > creatureClass, int32 numToSpawn){ }
void UFGCheatManager::SpawnCreature(TSubclassOf<  AFGCreature > creatureClass, int32 numToSpawn){ }
void UFGCheatManager::Server_KillAllCreaturesInRadius_Implementation(float radius){ }
void UFGCheatManager::KillAllCreaturesInRadius(float radius){ }
void UFGCheatManager::Server_KillAllCreatures_Implementation(){ }
void UFGCheatManager::KillAllCreatures(){ }
void UFGCheatManager::Server_SetTimeOfDay_Implementation(int32 hour, int32 minute){ }
void UFGCheatManager::SetTimeOfDay(int32 hour, int32 minute){ }
void UFGCheatManager::Server_SetTimeSpeedMultiplierResetTime_Implementation(int32 resetHour){ }
void UFGCheatManager::SetTimeSpeedMultiplierResetTime(int32 resetHour){ }
int32 UFGCheatManager::SetTimeOfDay_hour_Get(){ return int32(); }
int32 UFGCheatManager::SetTimeOfDay_minute_Get(){ return int32(); }
void UFGCheatManager::Server_SetPlanetPosition_Implementation(float value){ }
void UFGCheatManager::SetPlanetPosition(float value){ }
void UFGCheatManager::Server_SetPlanetPositionDeg_Implementation(int32 value){ }
void UFGCheatManager::SetPlanetPositionDeg(int32 value){ }
void UFGCheatManager::Server_SetPlanetMovementEnabled_Implementation(bool enabled){ }
void UFGCheatManager::SetPlanetMovementEnabled(bool enabled){ }
void UFGCheatManager::Server_SetPlanetSpeedMultiplier_Implementation(float multiplier){ }
void UFGCheatManager::SetPlanetSpeedMultiplier(float multiplier){ }
void UFGCheatManager::Server_ShowFactoryOnly_Implementation(bool environmentHidden){ }
void UFGCheatManager::ShowFactoryOnly(bool environmentHidden){ }
bool UFGCheatManager::ShowFactoryOnly_Get(){ return bool(); }
void UFGCheatManager::Server_HideFactoryOnly_Implementation(bool factoryHidden){ }
void UFGCheatManager::HideFactoryOnly(bool factoryHidden){ }
bool UFGCheatManager::HideFactoryOnly_Get(){ return bool(); }
void UFGCheatManager::DumpAllAvailableRecipes(){ }
void UFGCheatManager::EnableAudioDebug(bool isEnabled){ }
void UFGCheatManager::ToggleAudioDebug(){ }
void UFGCheatManager::Server_SetSlomo_Implementation(float slomo){ }
void UFGCheatManager::SetSlomo(float slomo){ }
void UFGCheatManager::OpenModMap(){ }
void UFGCheatManager::PumpiMode(bool enable){ }
void UFGCheatManager::HiddenHUDMode(bool enable){ }
bool UFGCheatManager::PumpiMode_Get(){ return bool(); }
void UFGCheatManager::SplitAllConveyors(){ }
void UFGCheatManager::MergeAllConveyors(){ }
void UFGCheatManager::Server_SetTimeSpeedMultiplier_Implementation(float speed){ }
void UFGCheatManager::SetTimeSpeedMultiplier(float speed){ }
void UFGCheatManager::SetFactoryDetailReplication(bool enable){ }
bool UFGCheatManager::SetFactoryDetailReplication_Get(){ return bool(); }
void UFGCheatManager::Server_ResetFuses_Implementation(){ }
void UFGCheatManager::ResetFuses(){ }
void UFGCheatManager::ToggleCameraMode(){ }
void UFGCheatManager::Photo_ToggleAdvancedPhotoMode(){ }
void UFGCheatManager::Photo_SetManualFocusDistance(float manualFocusDistance){ }
void UFGCheatManager::Photo_FocusTrackLookedAtObject(){ }
void UFGCheatManager::Photo_SetAperture(float aperture){ }
void UFGCheatManager::Photo_ToggleDebug(){ }
void UFGCheatManager::Photo_ResetToDefault(){ }
void UFGCheatManager::Photo_AddCurrentPlayerPosAndRot(){ }
void UFGCheatManager::Photo_PlaySequence(){ }
void UFGCheatManager::Photo_ToggleSequencer(){ }
void UFGCheatManager::Server_GiveSchematicsOfTier_Implementation(int32 tier){ }
void UFGCheatManager::GiveSchematicsOfTier(int32 tier){ }
void UFGCheatManager::Server_SetGamePhase_Implementation(EGamePhase phase){ }
void UFGCheatManager::SetGamePhase(EGamePhase phase){ }
void UFGCheatManager::Server_SetNextGamePhase_Implementation(){ }
void UFGCheatManager::SetNextGamePhase(){ }
void UFGCheatManager::Server_ResetGamePhases_Implementation(){ }
void UFGCheatManager::ResetGamePhases(){ }
void UFGCheatManager::DumpGamePhases(){ }
void UFGCheatManager::TestSharedInventoryPtr(){ }
void UFGCheatManager::Server_ForceSpawnCreatures_Implementation(){ }
void UFGCheatManager::ForceSpawnCreatures(){ }
void UFGCheatManager::ForceSetWeatherType(TSubclassOf<class AFGWeatherReaction> Reaction){ }
void UFGCheatManager::LockWeather(bool bState){ }
void UFGCheatManager::DumpNonDormantActors(){ }
void UFGCheatManager::ToggleAudioLandingDebug(){ }
void UFGCheatManager::DumpAttachedToSkelMesh(bool detailed){ }
void UFGCheatManager::DumpTicking(bool detailed){ }
void UFGCheatManager::DumpActiveGPUParticles(){ }
void UFGCheatManager::ReplayBuildingEffects(){ }
void UFGCheatManager::Server_HideAllBuildings_Implementation(bool inVisibility){ }
void UFGCheatManager::HideAllBuildings(bool inVisibility){ }
bool UFGCheatManager::HideAllBuildings_Get(){ return bool(); }
void UFGCheatManager::RandomizeBuildingsColorSlot(uint8 slotIndex){ }
void UFGCheatManager::UpdateSessionToOSS(){ }
void UFGCheatManager::NetMulticast_RevealMap_Implementation(){ }
void UFGCheatManager::Server_RevealMap_Implementation(){ }
void UFGCheatManager::RevealMap(){ }
void UFGCheatManager::NetMulticast_HideMap_Implementation(){ }
void UFGCheatManager::Server_HideMap_Implementation(){ }
void UFGCheatManager::HideMap(){ }
void UFGCheatManager::RemoveMapMarker(int32 index){ }
void UFGCheatManager::DumpPlayerStates(){ }
void UFGCheatManager::DumpHotbarShortcuts(){ }
void UFGCheatManager::EnableInstancingOnFactory(bool enabled){ }
void UFGCheatManager::DumpActorRepresentations(){ }
void UFGCheatManager::DumpSignificanceManagedObjects(){ }
void UFGCheatManager::Server_PurgeInactiveClientsFromSave_Implementation( AFGCharacterPlayer* characterToReceiveInventories, bool fetchInventories){ }
void UFGCheatManager::PurgeInactiveClientsFromSave(bool fetchInventories){ }
void UFGCheatManager::Server_PurgeAllBeaconsFromSave_Implementation(){ }
void UFGCheatManager::PurgeAllBeaconsFromSave(){ }
void UFGCheatManager::Server_PurgeDeathMarkersFromSave_Implementation(){ }
void UFGCheatManager::PurgeDeathMarkersFromSave(){ }
void UFGCheatManager::ListItemPickups(){ }
void UFGCheatManager::Server_SetTradingPostLevel_Implementation(int32 inLevel){ }
void UFGCheatManager::SetTradingPostLevel(int32 inLevel){ }
void UFGCheatManager::ListUnlockedRecipesAndSchematics(){ }
void UFGCheatManager::GetVehicleInfo(){ }
void UFGCheatManager::MCP_Login(FString username, FString password){ }
void UFGCheatManager::MCP_Logout(){ }
void UFGCheatManager::MCP_GetOnlineStatus(int32 localPlayerNum){ }
void UFGCheatManager::MCP_UpdatePresence(FString key, FString value){ }
void UFGCheatManager::MCP_UpdatePresenceString(FString string){ }
void UFGCheatManager::MCP_LogPresence(){ }
void UFGCheatManager::MCP_GetFriends(){ }
void UFGCheatManager::TriggerPresenceUpdate(){ }
void UFGCheatManager::ShowSequenceList(){ }
void UFGCheatManager::SendInviteToFriend(FString friendName){ }
void UFGCheatManager::Server_ResetHubTutorial_Implementation(){ }
void UFGCheatManager::ResetHubTutorial(){ }
void UFGCheatManager::Server_ResetSchematics_Implementation(){ }
void UFGCheatManager::ResetSchematics(){ }
void UFGCheatManager::Server_ResetRecipes_Implementation(){ }
void UFGCheatManager::ResetRecipes(){ }
void UFGCheatManager::DumpSchematics(){ }
void UFGCheatManager::PrintStaticMeshesHierarchy(){ }
void UFGCheatManager::Server_FlipVehicle_Implementation( AFGWheeledVehicle* vehicle){ }
void UFGCheatManager::FlipVehicle(){ }
void UFGCheatManager::Server_ResetVehicleDeadlocks_Implementation(){ }
void UFGCheatManager::ResetVehicleDeadlocks(){ }
void UFGCheatManager::Server_ResetTheChosenWheeledVehicle_Implementation(){ }
void UFGCheatManager::ResetTheChosenWheeledVehicle(){ }
void UFGCheatManager::ListDebugStartingPoint(){ }
void UFGCheatManager::SetDebugStartingPoint(FName startingPoint){ }
void UFGCheatManager::SetRandomDebugStartingPoint(){ }
void UFGCheatManager::Server_CompleteResearch_Implementation(){ }
void UFGCheatManager::CompleteResearch(){ }
void UFGCheatManager::Server_PurgeAllTrainState_Implementation(){ }
void UFGCheatManager::PurgeAllTrainState(){ }
void UFGCheatManager::ResetAllFactoryLegsToZero(bool repopulateEmptyLegs){ }
void UFGCheatManager::RebuildFactoryLegsOneTileAroundPlayer(){ }
void UFGCheatManager::ToggleTrainSelfDriving(){ }
void UFGCheatManager::Server_PipeFillFirstInEachNetwork_Implementation(){ }
void UFGCheatManager::PipeFillFirstInEachNetwork(){ }
void UFGCheatManager::Server_PipeEmptyAll_Implementation(){ }
void UFGCheatManager::PipeEmptyAll(){ }
void UFGCheatManager::Server_PipeResetAll_Implementation(){ }
void UFGCheatManager::PipeResetAll(){ }
void UFGCheatManager::PipePrintMinSizes(){ }
void UFGCheatManager::PipeSetVerboseLoggingOnAimedFluidBox(bool enabled){ }
void UFGCheatManager::PipeEnableProbingOnAimedIntegrant(){ }
void UFGCheatManager::PipeDisableProbingOnAimedIntegrant(){ }
void UFGCheatManager::PipeClearProbingOnAllPipe(){ }
void UFGCheatManager::PipeAddSelectedNetworkToDisplayDebugList(){ }
void UFGCheatManager::PipeClearDisplayDebugList(){ }
void UFGCheatManager::PipePrintTweakables(){ }
void UFGCheatManager::PipeTweakMaximumFlow(float rate){ }
void UFGCheatManager::PipeTweakMinimumMaxContent(float minimumMaxContent, bool keepRelativeContent){ }
void UFGCheatManager::PipeTweakPressureLoss(float pressureLoss){ }
void UFGCheatManager::PipeTweakOverfill(float maxOverfillPct, float maxOverfillForPressure){ }
void UFGCheatManager::PipeTweakGravity(float gravity){ }
void UFGCheatManager::PipeTweakFluidFriction(float fluidFriction){ }
void UFGCheatManager::PipeTweakFluidDensity(float fluidDensity){ }
void UFGCheatManager::PipeTweakFluidViscosity(float fluidViscosity){ }
void UFGCheatManager::DupeComponentInCircuit(int32 target){ }
void UFGCheatManager::DupeComponentToAnotherCircuit(int32 source, int32 target){ }
void UFGCheatManager::DumpConnectionString(){ }
void UFGCheatManager::Server_FillAllFreightCars_Implementation(float pct){ }
void UFGCheatManager::FillAllFreightCars(float pct){ }
void UFGCheatManager::Server_EmptyAllFreightCars_Implementation(){ }
void UFGCheatManager::EmptyAllFreightCars(){ }
void UFGCheatManager::DumpCircuitsToLog(){ }
void UFGCheatManager::Server_RerailAllTrains_Implementation(){ }
void UFGCheatManager::RerailAllTrains(){ }
void UFGCheatManager::Server_MarkTrackGraphsAsChanged_Implementation(){ }
void UFGCheatManager::MarkTrackGraphsAsChanged(){ }
void UFGCheatManager::Server_MarkTrackGraphsForRebuild_Implementation(){ }
void UFGCheatManager::MarkTrackGraphsForRebuild(){ }
void UFGCheatManager::RunHardwareBenchmark(int32 WorkScale , float CPUMultiplier , float GPUMultiplier){ }
void UFGCheatManager::Cheats(){ }
UActorComponent* UFGCheatManager::GetOuterPlayersUseComponent() const{ return nullptr; }
AActor* UFGCheatManager::GetOuterPlayersUseActor() const{ return nullptr; }
AActor* UFGCheatManager::GetOuterPlayersAimedAtActor(FVector& out_aimLocation) const{ return nullptr; }
IFGFluidIntegrantInterface* UFGCheatManager::GetOuterPlayerAimedAtFluidInterface() const{ return nullptr; }
