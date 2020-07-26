// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:48 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.MemoryPool`3
#include "Zenject/MemoryPool_3.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Component
  class Component;
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.MonoMemoryPool`3
  template<typename TParam1, typename TParam2, typename TValue>
  class MonoMemoryPool_3 : public Zenject::MemoryPool_3<TParam1, TParam2, TValue> {
    public:
    // private UnityEngine.Transform _originalParent
    // Offset: 0x0
    UnityEngine::Transform* originalParent;
    // protected System.Void OnCreated(TValue item)
    // Offset: 0x15D2BFC
    void OnCreated(TValue item) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "OnCreated", item));
    }
    // protected System.Void OnDestroyed(TValue item)
    // Offset: 0x15D2C64
    void OnDestroyed(TValue item) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "OnDestroyed", item));
    }
    // protected System.Void OnSpawned(TValue item)
    // Offset: 0x15D2CE8
    void OnSpawned(TValue item) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "OnSpawned", item));
    }
    // protected System.Void OnDespawned(TValue item)
    // Offset: 0x15D2D18
    void OnDespawned(TValue item) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "OnDespawned", item));
    }
    // public System.Void .ctor()
    // Offset: 0x15D2BD8
    // Implemented from: Zenject.MemoryPool`3
    // Base method: System.Void MemoryPool`3::.ctor()
    // Base method: System.Void MemoryPoolBase`1::.ctor()
    // Base method: System.Void Object::.ctor()
    static MonoMemoryPool_3<TParam1, TParam2, TValue>* New_ctor() {
      return (MonoMemoryPool_3<TParam1, TParam2, TValue>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MonoMemoryPool_3<TParam1, TParam2, TValue>*>::get()));
    }
  }; // Zenject.MonoMemoryPool`3
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MonoMemoryPool_3, "Zenject", "MonoMemoryPool`3");
#pragma pack(pop)