// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:36 PM
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
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: __BinaryParser
  class __BinaryParser;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.BinaryCrossAppDomainMap
  class BinaryCrossAppDomainMap : public ::Il2CppObject {
    public:
    // System.Int32 crossAppDomainArrayIndex
    // Offset: 0x10
    int crossAppDomainArrayIndex;
    // public System.Void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
    // Offset: 0xE0F0CC
    void Read(System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);
    // public System.Void Dump()
    // Offset: 0xE0F100
    void Dump();
    // System.Void .ctor()
    // Offset: 0xE0F0C4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static BinaryCrossAppDomainMap* New_ctor();
  }; // System.Runtime.Serialization.Formatters.Binary.BinaryCrossAppDomainMap
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainMap*, "System.Runtime.Serialization.Formatters.Binary", "BinaryCrossAppDomainMap");
#pragma pack(pop)