// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:39 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.UI.HorizontalOrVerticalLayoutGroup
#include "UnityEngine/UI/HorizontalOrVerticalLayoutGroup.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.HorizontalLayoutGroup
  class HorizontalLayoutGroup : public UnityEngine::UI::HorizontalOrVerticalLayoutGroup {
    public:
    // protected System.Void .ctor()
    // Offset: 0x1158EA8
    // Implemented from: UnityEngine.UI.HorizontalOrVerticalLayoutGroup
    // Base method: System.Void HorizontalOrVerticalLayoutGroup::.ctor()
    // Base method: System.Void LayoutGroup::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static HorizontalLayoutGroup* New_ctor();
    // public override System.Void CalculateLayoutInputHorizontal()
    // Offset: 0x1158EC8
    // Implemented from: UnityEngine.UI.LayoutGroup
    // Base method: System.Void LayoutGroup::CalculateLayoutInputHorizontal()
    void CalculateLayoutInputHorizontal();
    // public override System.Void CalculateLayoutInputVertical()
    // Offset: 0x1159190
    // Implemented from: UnityEngine.UI.LayoutGroup
    // Base method: System.Void LayoutGroup::CalculateLayoutInputVertical()
    void CalculateLayoutInputVertical();
    // public override System.Void SetLayoutHorizontal()
    // Offset: 0x115919C
    // Implemented from: UnityEngine.UI.LayoutGroup
    // Base method: System.Void LayoutGroup::SetLayoutHorizontal()
    void SetLayoutHorizontal();
    // public override System.Void SetLayoutVertical()
    // Offset: 0x1159774
    // Implemented from: UnityEngine.UI.LayoutGroup
    // Base method: System.Void LayoutGroup::SetLayoutVertical()
    void SetLayoutVertical();
  }; // UnityEngine.UI.HorizontalLayoutGroup
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::HorizontalLayoutGroup*, "UnityEngine.UI", "HorizontalLayoutGroup");
#pragma pack(pop)