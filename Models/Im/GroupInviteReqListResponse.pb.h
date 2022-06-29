// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GroupInviteReqListResponse.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_GroupInviteReqListResponse_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_GroupInviteReqListResponse_2eproto

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
#include "GroupInviteRecord.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_GroupInviteReqListResponse_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_GroupInviteReqListResponse_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_GroupInviteReqListResponse_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {
class GroupInviteReqListResponse;
struct GroupInviteReqListResponseDefaultTypeInternal;
extern GroupInviteReqListResponseDefaultTypeInternal _GroupInviteReqListResponse_default_instance_;
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Cloud::Message::GroupInviteReqListResponse* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Cloud::Message::GroupInviteReqListResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {

// ===================================================================

class GroupInviteReqListResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Cloud.Message.GroupInviteReqListResponse) */ {
 public:
  inline GroupInviteReqListResponse() : GroupInviteReqListResponse(nullptr) {}
  ~GroupInviteReqListResponse() override;
  explicit PROTOBUF_CONSTEXPR GroupInviteReqListResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  GroupInviteReqListResponse(const GroupInviteReqListResponse& from);
  GroupInviteReqListResponse(GroupInviteReqListResponse&& from) noexcept
    : GroupInviteReqListResponse() {
    *this = ::std::move(from);
  }

