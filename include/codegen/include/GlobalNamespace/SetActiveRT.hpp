// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:06 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GetActiveRT
  class GetActiveRT;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SetActiveRT
  class SetActiveRT : public UnityEngine::MonoBehaviour {
    public:
    // private GetActiveRT _getActiveRT
    // Offset: 0x18
    GlobalNamespace::GetActiveRT* getActiveRT;
    // private System.Void OnPreRender()
    // Offset: 0xC18138
    void OnPreRender();
    // public System.Void .ctor()
    // Offset: 0xC181C8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SetActiveRT* New_ctor();
  }; // SetActiveRT
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SetActiveRT*, "", "SetActiveRT");
#pragma pack(pop)