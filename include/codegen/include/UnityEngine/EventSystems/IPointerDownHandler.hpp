// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:40 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.EventSystems.IEventSystemHandler
#include "UnityEngine/EventSystems/IEventSystemHandler.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Autogenerated type: UnityEngine.EventSystems.IPointerDownHandler
  class IPointerDownHandler : public UnityEngine::EventSystems::IEventSystemHandler {
    public:
    // public System.Void OnPointerDown(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0xFFFFFFFF
    void OnPointerDown(UnityEngine::EventSystems::PointerEventData* eventData);
  }; // UnityEngine.EventSystems.IPointerDownHandler
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::IPointerDownHandler*, "UnityEngine.EventSystems", "IPointerDownHandler");
#pragma pack(pop)