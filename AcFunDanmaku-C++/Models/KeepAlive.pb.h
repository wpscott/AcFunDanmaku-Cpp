// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: KeepAlive.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_KeepAlive_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_KeepAlive_2eproto

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
#include "Register.pb.h"
#include "PushServiceToken.pb.h"
#include "AccessPointsConfig.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_KeepAlive_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_KeepAlive_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_KeepAlive_2eproto;
namespace AcFunDanmu {
class KeepAliveRequest;
class KeepAliveRequestDefaultTypeInternal;
extern KeepAliveRequestDefaultTypeInternal _KeepAliveRequest_default_instance_;
class KeepAliveResponse;
class KeepAliveResponseDefaultTypeInternal;
extern KeepAliveResponseDefaultTypeInternal _KeepAliveResponse_default_instance_;
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::KeepAliveRequest* Arena::CreateMaybeMessage<::AcFunDanmu::KeepAliveRequest>(Arena*);
template<> ::AcFunDanmu::KeepAliveResponse* Arena::CreateMaybeMessage<::AcFunDanmu::KeepAliveResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {

// ===================================================================

class KeepAliveRequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.KeepAliveRequest) */ {
 public:
  inline KeepAliveRequest() : KeepAliveRequest(nullptr) {}
  virtual ~KeepAliveRequest();

  KeepAliveRequest(const KeepAliveRequest& from);
  KeepAliveRequest(KeepAliveRequest&& from) noexcept
    : KeepAliveRequest() {
    *this = ::std::move(from);
  }

