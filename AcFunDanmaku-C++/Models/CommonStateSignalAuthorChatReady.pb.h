// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CommonStateSignalAuthorChatReady.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_CommonStateSignalAuthorChatReady_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_CommonStateSignalAuthorChatReady_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3013000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3013000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "AuthorChatPlayerInfo.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_CommonStateSignalAuthorChatReady_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_CommonStateSignalAuthorChatReady_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_CommonStateSignalAuthorChatReady_2eproto;
namespace AcFunDanmu {
class CommonStateSignalAuthorChatReady;
class CommonStateSignalAuthorChatReadyDefaultTypeInternal;
extern CommonStateSignalAuthorChatReadyDefaultTypeInternal _CommonStateSignalAuthorChatReady_default_instance_;
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::CommonStateSignalAuthorChatReady* Arena::CreateMaybeMessage<::AcFunDanmu::CommonStateSignalAuthorChatReady>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {

// ===================================================================

class CommonStateSignalAuthorChatReady PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.CommonStateSignalAuthorChatReady) */ {
 public:
  inline CommonStateSignalAuthorChatReady() : CommonStateSignalAuthorChatReady(nullptr) {}
  virtual ~CommonStateSignalAuthorChatReady();

  CommonStateSignalAuthorChatReady(const CommonStateSignalAuthorChatReady& from);
  CommonStateSignalAuthorChatReady(CommonStateSignalAuthorChatReady&& from) noexcept
    : CommonStateSignalAuthorChatReady() {
    *this = ::std::move(from);
  }

