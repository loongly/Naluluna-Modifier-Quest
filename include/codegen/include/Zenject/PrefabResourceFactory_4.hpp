// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:49 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.IFactory`5
#include "Zenject/IFactory_5.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.PrefabResourceFactory`4
  template<typename P1, typename P2, typename P3, typename T>
  class PrefabResourceFactory_4 : public ::Il2CppObject, public Zenject::IFactory_5<::Il2CppString*, P1, P2, P3, T>, public Zenject::IFactory {
    public:
    // private readonly Zenject.DiContainer _container
    // Offset: 0x0
    Zenject::DiContainer* container;
    // public Zenject.DiContainer get_Container()
    // Offset: 0x15DD8C0
    Zenject::DiContainer* get_Container() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<Zenject::DiContainer*>(this, "get_Container"));
    }
    // public T Create(System.String prefabResourceName, P1 param, P2 param2, P3 param3)
    // Offset: 0x15DD8C8
    T Create(::Il2CppString* prefabResourceName, P1 param, P2 param2, P3 param3) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<T>(this, "Create", prefabResourceName, param, param2, param3));
    }
    // public System.Void .ctor()
    // Offset: 0x15DDA80
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PrefabResourceFactory_4<P1, P2, P3, T>* New_ctor() {
      return (PrefabResourceFactory_4<P1, P2, P3, T>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PrefabResourceFactory_4<P1, P2, P3, T>*>::get()));
    }
  }; // Zenject.PrefabResourceFactory`4
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PrefabResourceFactory_4, "Zenject", "PrefabResourceFactory`4");
#pragma pack(pop)