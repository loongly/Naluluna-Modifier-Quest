// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:12 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: PS4AchievementIdsModelSO
#include "GlobalNamespace/PS4AchievementIdsModelSO.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AchievementSO
  class AchievementSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PS4AchievementIdsModelSO/AchievementIdData
  class PS4AchievementIdsModelSO::AchievementIdData : public ::Il2CppObject {
    public:
    // private System.Int32 _trophyId
    // Offset: 0x10
    int trophyId;
    // private AchievementSO _achievement
    // Offset: 0x18
    GlobalNamespace::AchievementSO* achievement;
    // public System.Int32 get_ps4TrophyId()
    // Offset: 0xBBB690
    int get_ps4TrophyId();
    // public System.String get_achievementId()
    // Offset: 0xBBB490
    ::Il2CppString* get_achievementId();
    // public System.Void .ctor()
    // Offset: 0xBBB698
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PS4AchievementIdsModelSO::AchievementIdData* New_ctor();
  }; // PS4AchievementIdsModelSO/AchievementIdData
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PS4AchievementIdsModelSO::AchievementIdData*, "", "PS4AchievementIdsModelSO/AchievementIdData");
#pragma pack(pop)