  inline CommonStateSignalAuthorChatReady& operator=(const CommonStateSignalAuthorChatReady& from) {
    CopyFrom(from);
    return *this;
  }
  inline CommonStateSignalAuthorChatReady& operator=(CommonStateSignalAuthorChatReady&& from) noexcept {
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
  static const CommonStateSignalAuthorChatReady& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CommonStateSignalAuthorChatReady* internal_default_instance() {
    return reinterpret_cast<const CommonStateSignalAuthorChatReady*>(
               &_CommonStateSignalAuthorChatReady_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CommonStateSignalAuthorChatReady& a, CommonStateSignalAuthorChatReady& b) {
    a.Swap(&b);
  }
  inline void Swap(CommonStateSignalAuthorChatReady* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CommonStateSignalAuthorChatReady* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CommonStateSignalAuthorChatReady* New() const final {
    return CreateMaybeMessage<CommonStateSignalAuthorChatReady>(nullptr);
  }

  CommonStateSignalAuthorChatReady* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CommonStateSignalAuthorChatReady>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CommonStateSignalAuthorChatReady& from);
  void MergeFrom(const CommonStateSignalAuthorChatReady& from);
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
  void InternalSwap(CommonStateSignalAuthorChatReady* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.CommonStateSignalAuthorChatReady";
  }
  protected:
  explicit CommonStateSignalAuthorChatReady(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_CommonStateSignalAuthorChatReady_2eproto);
    return ::descriptor_table_CommonStateSignalAuthorChatReady_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAFieldNumber = 1,
    kBFieldNumber = 2,
    kCFieldNumber = 3,
  };
  // string a = 1;
  void clear_a();
  const std::string& a() const;
  void set_a(const std::string& value);
  void set_a(std::string&& value);
  void set_a(const char* value);
  void set_a(const char* value, size_t size);
  std::string* mutable_a();
  std::string* release_a();
  void set_allocated_a(std::string* a);
  private:
  const std::string& _internal_a() const;
  void _internal_set_a(const std::string& value);
  std::string* _internal_mutable_a();
  public:

  // .AcFunDanmu.AuthorChatPlayerInfo b = 2;
  bool has_b() const;
  private:
  bool _internal_has_b() const;
  public:
  void clear_b();
  const ::AcFunDanmu::AuthorChatPlayerInfo& b() const;
  ::AcFunDanmu::AuthorChatPlayerInfo* release_b();
  ::AcFunDanmu::AuthorChatPlayerInfo* mutable_b();
  void set_allocated_b(::AcFunDanmu::AuthorChatPlayerInfo* b);
  private:
  const ::AcFunDanmu::AuthorChatPlayerInfo& _internal_b() const;
  ::AcFunDanmu::AuthorChatPlayerInfo* _internal_mutable_b();
  public:
  void unsafe_arena_set_allocated_b(
      ::AcFunDanmu::AuthorChatPlayerInfo* b);
  ::AcFunDanmu::AuthorChatPlayerInfo* unsafe_arena_release_b();

  // .AcFunDanmu.AuthorChatPlayerInfo c = 3;
  bool has_c() const;
  private:
  bool _internal_has_c() const;
  public:
  void clear_c();
  const ::AcFunDanmu::AuthorChatPlayerInfo& c() const;
  ::AcFunDanmu::AuthorChatPlayerInfo* release_c();
  ::AcFunDanmu::AuthorChatPlayerInfo* mutable_c();
  void set_allocated_c(::AcFunDanmu::AuthorChatPlayerInfo* c);
  private:
  const ::AcFunDanmu::AuthorChatPlayerInfo& _internal_c() const;
  ::AcFunDanmu::AuthorChatPlayerInfo* _internal_mutable_c();
  public:
  void unsafe_arena_set_allocated_c(
      ::AcFunDanmu::AuthorChatPlayerInfo* c);
  ::AcFunDanmu::AuthorChatPlayerInfo* unsafe_arena_release_c();

  // @@protoc_insertion_point(class_scope:AcFunDanmu.CommonStateSignalAuthorChatReady)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr a_;
  ::AcFunDanmu::AuthorChatPlayerInfo* b_;
  ::AcFunDanmu::AuthorChatPlayerInfo* c_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_CommonStateSignalAuthorChatReady_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CommonStateSignalAuthorChatReady

// string a = 1;
inline void CommonStateSignalAuthorChatReady::clear_a() {
  a_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& CommonStateSignalAuthorChatReady::a() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.CommonStateSignalAuthorChatReady.a)
  return _internal_a();
}
inline void CommonStateSignalAuthorChatReady::set_a(const std::string& value) {
  _internal_set_a(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.CommonStateSignalAuthorChatReady.a)
}
inline std::string* CommonStateSignalAuthorChatReady::mutable_a() {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.CommonStateSignalAuthorChatReady.a)
  return _internal_mutable_a();
}
inline const std::string& CommonStateSignalAuthorChatReady::_internal_a() const {
  return a_.Get();
}
inline void CommonStateSignalAuthorChatReady::_internal_set_a(const std::string& value) {
  
  a_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void CommonStateSignalAuthorChatReady::set_a(std::string&& value) {
  
  a_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:AcFunDanmu.CommonStateSignalAuthorChatReady.a)
}
inline void CommonStateSignalAuthorChatReady::set_a(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  a_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:AcFunDanmu.CommonStateSignalAuthorChatReady.a)
}
inline void CommonStateSignalAuthorChatReady::set_a(const char* value,
    size_t size) {
  
  a_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:AcFunDanmu.CommonStateSignalAuthorChatReady.a)
}
inline std::string* CommonStateSignalAuthorChatReady::_internal_mutable_a() {
  
  return a_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* CommonStateSignalAuthorChatReady::release_a() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.CommonStateSignalAuthorChatReady.a)
  return a_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void CommonStateSignalAuthorChatReady::set_allocated_a(std::string* a) {
  if (a != nullptr) {
    
  } else {
    
  }
  a_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), a,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.CommonStateSignalAuthorChatReady.a)
}

