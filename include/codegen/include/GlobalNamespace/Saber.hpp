// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:16 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: VRController
  class VRController;
  // Forward declaring type: SaberTypeObject
  class SaberTypeObject;
  // Forward declaring type: SaberMovementData
  class SaberMovementData;
  // Forward declaring type: SaberSwingRatingCounter
  class SaberSwingRatingCounter;
  // Forward declaring type: Cutter
  class Cutter;
  // Forward declaring type: SaberType
  struct SaberType;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: Saber
  class Saber : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Transform _topPos
    // Offset: 0x18
    UnityEngine::Transform* topPos;
    // private UnityEngine.Transform _bottomPos
    // Offset: 0x20
    UnityEngine::Transform* bottomPos;
    // private UnityEngine.Transform _handlePos
    // Offset: 0x28
    UnityEngine::Transform* handlePos;
    // private VRController _vrController
    // Offset: 0x30
    GlobalNamespace::VRController* vrController;
    // private SaberTypeObject _saberType
    // Offset: 0x38
    GlobalNamespace::SaberTypeObject* saberType;
    // private System.Boolean <disableCutting>k__BackingField
    // Offset: 0x40
    bool disableCutting;
    // static field const value: static private System.Int32 kNumberOfPrealocatedSwingRatingCounters
    static constexpr const int kNumberOfPrealocatedSwingRatingCounters = 20;
    // Get static field: static private System.Int32 kNumberOfPrealocatedSwingRatingCounters
    static int _get_kNumberOfPrealocatedSwingRatingCounters();
    // Set static field: static private System.Int32 kNumberOfPrealocatedSwingRatingCounters
    static void _set_kNumberOfPrealocatedSwingRatingCounters(int value);
    // private SaberMovementData _movementData
    // Offset: 0x48
    GlobalNamespace::SaberMovementData* movementData;
    // private System.Collections.Generic.List`1<SaberSwingRatingCounter> _swingRatingCounters
    // Offset: 0x50
    System::Collections::Generic::List_1<GlobalNamespace::SaberSwingRatingCounter*>* swingRatingCounters;
    // private System.Collections.Generic.List`1<SaberSwingRatingCounter> _unusedSwingRatingCounters
    // Offset: 0x58
    System::Collections::Generic::List_1<GlobalNamespace::SaberSwingRatingCounter*>* unusedSwingRatingCounters;
    // private Cutter _cutter
    // Offset: 0x60
    GlobalNamespace::Cutter* cutter;
    // private System.Single _time
    // Offset: 0x68
    float time;
    // public SaberType get_saberType()
    // Offset: 0xC0DD68
    GlobalNamespace::SaberType get_saberType();
    // public UnityEngine.Vector3 get_saberBladeTopPos()
    // Offset: 0xC0DD84
    UnityEngine::Vector3 get_saberBladeTopPos();
    // public UnityEngine.Vector3 get_saberBladeBottomPos()
    // Offset: 0xC0DDA0
    UnityEngine::Vector3 get_saberBladeBottomPos();
    // public UnityEngine.Vector3 get_handlePos()
    // Offset: 0xC0DDBC
    UnityEngine::Vector3 get_handlePos();
    // public UnityEngine.Quaternion get_handleRot()
    // Offset: 0xC0DDD8
    UnityEngine::Quaternion get_handleRot();
    // public System.Single get_bladeSpeed()
    // Offset: 0xC0DDF4
    float get_bladeSpeed();
    // public System.Boolean get_disableCutting()
    // Offset: 0xC0DE10
    bool get_disableCutting();
    // public System.Void set_disableCutting(System.Boolean value)
    // Offset: 0xC0DE18
    void set_disableCutting(bool value);
    // protected System.Void Start()
    // Offset: 0xC0DE24
    void Start();
    // public System.Void ManualUpdate()
    // Offset: 0xC0DF2C
    void ManualUpdate();
    // public SaberSwingRatingCounter CreateSwingRatingCounter(UnityEngine.Transform noteTransform)
    // Offset: 0xC0E77C
    GlobalNamespace::SaberSwingRatingCounter* CreateSwingRatingCounter(UnityEngine::Transform* noteTransform);
    // protected System.Void OnDrawGizmos()
    // Offset: 0xC0E95C
    void OnDrawGizmos();
    // public System.Void OverridePositionAndRotation(UnityEngine.Vector3 pos, UnityEngine.Quaternion rot)
    // Offset: 0xC0ED34
    void OverridePositionAndRotation(UnityEngine::Vector3 pos, UnityEngine::Quaternion rot);
    // public System.Void .ctor()
    // Offset: 0xC0EDD8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static Saber* New_ctor();
  }; // Saber
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Saber*, "", "Saber");
#pragma pack(pop)