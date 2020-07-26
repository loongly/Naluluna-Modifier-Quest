// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:43 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.EventArgs
#include "System/EventArgs.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: EventSource
  class EventSource;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.EventSourceCreatedEventArgs
  class EventSourceCreatedEventArgs : public System::EventArgs {
    public:
    // private System.Diagnostics.Tracing.EventSource <EventSource>k__BackingField
    // Offset: 0x10
    System::Diagnostics::Tracing::EventSource* EventSource;
    // System.Void set_EventSource(System.Diagnostics.Tracing.EventSource value)
    // Offset: 0xD7EE0C
    void set_EventSource(System::Diagnostics::Tracing::EventSource* value);
    // public System.Void .ctor()
    // Offset: 0xD7EE14
    // Implemented from: System.EventArgs
    // Base method: System.Void EventArgs::.ctor()
    // Base method: System.Void Object::.ctor()
    static EventSourceCreatedEventArgs* New_ctor();
  }; // System.Diagnostics.Tracing.EventSourceCreatedEventArgs
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::EventSourceCreatedEventArgs*, "System.Diagnostics.Tracing", "EventSourceCreatedEventArgs");
#pragma pack(pop)