// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:16 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.ProBuilder.EdgeLookup
#include "UnityEngine/ProBuilder/EdgeLookup.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Skipping declaration: Edge because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.EdgeLookup/<>c__DisplayClass16_0
  class EdgeLookup::$$c__DisplayClass16_0 : public ::Il2CppObject {
    public:
    // public System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> lookup
    // Offset: 0x10
    System::Collections::Generic::Dictionary_2<int, int>* lookup;
    // UnityEngine.ProBuilder.EdgeLookup <GetEdgeLookup>b__0(UnityEngine.ProBuilder.Edge x)
    // Offset: 0xF7B880
    UnityEngine::ProBuilder::EdgeLookup $GetEdgeLookup$b__0(UnityEngine::ProBuilder::Edge x);
    // public System.Void .ctor()
    // Offset: 0xF7B574
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static EdgeLookup::$$c__DisplayClass16_0* New_ctor();
  }; // UnityEngine.ProBuilder.EdgeLookup/<>c__DisplayClass16_0
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::EdgeLookup::$$c__DisplayClass16_0*, "UnityEngine.ProBuilder", "EdgeLookup/<>c__DisplayClass16_0");
#pragma pack(pop)