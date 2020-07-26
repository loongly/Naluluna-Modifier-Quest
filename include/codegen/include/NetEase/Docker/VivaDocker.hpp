// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:42 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: NetEase.Docker.InitializeData
#include "NetEase/Docker/InitializeData.hpp"
// Including type: NetEase.Docker.LoginData
#include "NetEase/Docker/LoginData.hpp"
// Including type: NetEase.Docker.LogoutData
#include "NetEase/Docker/LogoutData.hpp"
// Including type: NetEase.Docker.ReceivedHighscoreData
#include "NetEase/Docker/ReceivedHighscoreData.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NetEase::Docker
namespace NetEase::Docker {
  // Forward declaring type: IDock
  class IDock;
  // Forward declaring type: UploadScoreData
  struct UploadScoreData;
  // Forward declaring type: RequestHighscoreData
  struct RequestHighscoreData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: NetEase.Docker
namespace NetEase::Docker {
  // Autogenerated type: NetEase.Docker.VivaDocker
  class VivaDocker : public ::Il2CppObject {
    public:
    // Get static field: static private NetEase.Docker.IDock _activeDock
    static NetEase::Docker::IDock* _get__activeDock();
    // Set static field: static private NetEase.Docker.IDock _activeDock
    static void _set__activeDock(NetEase::Docker::IDock* value);
    // static public System.Void SetInitializeCallback(System.Action`1<NetEase.Docker.InitializeData> callbackAction)
    // Offset: 0x195CA8C
    static void SetInitializeCallback(System::Action_1<NetEase::Docker::InitializeData>* callbackAction);
    // static public System.Void Initialize()
    // Offset: 0x195CB68
    static void Initialize();
    // static public System.Void SetLoginCallback(System.Action`1<NetEase.Docker.LoginData> callbackAction)
    // Offset: 0x195CC40
    static void SetLoginCallback(System::Action_1<NetEase::Docker::LoginData>* callbackAction);
    // static public System.Void Login()
    // Offset: 0x195CD20
    static void Login();
    // static public System.Void SetLogoutCallback(System.Action`1<NetEase.Docker.LogoutData> callbackAction)
    // Offset: 0x195CDF8
    static void SetLogoutCallback(System::Action_1<NetEase::Docker::LogoutData>* callbackAction);
    // static public System.Void Logout()
    // Offset: 0x195CED8
    static void Logout();
    // static public System.Void UploadScore(NetEase.Docker.UploadScoreData scoreData)
    // Offset: 0x195CFB0
    static void UploadScore(NetEase::Docker::UploadScoreData scoreData);
    // static public System.Boolean WillProvideHighscore()
    // Offset: 0x195D0D0
    static bool WillProvideHighscore();
    // static public System.Void SetHighscoreReceivedCallback(System.Action`1<NetEase.Docker.ReceivedHighscoreData> callbackAction)
    // Offset: 0x195D1A8
    static void SetHighscoreReceivedCallback(System::Action_1<NetEase::Docker::ReceivedHighscoreData>* callbackAction);
    // static public System.Void RequestHighscoreList(NetEase.Docker.RequestHighscoreData highscoreRequest)
    // Offset: 0x195D288
    static void RequestHighscoreList(NetEase::Docker::RequestHighscoreData highscoreRequest);
    // static public System.Void UpdateLoop()
    // Offset: 0x195D378
    static void UpdateLoop();
    // static private System.Void .cctor()
    // Offset: 0x195D450
    static void _cctor();
  }; // NetEase.Docker.VivaDocker
}
DEFINE_IL2CPP_ARG_TYPE(NetEase::Docker::VivaDocker*, "NetEase.Docker", "VivaDocker");
#pragma pack(pop)