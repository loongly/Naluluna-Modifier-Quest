// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:39 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Autogenerated type: System.Runtime.CompilerServices.LoadHint
  struct LoadHint : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public System.Runtime.CompilerServices.LoadHint Default
    static constexpr const int Default = 0;
    // Get static field: static public System.Runtime.CompilerServices.LoadHint Default
    static System::Runtime::CompilerServices::LoadHint _get_Default();
    // Set static field: static public System.Runtime.CompilerServices.LoadHint Default
    static void _set_Default(System::Runtime::CompilerServices::LoadHint value);
    // static field const value: static public System.Runtime.CompilerServices.LoadHint Always
    static constexpr const int Always = 1;
    // Get static field: static public System.Runtime.CompilerServices.LoadHint Always
    static System::Runtime::CompilerServices::LoadHint _get_Always();
    // Set static field: static public System.Runtime.CompilerServices.LoadHint Always
    static void _set_Always(System::Runtime::CompilerServices::LoadHint value);
    // static field const value: static public System.Runtime.CompilerServices.LoadHint Sometimes
    static constexpr const int Sometimes = 2;
    // Get static field: static public System.Runtime.CompilerServices.LoadHint Sometimes
    static System::Runtime::CompilerServices::LoadHint _get_Sometimes();
    // Set static field: static public System.Runtime.CompilerServices.LoadHint Sometimes
    static void _set_Sometimes(System::Runtime::CompilerServices::LoadHint value);
    // Creating value type constructor for type: LoadHint
    LoadHint(int value_ = {}) : value{value_} {}
  }; // System.Runtime.CompilerServices.LoadHint
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::LoadHint, "System.Runtime.CompilerServices", "LoadHint");
#pragma pack(pop)