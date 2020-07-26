// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:02 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: ScenesTransitionSetupDataSO
#include "GlobalNamespace/ScenesTransitionSetupDataSO.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SceneInfo
  class SceneInfo;
  // Forward declaring type: SceneSetupData
  class SceneSetupData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SingleFixedSceneScenesTransitionSetupDataSO
  class SingleFixedSceneScenesTransitionSetupDataSO : public GlobalNamespace::ScenesTransitionSetupDataSO {
    public:
    // private SceneInfo _sceneInfo
    // Offset: 0x28
    GlobalNamespace::SceneInfo* sceneInfo;
    // public SceneInfo get_sceneInfo()
    // Offset: 0xCA782C
    GlobalNamespace::SceneInfo* get_sceneInfo();
    // protected System.Void Init(SceneSetupData sceneSetupData)
    // Offset: 0xCA2E28
    void Init(GlobalNamespace::SceneSetupData* sceneSetupData);
    // public System.Void .ctor()
    // Offset: 0xCA2F50
    // Implemented from: ScenesTransitionSetupDataSO
    // Base method: System.Void ScenesTransitionSetupDataSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SingleFixedSceneScenesTransitionSetupDataSO* New_ctor();
  }; // SingleFixedSceneScenesTransitionSetupDataSO
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO*, "", "SingleFixedSceneScenesTransitionSetupDataSO");
#pragma pack(pop)