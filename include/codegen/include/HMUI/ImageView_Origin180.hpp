// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:05 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
// Including type: HMUI.ImageView
#include "HMUI/ImageView.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.ImageView/Origin180
  struct ImageView::Origin180 : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public HMUI.ImageView/Origin180 Bottom
    static constexpr const int Bottom = 0;
    // Get static field: static public HMUI.ImageView/Origin180 Bottom
    static HMUI::ImageView::Origin180 _get_Bottom();
    // Set static field: static public HMUI.ImageView/Origin180 Bottom
    static void _set_Bottom(HMUI::ImageView::Origin180 value);
    // static field const value: static public HMUI.ImageView/Origin180 Left
    static constexpr const int Left = 1;
    // Get static field: static public HMUI.ImageView/Origin180 Left
    static HMUI::ImageView::Origin180 _get_Left();
    // Set static field: static public HMUI.ImageView/Origin180 Left
    static void _set_Left(HMUI::ImageView::Origin180 value);
    // static field const value: static public HMUI.ImageView/Origin180 Top
    static constexpr const int Top = 2;
    // Get static field: static public HMUI.ImageView/Origin180 Top
    static HMUI::ImageView::Origin180 _get_Top();
    // Set static field: static public HMUI.ImageView/Origin180 Top
    static void _set_Top(HMUI::ImageView::Origin180 value);
    // static field const value: static public HMUI.ImageView/Origin180 Right
    static constexpr const int Right = 3;
    // Get static field: static public HMUI.ImageView/Origin180 Right
    static HMUI::ImageView::Origin180 _get_Right();
    // Set static field: static public HMUI.ImageView/Origin180 Right
    static void _set_Right(HMUI::ImageView::Origin180 value);
    // Creating value type constructor for type: Origin180
    Origin180(int value_ = {}) : value{value_} {}
  }; // HMUI.ImageView/Origin180
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::ImageView::Origin180, "HMUI", "ImageView/Origin180");
#pragma pack(pop)