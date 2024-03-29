// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PublicGroupSearchInfo.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_PublicGroupSearchInfo_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_PublicGroupSearchInfo_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021002 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "GroupBasicInfo.pb.h"
#include "GroupJoinStatus.pb.h"
#include "PublicGroupHit.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_PublicGroupSearchInfo_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_PublicGroupSearchInfo_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_PublicGroupSearchInfo_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Search {
class PublicGroupSearchInfo;
struct PublicGroupSearchInfoDefaultTypeInternal;
extern PublicGroupSearchInfoDefaultTypeInternal _PublicGroupSearchInfo_default_instance_;
}  // namespace Search
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Cloud::Search::PublicGroupSearchInfo* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Cloud::Search::PublicGroupSearchInfo>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Search {

// ===================================================================

class PublicGroupSearchInfo final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Cloud.Search.PublicGroupSearchInfo) */ {
 public:
  inline PublicGroupSearchInfo() : PublicGroupSearchInfo(nullptr) {}
  ~PublicGroupSearchInfo() override;
  explicit PROTOBUF_CONSTEXPR PublicGroupSearchInfo(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  PublicGroupSearchInfo(const PublicGroupSearchInfo& from);
  PublicGroupSearchInfo(PublicGroupSearchInfo&& from) noexcept
    : PublicGroupSearchInfo() {
    *this = ::std::move(from);
  }

  inline PublicGroupSearchInfo& operator=(const PublicGroupSearchInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline PublicGroupSearchInfo& operator=(PublicGroupSearchInfo&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
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
  static const PublicGroupSearchInfo& default_instance() {
    return *internal_default_instance();
  }
  static inline const PublicGroupSearchInfo* internal_default_instance() {
    return reinterpret_cast<const PublicGroupSearchInfo*>(
               &_PublicGroupSearchInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PublicGroupSearchInfo& a, PublicGroupSearchInfo& b) {
    a.Swap(&b);
  }
  inline void Swap(PublicGroupSearchInfo* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(PublicGroupSearchInfo* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  PublicGroupSearchInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<PublicGroupSearchInfo>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const PublicGroupSearchInfo& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const PublicGroupSearchInfo& from) {
    PublicGroupSearchInfo::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(PublicGroupSearchInfo* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Cloud.Search.PublicGroupSearchInfo";
  }
  protected:
  explicit PublicGroupSearchInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kGroupBasicInfoFieldNumber = 1,
    kGroupHitFieldNumber = 3,
    kStatusFieldNumber = 2,
  };
  // .AcFunDanmu.Im.Cloud.Message.GroupBasicInfo groupBasicInfo = 1;
  bool has_groupbasicinfo() const;
  private:
  bool _internal_has_groupbasicinfo() const;
  public:
  void clear_groupbasicinfo();
  const ::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo& groupbasicinfo() const;
  PROTOBUF_NODISCARD ::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo* release_groupbasicinfo();
  ::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo* mutable_groupbasicinfo();
  void set_allocated_groupbasicinfo(::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo* groupbasicinfo);
  private:
  const ::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo& _internal_groupbasicinfo() const;
  ::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo* _internal_mutable_groupbasicinfo();
  public:
  void unsafe_arena_set_allocated_groupbasicinfo(
      ::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo* groupbasicinfo);
  ::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo* unsafe_arena_release_groupbasicinfo();

  // .AcFunDanmu.Im.Cloud.Search.PublicGroupHit groupHit = 3;
  bool has_grouphit() const;
  private:
  bool _internal_has_grouphit() const;
  public:
  void clear_grouphit();
  const ::AcFunDanmu::Im::Cloud::Search::PublicGroupHit& grouphit() const;
  PROTOBUF_NODISCARD ::AcFunDanmu::Im::Cloud::Search::PublicGroupHit* release_grouphit();
  ::AcFunDanmu::Im::Cloud::Search::PublicGroupHit* mutable_grouphit();
  void set_allocated_grouphit(::AcFunDanmu::Im::Cloud::Search::PublicGroupHit* grouphit);
  private:
  const ::AcFunDanmu::Im::Cloud::Search::PublicGroupHit& _internal_grouphit() const;
  ::AcFunDanmu::Im::Cloud::Search::PublicGroupHit* _internal_mutable_grouphit();
  public:
  void unsafe_arena_set_allocated_grouphit(
      ::AcFunDanmu::Im::Cloud::Search::PublicGroupHit* grouphit);
  ::AcFunDanmu::Im::Cloud::Search::PublicGroupHit* unsafe_arena_release_grouphit();

  // .AcFunDanmu.Im.Cloud.Message.GroupJoinStatus status = 2;
  void clear_status();
  ::AcFunDanmu::Im::Cloud::Message::GroupJoinStatus status() const;
  void set_status(::AcFunDanmu::Im::Cloud::Message::GroupJoinStatus value);
  private:
  ::AcFunDanmu::Im::Cloud::Message::GroupJoinStatus _internal_status() const;
  void _internal_set_status(::AcFunDanmu::Im::Cloud::Message::GroupJoinStatus value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Cloud.Search.PublicGroupSearchInfo)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo* groupbasicinfo_;
    ::AcFunDanmu::Im::Cloud::Search::PublicGroupHit* grouphit_;
    int status_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_PublicGroupSearchInfo_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PublicGroupSearchInfo

// .AcFunDanmu.Im.Cloud.Message.GroupBasicInfo groupBasicInfo = 1;
inline bool PublicGroupSearchInfo::_internal_has_groupbasicinfo() const {
  return this != internal_default_instance() && _impl_.groupbasicinfo_ != nullptr;
}
inline bool PublicGroupSearchInfo::has_groupbasicinfo() const {
  return _internal_has_groupbasicinfo();
}
inline const ::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo& PublicGroupSearchInfo::_internal_groupbasicinfo() const {
  const ::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo* p = _impl_.groupbasicinfo_;
  return p != nullptr ? *p : reinterpret_cast<const ::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo&>(
      ::AcFunDanmu::Im::Cloud::Message::_GroupBasicInfo_default_instance_);
}
inline const ::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo& PublicGroupSearchInfo::groupbasicinfo() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Search.PublicGroupSearchInfo.groupBasicInfo)
  return _internal_groupbasicinfo();
}
inline void PublicGroupSearchInfo::unsafe_arena_set_allocated_groupbasicinfo(
    ::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo* groupbasicinfo) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.groupbasicinfo_);
  }
  _impl_.groupbasicinfo_ = groupbasicinfo;
  if (groupbasicinfo) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:AcFunDanmu.Im.Cloud.Search.PublicGroupSearchInfo.groupBasicInfo)
}
inline ::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo* PublicGroupSearchInfo::release_groupbasicinfo() {
  
  ::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo* temp = _impl_.groupbasicinfo_;
  _impl_.groupbasicinfo_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo* PublicGroupSearchInfo::unsafe_arena_release_groupbasicinfo() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Search.PublicGroupSearchInfo.groupBasicInfo)
  
  ::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo* temp = _impl_.groupbasicinfo_;
  _impl_.groupbasicinfo_ = nullptr;
  return temp;
}
inline ::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo* PublicGroupSearchInfo::_internal_mutable_groupbasicinfo() {
  
  if (_impl_.groupbasicinfo_ == nullptr) {
    auto* p = CreateMaybeMessage<::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo>(GetArenaForAllocation());
    _impl_.groupbasicinfo_ = p;
  }
  return _impl_.groupbasicinfo_;
}
inline ::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo* PublicGroupSearchInfo::mutable_groupbasicinfo() {
  ::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo* _msg = _internal_mutable_groupbasicinfo();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Search.PublicGroupSearchInfo.groupBasicInfo)
  return _msg;
}
inline void PublicGroupSearchInfo::set_allocated_groupbasicinfo(::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo* groupbasicinfo) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.groupbasicinfo_);
  }
  if (groupbasicinfo) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(groupbasicinfo));
    if (message_arena != submessage_arena) {
      groupbasicinfo = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, groupbasicinfo, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.groupbasicinfo_ = groupbasicinfo;
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Search.PublicGroupSearchInfo.groupBasicInfo)
}

