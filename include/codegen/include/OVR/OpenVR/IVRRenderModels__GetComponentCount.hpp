// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:56 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.IVRRenderModels
#include "OVR/OpenVR/IVRRenderModels.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRRenderModels/_GetComponentCount
  class IVRRenderModels::_GetComponentCount : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1695658
    static IVRRenderModels::_GetComponentCount* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.UInt32 Invoke(System.String pchRenderModelName)
    // Offset: 0x169566C
    uint Invoke(::Il2CppString* pchRenderModelName);
    // public System.IAsyncResult BeginInvoke(System.String pchRenderModelName, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1695A2C
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchRenderModelName, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x1695A50
    uint EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRRenderModels/_GetComponentCount
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRRenderModels::_GetComponentCount*, "OVR.OpenVR", "IVRRenderModels/_GetComponentCount");
#pragma pack(pop)