// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:36 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.TestRunner.TestLaunchers.RemoteTestResultData
#include "UnityEngine/TestRunner/TestLaunchers/RemoteTestResultData.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITestResult
  class ITestResult;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.TestLaunchers
namespace UnityEngine::TestRunner::TestLaunchers {
  // Autogenerated type: UnityEngine.TestRunner.TestLaunchers.RemoteTestResultData/<>c
  class RemoteTestResultData::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.TestRunner.TestLaunchers.RemoteTestResultData/<>c <>9
    static UnityEngine::TestRunner::TestLaunchers::RemoteTestResultData::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.TestRunner.TestLaunchers.RemoteTestResultData/<>c <>9
    static void _set_$$9(UnityEngine::TestRunner::TestLaunchers::RemoteTestResultData::$$c* value);
    // Get static field: static public System.Func`2<NUnit.Framework.Interfaces.ITestResult,System.String> <>9__19_0
    static System::Func_2<NUnit::Framework::Interfaces::ITestResult*, ::Il2CppString*>* _get_$$9__19_0();
    // Set static field: static public System.Func`2<NUnit.Framework.Interfaces.ITestResult,System.String> <>9__19_0
    static void _set_$$9__19_0(System::Func_2<NUnit::Framework::Interfaces::ITestResult*, ::Il2CppString*>* value);
    // static private System.Void .cctor()
    // Offset: 0xE260F8
    static void _cctor();
    // System.String <.ctor>b__19_0(NUnit.Framework.Interfaces.ITestResult child)
    // Offset: 0xE26168
    ::Il2CppString* $_ctor$b__19_0(NUnit::Framework::Interfaces::ITestResult* child);
    // public System.Void .ctor()
    // Offset: 0xE26160
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static RemoteTestResultData::$$c* New_ctor();
  }; // UnityEngine.TestRunner.TestLaunchers.RemoteTestResultData/<>c
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::TestLaunchers::RemoteTestResultData::$$c*, "UnityEngine.TestRunner.TestLaunchers", "RemoteTestResultData/<>c");
#pragma pack(pop)