  inline KeepAliveRequest& operator=(const KeepAliveRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline KeepAliveRequest& operator=(KeepAliveRequest&& from) noexcept {
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
  static const KeepAliveRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const KeepAliveRequest* internal_default_instance() {
    return reinterpret_cast<const KeepAliveRequest*>(
               &_KeepAliveRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(KeepAliveRequest& a, KeepAliveRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(KeepAliveRequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(KeepAliveRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline KeepAliveRequest* New() const final {
    return CreateMaybeMessage<KeepAliveRequest>(nullptr);
  }

  KeepAliveRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<KeepAliveRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const KeepAliveRequest& from);
  void MergeFrom(const KeepAliveRequest& from);
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
  void InternalSwap(KeepAliveRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.KeepAliveRequest";
  }
  protected:
  explicit KeepAliveRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_KeepAlive_2eproto);
    return ::descriptor_table_KeepAlive_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPushServiceTokenListFieldNumber = 4,
    kPushServiceTokenFieldNumber = 3,
    kPresenceStatusFieldNumber = 1,
    kAppActiveStatusFieldNumber = 2,
    kKeepaliveIntervalSecFieldNumber = 5,
  };
  // repeated .AcFunDanmu.PushServiceToken pushServiceTokenList = 4;
  int pushservicetokenlist_size() const;
  private:
  int _internal_pushservicetokenlist_size() const;
  public:
  void clear_pushservicetokenlist();
  ::AcFunDanmu::PushServiceToken* mutable_pushservicetokenlist(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::PushServiceToken >*
      mutable_pushservicetokenlist();
  private:
  const ::AcFunDanmu::PushServiceToken& _internal_pushservicetokenlist(int index) const;
  ::AcFunDanmu::PushServiceToken* _internal_add_pushservicetokenlist();
  public:
  const ::AcFunDanmu::PushServiceToken& pushservicetokenlist(int index) const;
  ::AcFunDanmu::PushServiceToken* add_pushservicetokenlist();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::PushServiceToken >&
      pushservicetokenlist() const;

  // .AcFunDanmu.PushServiceToken pushServiceToken = 3;
  bool has_pushservicetoken() const;
  private:
  bool _internal_has_pushservicetoken() const;
  public:
  void clear_pushservicetoken();
  const ::AcFunDanmu::PushServiceToken& pushservicetoken() const;
  ::AcFunDanmu::PushServiceToken* release_pushservicetoken();
  ::AcFunDanmu::PushServiceToken* mutable_pushservicetoken();
  void set_allocated_pushservicetoken(::AcFunDanmu::PushServiceToken* pushservicetoken);
  private:
  const ::AcFunDanmu::PushServiceToken& _internal_pushservicetoken() const;
  ::AcFunDanmu::PushServiceToken* _internal_mutable_pushservicetoken();
  public:
  void unsafe_arena_set_allocated_pushservicetoken(
      ::AcFunDanmu::PushServiceToken* pushservicetoken);
  ::AcFunDanmu::PushServiceToken* unsafe_arena_release_pushservicetoken();

  // .AcFunDanmu.RegisterRequest.PresenceStatus presenceStatus = 1;
  void clear_presencestatus();
  ::AcFunDanmu::RegisterRequest_PresenceStatus presencestatus() const;
  void set_presencestatus(::AcFunDanmu::RegisterRequest_PresenceStatus value);
  private:
  ::AcFunDanmu::RegisterRequest_PresenceStatus _internal_presencestatus() const;
  void _internal_set_presencestatus(::AcFunDanmu::RegisterRequest_PresenceStatus value);
  public:

  // .AcFunDanmu.RegisterRequest.ActiveStatus appActiveStatus = 2;
  void clear_appactivestatus();
  ::AcFunDanmu::RegisterRequest_ActiveStatus appactivestatus() const;
  void set_appactivestatus(::AcFunDanmu::RegisterRequest_ActiveStatus value);
  private:
  ::AcFunDanmu::RegisterRequest_ActiveStatus _internal_appactivestatus() const;
  void _internal_set_appactivestatus(::AcFunDanmu::RegisterRequest_ActiveStatus value);
  public:

  // int32 keepaliveIntervalSec = 5;
  void clear_keepaliveintervalsec();
  ::PROTOBUF_NAMESPACE_ID::int32 keepaliveintervalsec() const;
  void set_keepaliveintervalsec(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_keepaliveintervalsec() const;
  void _internal_set_keepaliveintervalsec(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.KeepAliveRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::PushServiceToken > pushservicetokenlist_;
  ::AcFunDanmu::PushServiceToken* pushservicetoken_;
  int presencestatus_;
  int appactivestatus_;
  ::PROTOBUF_NAMESPACE_ID::int32 keepaliveintervalsec_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_KeepAlive_2eproto;
};
// -------------------------------------------------------------------

class KeepAliveResponse PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.KeepAliveResponse) */ {
 public:
  inline KeepAliveResponse() : KeepAliveResponse(nullptr) {}
  virtual ~KeepAliveResponse();

  KeepAliveResponse(const KeepAliveResponse& from);
  KeepAliveResponse(KeepAliveResponse&& from) noexcept
    : KeepAliveResponse() {
    *this = ::std::move(from);
  }

  inline KeepAliveResponse& operator=(const KeepAliveResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline KeepAliveResponse& operator=(KeepAliveResponse&& from) noexcept {
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
  static const KeepAliveResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const KeepAliveResponse* internal_default_instance() {
    return reinterpret_cast<const KeepAliveResponse*>(
               &_KeepAliveResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(KeepAliveResponse& a, KeepAliveResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(KeepAliveResponse* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(KeepAliveResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline KeepAliveResponse* New() const final {
    return CreateMaybeMessage<KeepAliveResponse>(nullptr);
  }

  KeepAliveResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<KeepAliveResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const KeepAliveResponse& from);
  void MergeFrom(const KeepAliveResponse& from);
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
  void InternalSwap(KeepAliveResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.KeepAliveResponse";
  }
  protected:
  explicit KeepAliveResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_KeepAlive_2eproto);
    return ::descriptor_table_KeepAlive_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAccessPointsConfigFieldNumber = 1,
    kAccessPointsConfigIpv6FieldNumber = 3,
    kServerMsecFieldNumber = 2,
  };
  // .AcFunDanmu.AccessPointsConfig accessPointsConfig = 1;
  bool has_accesspointsconfig() const;
  private:
  bool _internal_has_accesspointsconfig() const;
  public:
  void clear_accesspointsconfig();
  const ::AcFunDanmu::AccessPointsConfig& accesspointsconfig() const;
  ::AcFunDanmu::AccessPointsConfig* release_accesspointsconfig();
  ::AcFunDanmu::AccessPointsConfig* mutable_accesspointsconfig();
  void set_allocated_accesspointsconfig(::AcFunDanmu::AccessPointsConfig* accesspointsconfig);
  private:
  const ::AcFunDanmu::AccessPointsConfig& _internal_accesspointsconfig() const;
  ::AcFunDanmu::AccessPointsConfig* _internal_mutable_accesspointsconfig();
  public:
  void unsafe_arena_set_allocated_accesspointsconfig(
      ::AcFunDanmu::AccessPointsConfig* accesspointsconfig);
  ::AcFunDanmu::AccessPointsConfig* unsafe_arena_release_accesspointsconfig();

  // .AcFunDanmu.AccessPointsConfig accessPointsConfigIpv6 = 3;
  bool has_accesspointsconfigipv6() const;
  private:
  bool _internal_has_accesspointsconfigipv6() const;
  public:
  void clear_accesspointsconfigipv6();
  const ::AcFunDanmu::AccessPointsConfig& accesspointsconfigipv6() const;
  ::AcFunDanmu::AccessPointsConfig* release_accesspointsconfigipv6();
  ::AcFunDanmu::AccessPointsConfig* mutable_accesspointsconfigipv6();
  void set_allocated_accesspointsconfigipv6(::AcFunDanmu::AccessPointsConfig* accesspointsconfigipv6);
  private:
  const ::AcFunDanmu::AccessPointsConfig& _internal_accesspointsconfigipv6() const;
  ::AcFunDanmu::AccessPointsConfig* _internal_mutable_accesspointsconfigipv6();
  public:
  void unsafe_arena_set_allocated_accesspointsconfigipv6(
      ::AcFunDanmu::AccessPointsConfig* accesspointsconfigipv6);
  ::AcFunDanmu::AccessPointsConfig* unsafe_arena_release_accesspointsconfigipv6();

  // int64 serverMsec = 2;
  void clear_servermsec();
  ::PROTOBUF_NAMESPACE_ID::int64 servermsec() const;
  void set_servermsec(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_servermsec() const;
  void _internal_set_servermsec(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.KeepAliveResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::AcFunDanmu::AccessPointsConfig* accesspointsconfig_;
  ::AcFunDanmu::AccessPointsConfig* accesspointsconfigipv6_;
  ::PROTOBUF_NAMESPACE_ID::int64 servermsec_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_KeepAlive_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// KeepAliveRequest

// .AcFunDanmu.RegisterRequest.PresenceStatus presenceStatus = 1;
inline void KeepAliveRequest::clear_presencestatus() {
  presencestatus_ = 0;
}
inline ::AcFunDanmu::RegisterRequest_PresenceStatus KeepAliveRequest::_internal_presencestatus() const {
  return static_cast< ::AcFunDanmu::RegisterRequest_PresenceStatus >(presencestatus_);
}
inline ::AcFunDanmu::RegisterRequest_PresenceStatus KeepAliveRequest::presencestatus() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.KeepAliveRequest.presenceStatus)
  return _internal_presencestatus();
}
inline void KeepAliveRequest::_internal_set_presencestatus(::AcFunDanmu::RegisterRequest_PresenceStatus value) {
  
  presencestatus_ = value;
}
inline void KeepAliveRequest::set_presencestatus(::AcFunDanmu::RegisterRequest_PresenceStatus value) {
  _internal_set_presencestatus(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.KeepAliveRequest.presenceStatus)
}

// .AcFunDanmu.RegisterRequest.ActiveStatus appActiveStatus = 2;
inline void KeepAliveRequest::clear_appactivestatus() {
  appactivestatus_ = 0;
}
inline ::AcFunDanmu::RegisterRequest_ActiveStatus KeepAliveRequest::_internal_appactivestatus() const {
  return static_cast< ::AcFunDanmu::RegisterRequest_ActiveStatus >(appactivestatus_);
}
inline ::AcFunDanmu::RegisterRequest_ActiveStatus KeepAliveRequest::appactivestatus() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.KeepAliveRequest.appActiveStatus)
  return _internal_appactivestatus();
}
inline void KeepAliveRequest::_internal_set_appactivestatus(::AcFunDanmu::RegisterRequest_ActiveStatus value) {
  
  appactivestatus_ = value;
}
inline void KeepAliveRequest::set_appactivestatus(::AcFunDanmu::RegisterRequest_ActiveStatus value) {
  _internal_set_appactivestatus(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.KeepAliveRequest.appActiveStatus)
}

// .AcFunDanmu.PushServiceToken pushServiceToken = 3;
inline bool KeepAliveRequest::_internal_has_pushservicetoken() const {
  return this != internal_default_instance() && pushservicetoken_ != nullptr;
}
inline bool KeepAliveRequest::has_pushservicetoken() const {
  return _internal_has_pushservicetoken();
}
inline const ::AcFunDanmu::PushServiceToken& KeepAliveRequest::_internal_pushservicetoken() const {
  const ::AcFunDanmu::PushServiceToken* p = pushservicetoken_;
  return p != nullptr ? *p : *reinterpret_cast<const ::AcFunDanmu::PushServiceToken*>(
      &::AcFunDanmu::_PushServiceToken_default_instance_);
}
inline const ::AcFunDanmu::PushServiceToken& KeepAliveRequest::pushservicetoken() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.KeepAliveRequest.pushServiceToken)
  return _internal_pushservicetoken();
}
inline void KeepAliveRequest::unsafe_arena_set_allocated_pushservicetoken(
    ::AcFunDanmu::PushServiceToken* pushservicetoken) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(pushservicetoken_);
  }
  pushservicetoken_ = pushservicetoken;
  if (pushservicetoken) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:AcFunDanmu.KeepAliveRequest.pushServiceToken)
}
inline ::AcFunDanmu::PushServiceToken* KeepAliveRequest::release_pushservicetoken() {
  
  ::AcFunDanmu::PushServiceToken* temp = pushservicetoken_;
  pushservicetoken_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::AcFunDanmu::PushServiceToken* KeepAliveRequest::unsafe_arena_release_pushservicetoken() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.KeepAliveRequest.pushServiceToken)
  
  ::AcFunDanmu::PushServiceToken* temp = pushservicetoken_;
  pushservicetoken_ = nullptr;
  return temp;
}
inline ::AcFunDanmu::PushServiceToken* KeepAliveRequest::_internal_mutable_pushservicetoken() {
  
  if (pushservicetoken_ == nullptr) {
    auto* p = CreateMaybeMessage<::AcFunDanmu::PushServiceToken>(GetArena());
    pushservicetoken_ = p;
  }
  return pushservicetoken_;
}
inline ::AcFunDanmu::PushServiceToken* KeepAliveRequest::mutable_pushservicetoken() {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.KeepAliveRequest.pushServiceToken)
  return _internal_mutable_pushservicetoken();
}
inline void KeepAliveRequest::set_allocated_pushservicetoken(::AcFunDanmu::PushServiceToken* pushservicetoken) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(pushservicetoken_);
  }
  if (pushservicetoken) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(pushservicetoken)->GetArena();
    if (message_arena != submessage_arena) {
      pushservicetoken = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, pushservicetoken, submessage_arena);
    }
    
  } else {
    
  }
  pushservicetoken_ = pushservicetoken;
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.KeepAliveRequest.pushServiceToken)
}

