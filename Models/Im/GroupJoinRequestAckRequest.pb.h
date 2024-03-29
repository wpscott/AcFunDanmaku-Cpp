// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GroupJoinRequestAckRequest.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_GroupJoinRequestAckRequest_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_GroupJoinRequestAckRequest_2eproto

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_GroupJoinRequestAckRequest_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_GroupJoinRequestAckRequest_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_GroupJoinRequestAckRequest_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {
class GroupJoinRequestAckRequest;
struct GroupJoinRequestAckRequestDefaultTypeInternal;
extern GroupJoinRequestAckRequestDefaultTypeInternal _GroupJoinRequestAckRequest_default_instance_;
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Cloud::Message::GroupJoinRequestAckRequest* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Cloud::Message::GroupJoinRequestAckRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {

enum GroupJoinRequestAckRequest_GroupJoinAckType : int {
  GroupJoinRequestAckRequest_GroupJoinAckType_UNKNOWN_TYPE = 0,
  GroupJoinRequestAckRequest_GroupJoinAckType_AGREE = 1,
  GroupJoinRequestAckRequest_GroupJoinAckType_REFUSE = 2,
  GroupJoinRequestAckRequest_GroupJoinAckType_IGNORE = 3,
  GroupJoinRequestAckRequest_GroupJoinAckType_GroupJoinRequestAckRequest_GroupJoinAckType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  GroupJoinRequestAckRequest_GroupJoinAckType_GroupJoinRequestAckRequest_GroupJoinAckType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool GroupJoinRequestAckRequest_GroupJoinAckType_IsValid(int value);
constexpr GroupJoinRequestAckRequest_GroupJoinAckType GroupJoinRequestAckRequest_GroupJoinAckType_GroupJoinAckType_MIN = GroupJoinRequestAckRequest_GroupJoinAckType_UNKNOWN_TYPE;
constexpr GroupJoinRequestAckRequest_GroupJoinAckType GroupJoinRequestAckRequest_GroupJoinAckType_GroupJoinAckType_MAX = GroupJoinRequestAckRequest_GroupJoinAckType_IGNORE;
constexpr int GroupJoinRequestAckRequest_GroupJoinAckType_GroupJoinAckType_ARRAYSIZE = GroupJoinRequestAckRequest_GroupJoinAckType_GroupJoinAckType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* GroupJoinRequestAckRequest_GroupJoinAckType_descriptor();
template<typename T>
inline const std::string& GroupJoinRequestAckRequest_GroupJoinAckType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, GroupJoinRequestAckRequest_GroupJoinAckType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function GroupJoinRequestAckRequest_GroupJoinAckType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    GroupJoinRequestAckRequest_GroupJoinAckType_descriptor(), enum_t_value);
}
inline bool GroupJoinRequestAckRequest_GroupJoinAckType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, GroupJoinRequestAckRequest_GroupJoinAckType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<GroupJoinRequestAckRequest_GroupJoinAckType>(
    GroupJoinRequestAckRequest_GroupJoinAckType_descriptor(), name, value);
}
// ===================================================================

class GroupJoinRequestAckRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestAckRequest) */ {
 public:
  inline GroupJoinRequestAckRequest() : GroupJoinRequestAckRequest(nullptr) {}
  ~GroupJoinRequestAckRequest() override;
  explicit PROTOBUF_CONSTEXPR GroupJoinRequestAckRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  GroupJoinRequestAckRequest(const GroupJoinRequestAckRequest& from);
  GroupJoinRequestAckRequest(GroupJoinRequestAckRequest&& from) noexcept
    : GroupJoinRequestAckRequest() {
    *this = ::std::move(from);
  }

