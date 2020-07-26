// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:18 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: HMUI.TableCell
#include "HMUI/TableCell.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MainSettingsTableCell
  class MainSettingsTableCell : public HMUI::TableCell {
    public:
    // private TMPro.TextMeshProUGUI _settingsSubMenuText
    // Offset: 0x50
    TMPro::TextMeshProUGUI* settingsSubMenuText;
    // private UnityEngine.UI.Image _bgImage
    // Offset: 0x58
    UnityEngine::UI::Image* bgImage;
    // private UnityEngine.UI.Image _highlightImage
    // Offset: 0x60
    UnityEngine::UI::Image* highlightImage;
    // public System.Void set_settingsSubMenuText(System.String value)
    // Offset: 0xBEBFA0
    void set_settingsSubMenuText(::Il2CppString* value);
    // public System.String get_settingsSubMenuText()
    // Offset: 0xBEBFBC
    ::Il2CppString* get_settingsSubMenuText();
    // protected override System.Void SelectionDidChange(HMUI.TableCell/TransitionType transitionType)
    // Offset: 0xBEBFD8
    // Implemented from: HMUI.TableCell
    // Base method: System.Void TableCell::SelectionDidChange(HMUI.TableCell/TransitionType transitionType)
    void SelectionDidChange(HMUI::TableCell::TransitionType transitionType);
    // protected override System.Void HighlightDidChange(HMUI.TableCell/TransitionType transitionType)
    // Offset: 0xBEC070
    // Implemented from: HMUI.TableCell
    // Base method: System.Void TableCell::HighlightDidChange(HMUI.TableCell/TransitionType transitionType)
    void HighlightDidChange(HMUI::TableCell::TransitionType transitionType);
    // public System.Void .ctor()
    // Offset: 0xBEC0AC
    // Implemented from: HMUI.TableCell
    // Base method: System.Void TableCell::.ctor()
    // Base method: System.Void Interactable::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MainSettingsTableCell* New_ctor();
  }; // MainSettingsTableCell
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainSettingsTableCell*, "", "MainSettingsTableCell");
#pragma pack(pop)