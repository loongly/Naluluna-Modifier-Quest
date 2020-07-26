// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:13 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
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
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: RenamedEventArgs
  class RenamedEventArgs;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Autogenerated type: System.IO.RenamedEventHandler
  class RenamedEventHandler : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xF51598
    static RenamedEventHandler* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.Object sender, System.IO.RenamedEventArgs e)
    // Offset: 0xF515AC
    void Invoke(::Il2CppObject* sender, System::IO::RenamedEventArgs* e);
    // public System.IAsyncResult BeginInvoke(System.Object sender, System.IO.RenamedEventArgs e, System.AsyncCallback callback, System.Object object)
    // Offset: 0xF51204
    System::IAsyncResult* BeginInvoke(::Il2CppObject* sender, System::IO::RenamedEventArgs* e, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0xF519B0
    void EndInvoke(System::IAsyncResult* result);
  }; // System.IO.RenamedEventHandler
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::RenamedEventHandler*, "System.IO", "RenamedEventHandler");
#pragma pack(pop)