  inline GroupJoinRequestAckRequest& operator=(const GroupJoinRequestAckRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline GroupJoinRequestAckRequest& operator=(GroupJoinRequestAckRequest&& from) noexcept {
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
  static const GroupJoinRequestAckRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const GroupJoinRequestAckRequest* internal_default_instance() {
    return reinterpret_cast<const GroupJoinRequestAckRequest*>(
               &_GroupJoinRequestAckRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(GroupJoinRequestAckRequest& a, GroupJoinRequestAckRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(GroupJoinRequestAckRequest* other) {
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
  void UnsafeArenaSwap(GroupJoinRequestAckRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  GroupJoinRequestAckRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<GroupJoinRequestAckRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const GroupJoinRequestAckRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const GroupJoinRequestAckRequest& from) {
    GroupJoinRequestAckRequest::MergeImpl(*this, from);
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
  void InternalSwap(GroupJoinRequestAckRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Cloud.Message.GroupJoinRequestAckRequest";
  }
  protected:
  explicit GroupJoinRequestAckRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef GroupJoinRequestAckRequest_GroupJoinAckType GroupJoinAckType;
  static constexpr GroupJoinAckType UNKNOWN_TYPE =
    GroupJoinRequestAckRequest_GroupJoinAckType_UNKNOWN_TYPE;
  static constexpr GroupJoinAckType AGREE =
    GroupJoinRequestAckRequest_GroupJoinAckType_AGREE;
  static constexpr GroupJoinAckType REFUSE =
    GroupJoinRequestAckRequest_GroupJoinAckType_REFUSE;
  static constexpr GroupJoinAckType IGNORE =
    GroupJoinRequestAckRequest_GroupJoinAckType_IGNORE;
  static inline bool GroupJoinAckType_IsValid(int value) {
    return GroupJoinRequestAckRequest_GroupJoinAckType_IsValid(value);
  }
  static constexpr GroupJoinAckType GroupJoinAckType_MIN =
    GroupJoinRequestAckRequest_GroupJoinAckType_GroupJoinAckType_MIN;
  static constexpr GroupJoinAckType GroupJoinAckType_MAX =
    GroupJoinRequestAckRequest_GroupJoinAckType_GroupJoinAckType_MAX;
  static constexpr int GroupJoinAckType_ARRAYSIZE =
    GroupJoinRequestAckRequest_GroupJoinAckType_GroupJoinAckType_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  GroupJoinAckType_descriptor() {
    return GroupJoinRequestAckRequest_GroupJoinAckType_descriptor();
  }
  template<typename T>
  static inline const std::string& GroupJoinAckType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, GroupJoinAckType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function GroupJoinAckType_Name.");
    return GroupJoinRequestAckRequest_GroupJoinAckType_Name(enum_t_value);
  }
  static inline bool GroupJoinAckType_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      GroupJoinAckType* value) {
    return GroupJoinRequestAckRequest_GroupJoinAckType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kGroupIdFieldNumber = 2,
    kAuditCommentFieldNumber = 4,
    kReqIdFieldNumber = 1,
    kGroupJoinAckTypeFieldNumber = 3,
    kIgnoreFutureJoinRequestFieldNumber = 5,
  };
  // string groupId = 2;
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

  // string auditComment = 4;
  void clear_auditcomment();
  const std::string& auditcomment() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_auditcomment(ArgT0&& arg0, ArgT... args);
  std::string* mutable_auditcomment();
  PROTOBUF_NODISCARD std::string* release_auditcomment();
  void set_allocated_auditcomment(std::string* auditcomment);
  private:
  const std::string& _internal_auditcomment() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_auditcomment(const std::string& value);
  std::string* _internal_mutable_auditcomment();
  public:

  // int64 reqId = 1;
  void clear_reqid();
  int64_t reqid() const;
  void set_reqid(int64_t value);
  private:
  int64_t _internal_reqid() const;
  void _internal_set_reqid(int64_t value);
  public:

  // .AcFunDanmu.Im.Cloud.Message.GroupJoinRequestAckRequest.GroupJoinAckType groupJoinAckType = 3;
  void clear_groupjoinacktype();
  ::AcFunDanmu::Im::Cloud::Message::GroupJoinRequestAckRequest_GroupJoinAckType groupjoinacktype() const;
  void set_groupjoinacktype(::AcFunDanmu::Im::Cloud::Message::GroupJoinRequestAckRequest_GroupJoinAckType value);
  private:
  ::AcFunDanmu::Im::Cloud::Message::GroupJoinRequestAckRequest_GroupJoinAckType _internal_groupjoinacktype() const;
  void _internal_set_groupjoinacktype(::AcFunDanmu::Im::Cloud::Message::GroupJoinRequestAckRequest_GroupJoinAckType value);
  public:

  // bool ignoreFutureJoinRequest = 5;
  void clear_ignorefuturejoinrequest();
  bool ignorefuturejoinrequest() const;
  void set_ignorefuturejoinrequest(bool value);
  private:
  bool _internal_ignorefuturejoinrequest() const;
  void _internal_set_ignorefuturejoinrequest(bool value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestAckRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr groupid_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr auditcomment_;
    int64_t reqid_;
    int groupjoinacktype_;
    bool ignorefuturejoinrequest_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_GroupJoinRequestAckRequest_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GroupJoinRequestAckRequest

// int64 reqId = 1;
inline void GroupJoinRequestAckRequest::clear_reqid() {
  _impl_.reqid_ = int64_t{0};
}
inline int64_t GroupJoinRequestAckRequest::_internal_reqid() const {
  return _impl_.reqid_;
}
inline int64_t GroupJoinRequestAckRequest::reqid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestAckRequest.reqId)
  return _internal_reqid();
}
inline void GroupJoinRequestAckRequest::_internal_set_reqid(int64_t value) {
  
  _impl_.reqid_ = value;
}
inline void GroupJoinRequestAckRequest::set_reqid(int64_t value) {
  _internal_set_reqid(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestAckRequest.reqId)
}

// string groupId = 2;
inline void GroupJoinRequestAckRequest::clear_groupid() {
  _impl_.groupid_.ClearToEmpty();
}
inline const std::string& GroupJoinRequestAckRequest::groupid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestAckRequest.groupId)
  return _internal_groupid();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void GroupJoinRequestAckRequest::set_groupid(ArgT0&& arg0, ArgT... args) {
 
 _impl_.groupid_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestAckRequest.groupId)
}
inline std::string* GroupJoinRequestAckRequest::mutable_groupid() {
  std::string* _s = _internal_mutable_groupid();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestAckRequest.groupId)
  return _s;
}
inline const std::string& GroupJoinRequestAckRequest::_internal_groupid() const {
  return _impl_.groupid_.Get();
}
inline void GroupJoinRequestAckRequest::_internal_set_groupid(const std::string& value) {
  
  _impl_.groupid_.Set(value, GetArenaForAllocation());
}
inline std::string* GroupJoinRequestAckRequest::_internal_mutable_groupid() {
  
  return _impl_.groupid_.Mutable(GetArenaForAllocation());
}
inline std::string* GroupJoinRequestAckRequest::release_groupid() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestAckRequest.groupId)
  return _impl_.groupid_.Release();
}
inline void GroupJoinRequestAckRequest::set_allocated_groupid(std::string* groupid) {
  if (groupid != nullptr) {
    
  } else {
    
  }
  _impl_.groupid_.SetAllocated(groupid, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.groupid_.IsDefault()) {
    _impl_.groupid_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestAckRequest.groupId)
}

