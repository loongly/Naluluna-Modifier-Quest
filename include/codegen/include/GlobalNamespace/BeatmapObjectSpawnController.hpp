// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:13 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BeatmapObjectCallbackController
#include "GlobalNamespace/BeatmapObjectCallbackController.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapObjectSpawnMovementData
  class BeatmapObjectSpawnMovementData;
  // Forward declaring type: BeatmapCallbackItemDataList
  class BeatmapCallbackItemDataList;
  // Forward declaring type: IBeatmapObjectSpawner
  class IBeatmapObjectSpawner;
  // Forward declaring type: SpawnRotationProcessor
  class SpawnRotationProcessor;
  // Forward declaring type: VariableBPMProcessor
  class VariableBPMProcessor;
  // Forward declaring type: NoteLineLayer
  struct NoteLineLayer;
  // Forward declaring type: ObstacleData
  class ObstacleData;
  // Forward declaring type: NoteData
  class NoteData;
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
  // Forward declaring type: BeatmapObjectData
  class BeatmapObjectData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapObjectSpawnController
  class BeatmapObjectSpawnController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::BeatmapObjectSpawnController::InitData
    class InitData;
    // private BeatmapObjectSpawnMovementData _beatmapObjectSpawnMovementData
    // Offset: 0x18
    GlobalNamespace::BeatmapObjectSpawnMovementData* beatmapObjectSpawnMovementData;
    // private BeatmapObjectSpawnController/InitData _initData
    // Offset: 0x20
    GlobalNamespace::BeatmapObjectSpawnController::InitData* initData;
    // private BeatmapObjectCallbackController _beatmapObjectCallbackController
    // Offset: 0x28
    GlobalNamespace::BeatmapObjectCallbackController* beatmapObjectCallbackController;
    // private IBeatmapObjectSpawner _beatmapObjectSpawner
    // Offset: 0x30
    GlobalNamespace::IBeatmapObjectSpawner* beatmapObjectSpawner;
    // private System.Single _jumpOffsetY
    // Offset: 0x38
    float jumpOffsetY;
    // private System.Boolean _disableSpawning
    // Offset: 0x3C
    bool disableSpawning;
    // private BeatmapObjectCallbackController/BeatmapObjectCallbackData _beatmapObjectCallbackData
    // Offset: 0x40
    GlobalNamespace::BeatmapObjectCallbackController::BeatmapObjectCallbackData* beatmapObjectCallbackData;
    // private BeatmapObjectCallbackController/BeatmapEventCallbackData _beatmapEventCallbackData
    // Offset: 0x48
    GlobalNamespace::BeatmapObjectCallbackController::BeatmapEventCallbackData* beatmapEventCallbackData;
    // private System.Boolean _disappearingArrows
    // Offset: 0x50
    bool disappearingArrows;
    // private System.Boolean _ghostNotes
    // Offset: 0x51
    bool ghostNotes;
    // private System.Nullable`1<System.Single> _firstBasicNoteTime
    // Offset: 0x54
    System::Nullable_1<float> firstBasicNoteTime;
    // private BeatmapCallbackItemDataList _beatmapCallbackItemDataList
    // Offset: 0x60
    GlobalNamespace::BeatmapCallbackItemDataList* beatmapCallbackItemDataList;
    // private SpawnRotationProcessor _spawnRotationProcesser
    // Offset: 0x68
    GlobalNamespace::SpawnRotationProcessor* spawnRotationProcesser;
    // private VariableBPMProcessor _variableBPMProcessor
    // Offset: 0x70
    GlobalNamespace::VariableBPMProcessor* variableBPMProcessor;
    // public System.Single get_jumpOffsetY()
    // Offset: 0xB5AAB8
    float get_jumpOffsetY();
    // public System.Void set_jumpOffsetY(System.Single value)
    // Offset: 0xB5AAC0
    void set_jumpOffsetY(float value);
    // public System.Single get_currentBPM()
    // Offset: 0xB5AAC8
    float get_currentBPM();
    // protected System.Void Start()
    // Offset: 0xB5AAE4
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xB5AF28
    void OnDestroy();
    // public UnityEngine.Vector3 GetNoteOffset(System.Int32 noteLineIndex, NoteLineLayer noteLineLayer)
    // Offset: 0xB5B014
    UnityEngine::Vector3 GetNoteOffset(int noteLineIndex, GlobalNamespace::NoteLineLayer noteLineLayer);
    // private System.Void SpawnObstacle(ObstacleData obstacleData)
    // Offset: 0xB5B12C
    void SpawnObstacle(GlobalNamespace::ObstacleData* obstacleData);
    // private System.Void SpawnNote(NoteData noteData, System.Single cutDirectionAngleOffset)
    // Offset: 0xB5B454
    void SpawnNote(GlobalNamespace::NoteData* noteData, float cutDirectionAngleOffset);
    // private System.Void ProcessEarlyBeatmapEventData(BeatmapEventData beatmapEventData)
    // Offset: 0xB5B970
    void ProcessEarlyBeatmapEventData(GlobalNamespace::BeatmapEventData* beatmapEventData);
    // private System.Void EarlyEventsWereProcessed()
    // Offset: 0xB5B9B4
    void EarlyEventsWereProcessed();
    // private System.Void ProcessLateBeatmapEventData(BeatmapEventData beatmapEventData)
    // Offset: 0xB5BC30
    void ProcessLateBeatmapEventData(GlobalNamespace::BeatmapEventData* beatmapEventData);
    // private System.Void HandleBeatmapObjectCallback(BeatmapObjectData beatmapObjectData)
    // Offset: 0xB5BC4C
    void HandleBeatmapObjectCallback(GlobalNamespace::BeatmapObjectData* beatmapObjectData);
    // private System.Void HandleBeatmapEventCallback(BeatmapEventData beatmapEventData)
    // Offset: 0xB5BC68
    void HandleBeatmapEventCallback(GlobalNamespace::BeatmapEventData* beatmapEventData);
    // private System.Void HandleCallbacksForThisFrameWereProcessed()
    // Offset: 0xB5BCBC
    void HandleCallbacksForThisFrameWereProcessed();
    // public System.Void StopSpawning()
    // Offset: 0xB5BCD8
    void StopSpawning();
    // public System.Void .ctor()
    // Offset: 0xB5BCE4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BeatmapObjectSpawnController* New_ctor();
  }; // BeatmapObjectSpawnController
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectSpawnController*, "", "BeatmapObjectSpawnController");
#pragma pack(pop)