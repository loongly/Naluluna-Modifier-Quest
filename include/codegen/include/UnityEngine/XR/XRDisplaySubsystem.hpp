// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:42 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.IntegratedSubsystem`1
#include "UnityEngine/IntegratedSubsystem_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Forward declaring type: XRDisplaySubsystemDescriptor
  class XRDisplaySubsystemDescriptor;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Autogenerated type: UnityEngine.XR.XRDisplaySubsystem
  class XRDisplaySubsystem : public UnityEngine::IntegratedSubsystem_1<UnityEngine::XR::XRDisplaySubsystemDescriptor*> {
    public:
    // Nested type: UnityEngine::XR::XRDisplaySubsystem::XRRenderPass
    struct XRRenderPass;
    // Nested type: UnityEngine::XR::XRDisplaySubsystem::XRMirrorViewBlitDesc
    struct XRMirrorViewBlitDesc;
    // Get static field: static private System.Action`1<System.Boolean> displayFocusChanged
    static System::Action_1<bool>* _get_displayFocusChanged();
    // Set static field: static private System.Action`1<System.Boolean> displayFocusChanged
    static void _set_displayFocusChanged(System::Action_1<bool>* value);
    // static private System.Void InvokeDisplayFocusChanged(System.Boolean focus)
    // Offset: 0x194C0E8
    static void InvokeDisplayFocusChanged(bool focus);
    // public System.Void .ctor()
    // Offset: 0x194C15C
    // Implemented from: UnityEngine.IntegratedSubsystem`1
    // Base method: System.Void IntegratedSubsystem`1::.ctor()
    // Base method: System.Void IntegratedSubsystem::.ctor()
    // Base method: System.Void Object::.ctor()
    static XRDisplaySubsystem* New_ctor();
  }; // UnityEngine.XR.XRDisplaySubsystem
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::XRDisplaySubsystem*, "UnityEngine.XR", "XRDisplaySubsystem");
#pragma pack(pop)