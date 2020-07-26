// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:38 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.CanvasUpdate
  struct CanvasUpdate : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.UI.CanvasUpdate Prelayout
    static constexpr const int Prelayout = 0;
    // Get static field: static public UnityEngine.UI.CanvasUpdate Prelayout
    static UnityEngine::UI::CanvasUpdate _get_Prelayout();
    // Set static field: static public UnityEngine.UI.CanvasUpdate Prelayout
    static void _set_Prelayout(UnityEngine::UI::CanvasUpdate value);
    // static field const value: static public UnityEngine.UI.CanvasUpdate Layout
    static constexpr const int Layout = 1;
    // Get static field: static public UnityEngine.UI.CanvasUpdate Layout
    static UnityEngine::UI::CanvasUpdate _get_Layout();
    // Set static field: static public UnityEngine.UI.CanvasUpdate Layout
    static void _set_Layout(UnityEngine::UI::CanvasUpdate value);
    // static field const value: static public UnityEngine.UI.CanvasUpdate PostLayout
    static constexpr const int PostLayout = 2;
    // Get static field: static public UnityEngine.UI.CanvasUpdate PostLayout
    static UnityEngine::UI::CanvasUpdate _get_PostLayout();
    // Set static field: static public UnityEngine.UI.CanvasUpdate PostLayout
    static void _set_PostLayout(UnityEngine::UI::CanvasUpdate value);
    // static field const value: static public UnityEngine.UI.CanvasUpdate PreRender
    static constexpr const int PreRender = 3;
    // Get static field: static public UnityEngine.UI.CanvasUpdate PreRender
    static UnityEngine::UI::CanvasUpdate _get_PreRender();
    // Set static field: static public UnityEngine.UI.CanvasUpdate PreRender
    static void _set_PreRender(UnityEngine::UI::CanvasUpdate value);
    // static field const value: static public UnityEngine.UI.CanvasUpdate LatePreRender
    static constexpr const int LatePreRender = 4;
    // Get static field: static public UnityEngine.UI.CanvasUpdate LatePreRender
    static UnityEngine::UI::CanvasUpdate _get_LatePreRender();
    // Set static field: static public UnityEngine.UI.CanvasUpdate LatePreRender
    static void _set_LatePreRender(UnityEngine::UI::CanvasUpdate value);
    // static field const value: static public UnityEngine.UI.CanvasUpdate MaxUpdateValue
    static constexpr const int MaxUpdateValue = 5;
    // Get static field: static public UnityEngine.UI.CanvasUpdate MaxUpdateValue
    static UnityEngine::UI::CanvasUpdate _get_MaxUpdateValue();
    // Set static field: static public UnityEngine.UI.CanvasUpdate MaxUpdateValue
    static void _set_MaxUpdateValue(UnityEngine::UI::CanvasUpdate value);
    // Creating value type constructor for type: CanvasUpdate
    CanvasUpdate(int value_ = {}) : value{value_} {}
  }; // UnityEngine.UI.CanvasUpdate
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::CanvasUpdate, "UnityEngine.UI", "CanvasUpdate");
#pragma pack(pop)