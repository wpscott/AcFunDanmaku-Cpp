// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ProfileBatchOnlineTimeResponse.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ProfileBatchOnlineTimeResponse_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ProfileBatchOnlineTimeResponse_2eproto

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
#include "UserOnlineStatus.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ProfileBatchOnlineTimeResponse_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ProfileBatchOnlineTimeResponse_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ProfileBatchOnlineTimeResponse_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Profile {
class ProfileBatchOnlineTimeResponse;
struct ProfileBatchOnlineTimeResponseDefaultTypeInternal;
extern ProfileBatchOnlineTimeResponseDefaultTypeInternal _ProfileBatchOnlineTimeResponse_default_instance_;
}  // namespace Profile
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Cloud::Profile::ProfileBatchOnlineTimeResponse* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Cloud::Profile::ProfileBatchOnlineTimeResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Profile {

// ===================================================================

class ProfileBatchOnlineTimeResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Cloud.Profile.ProfileBatchOnlineTimeResponse) */ {
 public:
  inline ProfileBatchOnlineTimeResponse() : ProfileBatchOnlineTimeResponse(nullptr) {}
  ~ProfileBatchOnlineTimeResponse() override;
  explicit PROTOBUF_CONSTEXPR ProfileBatchOnlineTimeResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ProfileBatchOnlineTimeResponse(const ProfileBatchOnlineTimeResponse& from);
  ProfileBatchOnlineTimeResponse(ProfileBatchOnlineTimeResponse&& from) noexcept
    : ProfileBatchOnlineTimeResponse() {
    *this = ::std::move(from);
  }

  inline ProfileBatchOnlineTimeResponse& operator=(const ProfileBatchOnlineTimeResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline ProfileBatchOnlineTimeResponse& operator=(ProfileBatchOnlineTimeResponse&& from) noexcept {
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
  static const ProfileBatchOnlineTimeResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const ProfileBatchOnlineTimeResponse* internal_default_instance() {
    return reinterpret_cast<const ProfileBatchOnlineTimeResponse*>(
               &_ProfileBatchOnlineTimeResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ProfileBatchOnlineTimeResponse& a, ProfileBatchOnlineTimeResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(ProfileBatchOnlineTimeResponse* other) {
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
  void UnsafeArenaSwap(ProfileBatchOnlineTimeResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ProfileBatchOnlineTimeResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ProfileBatchOnlineTimeResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ProfileBatchOnlineTimeResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const ProfileBatchOnlineTimeResponse& from) {
    ProfileBatchOnlineTimeResponse::MergeImpl(*this, from);
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
  void InternalSwap(ProfileBatchOnlineTimeResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Cloud.Profile.ProfileBatchOnlineTimeResponse";
  }
  protected:
  explicit ProfileBatchOnlineTimeResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUserOnlineStatusFieldNumber = 1,
  };
  // repeated .AcFunDanmu.Im.Cloud.Profile.UserOnlineStatus userOnlineStatus = 1;
  int useronlinestatus_size() const;
  private:
  int _internal_useronlinestatus_size() const;
  public:
  void clear_useronlinestatus();
  ::AcFunDanmu::Im::Cloud::Profile::UserOnlineStatus* mutable_useronlinestatus(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::Profile::UserOnlineStatus >*
      mutable_useronlinestatus();
  private:
  const ::AcFunDanmu::Im::Cloud::Profile::UserOnlineStatus& _internal_useronlinestatus(int index) const;
  ::AcFunDanmu::Im::Cloud::Profile::UserOnlineStatus* _internal_add_useronlinestatus();
  public:
  const ::AcFunDanmu::Im::Cloud::Profile::UserOnlineStatus& useronlinestatus(int index) const;
  ::AcFunDanmu::Im::Cloud::Profile::UserOnlineStatus* add_useronlinestatus();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::Profile::UserOnlineStatus >&
      useronlinestatus() const;

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Cloud.Profile.ProfileBatchOnlineTimeResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::Profile::UserOnlineStatus > useronlinestatus_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_ProfileBatchOnlineTimeResponse_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ProfileBatchOnlineTimeResponse

// repeated .AcFunDanmu.Im.Cloud.Profile.UserOnlineStatus userOnlineStatus = 1;
inline int ProfileBatchOnlineTimeResponse::_internal_useronlinestatus_size() const {
  return _impl_.useronlinestatus_.size();
}
inline int ProfileBatchOnlineTimeResponse::useronlinestatus_size() const {
  return _internal_useronlinestatus_size();
}
inline ::AcFunDanmu::Im::Cloud::Profile::UserOnlineStatus* ProfileBatchOnlineTimeResponse::mutable_useronlinestatus(int index) {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Profile.ProfileBatchOnlineTimeResponse.userOnlineStatus)
  return _impl_.useronlinestatus_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::Profile::UserOnlineStatus >*
ProfileBatchOnlineTimeResponse::mutable_useronlinestatus() {
  // @@protoc_insertion_point(field_mutable_list:AcFunDanmu.Im.Cloud.Profile.ProfileBatchOnlineTimeResponse.userOnlineStatus)
  return &_impl_.useronlinestatus_;
}
inline const ::AcFunDanmu::Im::Cloud::Profile::UserOnlineStatus& ProfileBatchOnlineTimeResponse::_internal_useronlinestatus(int index) const {
  return _impl_.useronlinestatus_.Get(index);
}
inline const ::AcFunDanmu::Im::Cloud::Profile::UserOnlineStatus& ProfileBatchOnlineTimeResponse::useronlinestatus(int index) const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Profile.ProfileBatchOnlineTimeResponse.userOnlineStatus)
  return _internal_useronlinestatus(index);
}
inline ::AcFunDanmu::Im::Cloud::Profile::UserOnlineStatus* ProfileBatchOnlineTimeResponse::_internal_add_useronlinestatus() {
  return _impl_.useronlinestatus_.Add();
}
inline ::AcFunDanmu::Im::Cloud::Profile::UserOnlineStatus* ProfileBatchOnlineTimeResponse::add_useronlinestatus() {
  ::AcFunDanmu::Im::Cloud::Profile::UserOnlineStatus* _add = _internal_add_useronlinestatus();
  // @@protoc_insertion_point(field_add:AcFunDanmu.Im.Cloud.Profile.ProfileBatchOnlineTimeResponse.userOnlineStatus)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::Profile::UserOnlineStatus >&
ProfileBatchOnlineTimeResponse::useronlinestatus() const {
  // @@protoc_insertion_point(field_list:AcFunDanmu.Im.Cloud.Profile.ProfileBatchOnlineTimeResponse.userOnlineStatus)
  return _impl_.useronlinestatus_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Profile
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ProfileBatchOnlineTimeResponse_2eproto
