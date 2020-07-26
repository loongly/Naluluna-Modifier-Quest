// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:33 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Playables.IPlayableOutput
#include "UnityEngine/Playables/IPlayableOutput.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Playables.PlayableOutputHandle
#include "UnityEngine/Playables/PlayableOutputHandle.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Autogenerated type: UnityEngine.Playables.PlayableOutput
  struct PlayableOutput : public System::ValueType, public UnityEngine::Playables::IPlayableOutput, public System::IEquatable_1<UnityEngine::Playables::PlayableOutput> {
    public:
    // private UnityEngine.Playables.PlayableOutputHandle m_Handle
    // Offset: 0x0
    UnityEngine::Playables::PlayableOutputHandle m_Handle;
    // Get static field: static private readonly UnityEngine.Playables.PlayableOutput m_NullPlayableOutput
    static UnityEngine::Playables::PlayableOutput _get_m_NullPlayableOutput();
    // Set static field: static private readonly UnityEngine.Playables.PlayableOutput m_NullPlayableOutput
    static void _set_m_NullPlayableOutput(UnityEngine::Playables::PlayableOutput value);
    // Creating value type constructor for type: PlayableOutput
    PlayableOutput(UnityEngine::Playables::PlayableOutputHandle m_Handle_ = {}) : m_Handle{m_Handle_} {}
    // static public UnityEngine.Playables.PlayableOutput get_Null()
    // Offset: 0x1400ED4
    static UnityEngine::Playables::PlayableOutput get_Null();
    // System.Void .ctor(UnityEngine.Playables.PlayableOutputHandle handle)
    // Offset: 0xA45310
    static PlayableOutput* New_ctor(UnityEngine::Playables::PlayableOutputHandle handle);
    // public System.Boolean IsPlayableOutputOfType()
    // Offset: 0xA2E414
    template<class T>
    bool IsPlayableOutputOfType() {
      static_assert(std::is_convertible_v<T, UnityEngine::Playables::IPlayableOutput*> && std::is_convertible_v<T, System::ValueType*>);
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<bool>(*this, "IsPlayableOutputOfType", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
    }
    // static private System.Void .cctor()
    // Offset: 0x14030CC
    static void _cctor();
    // public UnityEngine.Playables.PlayableOutputHandle GetHandle()
    // Offset: 0xA45318
    // Implemented from: UnityEngine.Playables.IPlayableOutput
    // Base method: UnityEngine.Playables.PlayableOutputHandle IPlayableOutput::GetHandle()
    UnityEngine::Playables::PlayableOutputHandle GetHandle();
    // public System.Boolean Equals(UnityEngine.Playables.PlayableOutput other)
    // Offset: 0xA45324
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable`1::Equals(UnityEngine.Playables.PlayableOutput other)
    bool Equals(UnityEngine::Playables::PlayableOutput other);
  }; // UnityEngine.Playables.PlayableOutput
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::PlayableOutput, "UnityEngine.Playables", "PlayableOutput");
#pragma pack(pop)