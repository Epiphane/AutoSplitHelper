// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGSequence.h"

float FFGSequenceSection::GetSectionTimeInSeconds() const{ return float(); }
void FFGSequenceFloatTrack::AddFloatSection(FFGSequenceFloatSection section){ }
const FFrameTime FFGSequenceFloatTrack::GetLastFrameTime() const{ return FFrameTime(); }
bool FFGSequenceFloatTrack::EvaluateFloatTrack(float seconds, float& out_float){ return bool(); }
bool FFGSequenceFloatTrack::EvaluateFloatTrack(FFrameTime frameTime, float& out_float){ return bool(); }
void FFGSequenceVectorTrack::AddVectorSection(FFGSequenceVectorSection section){ }
const FFrameTime FFGSequenceVectorTrack::GetLastFrameTime() const{ return FFrameTime(); }
bool FFGSequenceVectorTrack::EvaluateLocationTrack(float seconds, FVector& out_location){ return bool(); }
bool FFGSequenceVectorTrack::EvaluateLocationTrack(FFrameTime frameTime, FVector& out_location){ return bool(); }
bool FFGSequenceVectorTrack::EvaluateRotationTrack(float seconds, FRotator& out_rotation){ return bool(); }
bool FFGSequenceVectorTrack::EvaluateRotationTrack(FFrameTime frameTime, FRotator& out_rotation){ return bool(); }
void FFGSequence::AddPlayerLocation(const FFrameTime& frameTime, const FVector location){ }
void FFGSequence::AddPlayerRotation(const FFrameTime& frameTime, const FRotator rotation){ }
void FFGSequence::AddPlayerFOV(const FFrameTime& frameTime, const float FOV){ }
void FFGSequence::StartSequence(APawn* pawn){ }
float FFGSequence::TickSequence(float dt){ return float(); }
void FFGSequence::EvaluateFrame(APawn* pawn, const FFrameTime& frameTime, FVector& out_location, FRotator& out_rotation, float& out_FOV){ }
void FFGSequence::EvaluateFrameDry(APawn* pawn, const FFrameTime& frameTime, FVector& out_location, FRotator& out_rotation, float& out_FOV){ }
void FFGSequence::GetDebugStrings(TArray<FString>& out_debugText){ }