// .AcFunDanmu.Im.Cloud.Message.GroupJoinStatus status = 2;
inline void PublicGroupSearchInfo::clear_status() {
  _impl_.status_ = 0;
}
inline ::AcFunDanmu::Im::Cloud::Message::GroupJoinStatus PublicGroupSearchInfo::_internal_status() const {
  return static_cast< ::AcFunDanmu::Im::Cloud::Message::GroupJoinStatus >(_impl_.status_);
}
inline ::AcFunDanmu::Im::Cloud::Message::GroupJoinStatus PublicGroupSearchInfo::status() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Search.PublicGroupSearchInfo.status)
  return _internal_status();
}
inline void PublicGroupSearchInfo::_internal_set_status(::AcFunDanmu::Im::Cloud::Message::GroupJoinStatus value) {
  
  _impl_.status_ = value;
}
inline void PublicGroupSearchInfo::set_status(::AcFunDanmu::Im::Cloud::Message::GroupJoinStatus value) {
  _internal_set_status(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Search.PublicGroupSearchInfo.status)
}

// .AcFunDanmu.Im.Cloud.Search.PublicGroupHit groupHit = 3;
inline bool PublicGroupSearchInfo::_internal_has_grouphit() const {
  return this != internal_default_instance() && _impl_.grouphit_ != nullptr;
}
inline bool PublicGroupSearchInfo::has_grouphit() const {
  return _internal_has_grouphit();
}
inline const ::AcFunDanmu::Im::Cloud::Search::PublicGroupHit& PublicGroupSearchInfo::_internal_grouphit() const {
  const ::AcFunDanmu::Im::Cloud::Search::PublicGroupHit* p = _impl_.grouphit_;
  return p != nullptr ? *p : reinterpret_cast<const ::AcFunDanmu::Im::Cloud::Search::PublicGroupHit&>(
      ::AcFunDanmu::Im::Cloud::Search::_PublicGroupHit_default_instance_);
}
inline const ::AcFunDanmu::Im::Cloud::Search::PublicGroupHit& PublicGroupSearchInfo::grouphit() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Search.PublicGroupSearchInfo.groupHit)
  return _internal_grouphit();
}
inline void PublicGroupSearchInfo::unsafe_arena_set_allocated_grouphit(
    ::AcFunDanmu::Im::Cloud::Search::PublicGroupHit* grouphit) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.grouphit_);
  }
  _impl_.grouphit_ = grouphit;
  if (grouphit) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:AcFunDanmu.Im.Cloud.Search.PublicGroupSearchInfo.groupHit)
}
inline ::AcFunDanmu::Im::Cloud::Search::PublicGroupHit* PublicGroupSearchInfo::release_grouphit() {
  
  ::AcFunDanmu::Im::Cloud::Search::PublicGroupHit* temp = _impl_.grouphit_;
  _impl_.grouphit_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::AcFunDanmu::Im::Cloud::Search::PublicGroupHit* PublicGroupSearchInfo::unsafe_arena_release_grouphit() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Search.PublicGroupSearchInfo.groupHit)
  
  ::AcFunDanmu::Im::Cloud::Search::PublicGroupHit* temp = _impl_.grouphit_;
  _impl_.grouphit_ = nullptr;
  return temp;
}
inline ::AcFunDanmu::Im::Cloud::Search::PublicGroupHit* PublicGroupSearchInfo::_internal_mutable_grouphit() {
  
  if (_impl_.grouphit_ == nullptr) {
    auto* p = CreateMaybeMessage<::AcFunDanmu::Im::Cloud::Search::PublicGroupHit>(GetArenaForAllocation());
    _impl_.grouphit_ = p;
  }
  return _impl_.grouphit_;
}
inline ::AcFunDanmu::Im::Cloud::Search::PublicGroupHit* PublicGroupSearchInfo::mutable_grouphit() {
  ::AcFunDanmu::Im::Cloud::Search::PublicGroupHit* _msg = _internal_mutable_grouphit();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Search.PublicGroupSearchInfo.groupHit)
  return _msg;
}
inline void PublicGroupSearchInfo::set_allocated_grouphit(::AcFunDanmu::Im::Cloud::Search::PublicGroupHit* grouphit) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.grouphit_);
  }
  if (grouphit) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(grouphit));
    if (message_arena != submessage_arena) {
      grouphit = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, grouphit, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.grouphit_ = grouphit;
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Search.PublicGroupSearchInfo.groupHit)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Search
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_PublicGroupSearchInfo_2eproto
