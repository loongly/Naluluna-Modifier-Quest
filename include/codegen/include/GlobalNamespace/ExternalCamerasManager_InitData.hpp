// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:04 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: ExternalCamerasManager
#include "GlobalNamespace/ExternalCamerasManager.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ExternalCamerasManager/InitData
  class ExternalCamerasManager::InitData : public ::Il2CppObject {
    public:
    // public readonly System.Boolean enableOculusMRC
    // Offset: 0x10
    bool enableOculusMRC;
    // public System.Void .ctor(System.Boolean enableOculusMRC)
    // Offset: 0x18F7004
    static ExternalCamerasManager::InitData* New_ctor(bool enableOculusMRC);
  }; // ExternalCamerasManager/InitData
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ExternalCamerasManager::InitData*, "", "ExternalCamerasManager/InitData");
#pragma pack(pop)