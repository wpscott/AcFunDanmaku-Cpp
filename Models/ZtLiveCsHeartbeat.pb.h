// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ZtLiveCsHeartbeat.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ZtLiveCsHeartbeat_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ZtLiveCsHeartbeat_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3017000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3017000 < PROTOBUF_MIN_PROTOC_VERSION
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
#define PROTOBUF_INTERNAL_EXPORT_ZtLiveCsHeartbeat_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ZtLiveCsHeartbeat_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ZtLiveCsHeartbeat_2eproto;
namespace AcFunDanmu {
class ZtLiveCsHeartbeat;
struct ZtLiveCsHeartbeatDefaultTypeInternal;
extern ZtLiveCsHeartbeatDefaultTypeInternal _ZtLiveCsHeartbeat_default_instance_;
class ZtLiveCsHeartbeatAck;
struct ZtLiveCsHeartbeatAckDefaultTypeInternal;
extern ZtLiveCsHeartbeatAckDefaultTypeInternal _ZtLiveCsHeartbeatAck_default_instance_;
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::ZtLiveCsHeartbeat* Arena::CreateMaybeMessage<::AcFunDanmu::ZtLiveCsHeartbeat>(Arena*);
template<> ::AcFunDanmu::ZtLiveCsHeartbeatAck* Arena::CreateMaybeMessage<::AcFunDanmu::ZtLiveCsHeartbeatAck>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {

// ===================================================================

class ZtLiveCsHeartbeat final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.ZtLiveCsHeartbeat) */ {
 public:
  inline ZtLiveCsHeartbeat() : ZtLiveCsHeartbeat(nullptr) {}
  ~ZtLiveCsHeartbeat() override;
  explicit constexpr ZtLiveCsHeartbeat(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ZtLiveCsHeartbeat(const ZtLiveCsHeartbeat& from);
  ZtLiveCsHeartbeat(ZtLiveCsHeartbeat&& from) noexcept
    : ZtLiveCsHeartbeat() {
    *this = ::std::move(from);
  }

  inline ZtLiveCsHeartbeat& operator=(const ZtLiveCsHeartbeat& from) {
    CopyFrom(from);
    return *this;
  }
  inline ZtLiveCsHeartbeat& operator=(ZtLiveCsHeartbeat&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const ZtLiveCsHeartbeat& default_instance() {
    return *internal_default_instance();
  }
  static inline const ZtLiveCsHeartbeat* internal_default_instance() {
    return reinterpret_cast<const ZtLiveCsHeartbeat*>(
               &_ZtLiveCsHeartbeat_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ZtLiveCsHeartbeat& a, ZtLiveCsHeartbeat& b) {
    a.Swap(&b);
  }
  inline void Swap(ZtLiveCsHeartbeat* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ZtLiveCsHeartbeat* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ZtLiveCsHeartbeat* New() const final {
    return new ZtLiveCsHeartbeat();
  }

  ZtLiveCsHeartbeat* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ZtLiveCsHeartbeat>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ZtLiveCsHeartbeat& from);
  void MergeFrom(const ZtLiveCsHeartbeat& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ZtLiveCsHeartbeat* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.ZtLiveCsHeartbeat";
  }
  protected:
  explicit ZtLiveCsHeartbeat(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kClientTimestampMsFieldNumber = 1,
    kSequenceFieldNumber = 2,
  };
  // int64 clientTimestampMs = 1;
  void clear_clienttimestampms();
  ::PROTOBUF_NAMESPACE_ID::int64 clienttimestampms() const;
  void set_clienttimestampms(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_clienttimestampms() const;
  void _internal_set_clienttimestampms(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // int64 sequence = 2;
  void clear_sequence();
  ::PROTOBUF_NAMESPACE_ID::int64 sequence() const;
  void set_sequence(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_sequence() const;
  void _internal_set_sequence(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.ZtLiveCsHeartbeat)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::int64 clienttimestampms_;
  ::PROTOBUF_NAMESPACE_ID::int64 sequence_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ZtLiveCsHeartbeat_2eproto;
};
// -------------------------------------------------------------------

class ZtLiveCsHeartbeatAck final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.ZtLiveCsHeartbeatAck) */ {
 public:
  inline ZtLiveCsHeartbeatAck() : ZtLiveCsHeartbeatAck(nullptr) {}
  ~ZtLiveCsHeartbeatAck() override;
  explicit constexpr ZtLiveCsHeartbeatAck(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ZtLiveCsHeartbeatAck(const ZtLiveCsHeartbeatAck& from);
  ZtLiveCsHeartbeatAck(ZtLiveCsHeartbeatAck&& from) noexcept
    : ZtLiveCsHeartbeatAck() {
    *this = ::std::move(from);
  }

  inline ZtLiveCsHeartbeatAck& operator=(const ZtLiveCsHeartbeatAck& from) {
    CopyFrom(from);
    return *this;
  }
  inline ZtLiveCsHeartbeatAck& operator=(ZtLiveCsHeartbeatAck&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const ZtLiveCsHeartbeatAck& default_instance() {
    return *internal_default_instance();
  }
  static inline const ZtLiveCsHeartbeatAck* internal_default_instance() {
    return reinterpret_cast<const ZtLiveCsHeartbeatAck*>(
               &_ZtLiveCsHeartbeatAck_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(ZtLiveCsHeartbeatAck& a, ZtLiveCsHeartbeatAck& b) {
    a.Swap(&b);
  }
  inline void Swap(ZtLiveCsHeartbeatAck* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ZtLiveCsHeartbeatAck* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ZtLiveCsHeartbeatAck* New() const final {
    return new ZtLiveCsHeartbeatAck();
  }

  ZtLiveCsHeartbeatAck* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ZtLiveCsHeartbeatAck>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ZtLiveCsHeartbeatAck& from);
  void MergeFrom(const ZtLiveCsHeartbeatAck& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ZtLiveCsHeartbeatAck* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.ZtLiveCsHeartbeatAck";
  }
  protected:
  explicit ZtLiveCsHeartbeatAck(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kServerTimestampMsFieldNumber = 1,
    kClientTimestampMsFieldNumber = 2,
    kClientSequenceFieldNumber = 3,
  };
  // int64 serverTimestampMs = 1;
  void clear_servertimestampms();
  ::PROTOBUF_NAMESPACE_ID::int64 servertimestampms() const;
  void set_servertimestampms(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_servertimestampms() const;
  void _internal_set_servertimestampms(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // int64 clientTimestampMs = 2;
  void clear_clienttimestampms();
  ::PROTOBUF_NAMESPACE_ID::int64 clienttimestampms() const;
  void set_clienttimestampms(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_clienttimestampms() const;
  void _internal_set_clienttimestampms(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // int64 clientSequence = 3;
  void clear_clientsequence();
  ::PROTOBUF_NAMESPACE_ID::int64 clientsequence() const;
  void set_clientsequence(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_clientsequence() const;
  void _internal_set_clientsequence(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.ZtLiveCsHeartbeatAck)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::int64 servertimestampms_;
  ::PROTOBUF_NAMESPACE_ID::int64 clienttimestampms_;
  ::PROTOBUF_NAMESPACE_ID::int64 clientsequence_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ZtLiveCsHeartbeat_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ZtLiveCsHeartbeat

// int64 clientTimestampMs = 1;
inline void ZtLiveCsHeartbeat::clear_clienttimestampms() {
  clienttimestampms_ = int64_t{0};
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ZtLiveCsHeartbeat::_internal_clienttimestampms() const {
  return clienttimestampms_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ZtLiveCsHeartbeat::clienttimestampms() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.ZtLiveCsHeartbeat.clientTimestampMs)
  return _internal_clienttimestampms();
}
inline void ZtLiveCsHeartbeat::_internal_set_clienttimestampms(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  clienttimestampms_ = value;
}
inline void ZtLiveCsHeartbeat::set_clienttimestampms(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_clienttimestampms(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.ZtLiveCsHeartbeat.clientTimestampMs)
}

// int64 sequence = 2;
inline void ZtLiveCsHeartbeat::clear_sequence() {
  sequence_ = int64_t{0};
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ZtLiveCsHeartbeat::_internal_sequence() const {
  return sequence_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ZtLiveCsHeartbeat::sequence() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.ZtLiveCsHeartbeat.sequence)
  return _internal_sequence();
}
inline void ZtLiveCsHeartbeat::_internal_set_sequence(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  sequence_ = value;
}
inline void ZtLiveCsHeartbeat::set_sequence(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_sequence(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.ZtLiveCsHeartbeat.sequence)
}

// -------------------------------------------------------------------

// ZtLiveCsHeartbeatAck

// int64 serverTimestampMs = 1;
inline void ZtLiveCsHeartbeatAck::clear_servertimestampms() {
  servertimestampms_ = int64_t{0};
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ZtLiveCsHeartbeatAck::_internal_servertimestampms() const {
  return servertimestampms_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ZtLiveCsHeartbeatAck::servertimestampms() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.ZtLiveCsHeartbeatAck.serverTimestampMs)
  return _internal_servertimestampms();
}
inline void ZtLiveCsHeartbeatAck::_internal_set_servertimestampms(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  servertimestampms_ = value;
}
inline void ZtLiveCsHeartbeatAck::set_servertimestampms(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_servertimestampms(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.ZtLiveCsHeartbeatAck.serverTimestampMs)
}

// int64 clientTimestampMs = 2;
inline void ZtLiveCsHeartbeatAck::clear_clienttimestampms() {
  clienttimestampms_ = int64_t{0};
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ZtLiveCsHeartbeatAck::_internal_clienttimestampms() const {
  return clienttimestampms_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ZtLiveCsHeartbeatAck::clienttimestampms() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.ZtLiveCsHeartbeatAck.clientTimestampMs)
  return _internal_clienttimestampms();
}
inline void ZtLiveCsHeartbeatAck::_internal_set_clienttimestampms(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  clienttimestampms_ = value;
}
inline void ZtLiveCsHeartbeatAck::set_clienttimestampms(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_clienttimestampms(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.ZtLiveCsHeartbeatAck.clientTimestampMs)
}

// int64 clientSequence = 3;
inline void ZtLiveCsHeartbeatAck::clear_clientsequence() {
  clientsequence_ = int64_t{0};
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ZtLiveCsHeartbeatAck::_internal_clientsequence() const {
  return clientsequence_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ZtLiveCsHeartbeatAck::clientsequence() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.ZtLiveCsHeartbeatAck.clientSequence)
  return _internal_clientsequence();
}
inline void ZtLiveCsHeartbeatAck::_internal_set_clientsequence(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  clientsequence_ = value;
}
inline void ZtLiveCsHeartbeatAck::set_clientsequence(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_clientsequence(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.ZtLiveCsHeartbeatAck.clientSequence)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ZtLiveCsHeartbeat_2eproto
