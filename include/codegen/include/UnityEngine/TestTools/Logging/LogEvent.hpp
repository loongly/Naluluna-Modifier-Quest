// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:37 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.LogType
#include "UnityEngine/LogType.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine.TestTools.Logging
namespace UnityEngine::TestTools::Logging {
  // Autogenerated type: UnityEngine.TestTools.Logging.LogEvent
  class LogEvent : public ::Il2CppObject {
    public:
    // private System.String <Message>k__BackingField
    // Offset: 0x10
    ::Il2CppString* Message;
    // private System.String <StackTrace>k__BackingField
    // Offset: 0x18
    ::Il2CppString* StackTrace;
    // private UnityEngine.LogType <LogType>k__BackingField
    // Offset: 0x20
    UnityEngine::LogType LogType;
    // private System.Boolean <IsHandled>k__BackingField
    // Offset: 0x24
    bool IsHandled;
    // public System.String get_Message()
    // Offset: 0xE2AA00
    ::Il2CppString* get_Message();
    // public System.Void set_Message(System.String value)
    // Offset: 0xE2AA08
    void set_Message(::Il2CppString* value);
    // public System.String get_StackTrace()
    // Offset: 0xE2AA10
    ::Il2CppString* get_StackTrace();
    // public System.Void set_StackTrace(System.String value)
    // Offset: 0xE2AA18
    void set_StackTrace(::Il2CppString* value);
    // public UnityEngine.LogType get_LogType()
    // Offset: 0xE2AA20
    UnityEngine::LogType get_LogType();
    // public System.Void set_LogType(UnityEngine.LogType value)
    // Offset: 0xE2AA28
    void set_LogType(UnityEngine::LogType value);
    // public System.Boolean get_IsHandled()
    // Offset: 0xE2AA30
    bool get_IsHandled();
    // public System.Void set_IsHandled(System.Boolean value)
    // Offset: 0xE2AA38
    void set_IsHandled(bool value);
    // public override System.String ToString()
    // Offset: 0xE2AA44
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public System.Void .ctor()
    // Offset: 0xE2AAC8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static LogEvent* New_ctor();
  }; // UnityEngine.TestTools.Logging.LogEvent
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::Logging::LogEvent*, "UnityEngine.TestTools.Logging", "LogEvent");
#pragma pack(pop)