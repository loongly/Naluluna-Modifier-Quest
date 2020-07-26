// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:14 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Collections.Generic.ICollection`1
#include "System/Collections/Generic/ICollection_1.hpp"
// Including type: System.Collections.ICollection
#include "System/Collections/ICollection.hpp"
// Including type: System.Collections.Generic.IReadOnlyCollection`1
#include "System/Collections/Generic/IReadOnlyCollection_1.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Runtime.Serialization.IDeserializationCallback
#include "System/Runtime/Serialization/IDeserializationCallback.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Skipping declaration: Enumerator because it is already included!
  // Forward declaring type: LinkedListNode`1<T>
  template<typename T>
  class LinkedListNode_1;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Autogenerated type: System.Collections.Generic.LinkedList`1
  template<typename T>
  class LinkedList_1 : public ::Il2CppObject, public System::Collections::Generic::ICollection_1<T>, public System::Collections::Generic::IEnumerable_1<T>, public System::Collections::IEnumerable, public System::Collections::ICollection, public System::Collections::Generic::IReadOnlyCollection_1<T>, public System::Runtime::Serialization::ISerializable, public System::Runtime::Serialization::IDeserializationCallback {
    public:
    // Nested type: System::Collections::Generic::LinkedList_1::Enumerator<T>
    struct Enumerator;
    // Autogenerated type: System.Collections.Generic.LinkedList`1/Enumerator
    struct Enumerator : public System::ValueType, public ::il2cpp_utils::il2cpp_type_check::NestedType, public System::Collections::Generic::IEnumerator_1<T>, public System::IDisposable, public System::Collections::IEnumerator, public System::Runtime::Serialization::ISerializable, public System::Runtime::Serialization::IDeserializationCallback {
      public:
      using declaring_type = LinkedList_1<T>*;
      // private System.Collections.Generic.LinkedList`1<T> _list
      // Offset: 0x0
      System::Collections::Generic::LinkedList_1<T>* list;
      // private System.Collections.Generic.LinkedListNode`1<T> _node
      // Offset: 0x0
      System::Collections::Generic::LinkedListNode_1<T>* node;
      // private System.Int32 _version
      // Offset: 0x0
      int version;
      // private T _current
      // Offset: 0x0
      T current;
      // private System.Int32 _index
      // Offset: 0x0
      int index;
      // Creating value type constructor for type: Enumerator
      Enumerator(System::Collections::Generic::LinkedList_1<T>* list_ = {}, System::Collections::Generic::LinkedListNode_1<T>* node_ = {}, int version_ = {}, T current_ = {}, int index_ = {}) : list{list_}, node{node_}, version{version_}, current{current_}, index{index_} {}
      // System.Void .ctor(System.Collections.Generic.LinkedList`1<T> list)
      // Offset: 0xA29E18
      static typename LinkedList_1<T>::Enumerator* New_ctor(System::Collections::Generic::LinkedList_1<T>* list) {
        return (typename LinkedList_1<T>::Enumerator*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename LinkedList_1<T>::Enumerator>::get(), list));
      }
      // private System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
      // Offset: 0xA29E20
      static typename LinkedList_1<T>::Enumerator* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
        return (typename LinkedList_1<T>::Enumerator*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename LinkedList_1<T>::Enumerator>::get(), info, context));
      }
      // public T get_Current()
      // Offset: 0xA29E2C
      // Implemented from: System.Collections.Generic.IEnumerator`1
      // Base method: T IEnumerator`1::get_Current()
      T get_Current() {
        return CRASH_UNLESS(il2cpp_utils::RunMethod<T>(*this, "get_Current"));
      }
      // Creating proxy method: System_Collections_Generic_IEnumerator_1_get_Current
      // Maps to method: get_Current
      T System_Collections_Generic_IEnumerator_1_get_Current() {
        return get_Current();
      }
      // private System.Object System.Collections.IEnumerator.get_Current()
      // Offset: 0xA29E34
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Object IEnumerator::get_Current()
      ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
        return CRASH_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(*this, "System.Collections.IEnumerator.get_Current"));
      }
      // public System.Boolean MoveNext()
      // Offset: 0xA29E3C
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Boolean IEnumerator::MoveNext()
      bool MoveNext() {
        return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "MoveNext"));
      }
      // private System.Void System.Collections.IEnumerator.Reset()
      // Offset: 0xA29E44
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Void IEnumerator::Reset()
      void System_Collections_IEnumerator_Reset() {
        CRASH_UNLESS(il2cpp_utils::RunMethod(*this, "System.Collections.IEnumerator.Reset"));
      }
      // public System.Void Dispose()
      // Offset: 0xA29E4C
      // Implemented from: System.IDisposable
      // Base method: System.Void IDisposable::Dispose()
      void Dispose() {
        CRASH_UNLESS(il2cpp_utils::RunMethod(*this, "Dispose"));
      }
      // Creating proxy method: System_IDisposable_Dispose
      // Maps to method: Dispose
      void System_IDisposable_Dispose() {
        Dispose();
      }
      // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
      // Offset: 0xA29E50
      // Implemented from: System.Runtime.Serialization.ISerializable
      // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
      void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
        CRASH_UNLESS(il2cpp_utils::RunMethod(*this, "System.Runtime.Serialization.ISerializable.GetObjectData", info, context));
      }
      // private System.Void System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object sender)
      // Offset: 0xA29E5C
      // Implemented from: System.Runtime.Serialization.IDeserializationCallback
      // Base method: System.Void IDeserializationCallback::OnDeserialization(System.Object sender)
      void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::Il2CppObject* sender) {
        CRASH_UNLESS(il2cpp_utils::RunMethod(*this, "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", sender));
      }
    }; // System.Collections.Generic.LinkedList`1/Enumerator
    // System.Collections.Generic.LinkedListNode`1<T> head
    // Offset: 0x0
    System::Collections::Generic::LinkedListNode_1<T>* head;
    // System.Int32 count
    // Offset: 0x0
    int count;
    // System.Int32 version
    // Offset: 0x0
    int version;
    // private System.Object _syncRoot
    // Offset: 0x0
    ::Il2CppObject* syncRoot;
    // private System.Runtime.Serialization.SerializationInfo _siInfo
    // Offset: 0x0
    System::Runtime::Serialization::SerializationInfo* siInfo;
    // Autogenerated static field getter
    // Get static field: static private System.String VersionName
    static ::Il2CppString* _get_VersionName() {
      return CRASH_UNLESS((il2cpp_utils::GetFieldValue<::Il2CppString*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LinkedList_1<T>*>::get(), "VersionName")));
    }
    // Autogenerated static field setter
    // Set static field: static private System.String VersionName
    static void _set_VersionName(::Il2CppString* value) {
      CRASH_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LinkedList_1<T>*>::get(), "VersionName", value));
    }
    // Autogenerated static field getter
    // Get static field: static private System.String CountName
    static ::Il2CppString* _get_CountName() {
      return CRASH_UNLESS((il2cpp_utils::GetFieldValue<::Il2CppString*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LinkedList_1<T>*>::get(), "CountName")));
    }
    // Autogenerated static field setter
    // Set static field: static private System.String CountName
    static void _set_CountName(::Il2CppString* value) {
      CRASH_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LinkedList_1<T>*>::get(), "CountName", value));
    }
    // Autogenerated static field getter
    // Get static field: static private System.String ValuesName
    static ::Il2CppString* _get_ValuesName() {
      return CRASH_UNLESS((il2cpp_utils::GetFieldValue<::Il2CppString*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LinkedList_1<T>*>::get(), "ValuesName")));
    }
    // Autogenerated static field setter
    // Set static field: static private System.String ValuesName
    static void _set_ValuesName(::Il2CppString* value) {
      CRASH_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LinkedList_1<T>*>::get(), "ValuesName", value));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xCE5B04
    static LinkedList_1<T>* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      return (LinkedList_1<T>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LinkedList_1<T>*>::get(), info, context));
    }
    // public System.Collections.Generic.LinkedListNode`1<T> get_First()
    // Offset: 0xCE5B48
    System::Collections::Generic::LinkedListNode_1<T>* get_First() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::LinkedListNode_1<T>*>(this, "get_First"));
    }
    // public System.Collections.Generic.LinkedListNode`1<T> AddBefore(System.Collections.Generic.LinkedListNode`1<T> node, T value)
    // Offset: 0xCE5B7C
    System::Collections::Generic::LinkedListNode_1<T>* AddBefore(System::Collections::Generic::LinkedListNode_1<T>* node, T value) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::LinkedListNode_1<T>*>(this, "AddBefore", node, value));
    }
    // public System.Collections.Generic.LinkedListNode`1<T> AddFirst(T value)
    // Offset: 0xCE5C5C
    System::Collections::Generic::LinkedListNode_1<T>* AddFirst(T value) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::LinkedListNode_1<T>*>(this, "AddFirst", value));
    }
    // public System.Void AddFirst(System.Collections.Generic.LinkedListNode`1<T> node)
    // Offset: 0xCE5D20
    void AddFirst(System::Collections::Generic::LinkedListNode_1<T>* node) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "AddFirst", node));
    }
    // public System.Collections.Generic.LinkedListNode`1<T> AddLast(T value)
    // Offset: 0xCE5DC8
    System::Collections::Generic::LinkedListNode_1<T>* AddLast(T value) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::LinkedListNode_1<T>*>(this, "AddLast", value));
    }
    // public System.Collections.Generic.LinkedListNode`1<T> Find(T value)
    // Offset: 0xCE6144
    System::Collections::Generic::LinkedListNode_1<T>* Find(T value) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::LinkedListNode_1<T>*>(this, "Find", value));
    }
    // public System.Collections.Generic.LinkedList`1/Enumerator<T> GetEnumerator()
    // Offset: 0xCE61F0
    typename System::Collections::Generic::LinkedList_1<T>::Enumerator GetEnumerator() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<typename System::Collections::Generic::LinkedList_1<T>::Enumerator>(this, "GetEnumerator"));
    }
    // public System.Void Remove(System.Collections.Generic.LinkedListNode`1<T> node)
    // Offset: 0xCE62E8
    void Remove(System::Collections::Generic::LinkedListNode_1<T>* node) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "Remove", node));
    }
    // public System.Void RemoveLast()
    // Offset: 0xCE6348
    void RemoveLast() {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "RemoveLast"));
    }
    // private System.Void InternalInsertNodeBefore(System.Collections.Generic.LinkedListNode`1<T> node, System.Collections.Generic.LinkedListNode`1<T> newNode)
    // Offset: 0xCE6794
    void InternalInsertNodeBefore(System::Collections::Generic::LinkedListNode_1<T>* node, System::Collections::Generic::LinkedListNode_1<T>* newNode) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "InternalInsertNodeBefore", node, newNode));
    }
    // private System.Void InternalInsertNodeToEmptyList(System.Collections.Generic.LinkedListNode`1<T> newNode)
    // Offset: 0xCE681C
    void InternalInsertNodeToEmptyList(System::Collections::Generic::LinkedListNode_1<T>* newNode) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "InternalInsertNodeToEmptyList", newNode));
    }
    // System.Void InternalRemoveNode(System.Collections.Generic.LinkedListNode`1<T> node)
    // Offset: 0xCE6880
    void InternalRemoveNode(System::Collections::Generic::LinkedListNode_1<T>* node) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "InternalRemoveNode", node));
    }
    // System.Void ValidateNewNode(System.Collections.Generic.LinkedListNode`1<T> node)
    // Offset: 0xCE693C
    void ValidateNewNode(System::Collections::Generic::LinkedListNode_1<T>* node) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "ValidateNewNode", node));
    }
    // System.Void ValidateNode(System.Collections.Generic.LinkedListNode`1<T> node)
    // Offset: 0xCE69F0
    void ValidateNode(System::Collections::Generic::LinkedListNode_1<T>* node) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "ValidateNode", node));
    }
    // public System.Void .ctor()
    // Offset: 0xCE5AEC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static LinkedList_1<T>* New_ctor() {
      return (LinkedList_1<T>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LinkedList_1<T>*>::get()));
    }
    // public System.Int32 get_Count()
    // Offset: 0xCE5B40
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Int32 ICollection`1::get_Count()
    // Base method: System.Int32 ICollection::get_Count()
    // Base method: System.Int32 IReadOnlyCollection`1::get_Count()
    int get_Count() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_Count"));
    }
    // Creating proxy method: System_Collections_Generic_ICollection_1_get_Count
    // Maps to method: get_Count
    int System_Collections_Generic_ICollection_1_get_Count() {
      return get_Count();
    }
    // Creating proxy method: System_Collections_ICollection_get_Count
    // Maps to method: get_Count
    int System_Collections_ICollection_get_Count() {
      return get_Count();
    }
    // private System.Boolean System.Collections.Generic.ICollection<T>.get_IsReadOnly()
    // Offset: 0xCE5B50
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Boolean ICollection`1::get_IsReadOnly()
    bool System_Collections_Generic_ICollection_1_get_IsReadOnly() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "System.Collections.Generic.ICollection<T>.get_IsReadOnly"));
    }
    // private System.Void System.Collections.Generic.ICollection<T>.Add(T value)
    // Offset: 0xCE5B58
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Void ICollection`1::Add(T value)
    void System_Collections_Generic_ICollection_1_Add(T value) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "System.Collections.Generic.ICollection<T>.Add", value));
    }
    // public System.Void Clear()
    // Offset: 0xCE5E78
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Void ICollection`1::Clear()
    void Clear() {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "Clear"));
    }
    // Creating proxy method: System_Collections_Generic_ICollection_1_Clear
    // Maps to method: Clear
    void System_Collections_Generic_ICollection_1_Clear() {
      Clear();
    }
    // public System.Boolean Contains(T value)
    // Offset: 0xCE5F0C
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Boolean ICollection`1::Contains(T value)
    bool Contains(T value) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Contains", value));
    }
    // Creating proxy method: System_Collections_Generic_ICollection_1_Contains
    // Maps to method: Contains
    bool System_Collections_Generic_ICollection_1_Contains(T value) {
      return Contains(value);
    }
    // public System.Void CopyTo(T[] array, System.Int32 index)
    // Offset: 0xCE5F40
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Void ICollection`1::CopyTo(T[] array, System.Int32 index)
    void CopyTo(::Array<T>* array, int index) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "CopyTo", array, index));
    }
    // Creating proxy method: System_Collections_Generic_ICollection_1_CopyTo
    // Maps to method: CopyTo
    void System_Collections_Generic_ICollection_1_CopyTo(::Array<T>* array, int index) {
      CopyTo(array, index);
    }
    // private System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable<T>.GetEnumerator()
    // Offset: 0xCE6208
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable`1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_1_GetEnumerator() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerator_1<T>*>(this, "System.Collections.Generic.IEnumerable<T>.GetEnumerator"));
    }
    // public System.Boolean Remove(T value)
    // Offset: 0xCE6288
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Boolean ICollection`1::Remove(T value)
    bool Remove(T value) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Remove", value));
    }
    // Creating proxy method: System_Collections_Generic_ICollection_1_Remove
    // Maps to method: Remove
    bool System_Collections_Generic_ICollection_1_Remove(T value) {
      return Remove(value);
    }
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xCE63F0
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "GetObjectData", info, context));
    }
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      GetObjectData(info, context);
    }
    // public System.Void OnDeserialization(System.Object sender)
    // Offset: 0xCE657C
    // Implemented from: System.Runtime.Serialization.IDeserializationCallback
    // Base method: System.Void IDeserializationCallback::OnDeserialization(System.Object sender)
    void OnDeserialization(::Il2CppObject* sender) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "OnDeserialization", sender));
    }
    // Creating proxy method: System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
    // Maps to method: OnDeserialization
    void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::Il2CppObject* sender) {
      OnDeserialization(sender);
    }
    // private System.Void System.Collections.ICollection.CopyTo(System.Array array, System.Int32 index)
    // Offset: 0xCE6AB4
    // Implemented from: System.Collections.ICollection
    // Base method: System.Void ICollection::CopyTo(System.Array array, System.Int32 index)
    void System_Collections_ICollection_CopyTo(System::Array* array, int index) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "System.Collections.ICollection.CopyTo", array, index));
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xCE6E20
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "System.Collections.IEnumerable.GetEnumerator"));
    }
  }; // System.Collections.Generic.LinkedList`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::LinkedList_1, "System.Collections.Generic", "LinkedList`1");
#pragma pack(pop)