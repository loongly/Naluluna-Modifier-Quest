// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:40 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Autogenerated type: System.Runtime.InteropServices.ComCompatibleVersionAttribute
  class ComCompatibleVersionAttribute : public System::Attribute {
    public:
    // System.Int32 _major
    // Offset: 0x10
    int major;
    // System.Int32 _minor
    // Offset: 0x14
    int minor;
    // System.Int32 _build
    // Offset: 0x18
    int build;
    // System.Int32 _revision
    // Offset: 0x1C
    int revision;
    // public System.Void .ctor(System.Int32 major, System.Int32 minor, System.Int32 build, System.Int32 revision)
    // Offset: 0x1150DF4
    static ComCompatibleVersionAttribute* New_ctor(int major, int minor, int build, int revision);
  }; // System.Runtime.InteropServices.ComCompatibleVersionAttribute
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::ComCompatibleVersionAttribute*, "System.Runtime.InteropServices", "ComCompatibleVersionAttribute");
#pragma pack(pop)