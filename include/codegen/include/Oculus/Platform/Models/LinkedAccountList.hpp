// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:03 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Oculus.Platform.Models.DeserializableList`1
#include "Oculus/Platform/Models/DeserializableList_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: LinkedAccount
  class LinkedAccount;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Autogenerated type: Oculus.Platform.Models.LinkedAccountList
  class LinkedAccountList : public Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::LinkedAccount*> {
    public:
    // public System.Void .ctor(System.IntPtr a)
    // Offset: 0xE8DAB0
    static LinkedAccountList* New_ctor(System::IntPtr a);
  }; // Oculus.Platform.Models.LinkedAccountList
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::LinkedAccountList*, "Oculus.Platform.Models", "LinkedAccountList");
#pragma pack(pop)