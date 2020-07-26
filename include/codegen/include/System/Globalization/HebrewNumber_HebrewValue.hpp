// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:33 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Globalization.HebrewNumber
#include "System/Globalization/HebrewNumber.hpp"
// Including type: System.Globalization.HebrewNumber/HebrewToken
#include "System/Globalization/HebrewNumber_HebrewToken.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System.Globalization
namespace System::Globalization {
  // Autogenerated type: System.Globalization.HebrewNumber/HebrewValue
  class HebrewNumber::HebrewValue : public ::Il2CppObject {
    public:
    // System.Globalization.HebrewNumber/HebrewToken token
    // Offset: 0x10
    System::Globalization::HebrewNumber::HebrewToken token;
    // System.Int32 value
    // Offset: 0x14
    int value;
    // System.Void .ctor(System.Globalization.HebrewNumber/HebrewToken token, System.Int32 value)
    // Offset: 0x12B5BAC
    static HebrewNumber::HebrewValue* New_ctor(System::Globalization::HebrewNumber::HebrewToken token, int value);
  }; // System.Globalization.HebrewNumber/HebrewValue
}
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::HebrewNumber::HebrewValue*, "System.Globalization", "HebrewNumber/HebrewValue");
#pragma pack(pop)