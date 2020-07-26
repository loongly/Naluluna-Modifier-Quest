// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:47 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: NUnit.Framework.Interfaces.IMethodInfo
#include "NUnit/Framework/Interfaces/IMethodInfo.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITypeInfo
  class ITypeInfo;
  // Forward declaring type: IParameterInfo
  class IParameterInfo;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Autogenerated type: NUnit.Framework.Internal.MethodWrapper
  class MethodWrapper : public ::Il2CppObject, public NUnit::Framework::Interfaces::IMethodInfo, public NUnit::Framework::Interfaces::IReflectionInfo {
    public:
    // private NUnit.Framework.Interfaces.ITypeInfo <TypeInfo>k__BackingField
    // Offset: 0x10
    NUnit::Framework::Interfaces::ITypeInfo* TypeInfo;
    // private System.Reflection.MethodInfo <MethodInfo>k__BackingField
    // Offset: 0x18
    System::Reflection::MethodInfo* MethodInfo;
    // public System.Void .ctor(System.Type type, System.Reflection.MethodInfo method)
    // Offset: 0x18D4CF8
    static MethodWrapper* New_ctor(System::Type* type, System::Reflection::MethodInfo* method);
    // private System.Void set_TypeInfo(NUnit.Framework.Interfaces.ITypeInfo value)
    // Offset: 0x18D4E10
    void set_TypeInfo(NUnit::Framework::Interfaces::ITypeInfo* value);
    // private System.Void set_MethodInfo(System.Reflection.MethodInfo value)
    // Offset: 0x18D4E20
    void set_MethodInfo(System::Reflection::MethodInfo* value);
    // public NUnit.Framework.Interfaces.ITypeInfo get_TypeInfo()
    // Offset: 0x18D4E08
    // Implemented from: NUnit.Framework.Interfaces.IMethodInfo
    // Base method: NUnit.Framework.Interfaces.ITypeInfo IMethodInfo::get_TypeInfo()
    NUnit::Framework::Interfaces::ITypeInfo* get_TypeInfo();
    // public System.Reflection.MethodInfo get_MethodInfo()
    // Offset: 0x18D4E18
    // Implemented from: NUnit.Framework.Interfaces.IMethodInfo
    // Base method: System.Reflection.MethodInfo IMethodInfo::get_MethodInfo()
    System::Reflection::MethodInfo* get_MethodInfo();
    // public System.String get_Name()
    // Offset: 0x18D4E28
    // Implemented from: NUnit.Framework.Interfaces.IMethodInfo
    // Base method: System.String IMethodInfo::get_Name()
    ::Il2CppString* get_Name();
    // public System.Boolean get_IsAbstract()
    // Offset: 0x18D4E48
    // Implemented from: NUnit.Framework.Interfaces.IMethodInfo
    // Base method: System.Boolean IMethodInfo::get_IsAbstract()
    bool get_IsAbstract();
    // public System.Boolean get_IsPublic()
    // Offset: 0x18D4E64
    // Implemented from: NUnit.Framework.Interfaces.IMethodInfo
    // Base method: System.Boolean IMethodInfo::get_IsPublic()
    bool get_IsPublic();
    // public System.Boolean get_ContainsGenericParameters()
    // Offset: 0x18D4E80
    // Implemented from: NUnit.Framework.Interfaces.IMethodInfo
    // Base method: System.Boolean IMethodInfo::get_ContainsGenericParameters()
    bool get_ContainsGenericParameters();
    // public System.Boolean get_IsGenericMethodDefinition()
    // Offset: 0x18D4EA4
    // Implemented from: NUnit.Framework.Interfaces.IMethodInfo
    // Base method: System.Boolean IMethodInfo::get_IsGenericMethodDefinition()
    bool get_IsGenericMethodDefinition();
    // public NUnit.Framework.Interfaces.ITypeInfo get_ReturnType()
    // Offset: 0x18D4EC8
    // Implemented from: NUnit.Framework.Interfaces.IMethodInfo
    // Base method: NUnit.Framework.Interfaces.ITypeInfo IMethodInfo::get_ReturnType()
    NUnit::Framework::Interfaces::ITypeInfo* get_ReturnType();
    // public NUnit.Framework.Interfaces.IParameterInfo[] GetParameters()
    // Offset: 0x18D4F4C
    // Implemented from: NUnit.Framework.Interfaces.IMethodInfo
    // Base method: NUnit.Framework.Interfaces.IParameterInfo[] IMethodInfo::GetParameters()
    ::Array<NUnit::Framework::Interfaces::IParameterInfo*>* GetParameters();
    // public NUnit.Framework.Interfaces.IMethodInfo MakeGenericMethod(System.Type[] typeArguments)
    // Offset: 0x18D50EC
    // Implemented from: NUnit.Framework.Interfaces.IMethodInfo
    // Base method: NUnit.Framework.Interfaces.IMethodInfo IMethodInfo::MakeGenericMethod(System.Type[] typeArguments)
    NUnit::Framework::Interfaces::IMethodInfo* MakeGenericMethod(::Array<System::Type*>* typeArguments);
    // public T[] GetCustomAttributes(System.Boolean inherit)
    // Offset: 0xD43A30
    // Implemented from: NUnit.Framework.Interfaces.IReflectionInfo
    // Base method: T[] IReflectionInfo::GetCustomAttributes(System.Boolean inherit)
    template<class T>
    ::Array<T>* GetCustomAttributes(bool inherit) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<::Array<T>*>(this, "GetCustomAttributes", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, inherit));
    }
    // public System.Boolean IsDefined(System.Boolean inherit)
    // Offset: 0x14D35C0
    // Implemented from: NUnit.Framework.Interfaces.IReflectionInfo
    // Base method: System.Boolean IReflectionInfo::IsDefined(System.Boolean inherit)
    template<class T>
    bool IsDefined(bool inherit) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<bool>(this, "IsDefined", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, inherit));
    }
    // public System.Object Invoke(System.Object fixture, System.Object[] args)
    // Offset: 0x18D51FC
    // Implemented from: NUnit.Framework.Interfaces.IMethodInfo
    // Base method: System.Object IMethodInfo::Invoke(System.Object fixture, System.Object[] args)
    ::Il2CppObject* Invoke(::Il2CppObject* fixture, ::Array<::Il2CppObject*>* args);
    // public override System.String ToString()
    // Offset: 0x18D5514
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // NUnit.Framework.Internal.MethodWrapper
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::MethodWrapper*, "NUnit.Framework.Internal", "MethodWrapper");
#pragma pack(pop)