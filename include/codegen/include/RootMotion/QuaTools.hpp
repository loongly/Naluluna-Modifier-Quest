// Autogenerated from CppHeaderCreator on 7/24/2020 3:59:58 PM
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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Quaternion
  struct Quaternion;
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Autogenerated type: RootMotion.QuaTools
  class QuaTools : public ::Il2CppObject {
    public:
    // static public UnityEngine.Quaternion Lerp(UnityEngine.Quaternion fromRotation, UnityEngine.Quaternion toRotation, System.Single weight)
    // Offset: 0x122C3F0
    static UnityEngine::Quaternion Lerp(UnityEngine::Quaternion fromRotation, UnityEngine::Quaternion toRotation, float weight);
    // static public UnityEngine.Quaternion Slerp(UnityEngine.Quaternion fromRotation, UnityEngine.Quaternion toRotation, System.Single weight)
    // Offset: 0x122C53C
    static UnityEngine::Quaternion Slerp(UnityEngine::Quaternion fromRotation, UnityEngine::Quaternion toRotation, float weight);
    // static public UnityEngine.Quaternion LinearBlend(UnityEngine.Quaternion q, System.Single weight)
    // Offset: 0x122C688
    static UnityEngine::Quaternion LinearBlend(UnityEngine::Quaternion q, float weight);
    // static public UnityEngine.Quaternion SphericalBlend(UnityEngine.Quaternion q, System.Single weight)
    // Offset: 0x122C79C
    static UnityEngine::Quaternion SphericalBlend(UnityEngine::Quaternion q, float weight);
    // static public UnityEngine.Quaternion FromToAroundAxis(UnityEngine.Vector3 fromDirection, UnityEngine.Vector3 toDirection, UnityEngine.Vector3 axis)
    // Offset: 0x122C8B0
    static UnityEngine::Quaternion FromToAroundAxis(UnityEngine::Vector3 fromDirection, UnityEngine::Vector3 toDirection, UnityEngine::Vector3 axis);
    // static public UnityEngine.Quaternion RotationToLocalSpace(UnityEngine.Quaternion space, UnityEngine.Quaternion rotation)
    // Offset: 0x122CA3C
    static UnityEngine::Quaternion RotationToLocalSpace(UnityEngine::Quaternion space, UnityEngine::Quaternion rotation);
    // static public UnityEngine.Quaternion FromToRotation(UnityEngine.Quaternion from, UnityEngine.Quaternion to)
    // Offset: 0x121D6C0
    static UnityEngine::Quaternion FromToRotation(UnityEngine::Quaternion from, UnityEngine::Quaternion to);
    // static public UnityEngine.Vector3 GetAxis(UnityEngine.Vector3 v)
    // Offset: 0x122CB0C
    static UnityEngine::Vector3 GetAxis(UnityEngine::Vector3 v);
    // static public UnityEngine.Quaternion ClampRotation(UnityEngine.Quaternion rotation, System.Single clampWeight, System.Int32 clampSmoothing)
    // Offset: 0x122CD90
    static UnityEngine::Quaternion ClampRotation(UnityEngine::Quaternion rotation, float clampWeight, int clampSmoothing);
    // static public System.Single ClampAngle(System.Single angle, System.Single clampWeight, System.Int32 clampSmoothing)
    // Offset: 0x122CFA4
    static float ClampAngle(float angle, float clampWeight, int clampSmoothing);
    // static public UnityEngine.Quaternion MatchRotation(UnityEngine.Quaternion targetRotation, UnityEngine.Vector3 targetforwardAxis, UnityEngine.Vector3 targetUpAxis, UnityEngine.Vector3 forwardAxis, UnityEngine.Vector3 upAxis)
    // Offset: 0x122661C
    static UnityEngine::Quaternion MatchRotation(UnityEngine::Quaternion targetRotation, UnityEngine::Vector3 targetforwardAxis, UnityEngine::Vector3 targetUpAxis, UnityEngine::Vector3 forwardAxis, UnityEngine::Vector3 upAxis);
    // static public UnityEngine.Vector3 ToBiPolar(UnityEngine.Vector3 euler)
    // Offset: 0x122D124
    static UnityEngine::Vector3 ToBiPolar(UnityEngine::Vector3 euler);
    // static public System.Single ToBiPolar(System.Single angle)
    // Offset: 0x122D234
    static float ToBiPolar(float angle);
  }; // RootMotion.QuaTools
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::QuaTools*, "RootMotion", "QuaTools");
#pragma pack(pop)