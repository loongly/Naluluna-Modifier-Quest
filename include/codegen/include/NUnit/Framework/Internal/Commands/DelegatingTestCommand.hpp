// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:44 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: NUnit.Framework.Internal.Commands.TestCommand
#include "NUnit/Framework/Internal/Commands/TestCommand.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: NUnit.Framework.Internal.Commands
namespace NUnit::Framework::Internal::Commands {
  // Autogenerated type: NUnit.Framework.Internal.Commands.DelegatingTestCommand
  class DelegatingTestCommand : public NUnit::Framework::Internal::Commands::TestCommand {
    public:
    // protected NUnit.Framework.Internal.Commands.TestCommand innerCommand
    // Offset: 0x18
    NUnit::Framework::Internal::Commands::TestCommand* innerCommand;
    // public NUnit.Framework.Internal.Commands.TestCommand GetInnerCommand()
    // Offset: 0x1072224
    NUnit::Framework::Internal::Commands::TestCommand* GetInnerCommand();
    // protected System.Void .ctor(NUnit.Framework.Internal.Commands.TestCommand innerCommand)
    // Offset: 0x1071C74
    static DelegatingTestCommand* New_ctor(NUnit::Framework::Internal::Commands::TestCommand* innerCommand);
  }; // NUnit.Framework.Internal.Commands.DelegatingTestCommand
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Commands::DelegatingTestCommand*, "NUnit.Framework.Internal.Commands", "DelegatingTestCommand");
#pragma pack(pop)