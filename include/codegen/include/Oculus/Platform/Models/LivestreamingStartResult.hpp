// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:03 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Oculus.Platform.LivestreamingStartStatus
#include "Oculus/Platform/LivestreamingStartStatus.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Autogenerated type: Oculus.Platform.Models.LivestreamingStartResult
  class LivestreamingStartResult : public ::Il2CppObject {
    public:
    // public readonly Oculus.Platform.LivestreamingStartStatus StreamingResult
    // Offset: 0x10
    Oculus::Platform::LivestreamingStartStatus StreamingResult;
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0xE8DF94
    static LivestreamingStartResult* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.LivestreamingStartResult
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::LivestreamingStartResult*, "Oculus.Platform.Models", "LivestreamingStartResult");
#pragma pack(pop)