// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:02 PM
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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Renderer
  class Renderer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SortingLayer
  class SortingLayer : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Renderer _renderer
    // Offset: 0x18
    UnityEngine::Renderer* renderer;
    // public UnityEngine.Renderer get_renderer()
    // Offset: 0xCA7BCC
    UnityEngine::Renderer* get_renderer();
    // private System.Void Reset()
    // Offset: 0xCA7BD4
    void Reset();
    // public System.Void .ctor()
    // Offset: 0xCA7C34
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SortingLayer* New_ctor();
  }; // SortingLayer
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SortingLayer*, "", "SortingLayer");
#pragma pack(pop)