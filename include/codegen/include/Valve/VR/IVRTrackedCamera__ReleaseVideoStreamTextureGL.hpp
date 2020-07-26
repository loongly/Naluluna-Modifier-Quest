// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:06 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Valve.VR.IVRTrackedCamera
#include "Valve/VR/IVRTrackedCamera.hpp"
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
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRTrackedCameraError
  struct EVRTrackedCameraError;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRTrackedCamera/_ReleaseVideoStreamTextureGL
  class IVRTrackedCamera::_ReleaseVideoStreamTextureGL : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x190F2E8
    static IVRTrackedCamera::_ReleaseVideoStreamTextureGL* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.EVRTrackedCameraError Invoke(System.UInt64 hTrackedCamera, System.UInt32 glTextureId)
    // Offset: 0x190F2FC
    Valve::VR::EVRTrackedCameraError Invoke(uint64_t hTrackedCamera, uint glTextureId);
    // public System.IAsyncResult BeginInvoke(System.UInt64 hTrackedCamera, System.UInt32 glTextureId, System.AsyncCallback callback, System.Object object)
    // Offset: 0x190F580
    System::IAsyncResult* BeginInvoke(uint64_t hTrackedCamera, uint glTextureId, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRTrackedCameraError EndInvoke(System.IAsyncResult result)
    // Offset: 0x190F62C
    Valve::VR::EVRTrackedCameraError EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRTrackedCamera/_ReleaseVideoStreamTextureGL
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRTrackedCamera::_ReleaseVideoStreamTextureGL*, "Valve.VR", "IVRTrackedCamera/_ReleaseVideoStreamTextureGL");
#pragma pack(pop)