// repeated .AcFunDanmu.PushServiceToken pushServiceTokenList = 4;
inline int KeepAliveRequest::_internal_pushservicetokenlist_size() const {
  return pushservicetokenlist_.size();
}
inline int KeepAliveRequest::pushservicetokenlist_size() const {
  return _internal_pushservicetokenlist_size();
}
inline ::AcFunDanmu::PushServiceToken* KeepAliveRequest::mutable_pushservicetokenlist(int index) {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.KeepAliveRequest.pushServiceTokenList)
  return pushservicetokenlist_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::PushServiceToken >*
KeepAliveRequest::mutable_pushservicetokenlist() {
  // @@protoc_insertion_point(field_mutable_list:AcFunDanmu.KeepAliveRequest.pushServiceTokenList)
  return &pushservicetokenlist_;
}
inline const ::AcFunDanmu::PushServiceToken& KeepAliveRequest::_internal_pushservicetokenlist(int index) const {
  return pushservicetokenlist_.Get(index);
}
inline const ::AcFunDanmu::PushServiceToken& KeepAliveRequest::pushservicetokenlist(int index) const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.KeepAliveRequest.pushServiceTokenList)
  return _internal_pushservicetokenlist(index);
}
inline ::AcFunDanmu::PushServiceToken* KeepAliveRequest::_internal_add_pushservicetokenlist() {
  return pushservicetokenlist_.Add();
}
inline ::AcFunDanmu::PushServiceToken* KeepAliveRequest::add_pushservicetokenlist() {
  // @@protoc_insertion_point(field_add:AcFunDanmu.KeepAliveRequest.pushServiceTokenList)
  return _internal_add_pushservicetokenlist();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::PushServiceToken >&
KeepAliveRequest::pushservicetokenlist() const {
  // @@protoc_insertion_point(field_list:AcFunDanmu.KeepAliveRequest.pushServiceTokenList)
  return pushservicetokenlist_;
}

// int32 keepaliveIntervalSec = 5;
inline void KeepAliveRequest::clear_keepaliveintervalsec() {
  keepaliveintervalsec_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 KeepAliveRequest::_internal_keepaliveintervalsec() const {
  return keepaliveintervalsec_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 KeepAliveRequest::keepaliveintervalsec() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.KeepAliveRequest.keepaliveIntervalSec)
  return _internal_keepaliveintervalsec();
}
inline void KeepAliveRequest::_internal_set_keepaliveintervalsec(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  keepaliveintervalsec_ = value;
}
inline void KeepAliveRequest::set_keepaliveintervalsec(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_keepaliveintervalsec(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.KeepAliveRequest.keepaliveIntervalSec)
}

// -------------------------------------------------------------------

// KeepAliveResponse

// .AcFunDanmu.AccessPointsConfig accessPointsConfig = 1;
inline bool KeepAliveResponse::_internal_has_accesspointsconfig() const {
  return this != internal_default_instance() && accesspointsconfig_ != nullptr;
}
inline bool KeepAliveResponse::has_accesspointsconfig() const {
  return _internal_has_accesspointsconfig();
}
inline const ::AcFunDanmu::AccessPointsConfig& KeepAliveResponse::_internal_accesspointsconfig() const {
  const ::AcFunDanmu::AccessPointsConfig* p = accesspointsconfig_;
  return p != nullptr ? *p : *reinterpret_cast<const ::AcFunDanmu::AccessPointsConfig*>(
      &::AcFunDanmu::_AccessPointsConfig_default_instance_);
}
inline const ::AcFunDanmu::AccessPointsConfig& KeepAliveResponse::accesspointsconfig() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.KeepAliveResponse.accessPointsConfig)
  return _internal_accesspointsconfig();
}
inline void KeepAliveResponse::unsafe_arena_set_allocated_accesspointsconfig(
    ::AcFunDanmu::AccessPointsConfig* accesspointsconfig) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(accesspointsconfig_);
  }
  accesspointsconfig_ = accesspointsconfig;
  if (accesspointsconfig) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:AcFunDanmu.KeepAliveResponse.accessPointsConfig)
}
inline ::AcFunDanmu::AccessPointsConfig* KeepAliveResponse::release_accesspointsconfig() {
  
  ::AcFunDanmu::AccessPointsConfig* temp = accesspointsconfig_;
  accesspointsconfig_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::AcFunDanmu::AccessPointsConfig* KeepAliveResponse::unsafe_arena_release_accesspointsconfig() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.KeepAliveResponse.accessPointsConfig)
  
  ::AcFunDanmu::AccessPointsConfig* temp = accesspointsconfig_;
  accesspointsconfig_ = nullptr;
  return temp;
}
inline ::AcFunDanmu::AccessPointsConfig* KeepAliveResponse::_internal_mutable_accesspointsconfig() {
  
  if (accesspointsconfig_ == nullptr) {
    auto* p = CreateMaybeMessage<::AcFunDanmu::AccessPointsConfig>(GetArena());
    accesspointsconfig_ = p;
  }
  return accesspointsconfig_;
}
inline ::AcFunDanmu::AccessPointsConfig* KeepAliveResponse::mutable_accesspointsconfig() {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.KeepAliveResponse.accessPointsConfig)
  return _internal_mutable_accesspointsconfig();
}
inline void KeepAliveResponse::set_allocated_accesspointsconfig(::AcFunDanmu::AccessPointsConfig* accesspointsconfig) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(accesspointsconfig_);
  }
  if (accesspointsconfig) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(accesspointsconfig)->GetArena();
    if (message_arena != submessage_arena) {
      accesspointsconfig = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, accesspointsconfig, submessage_arena);
    }
    
  } else {
    
  }
  accesspointsconfig_ = accesspointsconfig;
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.KeepAliveResponse.accessPointsConfig)
}

