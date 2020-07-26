// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:19 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: IncDecSettingsController
#include "GlobalNamespace/IncDecSettingsController.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ListSettingsController
  class ListSettingsController : public GlobalNamespace::IncDecSettingsController {
    public:
    // private System.Int32 _idx
    // Offset: 0x30
    int idx;
    // private System.Int32 _numberOfElements
    // Offset: 0x34
    int numberOfElements;
    // protected System.Boolean GetInitValues(System.Int32 idx, System.Int32 numberOfElements)
    // Offset: 0xFFFFFFFF
    bool GetInitValues(int& idx, int& numberOfElements);
    // protected System.Void ApplyValue(System.Int32 idx)
    // Offset: 0xFFFFFFFF
    void ApplyValue(int idx);
    // protected System.String TextForValue(System.Int32 idx)
    // Offset: 0xFFFFFFFF
    ::Il2CppString* TextForValue(int idx);
    // private System.Void RefreshUI()
    // Offset: 0xBE5FAC
    void RefreshUI();
    // public System.Void Refresh(System.Boolean applyValue)
    // Offset: 0xBE6018
    void Refresh(bool applyValue);
    // protected override System.Void OnEnable()
    // Offset: 0xBE5F48
    // Implemented from: IncDecSettingsController
    // Base method: System.Void IncDecSettingsController::OnEnable()
    void OnEnable();
    // public override System.Void IncButtonPressed()
    // Offset: 0xBE6078
    // Implemented from: IncDecSettingsController
    // Base method: System.Void IncDecSettingsController::IncButtonPressed()
    void IncButtonPressed();
    // public override System.Void DecButtonPressed()
    // Offset: 0xBE60C4
    // Implemented from: IncDecSettingsController
    // Base method: System.Void IncDecSettingsController::DecButtonPressed()
    void DecButtonPressed();
    // protected System.Void .ctor()
    // Offset: 0xBE6108
    // Implemented from: IncDecSettingsController
    // Base method: System.Void IncDecSettingsController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ListSettingsController* New_ctor();
  }; // ListSettingsController
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ListSettingsController*, "", "ListSettingsController");
#pragma pack(pop)