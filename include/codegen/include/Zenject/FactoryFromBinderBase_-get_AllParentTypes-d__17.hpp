// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:46 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.FactoryFromBinderBase
#include "Zenject/FactoryFromBinderBase.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: System.Collections.Generic.List`1/Enumerator
#include "System/Collections/Generic/List_1.hpp"
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
  // Autogenerated type: Zenject.FactoryFromBinderBase/<get_AllParentTypes>d__17
  class FactoryFromBinderBase::$get_AllParentTypes$d__17 : public ::Il2CppObject, public System::Collections::Generic::IEnumerable_1<System::Type*>, public System::Collections::IEnumerable, public System::Collections::Generic::IEnumerator_1<System::Type*>, public System::Collections::IEnumerator, public System::IDisposable {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x10
    int $$1__state;
    // private System.Type <>2__current
    // Offset: 0x18
    System::Type* $$2__current;
    // private System.Int32 <>l__initialThreadId
    // Offset: 0x20
    int $$l__initialThreadId;
    // public Zenject.FactoryFromBinderBase <>4__this
    // Offset: 0x28
    Zenject::FactoryFromBinderBase* $$4__this;
    // private System.Collections.Generic.List`1/Enumerator<System.Type> <>7__wrap1
    // Offset: 0x30
    typename System::Collections::Generic::List_1<System::Type*>::Enumerator $$7__wrap1;
    // public System.Void .ctor(System.Int32 $$1__state)
    // Offset: 0xF1A7C4
    static FactoryFromBinderBase::$get_AllParentTypes$d__17* New_ctor(int $$1__state);
    // private System.Void <>m__Finally1()
    // Offset: 0xF1C6F4
    void $$m__Finally1();
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xF1C6D8
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0xF1C74C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // private System.Type System.Collections.Generic.IEnumerator<System.Type>.get_Current()
    // Offset: 0xF1C904
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator`1::get_Current()
    System::Type* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xF1C90C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xF1C96C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<System.Type> System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator()
    // Offset: 0xF1C974
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable`1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<System::Type*>* System_Collections_Generic_IEnumerable_1_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xF1CA28
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // Zenject.FactoryFromBinderBase/<get_AllParentTypes>d__17
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::FactoryFromBinderBase::$get_AllParentTypes$d__17*, "Zenject", "FactoryFromBinderBase/<get_AllParentTypes>d__17");
#pragma pack(pop)