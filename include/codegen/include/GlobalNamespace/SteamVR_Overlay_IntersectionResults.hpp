// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:05 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: SteamVR_Overlay
#include "GlobalNamespace/SteamVR_Overlay.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SteamVR_Overlay/IntersectionResults
  struct SteamVR_Overlay::IntersectionResults : public System::ValueType {
    public:
    // public UnityEngine.Vector3 point
    // Offset: 0x0
    UnityEngine::Vector3 point;
    // public UnityEngine.Vector3 normal
    // Offset: 0xC
    UnityEngine::Vector3 normal;
    // public UnityEngine.Vector2 UVs
    // Offset: 0x18
    UnityEngine::Vector2 UVs;
    // public System.Single distance
    // Offset: 0x20
    float distance;
    // Creating value type constructor for type: IntersectionResults
    IntersectionResults(UnityEngine::Vector3 point_ = {}, UnityEngine::Vector3 normal_ = {}, UnityEngine::Vector2 UVs_ = {}, float distance_ = {}) : point{point_}, normal{normal_}, UVs{UVs_}, distance{distance_} {}
  }; // SteamVR_Overlay/IntersectionResults
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_Overlay::IntersectionResults, "", "SteamVR_Overlay/IntersectionResults");
#pragma pack(pop)