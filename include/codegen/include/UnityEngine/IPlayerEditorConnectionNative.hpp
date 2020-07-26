// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:27 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Guid
  struct Guid;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.IPlayerEditorConnectionNative
  class IPlayerEditorConnectionNative {
    public:
    // public System.Void Initialize()
    // Offset: 0xFFFFFFFF
    void UnityEngine_IPlayerEditorConnectionNative_Initialize();
    // public System.Void DisconnectAll()
    // Offset: 0xFFFFFFFF
    void UnityEngine_IPlayerEditorConnectionNative_DisconnectAll();
    // public System.Void SendMessage(System.Guid messageId, System.Byte[] data, System.Int32 playerId)
    // Offset: 0xFFFFFFFF
    void UnityEngine_IPlayerEditorConnectionNative_SendMessage(System::Guid messageId, ::Array<uint8_t>* data, int playerId);
    // public System.Boolean TrySendMessage(System.Guid messageId, System.Byte[] data, System.Int32 playerId)
    // Offset: 0xFFFFFFFF
    bool UnityEngine_IPlayerEditorConnectionNative_TrySendMessage(System::Guid messageId, ::Array<uint8_t>* data, int playerId);
    // public System.Void Poll()
    // Offset: 0xFFFFFFFF
    void UnityEngine_IPlayerEditorConnectionNative_Poll();
    // public System.Void RegisterInternal(System.Guid messageId)
    // Offset: 0xFFFFFFFF
    void UnityEngine_IPlayerEditorConnectionNative_RegisterInternal(System::Guid messageId);
    // public System.Void UnregisterInternal(System.Guid messageId)
    // Offset: 0xFFFFFFFF
    void UnityEngine_IPlayerEditorConnectionNative_UnregisterInternal(System::Guid messageId);
    // public System.Boolean IsConnected()
    // Offset: 0xFFFFFFFF
    bool UnityEngine_IPlayerEditorConnectionNative_IsConnected();
  }; // UnityEngine.IPlayerEditorConnectionNative
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::IPlayerEditorConnectionNative*, "UnityEngine", "IPlayerEditorConnectionNative");
#pragma pack(pop)