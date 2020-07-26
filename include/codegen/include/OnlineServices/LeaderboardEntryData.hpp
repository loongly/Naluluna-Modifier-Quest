// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:22 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Completed forward declares
// Type namespace: OnlineServices
namespace OnlineServices {
  // Autogenerated type: OnlineServices.LeaderboardEntryData
  class LeaderboardEntryData : public ::Il2CppObject {
    public:
    // public readonly System.Int32 score
    // Offset: 0x10
    int score;
    // public readonly System.Int32 rank
    // Offset: 0x14
    int rank;
    // public System.String displayName
    // Offset: 0x18
    ::Il2CppString* displayName;
    // public readonly System.String playerId
    // Offset: 0x20
    ::Il2CppString* playerId;
    // public readonly GameplayModifiers gameplayModifiers
    // Offset: 0x28
    GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // public System.Void .ctor(System.Int32 score, System.Int32 rank, System.String displayName, System.String playerId, GameplayModifiers gameplayModifiers)
    // Offset: 0xBB7E88
    static LeaderboardEntryData* New_ctor(int score, int rank, ::Il2CppString* displayName, ::Il2CppString* playerId, GlobalNamespace::GameplayModifiers* gameplayModifiers);
    // public override System.String ToString()
    // Offset: 0xBB7F00
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // OnlineServices.LeaderboardEntryData
}
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::LeaderboardEntryData*, "OnlineServices", "LeaderboardEntryData");
#pragma pack(pop)