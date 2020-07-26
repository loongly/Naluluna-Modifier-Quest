// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:29 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Text.Encoder
#include "System/Text/Encoder.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Autogenerated type: System.Text.EncoderNLS
  class EncoderNLS : public System::Text::Encoder, public System::Runtime::Serialization::ISerializable {
    public:
    // System.Char charLeftOver
    // Offset: 0x20
    ::Il2CppChar charLeftOver;
    // protected System.Text.Encoding m_encoding
    // Offset: 0x28
    System::Text::Encoding* m_encoding;
    // protected System.Boolean m_mustFlush
    // Offset: 0x30
    bool m_mustFlush;
    // System.Boolean m_throwOnOverflow
    // Offset: 0x31
    bool m_throwOnOverflow;
    // System.Int32 m_charsUsed
    // Offset: 0x34
    int m_charsUsed;
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x12D8DBC
    static EncoderNLS* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // System.Void .ctor(System.Text.Encoding encoding)
    // Offset: 0x12D5488
    static EncoderNLS* New_ctor(System::Text::Encoding* encoding);
    // public System.Text.Encoding get_Encoding()
    // Offset: 0x12D9C20
    System::Text::Encoding* get_Encoding();
    // public System.Boolean get_MustFlush()
    // Offset: 0x12D9C28
    bool get_MustFlush();
    // System.Boolean get_HasState()
    // Offset: 0x12D9C30
    bool get_HasState();
    // System.Void ClearMustFlush()
    // Offset: 0x12D9C40
    void ClearMustFlush();
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x12D8EA4
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // System.Void .ctor()
    // Offset: 0x12D8F80
    // Implemented from: System.Text.Encoder
    // Base method: System.Void Encoder::.ctor()
    // Base method: System.Void Object::.ctor()
    static EncoderNLS* New_ctor();
    // public override System.Void Reset()
    // Offset: 0x12D8FC0
    // Implemented from: System.Text.Encoder
    // Base method: System.Void Encoder::Reset()
    void Reset();
    // public override System.Int32 GetByteCount(System.Char[] chars, System.Int32 index, System.Int32 count, System.Boolean flush)
    // Offset: 0x12D8FE0
    // Implemented from: System.Text.Encoder
    // Base method: System.Int32 Encoder::GetByteCount(System.Char[] chars, System.Int32 index, System.Int32 count, System.Boolean flush)
    int GetByteCount(::Array<::Il2CppChar>* chars, int index, int count, bool flush);
    // public override System.Int32 GetByteCount(System.Char* chars, System.Int32 count, System.Boolean flush)
    // Offset: 0x12D91C0
    // Implemented from: System.Text.Encoder
    // Base method: System.Int32 Encoder::GetByteCount(System.Char* chars, System.Int32 count, System.Boolean flush)
    int GetByteCount(::Il2CppChar* chars, int count, bool flush);
    // public override System.Int32 GetBytes(System.Char[] chars, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex, System.Boolean flush)
    // Offset: 0x12D9300
    // Implemented from: System.Text.Encoder
    // Base method: System.Int32 Encoder::GetBytes(System.Char[] chars, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex, System.Boolean flush)
    int GetBytes(::Array<::Il2CppChar>* chars, int charIndex, int charCount, ::Array<uint8_t>* bytes, int byteIndex, bool flush);
    // public override System.Int32 GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount, System.Boolean flush)
    // Offset: 0x12D95A4
    // Implemented from: System.Text.Encoder
    // Base method: System.Int32 Encoder::GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount, System.Boolean flush)
    int GetBytes(::Il2CppChar* chars, int charCount, uint8_t* bytes, int byteCount, bool flush);
    // public override System.Void Convert(System.Char[] chars, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Boolean flush, System.Int32 charsUsed, System.Int32 bytesUsed, System.Boolean completed)
    // Offset: 0x12D972C
    // Implemented from: System.Text.Encoder
    // Base method: System.Void Encoder::Convert(System.Char[] chars, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Boolean flush, System.Int32 charsUsed, System.Int32 bytesUsed, System.Boolean completed)
    void Convert(::Array<::Il2CppChar>* chars, int charIndex, int charCount, ::Array<uint8_t>* bytes, int byteIndex, int byteCount, bool flush, int& charsUsed, int& bytesUsed, bool& completed);
    // public override System.Void Convert(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount, System.Boolean flush, System.Int32 charsUsed, System.Int32 bytesUsed, System.Boolean completed)
    // Offset: 0x12D9A24
    // Implemented from: System.Text.Encoder
    // Base method: System.Void Encoder::Convert(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount, System.Boolean flush, System.Int32 charsUsed, System.Int32 bytesUsed, System.Boolean completed)
    void Convert(::Il2CppChar* chars, int charCount, uint8_t* bytes, int byteCount, bool flush, int& charsUsed, int& bytesUsed, bool& completed);
  }; // System.Text.EncoderNLS
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::EncoderNLS*, "System.Text", "EncoderNLS");
#pragma pack(pop)