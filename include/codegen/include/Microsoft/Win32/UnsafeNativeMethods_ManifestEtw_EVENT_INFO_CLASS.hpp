// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:24 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
// Including type: Microsoft.Win32.UnsafeNativeMethods/ManifestEtw
#include "Microsoft/Win32/UnsafeNativeMethods_ManifestEtw.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Microsoft.Win32
namespace Microsoft::Win32 {
  // Autogenerated type: Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EVENT_INFO_CLASS
  struct UnsafeNativeMethods::ManifestEtw::EVENT_INFO_CLASS : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EVENT_INFO_CLASS BinaryTrackInfo
    static constexpr const int BinaryTrackInfo = 0;
    // Get static field: static public Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EVENT_INFO_CLASS BinaryTrackInfo
    static Microsoft::Win32::UnsafeNativeMethods::ManifestEtw::EVENT_INFO_CLASS _get_BinaryTrackInfo();
    // Set static field: static public Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EVENT_INFO_CLASS BinaryTrackInfo
    static void _set_BinaryTrackInfo(Microsoft::Win32::UnsafeNativeMethods::ManifestEtw::EVENT_INFO_CLASS value);
    // static field const value: static public Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EVENT_INFO_CLASS SetEnableAllKeywords
    static constexpr const int SetEnableAllKeywords = 1;
    // Get static field: static public Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EVENT_INFO_CLASS SetEnableAllKeywords
    static Microsoft::Win32::UnsafeNativeMethods::ManifestEtw::EVENT_INFO_CLASS _get_SetEnableAllKeywords();
    // Set static field: static public Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EVENT_INFO_CLASS SetEnableAllKeywords
    static void _set_SetEnableAllKeywords(Microsoft::Win32::UnsafeNativeMethods::ManifestEtw::EVENT_INFO_CLASS value);
    // static field const value: static public Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EVENT_INFO_CLASS SetTraits
    static constexpr const int SetTraits = 2;
    // Get static field: static public Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EVENT_INFO_CLASS SetTraits
    static Microsoft::Win32::UnsafeNativeMethods::ManifestEtw::EVENT_INFO_CLASS _get_SetTraits();
    // Set static field: static public Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EVENT_INFO_CLASS SetTraits
    static void _set_SetTraits(Microsoft::Win32::UnsafeNativeMethods::ManifestEtw::EVENT_INFO_CLASS value);
    // Creating value type constructor for type: EVENT_INFO_CLASS
    EVENT_INFO_CLASS(int value_ = {}) : value{value_} {}
  }; // Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EVENT_INFO_CLASS
}
DEFINE_IL2CPP_ARG_TYPE(Microsoft::Win32::UnsafeNativeMethods::ManifestEtw::EVENT_INFO_CLASS, "Microsoft.Win32", "UnsafeNativeMethods/ManifestEtw/EVENT_INFO_CLASS");
#pragma pack(pop)