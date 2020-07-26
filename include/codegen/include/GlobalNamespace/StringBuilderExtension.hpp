// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:02 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: StringBuilderExtension
  class StringBuilderExtension : public ::Il2CppObject {
    public:
    // Get static field: static private System.Char[] charToInt
    static ::Array<::Il2CppChar>* _get_charToInt();
    // Set static field: static private System.Char[] charToInt
    static void _set_charToInt(::Array<::Il2CppChar>* value);
    // static public System.Void Swap(System.Text.StringBuilder sb, System.Int32 startIndex, System.Int32 endIndex)
    // Offset: 0xCA7C3C
    static void Swap(System::Text::StringBuilder* sb, int startIndex, int endIndex);
    // static public System.Void AppendNumber(System.Text.StringBuilder sb, System.Int32 number)
    // Offset: 0xCA7CF4
    static void AppendNumber(System::Text::StringBuilder* sb, int number);
    // static public System.Void AppendNumber(System.Text.StringBuilder sb, System.UInt32 unumber)
    // Offset: 0xCA7E3C
    static void AppendNumber(System::Text::StringBuilder* sb, uint unumber);
    // static private System.Void .cctor()
    // Offset: 0xCA7F68
    static void _cctor();
  }; // StringBuilderExtension
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StringBuilderExtension*, "", "StringBuilderExtension");
#pragma pack(pop)