// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:33 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.AsyncLocalValueChangedArgs`1
  template<typename T>
  struct AsyncLocalValueChangedArgs_1 : public System::ValueType {
    public:
    // private T <PreviousValue>k__BackingField
    // Offset: 0x0
    T PreviousValue;
    // private T <CurrentValue>k__BackingField
    // Offset: 0x0
    T CurrentValue;
    // private System.Boolean <ThreadContextChanged>k__BackingField
    // Offset: 0x0
    bool ThreadContextChanged;
    // Creating value type constructor for type: AsyncLocalValueChangedArgs_1
    AsyncLocalValueChangedArgs_1(T PreviousValue_ = {}, T CurrentValue_ = {}, bool ThreadContextChanged_ = {}) : PreviousValue{PreviousValue_}, CurrentValue{CurrentValue_}, ThreadContextChanged{ThreadContextChanged_} {}
    // public T get_PreviousValue()
    // Offset: 0xA46CC4
    T get_PreviousValue() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<T>(*this, "get_PreviousValue"));
    }
    // private System.Void set_PreviousValue(T value)
    // Offset: 0xA46CCC
    void set_PreviousValue(T value) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(*this, "set_PreviousValue", value));
    }
    // public T get_CurrentValue()
    // Offset: 0xA46CD4
    T get_CurrentValue() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<T>(*this, "get_CurrentValue"));
    }
    // private System.Void set_CurrentValue(T value)
    // Offset: 0xA46CDC
    void set_CurrentValue(T value) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(*this, "set_CurrentValue", value));
    }
    // private System.Void set_ThreadContextChanged(System.Boolean value)
    // Offset: 0xA46CE4
    void set_ThreadContextChanged(bool value) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(*this, "set_ThreadContextChanged", value));
    }
    // System.Void .ctor(T previousValue, T currentValue, System.Boolean contextChanged)
    // Offset: 0xA46CF0
    static AsyncLocalValueChangedArgs_1<T>* New_ctor(T previousValue, T currentValue, bool contextChanged) {
      return (AsyncLocalValueChangedArgs_1<T>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<AsyncLocalValueChangedArgs_1<T>>::get(), previousValue, currentValue, contextChanged));
    }
  }; // System.Threading.AsyncLocalValueChangedArgs`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::Threading::AsyncLocalValueChangedArgs_1, "System.Threading", "AsyncLocalValueChangedArgs`1");
#pragma pack(pop)