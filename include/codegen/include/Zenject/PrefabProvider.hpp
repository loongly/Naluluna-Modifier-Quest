// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:50 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.IPrefabProvider
#include "Zenject/IPrefabProvider.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.PrefabProvider
  class PrefabProvider : public ::Il2CppObject, public Zenject::IPrefabProvider {
    public:
    // private readonly UnityEngine.Object _prefab
    // Offset: 0x10
    UnityEngine::Object* prefab;
    // public System.Void .ctor(UnityEngine.Object prefab)
    // Offset: 0xFAE894
    static PrefabProvider* New_ctor(UnityEngine::Object* prefab);
    // public UnityEngine.Object GetPrefab()
    // Offset: 0xFAFC84
    // Implemented from: Zenject.IPrefabProvider
    // Base method: UnityEngine.Object IPrefabProvider::GetPrefab()
    UnityEngine::Object* GetPrefab();
  }; // Zenject.PrefabProvider
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::PrefabProvider*, "Zenject", "PrefabProvider");
#pragma pack(pop)