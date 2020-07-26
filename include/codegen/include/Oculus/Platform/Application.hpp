// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:02 PM
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
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
  // Forward declaring type: ApplicationOptions
  class ApplicationOptions;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: ApplicationVersion
  class ApplicationVersion;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.Application
  class Application : public ::Il2CppObject {
    public:
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.ApplicationVersion> GetVersion()
    // Offset: 0x157DFCC
    static Oculus::Platform::Request_1<Oculus::Platform::Models::ApplicationVersion*>* GetVersion();
    // static public Oculus.Platform.Request`1<System.String> LaunchOtherApp(System.UInt64 appID, Oculus.Platform.ApplicationOptions deeplink_options)
    // Offset: 0x157E148
    static Oculus::Platform::Request_1<::Il2CppString*>* LaunchOtherApp(uint64_t appID, Oculus::Platform::ApplicationOptions* deeplink_options);
  }; // Oculus.Platform.Application
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Application*, "Oculus.Platform", "Application");
#pragma pack(pop)