// .AcFunDanmu.Im.Cloud.Message.GroupJoinRequestAckRequest.GroupJoinAckType groupJoinAckType = 3;
inline void GroupJoinRequestAckRequest::clear_groupjoinacktype() {
  _impl_.groupjoinacktype_ = 0;
}
inline ::AcFunDanmu::Im::Cloud::Message::GroupJoinRequestAckRequest_GroupJoinAckType GroupJoinRequestAckRequest::_internal_groupjoinacktype() const {
  return static_cast< ::AcFunDanmu::Im::Cloud::Message::GroupJoinRequestAckRequest_GroupJoinAckType >(_impl_.groupjoinacktype_);
}
inline ::AcFunDanmu::Im::Cloud::Message::GroupJoinRequestAckRequest_GroupJoinAckType GroupJoinRequestAckRequest::groupjoinacktype() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestAckRequest.groupJoinAckType)
  return _internal_groupjoinacktype();
}
inline void GroupJoinRequestAckRequest::_internal_set_groupjoinacktype(::AcFunDanmu::Im::Cloud::Message::GroupJoinRequestAckRequest_GroupJoinAckType value) {
  
  _impl_.groupjoinacktype_ = value;
}
inline void GroupJoinRequestAckRequest::set_groupjoinacktype(::AcFunDanmu::Im::Cloud::Message::GroupJoinRequestAckRequest_GroupJoinAckType value) {
  _internal_set_groupjoinacktype(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestAckRequest.groupJoinAckType)
}

