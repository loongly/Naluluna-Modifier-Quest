// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:11 PM
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.VREvent_PerformanceTest_t
  struct VREvent_PerformanceTest_t : public System::ValueType {
    public:
    // public System.UInt32 m_nFidelityLevel
    // Offset: 0x0
    uint m_nFidelityLevel;
    // Creating value type constructor for type: VREvent_PerformanceTest_t
    VREvent_PerformanceTest_t(uint m_nFidelityLevel_ = {}) : m_nFidelityLevel{m_nFidelityLevel_} {}
  }; // Valve.VR.VREvent_PerformanceTest_t
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::VREvent_PerformanceTest_t, "Valve.VR", "VREvent_PerformanceTest_t");
#pragma pack(pop)