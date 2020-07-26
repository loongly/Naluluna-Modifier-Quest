// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:46 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.FactoryFromBinder4Extensions
#include "Zenject/FactoryFromBinder4Extensions.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Component
  class Component;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPoolable`5<TParam1, TParam2, TParam3, TParam4, TParam5>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5>
  class IPoolable_5;
  // Forward declaring type: IMemoryPool
  class IMemoryPool;
  // Forward declaring type: MemoryPoolInitialSizeMaxSizeBinder`1<TContract>
  template<typename TContract>
  class MemoryPoolInitialSizeMaxSizeBinder_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FactoryFromBinder4Extensions/<>c__3`5
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract>
  class FactoryFromBinder4Extensions::$$c__3_5 : public ::Il2CppObject {
    public:
    // Autogenerated static field getter
    // Get static field: static public readonly Zenject.FactoryFromBinder4Extensions/<>c__3`5<TParam1,TParam2,TParam3,TParam4,TContract> <>9
    static Zenject::FactoryFromBinder4Extensions::$$c__3_5<TParam1, TParam2, TParam3, TParam4, TContract>* _get_$$9() {
      return CRASH_UNLESS((il2cpp_utils::GetFieldValue<Zenject::FactoryFromBinder4Extensions::$$c__3_5<TParam1, TParam2, TParam3, TParam4, TContract>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder4Extensions::$$c__3_5<TParam1, TParam2, TParam3, TParam4, TContract>*>::get(), "<>9")));
    }
    // Autogenerated static field setter
    // Set static field: static public readonly Zenject.FactoryFromBinder4Extensions/<>c__3`5<TParam1,TParam2,TParam3,TParam4,TContract> <>9
    static void _set_$$9(Zenject::FactoryFromBinder4Extensions::$$c__3_5<TParam1, TParam2, TParam3, TParam4, TContract>* value) {
      CRASH_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder4Extensions::$$c__3_5<TParam1, TParam2, TParam3, TParam4, TContract>*>::get(), "<>9", value));
    }
    // Autogenerated static field getter
    // Get static field: static public System.Action`1<Zenject.MemoryPoolInitialSizeMaxSizeBinder`1<TContract>> <>9__3_0
    static System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* _get_$$9__3_0() {
      return CRASH_UNLESS((il2cpp_utils::GetFieldValue<System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder4Extensions::$$c__3_5<TParam1, TParam2, TParam3, TParam4, TContract>*>::get(), "<>9__3_0")));
    }
    // Autogenerated static field setter
    // Set static field: static public System.Action`1<Zenject.MemoryPoolInitialSizeMaxSizeBinder`1<TContract>> <>9__3_0
    static void _set_$$9__3_0(System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* value) {
      CRASH_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder4Extensions::$$c__3_5<TParam1, TParam2, TParam3, TParam4, TContract>*>::get(), "<>9__3_0", value));
    }
    // static private System.Void .cctor()
    // Offset: 0x117E6B8
    static void _cctor() {
      CRASH_UNLESS(il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder4Extensions::$$c__3_5<TParam1, TParam2, TParam3, TParam4, TContract>*>::get(), ".cctor"));
    }
    // System.Void <FromMonoPoolableMemoryPool>b__3_0(Zenject.MemoryPoolInitialSizeMaxSizeBinder`1<TContract> x)
    // Offset: 0x117E7AC
    void $FromMonoPoolableMemoryPool$b__3_0(Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>* x) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "<FromMonoPoolableMemoryPool>b__3_0", x));
    }
    // public System.Void .ctor()
    // Offset: 0x117E794
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FactoryFromBinder4Extensions::$$c__3_5<TParam1, TParam2, TParam3, TParam4, TContract>* New_ctor() {
      return (FactoryFromBinder4Extensions::$$c__3_5<TParam1, TParam2, TParam3, TParam4, TContract>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder4Extensions::$$c__3_5<TParam1, TParam2, TParam3, TParam4, TContract>*>::get()));
    }
  }; // Zenject.FactoryFromBinder4Extensions/<>c__3`5
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryFromBinder4Extensions::$$c__3_5, "Zenject", "FactoryFromBinder4Extensions/<>c__3`5");
#pragma pack(pop)