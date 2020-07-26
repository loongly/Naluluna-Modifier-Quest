// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:21 PM
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
  // Forward declaring type: Vector3SO
  class Vector3SO;
  // Forward declaring type: FloatSO
  class FloatSO;
  // Forward declaring type: MainSettingsModelSO
  class MainSettingsModelSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: VRCenterAdjust
  class VRCenterAdjust : public UnityEngine::MonoBehaviour {
    public:
    // private Vector3SO _roomCenter
    // Offset: 0x18
    GlobalNamespace::Vector3SO* roomCenter;
    // private FloatSO _roomRotation
    // Offset: 0x20
    GlobalNamespace::FloatSO* roomRotation;
    // private MainSettingsModelSO _mainSettingsModel
    // Offset: 0x28
    GlobalNamespace::MainSettingsModelSO* mainSettingsModel;
    // protected System.Void Awake()
    // Offset: 0xC3A5F8
    void Awake();
    // protected System.Void Start()
    // Offset: 0xC3A65C
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0xC3A82C
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0xC3A904
    void OnDisable();
    // private System.Void HandleRoomCenterDidChange()
    // Offset: 0xC3A9DC
    void HandleRoomCenterDidChange();
    // private System.Void HandleRoomRotationDidChange()
    // Offset: 0xC3AA54
    void HandleRoomRotationDidChange();
    // protected System.Void Update()
    // Offset: 0xC3AB00
    void Update();
    // public System.Void ResetRoom()
    // Offset: 0xC3A780
    void ResetRoom();
    // public System.Void .ctor()
    // Offset: 0xC3AB3C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static VRCenterAdjust* New_ctor();
  }; // VRCenterAdjust
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRCenterAdjust*, "", "VRCenterAdjust");
#pragma pack(pop)