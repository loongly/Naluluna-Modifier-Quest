// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:43 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Autogenerated type: JetBrains.Annotations.StringFormatMethodAttribute
  class StringFormatMethodAttribute : public System::Attribute {
    public:
    // private System.String <FormatParameterName>k__BackingField
    // Offset: 0x10
    ::Il2CppString* FormatParameterName;
    // public System.Void .ctor(System.String formatParameterName)
    // Offset: 0x1945924
    static StringFormatMethodAttribute* New_ctor(::Il2CppString* formatParameterName);
    // public System.String get_FormatParameterName()
    // Offset: 0x1945958
    ::Il2CppString* get_FormatParameterName();
    // private System.Void set_FormatParameterName(System.String value)
    // Offset: 0x1945960
    void set_FormatParameterName(::Il2CppString* value);
  }; // JetBrains.Annotations.StringFormatMethodAttribute
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::StringFormatMethodAttribute*, "JetBrains.Annotations", "StringFormatMethodAttribute");
#pragma pack(pop)