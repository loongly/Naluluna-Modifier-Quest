// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:37 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.TestTools.Logging.LogScope
#include "UnityEngine/TestTools/Logging/LogScope.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
}
// Forward declaring namespace: UnityEngine::TestTools::Logging
namespace UnityEngine::TestTools::Logging {
  // Forward declaring type: LogEvent
  class LogEvent;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.Logging
namespace UnityEngine::TestTools::Logging {
  // Autogenerated type: UnityEngine.TestTools.Logging.LogScope/<>c
  class LogScope::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.TestTools.Logging.LogScope/<>c <>9
    static UnityEngine::TestTools::Logging::LogScope::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.TestTools.Logging.LogScope/<>c <>9
    static void _set_$$9(UnityEngine::TestTools::Logging::LogScope::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.TestTools.Logging.LogEvent,System.Boolean> <>9__53_0
    static System::Func_2<UnityEngine::TestTools::Logging::LogEvent*, bool>* _get_$$9__53_0();
    // Set static field: static public System.Func`2<UnityEngine.TestTools.Logging.LogEvent,System.Boolean> <>9__53_0
    static void _set_$$9__53_0(System::Func_2<UnityEngine::TestTools::Logging::LogEvent*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0xE2BB88
    static void _cctor();
    // System.Boolean <NoUnexpectedReceived>b__53_0(UnityEngine.TestTools.Logging.LogEvent x)
    // Offset: 0xE2BBF8
    bool $NoUnexpectedReceived$b__53_0(UnityEngine::TestTools::Logging::LogEvent* x);
    // public System.Void .ctor()
    // Offset: 0xE2BBF0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static LogScope::$$c* New_ctor();
  }; // UnityEngine.TestTools.Logging.LogScope/<>c
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::Logging::LogScope::$$c*, "UnityEngine.TestTools.Logging", "LogScope/<>c");
#pragma pack(pop)