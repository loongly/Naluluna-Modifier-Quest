// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:35 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.Collider
#include "UnityEngine/Collider.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.MeshCollider
  class MeshCollider : public UnityEngine::Collider {
    public:
    // public System.Void set_sharedMesh(UnityEngine.Mesh value)
    // Offset: 0x1947780
    void set_sharedMesh(UnityEngine::Mesh* value);
    // public System.Void set_convex(System.Boolean value)
    // Offset: 0x19477D0
    void set_convex(bool value);
  }; // UnityEngine.MeshCollider
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::MeshCollider*, "UnityEngine", "MeshCollider");
#pragma pack(pop)