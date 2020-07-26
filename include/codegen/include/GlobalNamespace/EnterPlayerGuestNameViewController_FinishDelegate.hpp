// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:19 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: EnterPlayerGuestNameViewController
#include "GlobalNamespace/EnterPlayerGuestNameViewController.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: EnterPlayerGuestNameViewController/FinishDelegate
  class EnterPlayerGuestNameViewController::FinishDelegate : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xBD4AB4
    static EnterPlayerGuestNameViewController::FinishDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(EnterPlayerGuestNameViewController viewController, System.String playerName)
    // Offset: 0xBD4564
    void Invoke(GlobalNamespace::EnterPlayerGuestNameViewController* viewController, ::Il2CppString* playerName);
    // public System.IAsyncResult BeginInvoke(EnterPlayerGuestNameViewController viewController, System.String playerName, System.AsyncCallback callback, System.Object object)
    // Offset: 0xBD4AC8
    System::IAsyncResult* BeginInvoke(GlobalNamespace::EnterPlayerGuestNameViewController* viewController, ::Il2CppString* playerName, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0xBD4AF8
    void EndInvoke(System::IAsyncResult* result);
  }; // EnterPlayerGuestNameViewController/FinishDelegate
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnterPlayerGuestNameViewController::FinishDelegate*, "", "EnterPlayerGuestNameViewController/FinishDelegate");
#pragma pack(pop)