  inline GroupInviteReqListResponse& operator=(const GroupInviteReqListResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline GroupInviteReqListResponse& operator=(GroupInviteReqListResponse&& from) noexcept {
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
  static const GroupInviteReqListResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const GroupInviteReqListResponse* internal_default_instance() {
    return reinterpret_cast<const GroupInviteReqListResponse*>(
               &_GroupInviteReqListResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(GroupInviteReqListResponse& a, GroupInviteReqListResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(GroupInviteReqListResponse* other) {
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
  void UnsafeArenaSwap(GroupInviteReqListResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  GroupInviteReqListResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<GroupInviteReqListResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const GroupInviteReqListResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const GroupInviteReqListResponse& from) {
    GroupInviteReqListResponse::MergeImpl(*this, from);
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
  void InternalSwap(GroupInviteReqListResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Cloud.Message.GroupInviteReqListResponse";
  }
  protected:
  explicit GroupInviteReqListResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kInviteRecordFieldNumber = 1,
    kOffsetFieldNumber = 2,
  };
  // repeated .AcFunDanmu.Im.Cloud.Message.GroupInviteRecord inviteRecord = 1;
  int inviterecord_size() const;
  private:
  int _internal_inviterecord_size() const;
  public:
  void clear_inviterecord();
  ::AcFunDanmu::Im::Cloud::Message::GroupInviteRecord* mutable_inviterecord(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::Message::GroupInviteRecord >*
      mutable_inviterecord();
  private:
  const ::AcFunDanmu::Im::Cloud::Message::GroupInviteRecord& _internal_inviterecord(int index) const;
  ::AcFunDanmu::Im::Cloud::Message::GroupInviteRecord* _internal_add_inviterecord();
  public:
  const ::AcFunDanmu::Im::Cloud::Message::GroupInviteRecord& inviterecord(int index) const;
  ::AcFunDanmu::Im::Cloud::Message::GroupInviteRecord* add_inviterecord();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::Message::GroupInviteRecord >&
      inviterecord() const;

  // string offset = 2;
  void clear_offset();
  const std::string& offset() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_offset(ArgT0&& arg0, ArgT... args);
  std::string* mutable_offset();
  PROTOBUF_NODISCARD std::string* release_offset();
  void set_allocated_offset(std::string* offset);
  private:
  const std::string& _internal_offset() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_offset(const std::string& value);
  std::string* _internal_mutable_offset();
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Cloud.Message.GroupInviteReqListResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::Message::GroupInviteRecord > inviterecord_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr offset_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_GroupInviteReqListResponse_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GroupInviteReqListResponse

// repeated .AcFunDanmu.Im.Cloud.Message.GroupInviteRecord inviteRecord = 1;
inline int GroupInviteReqListResponse::_internal_inviterecord_size() const {
  return _impl_.inviterecord_.size();
}
inline int GroupInviteReqListResponse::inviterecord_size() const {
  return _internal_inviterecord_size();
}
inline ::AcFunDanmu::Im::Cloud::Message::GroupInviteRecord* GroupInviteReqListResponse::mutable_inviterecord(int index) {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Message.GroupInviteReqListResponse.inviteRecord)
  return _impl_.inviterecord_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::Message::GroupInviteRecord >*
GroupInviteReqListResponse::mutable_inviterecord() {
  // @@protoc_insertion_point(field_mutable_list:AcFunDanmu.Im.Cloud.Message.GroupInviteReqListResponse.inviteRecord)
  return &_impl_.inviterecord_;
}
inline const ::AcFunDanmu::Im::Cloud::Message::GroupInviteRecord& GroupInviteReqListResponse::_internal_inviterecord(int index) const {
  return _impl_.inviterecord_.Get(index);
}
inline const ::AcFunDanmu::Im::Cloud::Message::GroupInviteRecord& GroupInviteReqListResponse::inviterecord(int index) const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.GroupInviteReqListResponse.inviteRecord)
  return _internal_inviterecord(index);
}
inline ::AcFunDanmu::Im::Cloud::Message::GroupInviteRecord* GroupInviteReqListResponse::_internal_add_inviterecord() {
  return _impl_.inviterecord_.Add();
}
inline ::AcFunDanmu::Im::Cloud::Message::GroupInviteRecord* GroupInviteReqListResponse::add_inviterecord() {
  ::AcFunDanmu::Im::Cloud::Message::GroupInviteRecord* _add = _internal_add_inviterecord();
  // @@protoc_insertion_point(field_add:AcFunDanmu.Im.Cloud.Message.GroupInviteReqListResponse.inviteRecord)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::Message::GroupInviteRecord >&
GroupInviteReqListResponse::inviterecord() const {
  // @@protoc_insertion_point(field_list:AcFunDanmu.Im.Cloud.Message.GroupInviteReqListResponse.inviteRecord)
  return _impl_.inviterecord_;
}

// string offset = 2;
inline void GroupInviteReqListResponse::clear_offset() {
  _impl_.offset_.ClearToEmpty();
}
inline const std::string& GroupInviteReqListResponse::offset() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.GroupInviteReqListResponse.offset)
  return _internal_offset();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void GroupInviteReqListResponse::set_offset(ArgT0&& arg0, ArgT... args) {
 
 _impl_.offset_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Message.GroupInviteReqListResponse.offset)
}
inline std::string* GroupInviteReqListResponse::mutable_offset() {
  std::string* _s = _internal_mutable_offset();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Message.GroupInviteReqListResponse.offset)
  return _s;
}
inline const std::string& GroupInviteReqListResponse::_internal_offset() const {
  return _impl_.offset_.Get();
}
inline void GroupInviteReqListResponse::_internal_set_offset(const std::string& value) {
  
  _impl_.offset_.Set(value, GetArenaForAllocation());
}
inline std::string* GroupInviteReqListResponse::_internal_mutable_offset() {
  
  return _impl_.offset_.Mutable(GetArenaForAllocation());
}
inline std::string* GroupInviteReqListResponse::release_offset() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Message.GroupInviteReqListResponse.offset)
  return _impl_.offset_.Release();
}
inline void GroupInviteReqListResponse::set_allocated_offset(std::string* offset) {
  if (offset != nullptr) {
    
  } else {
    
  }
  _impl_.offset_.SetAllocated(offset, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.offset_.IsDefault()) {
    _impl_.offset_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Message.GroupInviteReqListResponse.offset)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_GroupInviteReqListResponse_2eproto
