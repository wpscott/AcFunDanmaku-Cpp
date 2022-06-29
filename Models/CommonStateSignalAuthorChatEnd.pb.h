// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CommonStateSignalAuthorChatEnd.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_CommonStateSignalAuthorChatEnd_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_CommonStateSignalAuthorChatEnd_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_CommonStateSignalAuthorChatEnd_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_CommonStateSignalAuthorChatEnd_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_CommonStateSignalAuthorChatEnd_2eproto;
namespace AcFunDanmu {
class CommonStateSignalAuthorChatEnd;
struct CommonStateSignalAuthorChatEndDefaultTypeInternal;
extern CommonStateSignalAuthorChatEndDefaultTypeInternal _CommonStateSignalAuthorChatEnd_default_instance_;
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::CommonStateSignalAuthorChatEnd* Arena::CreateMaybeMessage<::AcFunDanmu::CommonStateSignalAuthorChatEnd>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {

enum CommonStateSignalAuthorChatEnd_EndType : int {
  CommonStateSignalAuthorChatEnd_EndType_UNKNOWN = 0,
  CommonStateSignalAuthorChatEnd_EndType_CANCEL_BY_INVITER = 1,
  CommonStateSignalAuthorChatEnd_EndType_END_BY_INVITER = 2,
  CommonStateSignalAuthorChatEnd_EndType_END_BY_INVITEE = 3,
  CommonStateSignalAuthorChatEnd_EndType_INVITEE_REJECT = 4,
  CommonStateSignalAuthorChatEnd_EndType_INVITEE_TIMEOUT = 5,
  CommonStateSignalAuthorChatEnd_EndType_INVITEE_HEARTBEAT_TIMEOUT = 6,
  CommonStateSignalAuthorChatEnd_EndType_INVITER_HEARTBEAT_TIMEOUT = 7,
  CommonStateSignalAuthorChatEnd_EndType_PEER_LIVE_STOPPED = 8,
  CommonStateSignalAuthorChatEnd_EndType_CommonStateSignalAuthorChatEnd_EndType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  CommonStateSignalAuthorChatEnd_EndType_CommonStateSignalAuthorChatEnd_EndType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool CommonStateSignalAuthorChatEnd_EndType_IsValid(int value);
constexpr CommonStateSignalAuthorChatEnd_EndType CommonStateSignalAuthorChatEnd_EndType_EndType_MIN = CommonStateSignalAuthorChatEnd_EndType_UNKNOWN;
constexpr CommonStateSignalAuthorChatEnd_EndType CommonStateSignalAuthorChatEnd_EndType_EndType_MAX = CommonStateSignalAuthorChatEnd_EndType_PEER_LIVE_STOPPED;
constexpr int CommonStateSignalAuthorChatEnd_EndType_EndType_ARRAYSIZE = CommonStateSignalAuthorChatEnd_EndType_EndType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* CommonStateSignalAuthorChatEnd_EndType_descriptor();
template<typename T>
inline const std::string& CommonStateSignalAuthorChatEnd_EndType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, CommonStateSignalAuthorChatEnd_EndType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function CommonStateSignalAuthorChatEnd_EndType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    CommonStateSignalAuthorChatEnd_EndType_descriptor(), enum_t_value);
}
inline bool CommonStateSignalAuthorChatEnd_EndType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, CommonStateSignalAuthorChatEnd_EndType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<CommonStateSignalAuthorChatEnd_EndType>(
    CommonStateSignalAuthorChatEnd_EndType_descriptor(), name, value);
}
// ===================================================================

