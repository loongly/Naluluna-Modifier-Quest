// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:18 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: HMUI.TableCell
#include "HMUI/TableCell.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapLevelPack
  class IBeatmapLevelPack;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LevelPackHeaderTableCell
  class LevelPackHeaderTableCell : public HMUI::TableCell {
    public:
    // private UnityEngine.Color _selectedHighlightElementsColor
    // Offset: 0x4C
    UnityEngine::Color selectedHighlightElementsColor;
    // private TMPro.TextMeshProUGUI _nameText
    // Offset: 0x60
    TMPro::TextMeshProUGUI* nameText;
    // private UnityEngine.UI.Image _bgImage
    // Offset: 0x68
    UnityEngine::UI::Image* bgImage;
    // private UnityEngine.UI.Image _highlightImage
    // Offset: 0x70
    UnityEngine::UI::Image* highlightImage;
    // private UnityEngine.UI.Image _coverImage
    // Offset: 0x78
    UnityEngine::UI::Image* coverImage;
    // public System.Void SetDataFromPack(IBeatmapLevelPack pack)
    // Offset: 0xBE1740
    void SetDataFromPack(GlobalNamespace::IBeatmapLevelPack* pack);
    // public System.Void SetData(System.String headerText, UnityEngine.Sprite headerSprite)
    // Offset: 0xBE1898
    void SetData(::Il2CppString* headerText, UnityEngine::Sprite* headerSprite);
    // private System.Void RefreshVisuals()
    // Offset: 0xBE18E0
    void RefreshVisuals();
    // protected override System.Void SelectionDidChange(HMUI.TableCell/TransitionType transitionType)
    // Offset: 0xBE18DC
    // Implemented from: HMUI.TableCell
    // Base method: System.Void TableCell::SelectionDidChange(HMUI.TableCell/TransitionType transitionType)
    void SelectionDidChange(HMUI::TableCell::TransitionType transitionType);
    // protected override System.Void HighlightDidChange(HMUI.TableCell/TransitionType transitionType)
    // Offset: 0xBE1A30
    // Implemented from: HMUI.TableCell
    // Base method: System.Void TableCell::HighlightDidChange(HMUI.TableCell/TransitionType transitionType)
    void HighlightDidChange(HMUI::TableCell::TransitionType transitionType);
    // public System.Void .ctor()
    // Offset: 0xBE1A34
    // Implemented from: HMUI.TableCell
    // Base method: System.Void TableCell::.ctor()
    // Base method: System.Void Interactable::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static LevelPackHeaderTableCell* New_ctor();
  }; // LevelPackHeaderTableCell
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelPackHeaderTableCell*, "", "LevelPackHeaderTableCell");
#pragma pack(pop)