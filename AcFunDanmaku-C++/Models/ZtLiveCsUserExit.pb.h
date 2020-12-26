// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ZtLiveCsUserExit.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ZtLiveCsUserExit_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ZtLiveCsUserExit_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ZtLiveCsUserExit_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ZtLiveCsUserExit_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ZtLiveCsUserExit_2eproto;
namespace AcFunDanmu {
class ZtLiveCsUserExit;
class ZtLiveCsUserExitDefaultTypeInternal;
extern ZtLiveCsUserExitDefaultTypeInternal _ZtLiveCsUserExit_default_instance_;
class ZtLiveCsUserExitAck;
class ZtLiveCsUserExitAckDefaultTypeInternal;
extern ZtLiveCsUserExitAckDefaultTypeInternal _ZtLiveCsUserExitAck_default_instance_;
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::ZtLiveCsUserExit* Arena::CreateMaybeMessage<::AcFunDanmu::ZtLiveCsUserExit>(Arena*);
template<> ::AcFunDanmu::ZtLiveCsUserExitAck* Arena::CreateMaybeMessage<::AcFunDanmu::ZtLiveCsUserExitAck>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {

// ===================================================================

class ZtLiveCsUserExit PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.ZtLiveCsUserExit) */ {
 public:
  inline ZtLiveCsUserExit() : ZtLiveCsUserExit(nullptr) {}
  virtual ~ZtLiveCsUserExit();

  ZtLiveCsUserExit(const ZtLiveCsUserExit& from);
  ZtLiveCsUserExit(ZtLiveCsUserExit&& from) noexcept
    : ZtLiveCsUserExit() {
    *this = ::std::move(from);
  }

  inline ZtLiveCsUserExit& operator=(const ZtLiveCsUserExit& from) {
    CopyFrom(from);
    return *this;
  }
  inline ZtLiveCsUserExit& operator=(ZtLiveCsUserExit&& from) noexcept {
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
  static const ZtLiveCsUserExit& default_instance();

  static inline const ZtLiveCsUserExit* internal_default_instance() {
    return reinterpret_cast<const ZtLiveCsUserExit*>(
               &_ZtLiveCsUserExit_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ZtLiveCsUserExit& a, ZtLiveCsUserExit& b) {
    a.Swap(&b);
  }
  inline void Swap(ZtLiveCsUserExit* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ZtLiveCsUserExit* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ZtLiveCsUserExit* New() const final {
    return CreateMaybeMessage<ZtLiveCsUserExit>(nullptr);
  }

  ZtLiveCsUserExit* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ZtLiveCsUserExit>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ZtLiveCsUserExit& from);
  void MergeFrom(const ZtLiveCsUserExit& from);
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
  void InternalSwap(ZtLiveCsUserExit* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.ZtLiveCsUserExit";
  }
  protected:
  explicit ZtLiveCsUserExit(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ZtLiveCsUserExit_2eproto);
    return ::descriptor_table_ZtLiveCsUserExit_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:AcFunDanmu.ZtLiveCsUserExit)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ZtLiveCsUserExit_2eproto;
};
// -------------------------------------------------------------------

class ZtLiveCsUserExitAck PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.ZtLiveCsUserExitAck) */ {
 public:
  inline ZtLiveCsUserExitAck() : ZtLiveCsUserExitAck(nullptr) {}
  virtual ~ZtLiveCsUserExitAck();

  ZtLiveCsUserExitAck(const ZtLiveCsUserExitAck& from);
  ZtLiveCsUserExitAck(ZtLiveCsUserExitAck&& from) noexcept
    : ZtLiveCsUserExitAck() {
    *this = ::std::move(from);
  }

  inline ZtLiveCsUserExitAck& operator=(const ZtLiveCsUserExitAck& from) {
    CopyFrom(from);
    return *this;
  }
  inline ZtLiveCsUserExitAck& operator=(ZtLiveCsUserExitAck&& from) noexcept {
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
  static const ZtLiveCsUserExitAck& default_instance();

  static inline const ZtLiveCsUserExitAck* internal_default_instance() {
    return reinterpret_cast<const ZtLiveCsUserExitAck*>(
               &_ZtLiveCsUserExitAck_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(ZtLiveCsUserExitAck& a, ZtLiveCsUserExitAck& b) {
    a.Swap(&b);
  }
  inline void Swap(ZtLiveCsUserExitAck* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ZtLiveCsUserExitAck* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ZtLiveCsUserExitAck* New() const final {
    return CreateMaybeMessage<ZtLiveCsUserExitAck>(nullptr);
  }

  ZtLiveCsUserExitAck* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ZtLiveCsUserExitAck>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ZtLiveCsUserExitAck& from);
  void MergeFrom(const ZtLiveCsUserExitAck& from);
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
  void InternalSwap(ZtLiveCsUserExitAck* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.ZtLiveCsUserExitAck";
  }
  protected:
  explicit ZtLiveCsUserExitAck(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ZtLiveCsUserExit_2eproto);
    return ::descriptor_table_ZtLiveCsUserExit_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:AcFunDanmu.ZtLiveCsUserExitAck)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ZtLiveCsUserExit_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ZtLiveCsUserExit

// -------------------------------------------------------------------

// ZtLiveCsUserExitAck

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ZtLiveCsUserExit_2eproto
