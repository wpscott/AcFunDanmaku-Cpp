// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CommonStateSignalChatAccept.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_CommonStateSignalChatAccept_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_CommonStateSignalChatAccept_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3014000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3014000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "ChatMediaType.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_CommonStateSignalChatAccept_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_CommonStateSignalChatAccept_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_CommonStateSignalChatAccept_2eproto;
namespace AcFunDanmu {
class CommonStateSignalChatAccept;
class CommonStateSignalChatAcceptDefaultTypeInternal;
extern CommonStateSignalChatAcceptDefaultTypeInternal _CommonStateSignalChatAccept_default_instance_;
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::CommonStateSignalChatAccept* Arena::CreateMaybeMessage<::AcFunDanmu::CommonStateSignalChatAccept>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {

// ===================================================================

class CommonStateSignalChatAccept PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.CommonStateSignalChatAccept) */ {
 public:
  inline CommonStateSignalChatAccept() : CommonStateSignalChatAccept(nullptr) {}
  virtual ~CommonStateSignalChatAccept();

  CommonStateSignalChatAccept(const CommonStateSignalChatAccept& from);
  CommonStateSignalChatAccept(CommonStateSignalChatAccept&& from) noexcept
    : CommonStateSignalChatAccept() {
    *this = ::std::move(from);
  }

  inline CommonStateSignalChatAccept& operator=(const CommonStateSignalChatAccept& from) {
    CopyFrom(from);
    return *this;
  }
  inline CommonStateSignalChatAccept& operator=(CommonStateSignalChatAccept&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const CommonStateSignalChatAccept& default_instance();

  static inline const CommonStateSignalChatAccept* internal_default_instance() {
    return reinterpret_cast<const CommonStateSignalChatAccept*>(
               &_CommonStateSignalChatAccept_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CommonStateSignalChatAccept& a, CommonStateSignalChatAccept& b) {
    a.Swap(&b);
  }
  inline void Swap(CommonStateSignalChatAccept* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CommonStateSignalChatAccept* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CommonStateSignalChatAccept* New() const final {
    return CreateMaybeMessage<CommonStateSignalChatAccept>(nullptr);
  }

  CommonStateSignalChatAccept* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CommonStateSignalChatAccept>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CommonStateSignalChatAccept& from);
  void MergeFrom(const CommonStateSignalChatAccept& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CommonStateSignalChatAccept* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.CommonStateSignalChatAccept";
  }
  protected:
  explicit CommonStateSignalChatAccept(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_CommonStateSignalChatAccept_2eproto);
    return ::descriptor_table_CommonStateSignalChatAccept_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kChatIdFieldNumber = 1,
    kArraySignalInfoFieldNumber = 3,
    kMediaTypeFieldNumber = 2,
  };
  // string chatId = 1;
  void clear_chatid();
  const std::string& chatid() const;
  void set_chatid(const std::string& value);
  void set_chatid(std::string&& value);
  void set_chatid(const char* value);
  void set_chatid(const char* value, size_t size);
  std::string* mutable_chatid();
  std::string* release_chatid();
  void set_allocated_chatid(std::string* chatid);
  private:
  const std::string& _internal_chatid() const;
  void _internal_set_chatid(const std::string& value);
  std::string* _internal_mutable_chatid();
  public:

  // string arraySignalInfo = 3;
  void clear_arraysignalinfo();
  const std::string& arraysignalinfo() const;
  void set_arraysignalinfo(const std::string& value);
  void set_arraysignalinfo(std::string&& value);
  void set_arraysignalinfo(const char* value);
  void set_arraysignalinfo(const char* value, size_t size);
  std::string* mutable_arraysignalinfo();
  std::string* release_arraysignalinfo();
  void set_allocated_arraysignalinfo(std::string* arraysignalinfo);
  private:
  const std::string& _internal_arraysignalinfo() const;
  void _internal_set_arraysignalinfo(const std::string& value);
  std::string* _internal_mutable_arraysignalinfo();
  public:

  // .AcFunDanmu.ChatMediaType mediaType = 2;
  void clear_mediatype();
  ::AcFunDanmu::ChatMediaType mediatype() const;
  void set_mediatype(::AcFunDanmu::ChatMediaType value);
  private:
  ::AcFunDanmu::ChatMediaType _internal_mediatype() const;
  void _internal_set_mediatype(::AcFunDanmu::ChatMediaType value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.CommonStateSignalChatAccept)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr chatid_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr arraysignalinfo_;
  int mediatype_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_CommonStateSignalChatAccept_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CommonStateSignalChatAccept

// string chatId = 1;
inline void CommonStateSignalChatAccept::clear_chatid() {
  chatid_.ClearToEmpty();
}
inline const std::string& CommonStateSignalChatAccept::chatid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.CommonStateSignalChatAccept.chatId)
  return _internal_chatid();
}
inline void CommonStateSignalChatAccept::set_chatid(const std::string& value) {
  _internal_set_chatid(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.CommonStateSignalChatAccept.chatId)
}
inline std::string* CommonStateSignalChatAccept::mutable_chatid() {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.CommonStateSignalChatAccept.chatId)
  return _internal_mutable_chatid();
}
inline const std::string& CommonStateSignalChatAccept::_internal_chatid() const {
  return chatid_.Get();
}
inline void CommonStateSignalChatAccept::_internal_set_chatid(const std::string& value) {
  
  chatid_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void CommonStateSignalChatAccept::set_chatid(std::string&& value) {
  
  chatid_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:AcFunDanmu.CommonStateSignalChatAccept.chatId)
}
inline void CommonStateSignalChatAccept::set_chatid(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  chatid_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:AcFunDanmu.CommonStateSignalChatAccept.chatId)
}
inline void CommonStateSignalChatAccept::set_chatid(const char* value,
    size_t size) {
  
  chatid_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:AcFunDanmu.CommonStateSignalChatAccept.chatId)
}
inline std::string* CommonStateSignalChatAccept::_internal_mutable_chatid() {
  
  return chatid_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* CommonStateSignalChatAccept::release_chatid() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.CommonStateSignalChatAccept.chatId)
  return chatid_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void CommonStateSignalChatAccept::set_allocated_chatid(std::string* chatid) {
  if (chatid != nullptr) {
    
  } else {
    
  }
  chatid_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), chatid,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.CommonStateSignalChatAccept.chatId)
}

