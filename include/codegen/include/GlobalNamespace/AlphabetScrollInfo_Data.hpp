// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:01 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: AlphabetScrollInfo
#include "GlobalNamespace/AlphabetScrollInfo.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: AlphabetScrollInfo/Data
  class AlphabetScrollInfo::Data : public ::Il2CppObject {
    public:
    // public readonly System.Char character
    // Offset: 0x10
    ::Il2CppChar character;
    // public readonly System.Int32 cellIdx
    // Offset: 0x14
    int cellIdx;
    // public System.Void .ctor(System.Char character, System.Int32 cellIdx)
    // Offset: 0xC97A54
    static AlphabetScrollInfo::Data* New_ctor(::Il2CppChar character, int cellIdx);
  }; // AlphabetScrollInfo/Data
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AlphabetScrollInfo::Data*, "", "AlphabetScrollInfo/Data");
#pragma pack(pop)