// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:50 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.CachedOpenTypeProvider
#include "Zenject/CachedOpenTypeProvider.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: CachedProvider
  class CachedProvider;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.CachedOpenTypeProvider/<>c
  class CachedOpenTypeProvider::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Zenject.CachedOpenTypeProvider/<>c <>9
    static Zenject::CachedOpenTypeProvider::$$c* _get_$$9();
    // Set static field: static public readonly Zenject.CachedOpenTypeProvider/<>c <>9
    static void _set_$$9(Zenject::CachedOpenTypeProvider::$$c* value);
    // Get static field: static public System.Func`2<Zenject.CachedProvider,System.Int32> <>9__8_0
    static System::Func_2<Zenject::CachedProvider*, int>* _get_$$9__8_0();
    // Set static field: static public System.Func`2<Zenject.CachedProvider,System.Int32> <>9__8_0
    static void _set_$$9__8_0(System::Func_2<Zenject::CachedProvider*, int>* value);
    // static private System.Void .cctor()
    // Offset: 0xD54544
    static void _cctor();
    // System.Int32 <get_NumInstances>b__8_0(Zenject.CachedProvider x)
    // Offset: 0xD545B4
    int $get_NumInstances$b__8_0(Zenject::CachedProvider* x);
    // public System.Void .ctor()
    // Offset: 0xD545AC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static CachedOpenTypeProvider::$$c* New_ctor();
  }; // Zenject.CachedOpenTypeProvider/<>c
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::CachedOpenTypeProvider::$$c*, "Zenject", "CachedOpenTypeProvider/<>c");
#pragma pack(pop)