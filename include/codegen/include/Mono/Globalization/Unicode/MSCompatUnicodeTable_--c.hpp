// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:24 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Mono.Globalization.Unicode.MSCompatUnicodeTable
#include "Mono/Globalization/Unicode/MSCompatUnicodeTable.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Forward declaring namespace: Mono::Globalization::Unicode
namespace Mono::Globalization::Unicode {
  // Forward declaring type: Level2Map
  class Level2Map;
}
// Completed forward declares
// Type namespace: Mono.Globalization.Unicode
namespace Mono::Globalization::Unicode {
  // Autogenerated type: Mono.Globalization.Unicode.MSCompatUnicodeTable/<>c
  class MSCompatUnicodeTable::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Mono.Globalization.Unicode.MSCompatUnicodeTable/<>c <>9
    static Mono::Globalization::Unicode::MSCompatUnicodeTable::$$c* _get_$$9();
    // Set static field: static public readonly Mono.Globalization.Unicode.MSCompatUnicodeTable/<>c <>9
    static void _set_$$9(Mono::Globalization::Unicode::MSCompatUnicodeTable::$$c* value);
    // Get static field: static public System.Comparison`1<Mono.Globalization.Unicode.Level2Map> <>9__17_0
    static System::Comparison_1<Mono::Globalization::Unicode::Level2Map*>* _get_$$9__17_0();
    // Set static field: static public System.Comparison`1<Mono.Globalization.Unicode.Level2Map> <>9__17_0
    static void _set_$$9__17_0(System::Comparison_1<Mono::Globalization::Unicode::Level2Map*>* value);
    // static private System.Void .cctor()
    // Offset: 0x109BB5C
    static void _cctor();
    // System.Int32 <BuildTailoringTables>b__17_0(Mono.Globalization.Unicode.Level2Map a, Mono.Globalization.Unicode.Level2Map b)
    // Offset: 0x109BBCC
    int $BuildTailoringTables$b__17_0(Mono::Globalization::Unicode::Level2Map* a, Mono::Globalization::Unicode::Level2Map* b);
    // public System.Void .ctor()
    // Offset: 0x109BBC4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static MSCompatUnicodeTable::$$c* New_ctor();
  }; // Mono.Globalization.Unicode.MSCompatUnicodeTable/<>c
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Globalization::Unicode::MSCompatUnicodeTable::$$c*, "Mono.Globalization.Unicode", "MSCompatUnicodeTable/<>c");
#pragma pack(pop)