// .AcFunDanmu.ChatMediaType mediaType = 2;
inline void CommonStateSignalChatAccept::clear_mediatype() {
  mediatype_ = 0;
}
inline ::AcFunDanmu::ChatMediaType CommonStateSignalChatAccept::_internal_mediatype() const {
  return static_cast< ::AcFunDanmu::ChatMediaType >(mediatype_);
}
inline ::AcFunDanmu::ChatMediaType CommonStateSignalChatAccept::mediatype() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.CommonStateSignalChatAccept.mediaType)
  return _internal_mediatype();
}
inline void CommonStateSignalChatAccept::_internal_set_mediatype(::AcFunDanmu::ChatMediaType value) {
  
  mediatype_ = value;
}
inline void CommonStateSignalChatAccept::set_mediatype(::AcFunDanmu::ChatMediaType value) {
  _internal_set_mediatype(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.CommonStateSignalChatAccept.mediaType)
}

// string arraySignalInfo = 3;
inline void CommonStateSignalChatAccept::clear_arraysignalinfo() {
  arraysignalinfo_.ClearToEmpty();
}
inline const std::string& CommonStateSignalChatAccept::arraysignalinfo() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.CommonStateSignalChatAccept.arraySignalInfo)
  return _internal_arraysignalinfo();
}
inline void CommonStateSignalChatAccept::set_arraysignalinfo(const std::string& value) {
  _internal_set_arraysignalinfo(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.CommonStateSignalChatAccept.arraySignalInfo)
}
inline std::string* CommonStateSignalChatAccept::mutable_arraysignalinfo() {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.CommonStateSignalChatAccept.arraySignalInfo)
  return _internal_mutable_arraysignalinfo();
}
inline const std::string& CommonStateSignalChatAccept::_internal_arraysignalinfo() const {
  return arraysignalinfo_.Get();
}
inline void CommonStateSignalChatAccept::_internal_set_arraysignalinfo(const std::string& value) {
  
  arraysignalinfo_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void CommonStateSignalChatAccept::set_arraysignalinfo(std::string&& value) {
  
  arraysignalinfo_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:AcFunDanmu.CommonStateSignalChatAccept.arraySignalInfo)
}
inline void CommonStateSignalChatAccept::set_arraysignalinfo(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  arraysignalinfo_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:AcFunDanmu.CommonStateSignalChatAccept.arraySignalInfo)
}
inline void CommonStateSignalChatAccept::set_arraysignalinfo(const char* value,
    size_t size) {
  
  arraysignalinfo_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:AcFunDanmu.CommonStateSignalChatAccept.arraySignalInfo)
}
inline std::string* CommonStateSignalChatAccept::_internal_mutable_arraysignalinfo() {
  
  return arraysignalinfo_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* CommonStateSignalChatAccept::release_arraysignalinfo() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.CommonStateSignalChatAccept.arraySignalInfo)
  return arraysignalinfo_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void CommonStateSignalChatAccept::set_allocated_arraysignalinfo(std::string* arraysignalinfo) {
  if (arraysignalinfo != nullptr) {
    
  } else {
    
  }
  arraysignalinfo_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), arraysignalinfo,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.CommonStateSignalChatAccept.arraySignalInfo)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_CommonStateSignalChatAccept_2eproto
