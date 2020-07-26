// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:20 PM
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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_TextParsingUtilities
  class TMP_TextParsingUtilities : public ::Il2CppObject {
    public:
    // Get static field: static private readonly TMPro.TMP_TextParsingUtilities s_Instance
    static TMPro::TMP_TextParsingUtilities* _get_s_Instance();
    // Set static field: static private readonly TMPro.TMP_TextParsingUtilities s_Instance
    static void _set_s_Instance(TMPro::TMP_TextParsingUtilities* value);
    // static field const value: static private System.String k_LookupStringL
    static constexpr const char* k_LookupStringL = "-------------------------------- !-#$%&-()*+,-./0123456789:;<=>?@abcdefghijklmnopqrstuvwxyz[-]^_`abcdefghijklmnopqrstuvwxyz{|}~-";
    // Get static field: static private System.String k_LookupStringL
    static ::Il2CppString* _get_k_LookupStringL();
    // Set static field: static private System.String k_LookupStringL
    static void _set_k_LookupStringL(::Il2CppString* value);
    // static field const value: static private System.String k_LookupStringU
    static constexpr const char* k_LookupStringU = "-------------------------------- !-#$%&-()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[-]^_`ABCDEFGHIJKLMNOPQRSTUVWXYZ{|}~-";
    // Get static field: static private System.String k_LookupStringU
    static ::Il2CppString* _get_k_LookupStringU();
    // Set static field: static private System.String k_LookupStringU
    static void _set_k_LookupStringU(::Il2CppString* value);
    // static private System.Void .cctor()
    // Offset: 0xDAB9F0
    static void _cctor();
    // static public TMPro.TMP_TextParsingUtilities get_instance()
    // Offset: 0xDABA60
    static TMPro::TMP_TextParsingUtilities* get_instance();
    // static public System.UInt32 GetHashCode(System.String s)
    // Offset: 0xDABAC8
    static uint GetHashCode(::Il2CppString* s);
    // static public System.Int32 GetHashCodeCaseSensitive(System.String s)
    // Offset: 0xDABC18
    static int GetHashCodeCaseSensitive(::Il2CppString* s);
    // static public System.Char ToLowerASCIIFast(System.Char c)
    // Offset: 0xDABC90
    static ::Il2CppChar ToLowerASCIIFast(::Il2CppChar c);
    // static public System.Char ToUpperASCIIFast(System.Char c)
    // Offset: 0xDABB9C
    static ::Il2CppChar ToUpperASCIIFast(::Il2CppChar c);
    // static public System.UInt32 ToUpperASCIIFast(System.UInt32 c)
    // Offset: 0xDABD0C
    static uint ToUpperASCIIFast(uint c);
    // static public System.UInt32 ToLowerASCIIFast(System.UInt32 c)
    // Offset: 0xDABD88
    static uint ToLowerASCIIFast(uint c);
    // static public System.Boolean IsHighSurrogate(System.UInt32 c)
    // Offset: 0xDABE04
    static bool IsHighSurrogate(uint c);
    // static public System.Boolean IsLowSurrogate(System.UInt32 c)
    // Offset: 0xDABE18
    static bool IsLowSurrogate(uint c);
    // public System.Void .ctor()
    // Offset: 0xDABA58
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TMP_TextParsingUtilities* New_ctor();
  }; // TMPro.TMP_TextParsingUtilities
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_TextParsingUtilities*, "TMPro", "TMP_TextParsingUtilities");
#pragma pack(pop)