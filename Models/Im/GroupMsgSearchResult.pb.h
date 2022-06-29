// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GroupMsgSearchResult.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_GroupMsgSearchResult_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_GroupMsgSearchResult_2eproto

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
#include "Message.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_GroupMsgSearchResult_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_GroupMsgSearchResult_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_GroupMsgSearchResult_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Search {
class GroupMsgSearchResult;
struct GroupMsgSearchResultDefaultTypeInternal;
extern GroupMsgSearchResultDefaultTypeInternal _GroupMsgSearchResult_default_instance_;
}  // namespace Search
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Cloud::Search::GroupMsgSearchResult* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Cloud::Search::GroupMsgSearchResult>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Search {

// ===================================================================

class GroupMsgSearchResult final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Cloud.Search.GroupMsgSearchResult) */ {
 public:
  inline GroupMsgSearchResult() : GroupMsgSearchResult(nullptr) {}
  ~GroupMsgSearchResult() override;
  explicit PROTOBUF_CONSTEXPR GroupMsgSearchResult(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  GroupMsgSearchResult(const GroupMsgSearchResult& from);
  GroupMsgSearchResult(GroupMsgSearchResult&& from) noexcept
    : GroupMsgSearchResult() {
    *this = ::std::move(from);
  }

  inline GroupMsgSearchResult& operator=(const GroupMsgSearchResult& from) {
    CopyFrom(from);
    return *this;
  }
  inline GroupMsgSearchResult& operator=(GroupMsgSearchResult&& from) noexcept {
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
  static const GroupMsgSearchResult& default_instance() {
    return *internal_default_instance();
  }
  static inline const GroupMsgSearchResult* internal_default_instance() {
    return reinterpret_cast<const GroupMsgSearchResult*>(
               &_GroupMsgSearchResult_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(GroupMsgSearchResult& a, GroupMsgSearchResult& b) {
    a.Swap(&b);
  }
  inline void Swap(GroupMsgSearchResult* other) {
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
  void UnsafeArenaSwap(GroupMsgSearchResult* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  GroupMsgSearchResult* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<GroupMsgSearchResult>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const GroupMsgSearchResult& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const GroupMsgSearchResult& from) {
    GroupMsgSearchResult::MergeImpl(*this, from);
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
  void InternalSwap(GroupMsgSearchResult* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Cloud.Search.GroupMsgSearchResult";
  }
  protected:
  explicit GroupMsgSearchResult(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMsgFieldNumber = 3,
    kGroupIdFieldNumber = 1,
    kOffsetFieldNumber = 4,
    kMsgSizeFieldNumber = 2,
    kHasMoreFieldNumber = 5,
  };
  // repeated .AcFunDanmu.Im.Message.Message msg = 3;
  int msg_size() const;
  private:
  int _internal_msg_size() const;
  public:
  void clear_msg();
  ::AcFunDanmu::Im::Message::Message* mutable_msg(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Message::Message >*
      mutable_msg();
  private:
  const ::AcFunDanmu::Im::Message::Message& _internal_msg(int index) const;
  ::AcFunDanmu::Im::Message::Message* _internal_add_msg();
  public:
  const ::AcFunDanmu::Im::Message::Message& msg(int index) const;
  ::AcFunDanmu::Im::Message::Message* add_msg();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Message::Message >&
      msg() const;

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

  // string offset = 4;
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

  // int32 msgSize = 2;
  void clear_msgsize();
  int32_t msgsize() const;
  void set_msgsize(int32_t value);
  private:
  int32_t _internal_msgsize() const;
  void _internal_set_msgsize(int32_t value);
  public:

  // bool hasMore = 5;
  void clear_hasmore();
  bool hasmore() const;
  void set_hasmore(bool value);
  private:
  bool _internal_hasmore() const;
  void _internal_set_hasmore(bool value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Cloud.Search.GroupMsgSearchResult)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Message::Message > msg_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr groupid_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr offset_;
    int32_t msgsize_;
    bool hasmore_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_GroupMsgSearchResult_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GroupMsgSearchResult

// string groupId = 1;
inline void GroupMsgSearchResult::clear_groupid() {
  _impl_.groupid_.ClearToEmpty();
}
inline const std::string& GroupMsgSearchResult::groupid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Search.GroupMsgSearchResult.groupId)
  return _internal_groupid();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void GroupMsgSearchResult::set_groupid(ArgT0&& arg0, ArgT... args) {
 
 _impl_.groupid_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Search.GroupMsgSearchResult.groupId)
}
inline std::string* GroupMsgSearchResult::mutable_groupid() {
  std::string* _s = _internal_mutable_groupid();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Search.GroupMsgSearchResult.groupId)
  return _s;
}
inline const std::string& GroupMsgSearchResult::_internal_groupid() const {
  return _impl_.groupid_.Get();
}
inline void GroupMsgSearchResult::_internal_set_groupid(const std::string& value) {
  
  _impl_.groupid_.Set(value, GetArenaForAllocation());
}
inline std::string* GroupMsgSearchResult::_internal_mutable_groupid() {
  
  return _impl_.groupid_.Mutable(GetArenaForAllocation());
}
inline std::string* GroupMsgSearchResult::release_groupid() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Search.GroupMsgSearchResult.groupId)
  return _impl_.groupid_.Release();
}
inline void GroupMsgSearchResult::set_allocated_groupid(std::string* groupid) {
  if (groupid != nullptr) {
    
  } else {
    
  }
  _impl_.groupid_.SetAllocated(groupid, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.groupid_.IsDefault()) {
    _impl_.groupid_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Search.GroupMsgSearchResult.groupId)
}

// int32 msgSize = 2;
inline void GroupMsgSearchResult::clear_msgsize() {
  _impl_.msgsize_ = 0;
}
inline int32_t GroupMsgSearchResult::_internal_msgsize() const {
  return _impl_.msgsize_;
}
inline int32_t GroupMsgSearchResult::msgsize() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Search.GroupMsgSearchResult.msgSize)
  return _internal_msgsize();
}
inline void GroupMsgSearchResult::_internal_set_msgsize(int32_t value) {
  
  _impl_.msgsize_ = value;
}
inline void GroupMsgSearchResult::set_msgsize(int32_t value) {
  _internal_set_msgsize(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Search.GroupMsgSearchResult.msgSize)
}

// repeated .AcFunDanmu.Im.Message.Message msg = 3;
inline int GroupMsgSearchResult::_internal_msg_size() const {
  return _impl_.msg_.size();
}
inline int GroupMsgSearchResult::msg_size() const {
  return _internal_msg_size();
}
inline ::AcFunDanmu::Im::Message::Message* GroupMsgSearchResult::mutable_msg(int index) {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Search.GroupMsgSearchResult.msg)
  return _impl_.msg_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Message::Message >*
GroupMsgSearchResult::mutable_msg() {
  // @@protoc_insertion_point(field_mutable_list:AcFunDanmu.Im.Cloud.Search.GroupMsgSearchResult.msg)
  return &_impl_.msg_;
}
inline const ::AcFunDanmu::Im::Message::Message& GroupMsgSearchResult::_internal_msg(int index) const {
  return _impl_.msg_.Get(index);
}
inline const ::AcFunDanmu::Im::Message::Message& GroupMsgSearchResult::msg(int index) const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Search.GroupMsgSearchResult.msg)
  return _internal_msg(index);
}
inline ::AcFunDanmu::Im::Message::Message* GroupMsgSearchResult::_internal_add_msg() {
  return _impl_.msg_.Add();
}
inline ::AcFunDanmu::Im::Message::Message* GroupMsgSearchResult::add_msg() {
  ::AcFunDanmu::Im::Message::Message* _add = _internal_add_msg();
  // @@protoc_insertion_point(field_add:AcFunDanmu.Im.Cloud.Search.GroupMsgSearchResult.msg)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Message::Message >&
GroupMsgSearchResult::msg() const {
  // @@protoc_insertion_point(field_list:AcFunDanmu.Im.Cloud.Search.GroupMsgSearchResult.msg)
  return _impl_.msg_;
}

// string offset = 4;
inline void GroupMsgSearchResult::clear_offset() {
  _impl_.offset_.ClearToEmpty();
}
inline const std::string& GroupMsgSearchResult::offset() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Search.GroupMsgSearchResult.offset)
  return _internal_offset();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void GroupMsgSearchResult::set_offset(ArgT0&& arg0, ArgT... args) {
 
 _impl_.offset_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Search.GroupMsgSearchResult.offset)
}
inline std::string* GroupMsgSearchResult::mutable_offset() {
  std::string* _s = _internal_mutable_offset();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Search.GroupMsgSearchResult.offset)
  return _s;
}
inline const std::string& GroupMsgSearchResult::_internal_offset() const {
  return _impl_.offset_.Get();
}
inline void GroupMsgSearchResult::_internal_set_offset(const std::string& value) {
  
  _impl_.offset_.Set(value, GetArenaForAllocation());
}
inline std::string* GroupMsgSearchResult::_internal_mutable_offset() {
  
  return _impl_.offset_.Mutable(GetArenaForAllocation());
}
inline std::string* GroupMsgSearchResult::release_offset() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Search.GroupMsgSearchResult.offset)
  return _impl_.offset_.Release();
}
inline void GroupMsgSearchResult::set_allocated_offset(std::string* offset) {
  if (offset != nullptr) {
    
  } else {
    
  }
  _impl_.offset_.SetAllocated(offset, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.offset_.IsDefault()) {
    _impl_.offset_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Search.GroupMsgSearchResult.offset)
}

// bool hasMore = 5;
inline void GroupMsgSearchResult::clear_hasmore() {
  _impl_.hasmore_ = false;
}
inline bool GroupMsgSearchResult::_internal_hasmore() const {
  return _impl_.hasmore_;
}
inline bool GroupMsgSearchResult::hasmore() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Search.GroupMsgSearchResult.hasMore)
  return _internal_hasmore();
}
inline void GroupMsgSearchResult::_internal_set_hasmore(bool value) {
  
  _impl_.hasmore_ = value;
}
inline void GroupMsgSearchResult::set_hasmore(bool value) {
  _internal_set_hasmore(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Search.GroupMsgSearchResult.hasMore)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_GroupMsgSearchResult_2eproto
