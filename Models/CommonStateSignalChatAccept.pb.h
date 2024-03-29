// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CommonStateSignalChatAccept.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_CommonStateSignalChatAccept_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_CommonStateSignalChatAccept_2eproto

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
#include "ChatMediaType.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_CommonStateSignalChatAccept_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_CommonStateSignalChatAccept_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_CommonStateSignalChatAccept_2eproto;
namespace AcFunDanmu {
class CommonStateSignalChatAccept;
struct CommonStateSignalChatAcceptDefaultTypeInternal;
extern CommonStateSignalChatAcceptDefaultTypeInternal _CommonStateSignalChatAccept_default_instance_;
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::CommonStateSignalChatAccept* Arena::CreateMaybeMessage<::AcFunDanmu::CommonStateSignalChatAccept>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {

// ===================================================================

class CommonStateSignalChatAccept final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.CommonStateSignalChatAccept) */ {
 public:
  inline CommonStateSignalChatAccept() : CommonStateSignalChatAccept(nullptr) {}
  ~CommonStateSignalChatAccept() override;
  explicit PROTOBUF_CONSTEXPR CommonStateSignalChatAccept(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  CommonStateSignalChatAccept(const CommonStateSignalChatAccept& from);
  CommonStateSignalChatAccept(CommonStateSignalChatAccept&& from) noexcept
    : CommonStateSignalChatAccept() {
    *this = ::std::move(from);
  }

  inline CommonStateSignalChatAccept& operator=(const CommonStateSignalChatAccept& from) {
    CopyFrom(from);
    return *this;
  }
  inline CommonStateSignalChatAccept& operator=(CommonStateSignalChatAccept&& from) noexcept {
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
  static const CommonStateSignalChatAccept& default_instance() {
    return *internal_default_instance();
  }
  static inline const CommonStateSignalChatAccept* internal_default_instance() {
    return reinterpret_cast<const CommonStateSignalChatAccept*>(
               &_CommonStateSignalChatAccept_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CommonStateSignalChatAccept& a, CommonStateSignalChatAccept& b) {
    a.Swap(&b);
  }
  inline void Swap(CommonStateSignalChatAccept* other) {
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
  void UnsafeArenaSwap(CommonStateSignalChatAccept* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  CommonStateSignalChatAccept* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<CommonStateSignalChatAccept>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const CommonStateSignalChatAccept& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const CommonStateSignalChatAccept& from) {
    CommonStateSignalChatAccept::MergeImpl(*this, from);
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
  void InternalSwap(CommonStateSignalChatAccept* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.CommonStateSignalChatAccept";
  }
  protected:
  explicit CommonStateSignalChatAccept(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kChatIdFieldNumber = 1,
    kAryaSignalInfoFieldNumber = 3,
    kMediaTypeFieldNumber = 2,
  };
  // string chatId = 1;
  void clear_chatid();
  const std::string& chatid() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_chatid(ArgT0&& arg0, ArgT... args);
  std::string* mutable_chatid();
  PROTOBUF_NODISCARD std::string* release_chatid();
  void set_allocated_chatid(std::string* chatid);
  private:
  const std::string& _internal_chatid() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_chatid(const std::string& value);
  std::string* _internal_mutable_chatid();
  public:

  // string aryaSignalInfo = 3;
  void clear_aryasignalinfo();
  const std::string& aryasignalinfo() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_aryasignalinfo(ArgT0&& arg0, ArgT... args);
  std::string* mutable_aryasignalinfo();
  PROTOBUF_NODISCARD std::string* release_aryasignalinfo();
  void set_allocated_aryasignalinfo(std::string* aryasignalinfo);
  private:
  const std::string& _internal_aryasignalinfo() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_aryasignalinfo(const std::string& value);
  std::string* _internal_mutable_aryasignalinfo();
  public:

  // .AcFunDanmu.ChatMediaType mediaType = 2;
  void clear_mediatype();
  ::AcFunDanmu::ChatMediaType mediatype() const;
  void set_mediatype(::AcFunDanmu::ChatMediaType value);
  private:
  ::AcFunDanmu::ChatMediaType _internal_mediatype() const;
  void _internal_set_mediatype(::AcFunDanmu::ChatMediaType value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.CommonStateSignalChatAccept)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr chatid_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr aryasignalinfo_;
    int mediatype_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_CommonStateSignalChatAccept_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CommonStateSignalChatAccept

// string chatId = 1;
inline void CommonStateSignalChatAccept::clear_chatid() {
  _impl_.chatid_.ClearToEmpty();
}
inline const std::string& CommonStateSignalChatAccept::chatid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.CommonStateSignalChatAccept.chatId)
  return _internal_chatid();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void CommonStateSignalChatAccept::set_chatid(ArgT0&& arg0, ArgT... args) {
 
 _impl_.chatid_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.CommonStateSignalChatAccept.chatId)
}
inline std::string* CommonStateSignalChatAccept::mutable_chatid() {
  std::string* _s = _internal_mutable_chatid();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.CommonStateSignalChatAccept.chatId)
  return _s;
}
inline const std::string& CommonStateSignalChatAccept::_internal_chatid() const {
  return _impl_.chatid_.Get();
}
inline void CommonStateSignalChatAccept::_internal_set_chatid(const std::string& value) {
  
  _impl_.chatid_.Set(value, GetArenaForAllocation());
}
inline std::string* CommonStateSignalChatAccept::_internal_mutable_chatid() {
  
  return _impl_.chatid_.Mutable(GetArenaForAllocation());
}
inline std::string* CommonStateSignalChatAccept::release_chatid() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.CommonStateSignalChatAccept.chatId)
  return _impl_.chatid_.Release();
}
inline void CommonStateSignalChatAccept::set_allocated_chatid(std::string* chatid) {
  if (chatid != nullptr) {
    
  } else {
    
  }
  _impl_.chatid_.SetAllocated(chatid, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.chatid_.IsDefault()) {
    _impl_.chatid_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.CommonStateSignalChatAccept.chatId)
}

// .AcFunDanmu.ChatMediaType mediaType = 2;
inline void CommonStateSignalChatAccept::clear_mediatype() {
  _impl_.mediatype_ = 0;
}
inline ::AcFunDanmu::ChatMediaType CommonStateSignalChatAccept::_internal_mediatype() const {
  return static_cast< ::AcFunDanmu::ChatMediaType >(_impl_.mediatype_);
}
inline ::AcFunDanmu::ChatMediaType CommonStateSignalChatAccept::mediatype() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.CommonStateSignalChatAccept.mediaType)
  return _internal_mediatype();
}
inline void CommonStateSignalChatAccept::_internal_set_mediatype(::AcFunDanmu::ChatMediaType value) {
  
  _impl_.mediatype_ = value;
}
inline void CommonStateSignalChatAccept::set_mediatype(::AcFunDanmu::ChatMediaType value) {
  _internal_set_mediatype(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.CommonStateSignalChatAccept.mediaType)
}