class CommonStateSignalAuthorChatEnd final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.CommonStateSignalAuthorChatEnd) */ {
 public:
  inline CommonStateSignalAuthorChatEnd() : CommonStateSignalAuthorChatEnd(nullptr) {}
  ~CommonStateSignalAuthorChatEnd() override;
  explicit PROTOBUF_CONSTEXPR CommonStateSignalAuthorChatEnd(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  CommonStateSignalAuthorChatEnd(const CommonStateSignalAuthorChatEnd& from);
  CommonStateSignalAuthorChatEnd(CommonStateSignalAuthorChatEnd&& from) noexcept
    : CommonStateSignalAuthorChatEnd() {
    *this = ::std::move(from);
  }

  inline CommonStateSignalAuthorChatEnd& operator=(const CommonStateSignalAuthorChatEnd& from) {
    CopyFrom(from);
    return *this;
  }
  inline CommonStateSignalAuthorChatEnd& operator=(CommonStateSignalAuthorChatEnd&& from) noexcept {
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
  static const CommonStateSignalAuthorChatEnd& default_instance() {
    return *internal_default_instance();
  }
  static inline const CommonStateSignalAuthorChatEnd* internal_default_instance() {
    return reinterpret_cast<const CommonStateSignalAuthorChatEnd*>(
               &_CommonStateSignalAuthorChatEnd_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CommonStateSignalAuthorChatEnd& a, CommonStateSignalAuthorChatEnd& b) {
    a.Swap(&b);
  }
  inline void Swap(CommonStateSignalAuthorChatEnd* other) {
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
  void UnsafeArenaSwap(CommonStateSignalAuthorChatEnd* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  CommonStateSignalAuthorChatEnd* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<CommonStateSignalAuthorChatEnd>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const CommonStateSignalAuthorChatEnd& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const CommonStateSignalAuthorChatEnd& from) {
    CommonStateSignalAuthorChatEnd::MergeImpl(*this, from);
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
  void InternalSwap(CommonStateSignalAuthorChatEnd* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.CommonStateSignalAuthorChatEnd";
  }
  protected:
  explicit CommonStateSignalAuthorChatEnd(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef CommonStateSignalAuthorChatEnd_EndType EndType;
  static constexpr EndType UNKNOWN =
    CommonStateSignalAuthorChatEnd_EndType_UNKNOWN;
  static constexpr EndType CANCEL_BY_INVITER =
    CommonStateSignalAuthorChatEnd_EndType_CANCEL_BY_INVITER;
  static constexpr EndType END_BY_INVITER =
    CommonStateSignalAuthorChatEnd_EndType_END_BY_INVITER;
  static constexpr EndType END_BY_INVITEE =
    CommonStateSignalAuthorChatEnd_EndType_END_BY_INVITEE;
  static constexpr EndType INVITEE_REJECT =
    CommonStateSignalAuthorChatEnd_EndType_INVITEE_REJECT;
  static constexpr EndType INVITEE_TIMEOUT =
    CommonStateSignalAuthorChatEnd_EndType_INVITEE_TIMEOUT;
  static constexpr EndType INVITEE_HEARTBEAT_TIMEOUT =
    CommonStateSignalAuthorChatEnd_EndType_INVITEE_HEARTBEAT_TIMEOUT;
  static constexpr EndType INVITER_HEARTBEAT_TIMEOUT =
    CommonStateSignalAuthorChatEnd_EndType_INVITER_HEARTBEAT_TIMEOUT;
  static constexpr EndType PEER_LIVE_STOPPED =
    CommonStateSignalAuthorChatEnd_EndType_PEER_LIVE_STOPPED;
  static inline bool EndType_IsValid(int value) {
    return CommonStateSignalAuthorChatEnd_EndType_IsValid(value);
  }
  static constexpr EndType EndType_MIN =
    CommonStateSignalAuthorChatEnd_EndType_EndType_MIN;
  static constexpr EndType EndType_MAX =
    CommonStateSignalAuthorChatEnd_EndType_EndType_MAX;
  static constexpr int EndType_ARRAYSIZE =
    CommonStateSignalAuthorChatEnd_EndType_EndType_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  EndType_descriptor() {
    return CommonStateSignalAuthorChatEnd_EndType_descriptor();
  }
  template<typename T>
  static inline const std::string& EndType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, EndType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function EndType_Name.");
    return CommonStateSignalAuthorChatEnd_EndType_Name(enum_t_value);
  }
  static inline bool EndType_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      EndType* value) {
    return CommonStateSignalAuthorChatEnd_EndType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kAuthorChatIdFieldNumber = 1,
    kEndLiveIdFieldNumber = 3,
    kEndTypeFieldNumber = 2,
  };
  // string authorChatId = 1;
  void clear_authorchatid();
  const std::string& authorchatid() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_authorchatid(ArgT0&& arg0, ArgT... args);
  std::string* mutable_authorchatid();
  PROTOBUF_NODISCARD std::string* release_authorchatid();
  void set_allocated_authorchatid(std::string* authorchatid);
  private:
  const std::string& _internal_authorchatid() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_authorchatid(const std::string& value);
  std::string* _internal_mutable_authorchatid();
  public:

  // string endLiveId = 3;
  void clear_endliveid();
  const std::string& endliveid() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_endliveid(ArgT0&& arg0, ArgT... args);
  std::string* mutable_endliveid();
  PROTOBUF_NODISCARD std::string* release_endliveid();
  void set_allocated_endliveid(std::string* endliveid);
  private:
  const std::string& _internal_endliveid() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_endliveid(const std::string& value);
  std::string* _internal_mutable_endliveid();
  public:

  // .AcFunDanmu.CommonStateSignalAuthorChatEnd.EndType endType = 2;
  void clear_endtype();
  ::AcFunDanmu::CommonStateSignalAuthorChatEnd_EndType endtype() const;
  void set_endtype(::AcFunDanmu::CommonStateSignalAuthorChatEnd_EndType value);
  private:
  ::AcFunDanmu::CommonStateSignalAuthorChatEnd_EndType _internal_endtype() const;
  void _internal_set_endtype(::AcFunDanmu::CommonStateSignalAuthorChatEnd_EndType value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.CommonStateSignalAuthorChatEnd)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr authorchatid_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr endliveid_;
    int endtype_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_CommonStateSignalAuthorChatEnd_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CommonStateSignalAuthorChatEnd

// string authorChatId = 1;
inline void CommonStateSignalAuthorChatEnd::clear_authorchatid() {
  _impl_.authorchatid_.ClearToEmpty();
}
inline const std::string& CommonStateSignalAuthorChatEnd::authorchatid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.CommonStateSignalAuthorChatEnd.authorChatId)
  return _internal_authorchatid();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void CommonStateSignalAuthorChatEnd::set_authorchatid(ArgT0&& arg0, ArgT... args) {
 
 _impl_.authorchatid_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.CommonStateSignalAuthorChatEnd.authorChatId)
}
inline std::string* CommonStateSignalAuthorChatEnd::mutable_authorchatid() {
  std::string* _s = _internal_mutable_authorchatid();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.CommonStateSignalAuthorChatEnd.authorChatId)
  return _s;
}
inline const std::string& CommonStateSignalAuthorChatEnd::_internal_authorchatid() const {
  return _impl_.authorchatid_.Get();
}
inline void CommonStateSignalAuthorChatEnd::_internal_set_authorchatid(const std::string& value) {
  
  _impl_.authorchatid_.Set(value, GetArenaForAllocation());
}
inline std::string* CommonStateSignalAuthorChatEnd::_internal_mutable_authorchatid() {
  
  return _impl_.authorchatid_.Mutable(GetArenaForAllocation());
}
inline std::string* CommonStateSignalAuthorChatEnd::release_authorchatid() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.CommonStateSignalAuthorChatEnd.authorChatId)
  return _impl_.authorchatid_.Release();
}
inline void CommonStateSignalAuthorChatEnd::set_allocated_authorchatid(std::string* authorchatid) {
  if (authorchatid != nullptr) {
    
  } else {
    
  }
  _impl_.authorchatid_.SetAllocated(authorchatid, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.authorchatid_.IsDefault()) {
    _impl_.authorchatid_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.CommonStateSignalAuthorChatEnd.authorChatId)
}

