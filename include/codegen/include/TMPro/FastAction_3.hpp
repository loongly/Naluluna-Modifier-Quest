// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:19 PM
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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: LinkedList`1<T>
  template<typename T>
  class LinkedList_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: LinkedListNode`1<T>
  template<typename T>
  class LinkedListNode_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.FastAction`3
  template<typename A, typename B, typename C>
  class FastAction_3 : public ::Il2CppObject {
    public:
    // private System.Collections.Generic.LinkedList`1<System.Action`3<A,B,C>> delegates
    // Offset: 0x0
    System::Collections::Generic::LinkedList_1<System::Action_3<A, B, C>*>* delegates;
    // private System.Collections.Generic.Dictionary`2<System.Action`3<A,B,C>,System.Collections.Generic.LinkedListNode`1<System.Action`3<A,B,C>>> lookup
    // Offset: 0x0
    System::Collections::Generic::Dictionary_2<System::Action_3<A, B, C>*, System::Collections::Generic::LinkedListNode_1<System::Action_3<A, B, C>*>*>* lookup;
    // public System.Void Add(System.Action`3<A,B,C> rhs)
    // Offset: 0x13E4BA8
    void Add(System::Action_3<A, B, C>* rhs) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "Add", rhs));
    }
    // public System.Void Remove(System.Action`3<A,B,C> rhs)
    // Offset: 0x13E4C4C
    void Remove(System::Action_3<A, B, C>* rhs) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "Remove", rhs));
    }
    // public System.Void Call(A a, B b, C c)
    // Offset: 0x13E4CE4
    void Call(A a, B b, C c) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "Call", a, b, c));
    }
    // public System.Void .ctor()
    // Offset: 0x13E4DA0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FastAction_3<A, B, C>* New_ctor() {
      return (FastAction_3<A, B, C>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FastAction_3<A, B, C>*>::get()));
    }
  }; // TMPro.FastAction`3
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(TMPro::FastAction_3, "TMPro", "FastAction`3");
#pragma pack(pop)