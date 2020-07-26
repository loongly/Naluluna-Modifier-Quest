// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:22 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OnlineServices
namespace OnlineServices {
  // Skipping declaration: OnlineServicesAvailability because it is already included!
}
// Completed forward declares
// Type namespace: OnlineServices
namespace OnlineServices {
  // Autogenerated type: OnlineServices.PlatformServicesAvailabilityInfo
  class PlatformServicesAvailabilityInfo : public ::Il2CppObject {
    public:
    // Nested type: OnlineServices::PlatformServicesAvailabilityInfo::OnlineServicesAvailability
    struct OnlineServicesAvailability;
    // Autogenerated type: OnlineServices.PlatformServicesAvailabilityInfo/OnlineServicesAvailability
    struct OnlineServicesAvailability : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public OnlineServices.PlatformServicesAvailabilityInfo/OnlineServicesAvailability Available
      static constexpr const int Available = 0;
      // Get static field: static public OnlineServices.PlatformServicesAvailabilityInfo/OnlineServicesAvailability Available
      static OnlineServices::PlatformServicesAvailabilityInfo::OnlineServicesAvailability _get_Available();
      // Set static field: static public OnlineServices.PlatformServicesAvailabilityInfo/OnlineServicesAvailability Available
      static void _set_Available(OnlineServices::PlatformServicesAvailabilityInfo::OnlineServicesAvailability value);
      // static field const value: static public OnlineServices.PlatformServicesAvailabilityInfo/OnlineServicesAvailability Unavailable
      static constexpr const int Unavailable = 1;
      // Get static field: static public OnlineServices.PlatformServicesAvailabilityInfo/OnlineServicesAvailability Unavailable
      static OnlineServices::PlatformServicesAvailabilityInfo::OnlineServicesAvailability _get_Unavailable();
      // Set static field: static public OnlineServices.PlatformServicesAvailabilityInfo/OnlineServicesAvailability Unavailable
      static void _set_Unavailable(OnlineServices::PlatformServicesAvailabilityInfo::OnlineServicesAvailability value);
      // Creating value type constructor for type: OnlineServicesAvailability
      OnlineServicesAvailability(int value_ = {}) : value{value_} {}
    }; // OnlineServices.PlatformServicesAvailabilityInfo/OnlineServicesAvailability
    // public readonly OnlineServices.PlatformServicesAvailabilityInfo/OnlineServicesAvailability availability
    // Offset: 0x10
    OnlineServices::PlatformServicesAvailabilityInfo::OnlineServicesAvailability availability;
    // public readonly System.String localizedMessage
    // Offset: 0x18
    ::Il2CppString* localizedMessage;
    // private System.Void .ctor(OnlineServices.PlatformServicesAvailabilityInfo/OnlineServicesAvailability availability, System.String localizedMessage)
    // Offset: 0xBB94D0
    static PlatformServicesAvailabilityInfo* New_ctor(OnlineServices::PlatformServicesAvailabilityInfo::OnlineServicesAvailability availability, ::Il2CppString* localizedMessage);
    // static public OnlineServices.PlatformServicesAvailabilityInfo get_everythingOK()
    // Offset: 0xBB9400
    static OnlineServices::PlatformServicesAvailabilityInfo* get_everythingOK();
    // static public OnlineServices.PlatformServicesAvailabilityInfo get_onlineServicesUnavailableError()
    // Offset: 0xBB9514
    static OnlineServices::PlatformServicesAvailabilityInfo* get_onlineServicesUnavailableError();
  }; // OnlineServices.PlatformServicesAvailabilityInfo
}
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::PlatformServicesAvailabilityInfo*, "OnlineServices", "PlatformServicesAvailabilityInfo");
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::PlatformServicesAvailabilityInfo::OnlineServicesAvailability, "OnlineServices", "PlatformServicesAvailabilityInfo/OnlineServicesAvailability");
#pragma pack(pop)