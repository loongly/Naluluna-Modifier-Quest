// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:54 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.IVRCompositor
#include "OVR/OpenVR/IVRCompositor.hpp"
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
  // Autogenerated type: OVR.OpenVR.IVRCompositor/_ReleaseMirrorTextureD3D11
  class IVRCompositor::_ReleaseMirrorTextureD3D11 : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x14FD480
    static IVRCompositor::_ReleaseMirrorTextureD3D11* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.IntPtr pD3D11ShaderResourceView)
    // Offset: 0x14FD494
    void Invoke(System::IntPtr pD3D11ShaderResourceView);
    // public System.IAsyncResult BeginInvoke(System.IntPtr pD3D11ShaderResourceView, System.AsyncCallback callback, System.Object object)
    // Offset: 0x14FD6F4
    System::IAsyncResult* BeginInvoke(System::IntPtr pD3D11ShaderResourceView, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x14FD780
    void EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRCompositor/_ReleaseMirrorTextureD3D11
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRCompositor::_ReleaseMirrorTextureD3D11*, "OVR.OpenVR", "IVRCompositor/_ReleaseMirrorTextureD3D11");
#pragma pack(pop)