// string aryaSignalInfo = 3;
inline void CommonStateSignalChatAccept::clear_aryasignalinfo() {
  _impl_.aryasignalinfo_.ClearToEmpty();
}
inline const std::string& CommonStateSignalChatAccept::aryasignalinfo() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.CommonStateSignalChatAccept.aryaSignalInfo)
  return _internal_aryasignalinfo();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void CommonStateSignalChatAccept::set_aryasignalinfo(ArgT0&& arg0, ArgT... args) {
 
 _impl_.aryasignalinfo_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.CommonStateSignalChatAccept.aryaSignalInfo)
}
inline std::string* CommonStateSignalChatAccept::mutable_aryasignalinfo() {
  std::string* _s = _internal_mutable_aryasignalinfo();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.CommonStateSignalChatAccept.aryaSignalInfo)
  return _s;
}
inline const std::string& CommonStateSignalChatAccept::_internal_aryasignalinfo() const {
  return _impl_.aryasignalinfo_.Get();
}
inline void CommonStateSignalChatAccept::_internal_set_aryasignalinfo(const std::string& value) {
  
  _impl_.aryasignalinfo_.Set(value, GetArenaForAllocation());
}
inline std::string* CommonStateSignalChatAccept::_internal_mutable_aryasignalinfo() {
  
  return _impl_.aryasignalinfo_.Mutable(GetArenaForAllocation());
}
inline std::string* CommonStateSignalChatAccept::release_aryasignalinfo() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.CommonStateSignalChatAccept.aryaSignalInfo)
  return _impl_.aryasignalinfo_.Release();
}
inline void CommonStateSignalChatAccept::set_allocated_aryasignalinfo(std::string* aryasignalinfo) {
  if (aryasignalinfo != nullptr) {
    
  } else {
    
  }
  _impl_.aryasignalinfo_.SetAllocated(aryasignalinfo, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.aryasignalinfo_.IsDefault()) {
    _impl_.aryasignalinfo_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.CommonStateSignalChatAccept.aryaSignalInfo)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_CommonStateSignalChatAccept_2eproto
