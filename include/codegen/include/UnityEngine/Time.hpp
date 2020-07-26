// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:29 PM
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
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Time
  class Time : public ::Il2CppObject {
    public:
    // static public System.Single get_time()
    // Offset: 0x137C004
    static float get_time();
    // static public System.Single get_timeSinceLevelLoad()
    // Offset: 0x137C038
    static float get_timeSinceLevelLoad();
    // static public System.Single get_deltaTime()
    // Offset: 0x137C06C
    static float get_deltaTime();
    // static public System.Single get_unscaledTime()
    // Offset: 0x137C0A0
    static float get_unscaledTime();
    // static public System.Single get_unscaledDeltaTime()
    // Offset: 0x137C0D4
    static float get_unscaledDeltaTime();
    // static public System.Single get_fixedDeltaTime()
    // Offset: 0x137C108
    static float get_fixedDeltaTime();
    // static public System.Void set_fixedDeltaTime(System.Single value)
    // Offset: 0x137C13C
    static void set_fixedDeltaTime(float value);
    // static public System.Single get_smoothDeltaTime()
    // Offset: 0x137C180
    static float get_smoothDeltaTime();
    // static public System.Single get_maximumParticleDeltaTime()
    // Offset: 0x137C1B4
    static float get_maximumParticleDeltaTime();
    // static public System.Single get_timeScale()
    // Offset: 0x137C1E8
    static float get_timeScale();
    // static public System.Void set_timeScale(System.Single value)
    // Offset: 0x137C21C
    static void set_timeScale(float value);
    // static public System.Int32 get_frameCount()
    // Offset: 0x137C260
    static int get_frameCount();
    // static public System.Single get_realtimeSinceStartup()
    // Offset: 0x137C294
    static float get_realtimeSinceStartup();
    // static public System.Single get_captureDeltaTime()
    // Offset: 0x137C2C8
    static float get_captureDeltaTime();
    // static public System.Void set_captureDeltaTime(System.Single value)
    // Offset: 0x137C2FC
    static void set_captureDeltaTime(float value);
    // static public System.Int32 get_captureFramerate()
    // Offset: 0x137C340
    static int get_captureFramerate();
    // static public System.Void set_captureFramerate(System.Int32 value)
    // Offset: 0x137C47C
    static void set_captureFramerate(int value);
  }; // UnityEngine.Time
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Time*, "UnityEngine", "Time");
#pragma pack(pop)