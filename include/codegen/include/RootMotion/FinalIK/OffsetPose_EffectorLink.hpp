// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:00 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: RootMotion.FinalIK.OffsetPose
#include "RootMotion/FinalIK/OffsetPose.hpp"
// Including type: RootMotion.FinalIK.FullBodyBipedEffector
#include "RootMotion/FinalIK/FullBodyBipedEffector.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverFullBodyBiped
  class IKSolverFullBodyBiped;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.OffsetPose/EffectorLink
  class OffsetPose::EffectorLink : public ::Il2CppObject {
    public:
    // public RootMotion.FinalIK.FullBodyBipedEffector effector
    // Offset: 0x10
    RootMotion::FinalIK::FullBodyBipedEffector effector;
    // public UnityEngine.Vector3 offset
    // Offset: 0x14
    UnityEngine::Vector3 offset;
    // public UnityEngine.Vector3 pin
    // Offset: 0x20
    UnityEngine::Vector3 pin;
    // public UnityEngine.Vector3 pinWeight
    // Offset: 0x2C
    UnityEngine::Vector3 pinWeight;
    // public System.Void Apply(RootMotion.FinalIK.IKSolverFullBodyBiped solver, System.Single weight, UnityEngine.Quaternion rotation)
    // Offset: 0x121AFC8
    void Apply(RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float weight, UnityEngine::Quaternion rotation);
    // public System.Void .ctor()
    // Offset: 0x121B424
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static OffsetPose::EffectorLink* New_ctor();
  }; // RootMotion.FinalIK.OffsetPose/EffectorLink
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::OffsetPose::EffectorLink*, "RootMotion.FinalIK", "OffsetPose/EffectorLink");
#pragma pack(pop)