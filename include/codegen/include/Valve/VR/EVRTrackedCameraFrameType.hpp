// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:10 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.EVRTrackedCameraFrameType
  struct EVRTrackedCameraFrameType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public Valve.VR.EVRTrackedCameraFrameType Distorted
    static constexpr const int Distorted = 0;
    // Get static field: static public Valve.VR.EVRTrackedCameraFrameType Distorted
    static Valve::VR::EVRTrackedCameraFrameType _get_Distorted();
    // Set static field: static public Valve.VR.EVRTrackedCameraFrameType Distorted
    static void _set_Distorted(Valve::VR::EVRTrackedCameraFrameType value);
    // static field const value: static public Valve.VR.EVRTrackedCameraFrameType Undistorted
    static constexpr const int Undistorted = 1;
    // Get static field: static public Valve.VR.EVRTrackedCameraFrameType Undistorted
    static Valve::VR::EVRTrackedCameraFrameType _get_Undistorted();
    // Set static field: static public Valve.VR.EVRTrackedCameraFrameType Undistorted
    static void _set_Undistorted(Valve::VR::EVRTrackedCameraFrameType value);
    // static field const value: static public Valve.VR.EVRTrackedCameraFrameType MaximumUndistorted
    static constexpr const int MaximumUndistorted = 2;
    // Get static field: static public Valve.VR.EVRTrackedCameraFrameType MaximumUndistorted
    static Valve::VR::EVRTrackedCameraFrameType _get_MaximumUndistorted();
    // Set static field: static public Valve.VR.EVRTrackedCameraFrameType MaximumUndistorted
    static void _set_MaximumUndistorted(Valve::VR::EVRTrackedCameraFrameType value);
    // static field const value: static public Valve.VR.EVRTrackedCameraFrameType MAX_CAMERA_FRAME_TYPES
    static constexpr const int MAX_CAMERA_FRAME_TYPES = 3;
    // Get static field: static public Valve.VR.EVRTrackedCameraFrameType MAX_CAMERA_FRAME_TYPES
    static Valve::VR::EVRTrackedCameraFrameType _get_MAX_CAMERA_FRAME_TYPES();
    // Set static field: static public Valve.VR.EVRTrackedCameraFrameType MAX_CAMERA_FRAME_TYPES
    static void _set_MAX_CAMERA_FRAME_TYPES(Valve::VR::EVRTrackedCameraFrameType value);
    // Creating value type constructor for type: EVRTrackedCameraFrameType
    EVRTrackedCameraFrameType(int value_ = {}) : value{value_} {}
  }; // Valve.VR.EVRTrackedCameraFrameType
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::EVRTrackedCameraFrameType, "Valve.VR", "EVRTrackedCameraFrameType");
#pragma pack(pop)