// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:48 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.PlaceholderFactory`3
#include "Zenject/PlaceholderFactory_3.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.Factory`3
  template<typename TParam1, typename TParam2, typename TValue>
  class Factory_3 : public Zenject::PlaceholderFactory_3<TParam1, TParam2, TValue> {
    public:
    // public System.Void .ctor()
    // Offset: 0x13A85D4
    // Implemented from: Zenject.PlaceholderFactory`3
    // Base method: System.Void PlaceholderFactory`3::.ctor()
    // Base method: System.Void PlaceholderFactoryBase`1::.ctor()
    // Base method: System.Void Object::.ctor()
    static Factory_3<TParam1, TParam2, TValue>* New_ctor() {
      return (Factory_3<TParam1, TParam2, TValue>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Factory_3<TParam1, TParam2, TValue>*>::get()));
    }
  }; // Zenject.Factory`3
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Factory_3, "Zenject", "Factory`3");
#pragma pack(pop)