// .AcFunDanmu.AuthorChatPlayerInfo b = 2;
inline bool CommonStateSignalAuthorChatReady::_internal_has_b() const {
  return this != internal_default_instance() && b_ != nullptr;
}
inline bool CommonStateSignalAuthorChatReady::has_b() const {
  return _internal_has_b();
}
inline const ::AcFunDanmu::AuthorChatPlayerInfo& CommonStateSignalAuthorChatReady::_internal_b() const {
  const ::AcFunDanmu::AuthorChatPlayerInfo* p = b_;
  return p != nullptr ? *p : *reinterpret_cast<const ::AcFunDanmu::AuthorChatPlayerInfo*>(
      &::AcFunDanmu::_AuthorChatPlayerInfo_default_instance_);
}
inline const ::AcFunDanmu::AuthorChatPlayerInfo& CommonStateSignalAuthorChatReady::b() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.CommonStateSignalAuthorChatReady.b)
  return _internal_b();
}
inline void CommonStateSignalAuthorChatReady::unsafe_arena_set_allocated_b(
    ::AcFunDanmu::AuthorChatPlayerInfo* b) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(b_);
  }
  b_ = b;
  if (b) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:AcFunDanmu.CommonStateSignalAuthorChatReady.b)
}
inline ::AcFunDanmu::AuthorChatPlayerInfo* CommonStateSignalAuthorChatReady::release_b() {
  
  ::AcFunDanmu::AuthorChatPlayerInfo* temp = b_;
  b_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::AcFunDanmu::AuthorChatPlayerInfo* CommonStateSignalAuthorChatReady::unsafe_arena_release_b() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.CommonStateSignalAuthorChatReady.b)
  
  ::AcFunDanmu::AuthorChatPlayerInfo* temp = b_;
  b_ = nullptr;
  return temp;
}
inline ::AcFunDanmu::AuthorChatPlayerInfo* CommonStateSignalAuthorChatReady::_internal_mutable_b() {
  
  if (b_ == nullptr) {
    auto* p = CreateMaybeMessage<::AcFunDanmu::AuthorChatPlayerInfo>(GetArena());
    b_ = p;
  }
  return b_;
}
inline ::AcFunDanmu::AuthorChatPlayerInfo* CommonStateSignalAuthorChatReady::mutable_b() {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.CommonStateSignalAuthorChatReady.b)
  return _internal_mutable_b();
}
inline void CommonStateSignalAuthorChatReady::set_allocated_b(::AcFunDanmu::AuthorChatPlayerInfo* b) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(b_);
  }
  if (b) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(b)->GetArena();
    if (message_arena != submessage_arena) {
      b = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, b, submessage_arena);
    }
    
  } else {
    
  }
  b_ = b;
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.CommonStateSignalAuthorChatReady.b)
}

// .AcFunDanmu.AuthorChatPlayerInfo c = 3;
inline bool CommonStateSignalAuthorChatReady::_internal_has_c() const {
  return this != internal_default_instance() && c_ != nullptr;
}
inline bool CommonStateSignalAuthorChatReady::has_c() const {
  return _internal_has_c();
}
inline const ::AcFunDanmu::AuthorChatPlayerInfo& CommonStateSignalAuthorChatReady::_internal_c() const {
  const ::AcFunDanmu::AuthorChatPlayerInfo* p = c_;
  return p != nullptr ? *p : *reinterpret_cast<const ::AcFunDanmu::AuthorChatPlayerInfo*>(
      &::AcFunDanmu::_AuthorChatPlayerInfo_default_instance_);
}
inline const ::AcFunDanmu::AuthorChatPlayerInfo& CommonStateSignalAuthorChatReady::c() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.CommonStateSignalAuthorChatReady.c)
  return _internal_c();
}
inline void CommonStateSignalAuthorChatReady::unsafe_arena_set_allocated_c(
    ::AcFunDanmu::AuthorChatPlayerInfo* c) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(c_);
  }
  c_ = c;
  if (c) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:AcFunDanmu.CommonStateSignalAuthorChatReady.c)
}
inline ::AcFunDanmu::AuthorChatPlayerInfo* CommonStateSignalAuthorChatReady::release_c() {
  
  ::AcFunDanmu::AuthorChatPlayerInfo* temp = c_;
  c_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::AcFunDanmu::AuthorChatPlayerInfo* CommonStateSignalAuthorChatReady::unsafe_arena_release_c() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.CommonStateSignalAuthorChatReady.c)
  
  ::AcFunDanmu::AuthorChatPlayerInfo* temp = c_;
  c_ = nullptr;
  return temp;
}
inline ::AcFunDanmu::AuthorChatPlayerInfo* CommonStateSignalAuthorChatReady::_internal_mutable_c() {
  
  if (c_ == nullptr) {
    auto* p = CreateMaybeMessage<::AcFunDanmu::AuthorChatPlayerInfo>(GetArena());
    c_ = p;
  }
  return c_;
}
inline ::AcFunDanmu::AuthorChatPlayerInfo* CommonStateSignalAuthorChatReady::mutable_c() {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.CommonStateSignalAuthorChatReady.c)
  return _internal_mutable_c();
}
inline void CommonStateSignalAuthorChatReady::set_allocated_c(::AcFunDanmu::AuthorChatPlayerInfo* c) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(c_);
  }
  if (c) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(c)->GetArena();
    if (message_arena != submessage_arena) {
      c = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, c, submessage_arena);
    }
    
  } else {
    
  }
  c_ = c;
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.CommonStateSignalAuthorChatReady.c)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_CommonStateSignalAuthorChatReady_2eproto