// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:49 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.BindingId
  struct BindingId : public System::ValueType, public System::IEquatable_1<Zenject::BindingId> {
    public:
    // private System.Type _type
    // Offset: 0x0
    System::Type* type;
    // private System.Object _identifier
    // Offset: 0x8
    ::Il2CppObject* identifier;
    // Creating value type constructor for type: BindingId
    BindingId(System::Type* type_ = {}, ::Il2CppObject* identifier_ = {}) : type{type_}, identifier{identifier_} {}
    // public System.Void .ctor(System.Type type, System.Object identifier)
    // Offset: 0xA2B0FC
    static BindingId* New_ctor(System::Type* type, ::Il2CppObject* identifier);
    // public System.Type get_Type()
    // Offset: 0xA2B130
    System::Type* get_Type();
    // public System.Void set_Type(System.Type value)
    // Offset: 0xA2B138
    void set_Type(System::Type* value);
    // public System.Object get_Identifier()
    // Offset: 0xA2B140
    ::Il2CppObject* get_Identifier();
    // public System.Void set_Identifier(System.Object value)
    // Offset: 0xA2B148
    void set_Identifier(::Il2CppObject* value);
    // public override System.String ToString()
    // Offset: 0xA2B150
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public override System.Int32 GetHashCode()
    // Offset: 0xA2B158
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xA2B160
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public System.Boolean Equals(Zenject.BindingId that)
    // Offset: 0xA2B168
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable`1::Equals(Zenject.BindingId that)
    bool Equals(Zenject::BindingId that);
  }; // Zenject.BindingId
  // static public System.Boolean op_Equality(Zenject.BindingId left, Zenject.BindingId right)
  // Offset: 0xD51900
  bool operator ==(const Zenject::BindingId& left, const Zenject::BindingId& right);
  // static public System.Boolean op_Inequality(Zenject.BindingId left, Zenject.BindingId right)
  // Offset: 0xD519CC
  bool operator !=(const Zenject::BindingId& left, const Zenject::BindingId& right);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::BindingId, "Zenject", "BindingId");
#pragma pack(pop)