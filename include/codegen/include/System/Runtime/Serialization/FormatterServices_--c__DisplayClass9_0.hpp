// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:35 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Runtime.Serialization.FormatterServices
#include "System/Runtime/Serialization/FormatterServices.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MemberInfo
  class MemberInfo;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: MemberHolder
  class MemberHolder;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Autogenerated type: System.Runtime.Serialization.FormatterServices/<>c__DisplayClass9_0
  class FormatterServices::$$c__DisplayClass9_0 : public ::Il2CppObject {
    public:
    // public System.Type type
    // Offset: 0x10
    System::Type* type;
    // System.Reflection.MemberInfo[] <GetSerializableMembers>b__0(System.Runtime.Serialization.MemberHolder _)
    // Offset: 0xE0CFA0
    ::Array<System::Reflection::MemberInfo*>* $GetSerializableMembers$b__0(System::Runtime::Serialization::MemberHolder* _);
    // public System.Void .ctor()
    // Offset: 0xE0BCE4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FormatterServices::$$c__DisplayClass9_0* New_ctor();
  }; // System.Runtime.Serialization.FormatterServices/<>c__DisplayClass9_0
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::FormatterServices::$$c__DisplayClass9_0*, "System.Runtime.Serialization", "FormatterServices/<>c__DisplayClass9_0");
#pragma pack(pop)