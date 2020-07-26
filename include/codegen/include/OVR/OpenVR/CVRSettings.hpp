// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:57 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: OVR.OpenVR.IVRSettings
#include "OVR/OpenVR/IVRSettings.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRSettingsError
  struct EVRSettingsError;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.CVRSettings
  class CVRSettings : public ::Il2CppObject {
    public:
    // private OVR.OpenVR.IVRSettings FnTable
    // Offset: 0x10
    OVR::OpenVR::IVRSettings FnTable;
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0xEBA624
    static CVRSettings* New_ctor(System::IntPtr pInterface);
    // public System.String GetSettingsErrorNameFromEnum(OVR.OpenVR.EVRSettingsError eError)
    // Offset: 0xEBA738
    ::Il2CppString* GetSettingsErrorNameFromEnum(OVR::OpenVR::EVRSettingsError eError);
    // public System.Boolean Sync(System.Boolean bForce, OVR.OpenVR.EVRSettingsError peError)
    // Offset: 0xEBA7CC
    bool Sync(bool bForce, OVR::OpenVR::EVRSettingsError& peError);
    // public System.Void SetBool(System.String pchSection, System.String pchSettingsKey, System.Boolean bValue, OVR.OpenVR.EVRSettingsError peError)
    // Offset: 0xEBA7EC
    void SetBool(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, bool bValue, OVR::OpenVR::EVRSettingsError& peError);
    // public System.Void SetInt32(System.String pchSection, System.String pchSettingsKey, System.Int32 nValue, OVR.OpenVR.EVRSettingsError peError)
    // Offset: 0xEBA80C
    void SetInt32(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, int nValue, OVR::OpenVR::EVRSettingsError& peError);
    // public System.Void SetFloat(System.String pchSection, System.String pchSettingsKey, System.Single flValue, OVR.OpenVR.EVRSettingsError peError)
    // Offset: 0xEBA828
    void SetFloat(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, float flValue, OVR::OpenVR::EVRSettingsError& peError);
    // public System.Void SetString(System.String pchSection, System.String pchSettingsKey, System.String pchValue, OVR.OpenVR.EVRSettingsError peError)
    // Offset: 0xEBA844
    void SetString(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, ::Il2CppString* pchValue, OVR::OpenVR::EVRSettingsError& peError);
    // public System.Boolean GetBool(System.String pchSection, System.String pchSettingsKey, OVR.OpenVR.EVRSettingsError peError)
    // Offset: 0xEBA860
    bool GetBool(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, OVR::OpenVR::EVRSettingsError& peError);
    // public System.Int32 GetInt32(System.String pchSection, System.String pchSettingsKey, OVR.OpenVR.EVRSettingsError peError)
    // Offset: 0xEBA87C
    int GetInt32(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, OVR::OpenVR::EVRSettingsError& peError);
    // public System.Single GetFloat(System.String pchSection, System.String pchSettingsKey, OVR.OpenVR.EVRSettingsError peError)
    // Offset: 0xEBA898
    float GetFloat(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, OVR::OpenVR::EVRSettingsError& peError);
    // public System.Void GetString(System.String pchSection, System.String pchSettingsKey, System.Text.StringBuilder pchValue, System.UInt32 unValueLen, OVR.OpenVR.EVRSettingsError peError)
    // Offset: 0xEBA8B4
    void GetString(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, System::Text::StringBuilder* pchValue, uint unValueLen, OVR::OpenVR::EVRSettingsError& peError);
    // public System.Void RemoveSection(System.String pchSection, OVR.OpenVR.EVRSettingsError peError)
    // Offset: 0xEBA8D0
    void RemoveSection(::Il2CppString* pchSection, OVR::OpenVR::EVRSettingsError& peError);
    // public System.Void RemoveKeyInSection(System.String pchSection, System.String pchSettingsKey, OVR.OpenVR.EVRSettingsError peError)
    // Offset: 0xEBA8EC
    void RemoveKeyInSection(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, OVR::OpenVR::EVRSettingsError& peError);
  }; // OVR.OpenVR.CVRSettings
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVRSettings*, "OVR.OpenVR", "CVRSettings");
#pragma pack(pop)