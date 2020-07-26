// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:16 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Analytics
namespace UnityEngine::Analytics {
}
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: UnityEngine.Analytics
namespace UnityEngine::Analytics {
  // Autogenerated type: UnityEngine.Analytics.DataPrivacy
  class DataPrivacy : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::Analytics::DataPrivacy::UserPostData
    struct UserPostData;
    // Nested type: UnityEngine::Analytics::DataPrivacy::TokenData
    struct TokenData;
    // Nested type: UnityEngine::Analytics::DataPrivacy::$$c__DisplayClass9_0
    class $$c__DisplayClass9_0;
    // static UnityEngine.Analytics.DataPrivacy/UserPostData GetUserData()
    // Offset: 0x19608C8
    static UnityEngine::Analytics::DataPrivacy::UserPostData GetUserData();
    // static private System.String GetUserAgent()
    // Offset: 0x1960A60
    static ::Il2CppString* GetUserAgent();
    // static private System.String getErrorString(UnityEngine.Networking.UnityWebRequest www)
    // Offset: 0x1960CD0
    static ::Il2CppString* getErrorString(UnityEngine::Networking::UnityWebRequest* www);
    // static public System.Void FetchPrivacyUrl(System.Action`1<System.String> success, System.Action`1<System.String> failure)
    // Offset: 0x1960D98
    static void FetchPrivacyUrl(System::Action_1<::Il2CppString*>* success, System::Action_1<::Il2CppString*>* failure);
  }; // UnityEngine.Analytics.DataPrivacy
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Analytics::DataPrivacy*, "UnityEngine.Analytics", "DataPrivacy");
#pragma pack(pop)