// .AcFunDanmu.CommonStateSignalAuthorChatEnd.EndType endType = 2;
inline void CommonStateSignalAuthorChatEnd::clear_endtype() {
  _impl_.endtype_ = 0;
}
inline ::AcFunDanmu::CommonStateSignalAuthorChatEnd_EndType CommonStateSignalAuthorChatEnd::_internal_endtype() const {
  return static_cast< ::AcFunDanmu::CommonStateSignalAuthorChatEnd_EndType >(_impl_.endtype_);
}
inline ::AcFunDanmu::CommonStateSignalAuthorChatEnd_EndType CommonStateSignalAuthorChatEnd::endtype() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.CommonStateSignalAuthorChatEnd.endType)
  return _internal_endtype();
}
inline void CommonStateSignalAuthorChatEnd::_internal_set_endtype(::AcFunDanmu::CommonStateSignalAuthorChatEnd_EndType value) {
  
  _impl_.endtype_ = value;
}
inline void CommonStateSignalAuthorChatEnd::set_endtype(::AcFunDanmu::CommonStateSignalAuthorChatEnd_EndType value) {
  _internal_set_endtype(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.CommonStateSignalAuthorChatEnd.endType)
}

// string endLiveId = 3;
inline void CommonStateSignalAuthorChatEnd::clear_endliveid() {
  _impl_.endliveid_.ClearToEmpty();
}
inline const std::string& CommonStateSignalAuthorChatEnd::endliveid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.CommonStateSignalAuthorChatEnd.endLiveId)
  return _internal_endliveid();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void CommonStateSignalAuthorChatEnd::set_endliveid(ArgT0&& arg0, ArgT... args) {
 
 _impl_.endliveid_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.CommonStateSignalAuthorChatEnd.endLiveId)
}
inline std::string* CommonStateSignalAuthorChatEnd::mutable_endliveid() {
  std::string* _s = _internal_mutable_endliveid();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.CommonStateSignalAuthorChatEnd.endLiveId)
  return _s;
}
inline const std::string& CommonStateSignalAuthorChatEnd::_internal_endliveid() const {
  return _impl_.endliveid_.Get();
}
inline void CommonStateSignalAuthorChatEnd::_internal_set_endliveid(const std::string& value) {
  
  _impl_.endliveid_.Set(value, GetArenaForAllocation());
}
inline std::string* CommonStateSignalAuthorChatEnd::_internal_mutable_endliveid() {
  
  return _impl_.endliveid_.Mutable(GetArenaForAllocation());
}
inline std::string* CommonStateSignalAuthorChatEnd::release_endliveid() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.CommonStateSignalAuthorChatEnd.endLiveId)
  return _impl_.endliveid_.Release();
}
inline void CommonStateSignalAuthorChatEnd::set_allocated_endliveid(std::string* endliveid) {
  if (endliveid != nullptr) {
    
  } else {
    
  }
  _impl_.endliveid_.SetAllocated(endliveid, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.endliveid_.IsDefault()) {
    _impl_.endliveid_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.CommonStateSignalAuthorChatEnd.endLiveId)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace AcFunDanmu

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::AcFunDanmu::CommonStateSignalAuthorChatEnd_EndType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::AcFunDanmu::CommonStateSignalAuthorChatEnd_EndType>() {
  return ::AcFunDanmu::CommonStateSignalAuthorChatEnd_EndType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_CommonStateSignalAuthorChatEnd_2eproto
