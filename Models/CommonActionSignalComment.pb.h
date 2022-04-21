// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CommonActionSignalComment.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_CommonActionSignalComment_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_CommonActionSignalComment_2eproto

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
#include "ZtLiveUserInfo.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_CommonActionSignalComment_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_CommonActionSignalComment_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_CommonActionSignalComment_2eproto;
namespace AcFunDanmu {
class CommonActionSignalComment;
struct CommonActionSignalCommentDefaultTypeInternal;
extern CommonActionSignalCommentDefaultTypeInternal _CommonActionSignalComment_default_instance_;
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::CommonActionSignalComment* Arena::CreateMaybeMessage<::AcFunDanmu::CommonActionSignalComment>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {

// ===================================================================

class CommonActionSignalComment final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.CommonActionSignalComment) */ {
 public:
  inline CommonActionSignalComment() : CommonActionSignalComment(nullptr) {}
  ~CommonActionSignalComment() override;
  explicit constexpr CommonActionSignalComment(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  CommonActionSignalComment(const CommonActionSignalComment& from);
  CommonActionSignalComment(CommonActionSignalComment&& from) noexcept
    : CommonActionSignalComment() {
    *this = ::std::move(from);
  }

  inline CommonActionSignalComment& operator=(const CommonActionSignalComment& from) {
    CopyFrom(from);
    return *this;
  }
  inline CommonActionSignalComment& operator=(CommonActionSignalComment&& from) noexcept {
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
  static const CommonActionSignalComment& default_instance() {
    return *internal_default_instance();
  }
  static inline const CommonActionSignalComment* internal_default_instance() {
    return reinterpret_cast<const CommonActionSignalComment*>(
               &_CommonActionSignalComment_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CommonActionSignalComment& a, CommonActionSignalComment& b) {
    a.Swap(&b);
  }
  inline void Swap(CommonActionSignalComment* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CommonActionSignalComment* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CommonActionSignalComment* New() const final {
    return new CommonActionSignalComment();
  }

  CommonActionSignalComment* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CommonActionSignalComment>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CommonActionSignalComment& from);
  void MergeFrom(const CommonActionSignalComment& from);
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
  void InternalSwap(CommonActionSignalComment* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.CommonActionSignalComment";
  }
  protected:
  explicit CommonActionSignalComment(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kContentFieldNumber = 1,
    kUserInfoFieldNumber = 3,
    kSendTimeMsFieldNumber = 2,
  };
  // string content = 1;
  void clear_content();
  const std::string& content() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_content(ArgT0&& arg0, ArgT... args);
  std::string* mutable_content();
  PROTOBUF_FUTURE_MUST_USE_RESULT std::string* release_content();
  void set_allocated_content(std::string* content);
  private:
  const std::string& _internal_content() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_content(const std::string& value);
  std::string* _internal_mutable_content();
  public:

  // .AcFunDanmu.ZtLiveUserInfo userInfo = 3;
  bool has_userinfo() const;
  private:
  bool _internal_has_userinfo() const;
  public:
  void clear_userinfo();
  const ::AcFunDanmu::ZtLiveUserInfo& userinfo() const;
  PROTOBUF_FUTURE_MUST_USE_RESULT ::AcFunDanmu::ZtLiveUserInfo* release_userinfo();
  ::AcFunDanmu::ZtLiveUserInfo* mutable_userinfo();
  void set_allocated_userinfo(::AcFunDanmu::ZtLiveUserInfo* userinfo);
  private:
  const ::AcFunDanmu::ZtLiveUserInfo& _internal_userinfo() const;
  ::AcFunDanmu::ZtLiveUserInfo* _internal_mutable_userinfo();
  public:
  void unsafe_arena_set_allocated_userinfo(
      ::AcFunDanmu::ZtLiveUserInfo* userinfo);
  ::AcFunDanmu::ZtLiveUserInfo* unsafe_arena_release_userinfo();

  // int64 sendTimeMs = 2;
  void clear_sendtimems();
  ::PROTOBUF_NAMESPACE_ID::int64 sendtimems() const;
  void set_sendtimems(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_sendtimems() const;
  void _internal_set_sendtimems(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.CommonActionSignalComment)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr content_;
  ::AcFunDanmu::ZtLiveUserInfo* userinfo_;
  ::PROTOBUF_NAMESPACE_ID::int64 sendtimems_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_CommonActionSignalComment_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CommonActionSignalComment

// string content = 1;
inline void CommonActionSignalComment::clear_content() {
  content_.ClearToEmpty();
}
inline const std::string& CommonActionSignalComment::content() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.CommonActionSignalComment.content)
  return _internal_content();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void CommonActionSignalComment::set_content(ArgT0&& arg0, ArgT... args) {
 
 content_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.CommonActionSignalComment.content)
}
inline std::string* CommonActionSignalComment::mutable_content() {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.CommonActionSignalComment.content)
  return _internal_mutable_content();
}
inline const std::string& CommonActionSignalComment::_internal_content() const {
  return content_.Get();
}
inline void CommonActionSignalComment::_internal_set_content(const std::string& value) {
  
  content_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* CommonActionSignalComment::_internal_mutable_content() {
  
  return content_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* CommonActionSignalComment::release_content() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.CommonActionSignalComment.content)
  return content_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void CommonActionSignalComment::set_allocated_content(std::string* content) {
  if (content != nullptr) {
    
  } else {
    
  }
  content_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), content,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.CommonActionSignalComment.content)
}

// int64 sendTimeMs = 2;
inline void CommonActionSignalComment::clear_sendtimems() {
  sendtimems_ = int64_t{0};
}
inline ::PROTOBUF_NAMESPACE_ID::int64 CommonActionSignalComment::_internal_sendtimems() const {
  return sendtimems_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 CommonActionSignalComment::sendtimems() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.CommonActionSignalComment.sendTimeMs)
  return _internal_sendtimems();
}
inline void CommonActionSignalComment::_internal_set_sendtimems(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  sendtimems_ = value;
}
inline void CommonActionSignalComment::set_sendtimems(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_sendtimems(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.CommonActionSignalComment.sendTimeMs)
}

// .AcFunDanmu.ZtLiveUserInfo userInfo = 3;
inline bool CommonActionSignalComment::_internal_has_userinfo() const {
  return this != internal_default_instance() && userinfo_ != nullptr;
}
inline bool CommonActionSignalComment::has_userinfo() const {
  return _internal_has_userinfo();
}
inline const ::AcFunDanmu::ZtLiveUserInfo& CommonActionSignalComment::_internal_userinfo() const {
  const ::AcFunDanmu::ZtLiveUserInfo* p = userinfo_;
  return p != nullptr ? *p : reinterpret_cast<const ::AcFunDanmu::ZtLiveUserInfo&>(
      ::AcFunDanmu::_ZtLiveUserInfo_default_instance_);
}
inline const ::AcFunDanmu::ZtLiveUserInfo& CommonActionSignalComment::userinfo() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.CommonActionSignalComment.userInfo)
  return _internal_userinfo();
}
inline void CommonActionSignalComment::unsafe_arena_set_allocated_userinfo(
    ::AcFunDanmu::ZtLiveUserInfo* userinfo) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(userinfo_);
  }
  userinfo_ = userinfo;
  if (userinfo) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:AcFunDanmu.CommonActionSignalComment.userInfo)
}
inline ::AcFunDanmu::ZtLiveUserInfo* CommonActionSignalComment::release_userinfo() {
  
  ::AcFunDanmu::ZtLiveUserInfo* temp = userinfo_;
  userinfo_ = nullptr;
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::AcFunDanmu::ZtLiveUserInfo* CommonActionSignalComment::unsafe_arena_release_userinfo() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.CommonActionSignalComment.userInfo)
  
  ::AcFunDanmu::ZtLiveUserInfo* temp = userinfo_;
  userinfo_ = nullptr;
  return temp;
}
inline ::AcFunDanmu::ZtLiveUserInfo* CommonActionSignalComment::_internal_mutable_userinfo() {
  
  if (userinfo_ == nullptr) {
    auto* p = CreateMaybeMessage<::AcFunDanmu::ZtLiveUserInfo>(GetArenaForAllocation());
    userinfo_ = p;
  }
  return userinfo_;
}
inline ::AcFunDanmu::ZtLiveUserInfo* CommonActionSignalComment::mutable_userinfo() {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.CommonActionSignalComment.userInfo)
  return _internal_mutable_userinfo();
}
inline void CommonActionSignalComment::set_allocated_userinfo(::AcFunDanmu::ZtLiveUserInfo* userinfo) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(userinfo_);
  }
  if (userinfo) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper<
            ::PROTOBUF_NAMESPACE_ID::MessageLite>::GetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(userinfo));
    if (message_arena != submessage_arena) {
      userinfo = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, userinfo, submessage_arena);
    }
    
  } else {
    
  }
  userinfo_ = userinfo;
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.CommonActionSignalComment.userInfo)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_CommonActionSignalComment_2eproto
