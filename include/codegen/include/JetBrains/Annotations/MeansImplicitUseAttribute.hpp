// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:43 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: JetBrains.Annotations.ImplicitUseKindFlags
#include "JetBrains/Annotations/ImplicitUseKindFlags.hpp"
// Including type: JetBrains.Annotations.ImplicitUseTargetFlags
#include "JetBrains/Annotations/ImplicitUseTargetFlags.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Autogenerated type: JetBrains.Annotations.MeansImplicitUseAttribute
  class MeansImplicitUseAttribute : public System::Attribute {
    public:
    // private JetBrains.Annotations.ImplicitUseKindFlags <UseKindFlags>k__BackingField
    // Offset: 0x10
    JetBrains::Annotations::ImplicitUseKindFlags UseKindFlags;
    // private JetBrains.Annotations.ImplicitUseTargetFlags <TargetFlags>k__BackingField
    // Offset: 0x14
    JetBrains::Annotations::ImplicitUseTargetFlags TargetFlags;
    // public System.Void .ctor(JetBrains.Annotations.ImplicitUseKindFlags useKindFlags)
    // Offset: 0x1945570
    static MeansImplicitUseAttribute* New_ctor(JetBrains::Annotations::ImplicitUseKindFlags useKindFlags);
    // public System.Void .ctor(JetBrains.Annotations.ImplicitUseTargetFlags targetFlags)
    // Offset: 0x19455A0
    static MeansImplicitUseAttribute* New_ctor(JetBrains::Annotations::ImplicitUseTargetFlags targetFlags);
    // public System.Void .ctor(JetBrains.Annotations.ImplicitUseKindFlags useKindFlags, JetBrains.Annotations.ImplicitUseTargetFlags targetFlags)
    // Offset: 0x1945538
    static MeansImplicitUseAttribute* New_ctor(JetBrains::Annotations::ImplicitUseKindFlags useKindFlags, JetBrains::Annotations::ImplicitUseTargetFlags targetFlags);
    // public JetBrains.Annotations.ImplicitUseKindFlags get_UseKindFlags()
    // Offset: 0x19455D0
    JetBrains::Annotations::ImplicitUseKindFlags get_UseKindFlags();
    // private System.Void set_UseKindFlags(JetBrains.Annotations.ImplicitUseKindFlags value)
    // Offset: 0x19455D8
    void set_UseKindFlags(JetBrains::Annotations::ImplicitUseKindFlags value);
    // public JetBrains.Annotations.ImplicitUseTargetFlags get_TargetFlags()
    // Offset: 0x19455E0
    JetBrains::Annotations::ImplicitUseTargetFlags get_TargetFlags();
    // private System.Void set_TargetFlags(JetBrains.Annotations.ImplicitUseTargetFlags value)
    // Offset: 0x19455E8
    void set_TargetFlags(JetBrains::Annotations::ImplicitUseTargetFlags value);
    // public System.Void .ctor()
    // Offset: 0x1945508
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    static MeansImplicitUseAttribute* New_ctor();
  }; // JetBrains.Annotations.MeansImplicitUseAttribute
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::MeansImplicitUseAttribute*, "JetBrains.Annotations", "MeansImplicitUseAttribute");
#pragma pack(pop)