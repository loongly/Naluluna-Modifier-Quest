// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:37 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Runtime.Remoting.SoapServices
#include "System/Runtime/Remoting/SoapServices.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Autogenerated type: System.Runtime.Remoting.SoapServices/TypeInfo
  class SoapServices::TypeInfo : public ::Il2CppObject {
    public:
    // public System.Collections.Hashtable Attributes
    // Offset: 0x10
    System::Collections::Hashtable* Attributes;
    // public System.Collections.Hashtable Elements
    // Offset: 0x18
    System::Collections::Hashtable* Elements;
    // public System.Void .ctor()
    // Offset: 0xE09950
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SoapServices::TypeInfo* New_ctor();
  }; // System.Runtime.Remoting.SoapServices/TypeInfo
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::SoapServices::TypeInfo*, "System.Runtime.Remoting", "SoapServices/TypeInfo");
#pragma pack(pop)