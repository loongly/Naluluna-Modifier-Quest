// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:13 PM
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
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SaberType
  struct SaberType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public SaberType SaberA
    static constexpr const int SaberA = 0;
    // Get static field: static public SaberType SaberA
    static GlobalNamespace::SaberType _get_SaberA();
    // Set static field: static public SaberType SaberA
    static void _set_SaberA(GlobalNamespace::SaberType value);
    // static field const value: static public SaberType SaberB
    static constexpr const int SaberB = 1;
    // Get static field: static public SaberType SaberB
    static GlobalNamespace::SaberType _get_SaberB();
    // Set static field: static public SaberType SaberB
    static void _set_SaberB(GlobalNamespace::SaberType value);
    // Creating value type constructor for type: SaberType
    SaberType(int value_ = {}) : value{value_} {}
  }; // SaberType
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberType, "", "SaberType");
#pragma pack(pop)