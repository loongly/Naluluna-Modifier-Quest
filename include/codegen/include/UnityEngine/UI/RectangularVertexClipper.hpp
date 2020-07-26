// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:38 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Rect
  struct Rect;
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Canvas
  class Canvas;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.RectangularVertexClipper
  class RectangularVertexClipper : public ::Il2CppObject {
    public:
    // private readonly UnityEngine.Vector3[] m_WorldCorners
    // Offset: 0x10
    ::Array<UnityEngine::Vector3>* m_WorldCorners;
    // private readonly UnityEngine.Vector3[] m_CanvasCorners
    // Offset: 0x18
    ::Array<UnityEngine::Vector3>* m_CanvasCorners;
    // public UnityEngine.Rect GetCanvasRect(UnityEngine.RectTransform t, UnityEngine.Canvas c)
    // Offset: 0x11EFD80
    UnityEngine::Rect GetCanvasRect(UnityEngine::RectTransform* t, UnityEngine::Canvas* c);
    // public System.Void .ctor()
    // Offset: 0x11F0038
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static RectangularVertexClipper* New_ctor();
  }; // UnityEngine.UI.RectangularVertexClipper
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::RectangularVertexClipper*, "UnityEngine.UI", "RectangularVertexClipper");
#pragma pack(pop)