// int64 serverMsec = 2;
inline void KeepAliveResponse::clear_servermsec() {
  servermsec_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 KeepAliveResponse::_internal_servermsec() const {
  return servermsec_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 KeepAliveResponse::servermsec() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.KeepAliveResponse.serverMsec)
  return _internal_servermsec();
}
inline void KeepAliveResponse::_internal_set_servermsec(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  servermsec_ = value;
}
inline void KeepAliveResponse::set_servermsec(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_servermsec(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.KeepAliveResponse.serverMsec)
}

// .AcFunDanmu.AccessPointsConfig accessPointsConfigIpv6 = 3;
inline bool KeepAliveResponse::_internal_has_accesspointsconfigipv6() const {
  return this != internal_default_instance() && accesspointsconfigipv6_ != nullptr;
}
inline bool KeepAliveResponse::has_accesspointsconfigipv6() const {
  return _internal_has_accesspointsconfigipv6();
}
inline const ::AcFunDanmu::AccessPointsConfig& KeepAliveResponse::_internal_accesspointsconfigipv6() const {
  const ::AcFunDanmu::AccessPointsConfig* p = accesspointsconfigipv6_;
  return p != nullptr ? *p : *reinterpret_cast<const ::AcFunDanmu::AccessPointsConfig*>(
      &::AcFunDanmu::_AccessPointsConfig_default_instance_);
}
inline const ::AcFunDanmu::AccessPointsConfig& KeepAliveResponse::accesspointsconfigipv6() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.KeepAliveResponse.accessPointsConfigIpv6)
  return _internal_accesspointsconfigipv6();
}
inline void KeepAliveResponse::unsafe_arena_set_allocated_accesspointsconfigipv6(
    ::AcFunDanmu::AccessPointsConfig* accesspointsconfigipv6) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(accesspointsconfigipv6_);
  }
  accesspointsconfigipv6_ = accesspointsconfigipv6;
  if (accesspointsconfigipv6) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:AcFunDanmu.KeepAliveResponse.accessPointsConfigIpv6)
}
inline ::AcFunDanmu::AccessPointsConfig* KeepAliveResponse::release_accesspointsconfigipv6() {
  
  ::AcFunDanmu::AccessPointsConfig* temp = accesspointsconfigipv6_;
  accesspointsconfigipv6_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::AcFunDanmu::AccessPointsConfig* KeepAliveResponse::unsafe_arena_release_accesspointsconfigipv6() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.KeepAliveResponse.accessPointsConfigIpv6)
  
  ::AcFunDanmu::AccessPointsConfig* temp = accesspointsconfigipv6_;
  accesspointsconfigipv6_ = nullptr;
  return temp;
}
inline ::AcFunDanmu::AccessPointsConfig* KeepAliveResponse::_internal_mutable_accesspointsconfigipv6() {
  
  if (accesspointsconfigipv6_ == nullptr) {
    auto* p = CreateMaybeMessage<::AcFunDanmu::AccessPointsConfig>(GetArena());
    accesspointsconfigipv6_ = p;
  }
  return accesspointsconfigipv6_;
}
inline ::AcFunDanmu::AccessPointsConfig* KeepAliveResponse::mutable_accesspointsconfigipv6() {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.KeepAliveResponse.accessPointsConfigIpv6)
  return _internal_mutable_accesspointsconfigipv6();
}
inline void KeepAliveResponse::set_allocated_accesspointsconfigipv6(::AcFunDanmu::AccessPointsConfig* accesspointsconfigipv6) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(accesspointsconfigipv6_);
  }
  if (accesspointsconfigipv6) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(accesspointsconfigipv6)->GetArena();
    if (message_arena != submessage_arena) {
      accesspointsconfigipv6 = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, accesspointsconfigipv6, submessage_arena);
    }
    
  } else {
    
  }
  accesspointsconfigipv6_ = accesspointsconfigipv6;
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.KeepAliveResponse.accessPointsConfigIpv6)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_KeepAlive_2eproto