// string auditComment = 4;
inline void GroupJoinRequestAckRequest::clear_auditcomment() {
  _impl_.auditcomment_.ClearToEmpty();
}
inline const std::string& GroupJoinRequestAckRequest::auditcomment() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestAckRequest.auditComment)
  return _internal_auditcomment();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void GroupJoinRequestAckRequest::set_auditcomment(ArgT0&& arg0, ArgT... args) {
 
 _impl_.auditcomment_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestAckRequest.auditComment)
}
inline std::string* GroupJoinRequestAckRequest::mutable_auditcomment() {
  std::string* _s = _internal_mutable_auditcomment();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestAckRequest.auditComment)
  return _s;
}
inline const std::string& GroupJoinRequestAckRequest::_internal_auditcomment() const {
  return _impl_.auditcomment_.Get();
}
inline void GroupJoinRequestAckRequest::_internal_set_auditcomment(const std::string& value) {
  
  _impl_.auditcomment_.Set(value, GetArenaForAllocation());
}
inline std::string* GroupJoinRequestAckRequest::_internal_mutable_auditcomment() {
  
  return _impl_.auditcomment_.Mutable(GetArenaForAllocation());
}
inline std::string* GroupJoinRequestAckRequest::release_auditcomment() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestAckRequest.auditComment)
  return _impl_.auditcomment_.Release();
}
inline void GroupJoinRequestAckRequest::set_allocated_auditcomment(std::string* auditcomment) {
  if (auditcomment != nullptr) {
    
  } else {
    
  }
  _impl_.auditcomment_.SetAllocated(auditcomment, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.auditcomment_.IsDefault()) {
    _impl_.auditcomment_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestAckRequest.auditComment)
}

// bool ignoreFutureJoinRequest = 5;
inline void GroupJoinRequestAckRequest::clear_ignorefuturejoinrequest() {
  _impl_.ignorefuturejoinrequest_ = false;
}
inline bool GroupJoinRequestAckRequest::_internal_ignorefuturejoinrequest() const {
  return _impl_.ignorefuturejoinrequest_;
}
inline bool GroupJoinRequestAckRequest::ignorefuturejoinrequest() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestAckRequest.ignoreFutureJoinRequest)
  return _internal_ignorefuturejoinrequest();
}
inline void GroupJoinRequestAckRequest::_internal_set_ignorefuturejoinrequest(bool value) {
  
  _impl_.ignorefuturejoinrequest_ = value;
}
inline void GroupJoinRequestAckRequest::set_ignorefuturejoinrequest(bool value) {
  _internal_set_ignorefuturejoinrequest(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestAckRequest.ignoreFutureJoinRequest)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::AcFunDanmu::Im::Cloud::Message::GroupJoinRequestAckRequest_GroupJoinAckType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::AcFunDanmu::Im::Cloud::Message::GroupJoinRequestAckRequest_GroupJoinAckType>() {
  return ::AcFunDanmu::Im::Cloud::Message::GroupJoinRequestAckRequest_GroupJoinAckType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_GroupJoinRequestAckRequest_2eproto
