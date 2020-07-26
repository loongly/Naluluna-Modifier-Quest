// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:33 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: IPlayableBehaviour
  class IPlayableBehaviour;
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: PlayState
  struct PlayState;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
  // Forward declaring type: PlayableTraversalMode
  struct PlayableTraversalMode;
  // Forward declaring type: DirectorWrapMode
  struct DirectorWrapMode;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Autogenerated type: UnityEngine.Playables.PlayableHandle
  struct PlayableHandle : public System::ValueType, public System::IEquatable_1<UnityEngine::Playables::PlayableHandle> {
    public:
    // System.IntPtr m_Handle
    // Offset: 0x0
    System::IntPtr m_Handle;
    // System.UInt32 m_Version
    // Offset: 0x8
    uint m_Version;
    // Get static field: static private readonly UnityEngine.Playables.PlayableHandle m_Null
    static UnityEngine::Playables::PlayableHandle _get_m_Null();
    // Set static field: static private readonly UnityEngine.Playables.PlayableHandle m_Null
    static void _set_m_Null(UnityEngine::Playables::PlayableHandle value);
    // Creating value type constructor for type: PlayableHandle
    PlayableHandle(System::IntPtr m_Handle_ = {}, uint m_Version_ = {}) : m_Handle{m_Handle_}, m_Version{m_Version_} {}
    // T GetObject()
    // Offset: 0xA2B0B0
    template<class T>
    T GetObject() {
      static_assert(std::is_convertible_v<T, UnityEngine::Playables::IPlayableBehaviour*>);
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<T>(*this, "GetObject", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
    }
    // System.Boolean IsPlayableOfType()
    // Offset: 0xA2E3B4
    template<class T>
    bool IsPlayableOfType() {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<bool>(*this, "IsPlayableOfType", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
    }
    // static public UnityEngine.Playables.PlayableHandle get_Null()
    // Offset: 0x1400914
    static UnityEngine::Playables::PlayableHandle get_Null();
    // UnityEngine.Playables.Playable GetInput(System.Int32 inputPort)
    // Offset: 0xA45130
    UnityEngine::Playables::Playable GetInput(int inputPort);
    // System.Boolean SetInputWeight(System.Int32 inputIndex, System.Single weight)
    // Offset: 0xA45138
    bool SetInputWeight(int inputIndex, float weight);
    // System.Single GetInputWeight(System.Int32 inputIndex)
    // Offset: 0xA45184
    float GetInputWeight(int inputIndex);
    // static System.Boolean CompareVersion(UnityEngine.Playables.PlayableHandle lhs, UnityEngine.Playables.PlayableHandle rhs)
    // Offset: 0x14018D8
    static bool CompareVersion(UnityEngine::Playables::PlayableHandle lhs, UnityEngine::Playables::PlayableHandle rhs);
    // System.Boolean CheckInputBounds(System.Int32 inputIndex)
    // Offset: 0xA45204
    bool CheckInputBounds(int inputIndex);
    // System.Boolean CheckInputBounds(System.Int32 inputIndex, System.Boolean acceptAny)
    // Offset: 0xA45224
    bool CheckInputBounds(int inputIndex, bool acceptAny);
    // System.Boolean IsValid()
    // Offset: 0xA45244
    bool IsValid();
    // System.Type GetPlayableType()
    // Offset: 0xA4524C
    System::Type* GetPlayableType();
    // System.Void SetScriptInstance(System.Object scriptInstance)
    // Offset: 0xA45254
    void SetScriptInstance(::Il2CppObject* scriptInstance);
    // UnityEngine.Playables.PlayState GetPlayState()
    // Offset: 0xA4525C
    UnityEngine::Playables::PlayState GetPlayState();
    // System.Void Play()
    // Offset: 0xA45264
    void Play();
    // System.Void Pause()
    // Offset: 0xA4526C
    void Pause();
    // System.Void SetSpeed(System.Double value)
    // Offset: 0xA45274
    void SetSpeed(double value);
    // System.Double GetTime()
    // Offset: 0xA4527C
    double GetTime();
    // System.Void SetTime(System.Double value)
    // Offset: 0xA45284
    void SetTime(double value);
    // System.Boolean IsDone()
    // Offset: 0xA4528C
    bool IsDone();
    // System.Double GetDuration()
    // Offset: 0xA45294
    double GetDuration();
    // System.Void SetDuration(System.Double value)
    // Offset: 0xA4529C
    void SetDuration(double value);
    // System.Void SetPropagateSetTime(System.Boolean value)
    // Offset: 0xA452A4
    void SetPropagateSetTime(bool value);
    // UnityEngine.Playables.PlayableGraph GetGraph()
    // Offset: 0xA452B0
    UnityEngine::Playables::PlayableGraph GetGraph();
    // System.Int32 GetInputCount()
    // Offset: 0xA452B8
    int GetInputCount();
    // System.Void SetInputCount(System.Int32 value)
    // Offset: 0xA452C0
    void SetInputCount(int value);
    // System.Void SetInputWeight(UnityEngine.Playables.PlayableHandle input, System.Single weight)
    // Offset: 0xA452C8
    void SetInputWeight(UnityEngine::Playables::PlayableHandle input, float weight);
    // System.Double GetPreviousTime()
    // Offset: 0xA452D0
    double GetPreviousTime();
    // System.Void SetTraversalMode(UnityEngine.Playables.PlayableTraversalMode mode)
    // Offset: 0xA452D8
    void SetTraversalMode(UnityEngine::Playables::PlayableTraversalMode mode);
    // UnityEngine.Playables.DirectorWrapMode GetTimeWrapMode()
    // Offset: 0xA452E0
    UnityEngine::Playables::DirectorWrapMode GetTimeWrapMode();
    // System.Void SetTimeWrapMode(UnityEngine.Playables.DirectorWrapMode mode)
    // Offset: 0xA452E8
    void SetTimeWrapMode(UnityEngine::Playables::DirectorWrapMode mode);
    // private System.Object GetScriptInstance()
    // Offset: 0xA452F0
    ::Il2CppObject* GetScriptInstance();
    // private UnityEngine.Playables.PlayableHandle GetInputHandle(System.Int32 index)
    // Offset: 0xA452F8
    UnityEngine::Playables::PlayableHandle GetInputHandle(int index);
    // private System.Void SetInputWeightFromIndex(System.Int32 index, System.Single weight)
    // Offset: 0xA45300
    void SetInputWeightFromIndex(int index, float weight);
    // private System.Single GetInputWeightFromIndex(System.Int32 index)
    // Offset: 0xA45308
    float GetInputWeightFromIndex(int index);
    // static private System.Void .cctor()
    // Offset: 0x1402F4C
    static void _cctor();
    // static private System.Boolean IsValid_Injected(UnityEngine.Playables.PlayableHandle _unity_self)
    // Offset: 0x1401D8C
    static bool IsValid_Injected(UnityEngine::Playables::PlayableHandle& _unity_self);
    // static private System.Type GetPlayableType_Injected(UnityEngine.Playables.PlayableHandle _unity_self)
    // Offset: 0x1401DCC
    static System::Type* GetPlayableType_Injected(UnityEngine::Playables::PlayableHandle& _unity_self);
    // static private System.Void SetScriptInstance_Injected(UnityEngine.Playables.PlayableHandle _unity_self, System.Object scriptInstance)
    // Offset: 0x1401EA0
    static void SetScriptInstance_Injected(UnityEngine::Playables::PlayableHandle& _unity_self, ::Il2CppObject* scriptInstance);
    // static private UnityEngine.Playables.PlayState GetPlayState_Injected(UnityEngine.Playables.PlayableHandle _unity_self)
    // Offset: 0x1401F74
    static UnityEngine::Playables::PlayState GetPlayState_Injected(UnityEngine::Playables::PlayableHandle& _unity_self);
    // static private System.Void Play_Injected(UnityEngine.Playables.PlayableHandle _unity_self)
    // Offset: 0x1402038
    static void Play_Injected(UnityEngine::Playables::PlayableHandle& _unity_self);
    // static private System.Void Pause_Injected(UnityEngine.Playables.PlayableHandle _unity_self)
    // Offset: 0x14020FC
    static void Pause_Injected(UnityEngine::Playables::PlayableHandle& _unity_self);
    // static private System.Void SetSpeed_Injected(UnityEngine.Playables.PlayableHandle _unity_self, System.Double value)
    // Offset: 0x14021D0
    static void SetSpeed_Injected(UnityEngine::Playables::PlayableHandle& _unity_self, double value);
    // static private System.Double GetTime_Injected(UnityEngine.Playables.PlayableHandle _unity_self)
    // Offset: 0x14022A4
    static double GetTime_Injected(UnityEngine::Playables::PlayableHandle& _unity_self);
    // static private System.Void SetTime_Injected(UnityEngine.Playables.PlayableHandle _unity_self, System.Double value)
    // Offset: 0x1402378
    static void SetTime_Injected(UnityEngine::Playables::PlayableHandle& _unity_self, double value);
    // static private System.Boolean IsDone_Injected(UnityEngine.Playables.PlayableHandle _unity_self)
    // Offset: 0x140244C
    static bool IsDone_Injected(UnityEngine::Playables::PlayableHandle& _unity_self);
    // static private System.Double GetDuration_Injected(UnityEngine.Playables.PlayableHandle _unity_self)
    // Offset: 0x1402510
    static double GetDuration_Injected(UnityEngine::Playables::PlayableHandle& _unity_self);
    // static private System.Void SetDuration_Injected(UnityEngine.Playables.PlayableHandle _unity_self, System.Double value)
    // Offset: 0x14025E4
    static void SetDuration_Injected(UnityEngine::Playables::PlayableHandle& _unity_self, double value);
    // static private System.Void SetPropagateSetTime_Injected(UnityEngine.Playables.PlayableHandle _unity_self, System.Boolean value)
    // Offset: 0x14026C8
    static void SetPropagateSetTime_Injected(UnityEngine::Playables::PlayableHandle& _unity_self, bool value);
    // static private System.Void GetGraph_Injected(UnityEngine.Playables.PlayableHandle _unity_self, UnityEngine.Playables.PlayableGraph ret)
    // Offset: 0x14027B4
    static void GetGraph_Injected(UnityEngine::Playables::PlayableHandle& _unity_self, UnityEngine::Playables::PlayableGraph& ret);
    // static private System.Int32 GetInputCount_Injected(UnityEngine.Playables.PlayableHandle _unity_self)
    // Offset: 0x1402804
    static int GetInputCount_Injected(UnityEngine::Playables::PlayableHandle& _unity_self);
    // static private System.Void SetInputCount_Injected(UnityEngine.Playables.PlayableHandle _unity_self, System.Int32 value)
    // Offset: 0x14028D8
    static void SetInputCount_Injected(UnityEngine::Playables::PlayableHandle& _unity_self, int value);
    // static private System.Void SetInputWeight_Injected(UnityEngine.Playables.PlayableHandle _unity_self, UnityEngine.Playables.PlayableHandle input, System.Single weight)
    // Offset: 0x14029D0
    static void SetInputWeight_Injected(UnityEngine::Playables::PlayableHandle& _unity_self, UnityEngine::Playables::PlayableHandle& input, float weight);
    // static private System.Double GetPreviousTime_Injected(UnityEngine.Playables.PlayableHandle _unity_self)
    // Offset: 0x1402AB4
    static double GetPreviousTime_Injected(UnityEngine::Playables::PlayableHandle& _unity_self);
    // static private System.Void SetTraversalMode_Injected(UnityEngine.Playables.PlayableHandle _unity_self, UnityEngine.Playables.PlayableTraversalMode mode)
    // Offset: 0x1402B88
    static void SetTraversalMode_Injected(UnityEngine::Playables::PlayableHandle& _unity_self, UnityEngine::Playables::PlayableTraversalMode mode);
    // static private UnityEngine.Playables.DirectorWrapMode GetTimeWrapMode_Injected(UnityEngine.Playables.PlayableHandle _unity_self)
    // Offset: 0x1402C5C
    static UnityEngine::Playables::DirectorWrapMode GetTimeWrapMode_Injected(UnityEngine::Playables::PlayableHandle& _unity_self);
    // static private System.Void SetTimeWrapMode_Injected(UnityEngine.Playables.PlayableHandle _unity_self, UnityEngine.Playables.DirectorWrapMode mode)
    // Offset: 0x1402D30
    static void SetTimeWrapMode_Injected(UnityEngine::Playables::PlayableHandle& _unity_self, UnityEngine::Playables::DirectorWrapMode mode);
    // static private System.Object GetScriptInstance_Injected(UnityEngine.Playables.PlayableHandle _unity_self)
    // Offset: 0x1402E04
    static ::Il2CppObject* GetScriptInstance_Injected(UnityEngine::Playables::PlayableHandle& _unity_self);
    // static private System.Void GetInputHandle_Injected(UnityEngine.Playables.PlayableHandle _unity_self, System.Int32 index, UnityEngine.Playables.PlayableHandle ret)
    // Offset: 0x1402E44
    static void GetInputHandle_Injected(UnityEngine::Playables::PlayableHandle& _unity_self, int index, UnityEngine::Playables::PlayableHandle& ret);
    // static private System.Void SetInputWeightFromIndex_Injected(UnityEngine.Playables.PlayableHandle _unity_self, System.Int32 index, System.Single weight)
    // Offset: 0x1402E9C
    static void SetInputWeightFromIndex_Injected(UnityEngine::Playables::PlayableHandle& _unity_self, int index, float weight);
    // static private System.Single GetInputWeightFromIndex_Injected(UnityEngine.Playables.PlayableHandle _unity_self, System.Int32 index)
    // Offset: 0x1402EFC
    static float GetInputWeightFromIndex_Injected(UnityEngine::Playables::PlayableHandle& _unity_self, int index);
    // public override System.Boolean Equals(System.Object p)
    // Offset: 0xA451B8
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object p)
    bool Equals(::Il2CppObject* p);
    // public System.Boolean Equals(UnityEngine.Playables.PlayableHandle other)
    // Offset: 0xA451C0
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable`1::Equals(UnityEngine.Playables.PlayableHandle other)
    bool Equals(UnityEngine::Playables::PlayableHandle other);
    // public override System.Int32 GetHashCode()
    // Offset: 0xA451C8
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.Playables.PlayableHandle
  // static public System.Boolean op_Equality(UnityEngine.Playables.PlayableHandle x, UnityEngine.Playables.PlayableHandle y)
  // Offset: 0x1400808
  bool operator ==(const UnityEngine::Playables::PlayableHandle& x, const UnityEngine::Playables::PlayableHandle& y);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::PlayableHandle, "UnityEngine.Playables", "PlayableHandle");
#pragma pack(pop)