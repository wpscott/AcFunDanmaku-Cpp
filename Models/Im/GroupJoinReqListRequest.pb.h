// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GroupJoinReqListRequest.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_GroupJoinReqListRequest_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_GroupJoinReqListRequest_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_GroupJoinReqListRequest_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_GroupJoinReqListRequest_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_GroupJoinReqListRequest_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {
class GroupJoinReqListRequest;
struct GroupJoinReqListRequestDefaultTypeInternal;
extern GroupJoinReqListRequestDefaultTypeInternal _GroupJoinReqListRequest_default_instance_;
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Cloud::Message::GroupJoinReqListRequest* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Cloud::Message::GroupJoinReqListRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {

// ===================================================================

class GroupJoinReqListRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Cloud.Message.GroupJoinReqListRequest) */ {
 public:
  inline GroupJoinReqListRequest() : GroupJoinReqListRequest(nullptr) {}
  ~GroupJoinReqListRequest() override;
  explicit PROTOBUF_CONSTEXPR GroupJoinReqListRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  GroupJoinReqListRequest(const GroupJoinReqListRequest& from);
  GroupJoinReqListRequest(GroupJoinReqListRequest&& from) noexcept
    : GroupJoinReqListRequest() {
    *this = ::std::move(from);
  }

  inline GroupJoinReqListRequest& operator=(const GroupJoinReqListRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline GroupJoinReqListRequest& operator=(GroupJoinReqListRequest&& from) noexcept {
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
  static const GroupJoinReqListRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const GroupJoinReqListRequest* internal_default_instance() {
    return reinterpret_cast<const GroupJoinReqListRequest*>(
               &_GroupJoinReqListRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(GroupJoinReqListRequest& a, GroupJoinReqListRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(GroupJoinReqListRequest* other) {
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
  void UnsafeArenaSwap(GroupJoinReqListRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  GroupJoinReqListRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<GroupJoinReqListRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const GroupJoinReqListRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const GroupJoinReqListRequest& from) {
    GroupJoinReqListRequest::MergeImpl(*this, from);
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
  void InternalSwap(GroupJoinReqListRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Cloud.Message.GroupJoinReqListRequest";
  }
  protected:
  explicit GroupJoinReqListRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kGroupIdFieldNumber = 1,
    kOffsetFieldNumber = 2,
    kCountFieldNumber = 3,
  };
  // string groupId = 1;
  void clear_groupid();
  const std::string& groupid() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_groupid(ArgT0&& arg0, ArgT... args);
  std::string* mutable_groupid();
  PROTOBUF_NODISCARD std::string* release_groupid();
  void set_allocated_groupid(std::string* groupid);
  private:
  const std::string& _internal_groupid() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_groupid(const std::string& value);
  std::string* _internal_mutable_groupid();
  public:

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

  // int32 count = 3;
  void clear_count();
  int32_t count() const;
  void set_count(int32_t value);
  private:
  int32_t _internal_count() const;
  void _internal_set_count(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Cloud.Message.GroupJoinReqListRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr groupid_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr offset_;
    int32_t count_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_GroupJoinReqListRequest_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GroupJoinReqListRequest

// string groupId = 1;
inline void GroupJoinReqListRequest::clear_groupid() {
  _impl_.groupid_.ClearToEmpty();
}
inline const std::string& GroupJoinReqListRequest::groupid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.GroupJoinReqListRequest.groupId)
  return _internal_groupid();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void GroupJoinReqListRequest::set_groupid(ArgT0&& arg0, ArgT... args) {
 
 _impl_.groupid_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Message.GroupJoinReqListRequest.groupId)
}
inline std::string* GroupJoinReqListRequest::mutable_groupid() {
  std::string* _s = _internal_mutable_groupid();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Message.GroupJoinReqListRequest.groupId)
  return _s;
}
inline const std::string& GroupJoinReqListRequest::_internal_groupid() const {
  return _impl_.groupid_.Get();
}
inline void GroupJoinReqListRequest::_internal_set_groupid(const std::string& value) {
  
  _impl_.groupid_.Set(value, GetArenaForAllocation());
}
inline std::string* GroupJoinReqListRequest::_internal_mutable_groupid() {
  
  return _impl_.groupid_.Mutable(GetArenaForAllocation());
}
inline std::string* GroupJoinReqListRequest::release_groupid() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Message.GroupJoinReqListRequest.groupId)
  return _impl_.groupid_.Release();
}
inline void GroupJoinReqListRequest::set_allocated_groupid(std::string* groupid) {
  if (groupid != nullptr) {
    
  } else {
    
  }
  _impl_.groupid_.SetAllocated(groupid, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.groupid_.IsDefault()) {
    _impl_.groupid_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Message.GroupJoinReqListRequest.groupId)
}

// string offset = 2;
inline void GroupJoinReqListRequest::clear_offset() {
  _impl_.offset_.ClearToEmpty();
}
inline const std::string& GroupJoinReqListRequest::offset() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.GroupJoinReqListRequest.offset)
  return _internal_offset();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void GroupJoinReqListRequest::set_offset(ArgT0&& arg0, ArgT... args) {
 
 _impl_.offset_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Message.GroupJoinReqListRequest.offset)
}
inline std::string* GroupJoinReqListRequest::mutable_offset() {
  std::string* _s = _internal_mutable_offset();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Message.GroupJoinReqListRequest.offset)
  return _s;
}
inline const std::string& GroupJoinReqListRequest::_internal_offset() const {
  return _impl_.offset_.Get();
}
inline void GroupJoinReqListRequest::_internal_set_offset(const std::string& value) {
  
  _impl_.offset_.Set(value, GetArenaForAllocation());
}
inline std::string* GroupJoinReqListRequest::_internal_mutable_offset() {
  
  return _impl_.offset_.Mutable(GetArenaForAllocation());
}
inline std::string* GroupJoinReqListRequest::release_offset() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Message.GroupJoinReqListRequest.offset)
  return _impl_.offset_.Release();
}
inline void GroupJoinReqListRequest::set_allocated_offset(std::string* offset) {
  if (offset != nullptr) {
    
  } else {
    
  }
  _impl_.offset_.SetAllocated(offset, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.offset_.IsDefault()) {
    _impl_.offset_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Message.GroupJoinReqListRequest.offset)
}

// int32 count = 3;
inline void GroupJoinReqListRequest::clear_count() {
  _impl_.count_ = 0;
}
inline int32_t GroupJoinReqListRequest::_internal_count() const {
  return _impl_.count_;
}
inline int32_t GroupJoinReqListRequest::count() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.GroupJoinReqListRequest.count)
  return _internal_count();
}
inline void GroupJoinReqListRequest::_internal_set_count(int32_t value) {
  
  _impl_.count_ = value;
}
inline void GroupJoinReqListRequest::set_count(int32_t value) {
  _internal_set_count(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Message.GroupJoinReqListRequest.count)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_GroupJoinReqListRequest_2eproto
