// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:32 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.IO.Stream/SynchronousAsyncResult
#include "System/IO/Stream_SynchronousAsyncResult.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Autogenerated type: System.IO.Stream/SynchronousAsyncResult/<>c
  class Stream::SynchronousAsyncResult::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.IO.Stream/SynchronousAsyncResult/<>c <>9
    static System::IO::Stream::SynchronousAsyncResult::$$c* _get_$$9();
    // Set static field: static public readonly System.IO.Stream/SynchronousAsyncResult/<>c <>9
    static void _set_$$9(System::IO::Stream::SynchronousAsyncResult::$$c* value);
    // Get static field: static public System.Func`1<System.Threading.ManualResetEvent> <>9__12_0
    static System::Func_1<System::Threading::ManualResetEvent*>* _get_$$9__12_0();
    // Set static field: static public System.Func`1<System.Threading.ManualResetEvent> <>9__12_0
    static void _set_$$9__12_0(System::Func_1<System::Threading::ManualResetEvent*>* value);
    // static private System.Void .cctor()
    // Offset: 0xFF3658
    static void _cctor();
    // System.Threading.ManualResetEvent <get_AsyncWaitHandle>b__12_0()
    // Offset: 0xFF36C8
    System::Threading::ManualResetEvent* $get_AsyncWaitHandle$b__12_0();
    // public System.Void .ctor()
    // Offset: 0xFF36C0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Stream::SynchronousAsyncResult::$$c* New_ctor();
  }; // System.IO.Stream/SynchronousAsyncResult/<>c
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::Stream::SynchronousAsyncResult::$$c*, "System.IO", "Stream/SynchronousAsyncResult/<>c");
#pragma pack(pop)