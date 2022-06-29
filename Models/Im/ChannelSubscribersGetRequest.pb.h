// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ChannelSubscribersGetRequest.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ChannelSubscribersGetRequest_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ChannelSubscribersGetRequest_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_ChannelSubscribersGetRequest_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ChannelSubscribersGetRequest_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ChannelSubscribersGetRequest_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Channel {
class ChannelSubscribersGetRequest;
struct ChannelSubscribersGetRequestDefaultTypeInternal;
extern ChannelSubscribersGetRequestDefaultTypeInternal _ChannelSubscribersGetRequest_default_instance_;
}  // namespace Channel
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Cloud::Channel::ChannelSubscribersGetRequest* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Cloud::Channel::ChannelSubscribersGetRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Channel {

// ===================================================================

class ChannelSubscribersGetRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Cloud.Channel.ChannelSubscribersGetRequest) */ {
 public:
  inline ChannelSubscribersGetRequest() : ChannelSubscribersGetRequest(nullptr) {}
  ~ChannelSubscribersGetRequest() override;
  explicit PROTOBUF_CONSTEXPR ChannelSubscribersGetRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ChannelSubscribersGetRequest(const ChannelSubscribersGetRequest& from);
  ChannelSubscribersGetRequest(ChannelSubscribersGetRequest&& from) noexcept
    : ChannelSubscribersGetRequest() {
    *this = ::std::move(from);
  }

  inline ChannelSubscribersGetRequest& operator=(const ChannelSubscribersGetRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline ChannelSubscribersGetRequest& operator=(ChannelSubscribersGetRequest&& from) noexcept {
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
  static const ChannelSubscribersGetRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const ChannelSubscribersGetRequest* internal_default_instance() {
    return reinterpret_cast<const ChannelSubscribersGetRequest*>(
               &_ChannelSubscribersGetRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ChannelSubscribersGetRequest& a, ChannelSubscribersGetRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(ChannelSubscribersGetRequest* other) {
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
  void UnsafeArenaSwap(ChannelSubscribersGetRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ChannelSubscribersGetRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ChannelSubscribersGetRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ChannelSubscribersGetRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const ChannelSubscribersGetRequest& from) {
    ChannelSubscribersGetRequest::MergeImpl(*this, from);
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
  void InternalSwap(ChannelSubscribersGetRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Cloud.Channel.ChannelSubscribersGetRequest";
  }
  protected:
  explicit ChannelSubscribersGetRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kChannelIdFieldNumber = 1,
  };
  // string channelId = 1;
  void clear_channelid();
  const std::string& channelid() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_channelid(ArgT0&& arg0, ArgT... args);
  std::string* mutable_channelid();
  PROTOBUF_NODISCARD std::string* release_channelid();
  void set_allocated_channelid(std::string* channelid);
  private:
  const std::string& _internal_channelid() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_channelid(const std::string& value);
  std::string* _internal_mutable_channelid();
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Cloud.Channel.ChannelSubscribersGetRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr channelid_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_ChannelSubscribersGetRequest_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ChannelSubscribersGetRequest

// string channelId = 1;
inline void ChannelSubscribersGetRequest::clear_channelid() {
  _impl_.channelid_.ClearToEmpty();
}
inline const std::string& ChannelSubscribersGetRequest::channelid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Channel.ChannelSubscribersGetRequest.channelId)
  return _internal_channelid();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ChannelSubscribersGetRequest::set_channelid(ArgT0&& arg0, ArgT... args) {
 
 _impl_.channelid_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Channel.ChannelSubscribersGetRequest.channelId)
}
inline std::string* ChannelSubscribersGetRequest::mutable_channelid() {
  std::string* _s = _internal_mutable_channelid();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Channel.ChannelSubscribersGetRequest.channelId)
  return _s;
}
inline const std::string& ChannelSubscribersGetRequest::_internal_channelid() const {
  return _impl_.channelid_.Get();
}
inline void ChannelSubscribersGetRequest::_internal_set_channelid(const std::string& value) {
  
  _impl_.channelid_.Set(value, GetArenaForAllocation());
}
inline std::string* ChannelSubscribersGetRequest::_internal_mutable_channelid() {
  
  return _impl_.channelid_.Mutable(GetArenaForAllocation());
}
inline std::string* ChannelSubscribersGetRequest::release_channelid() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Channel.ChannelSubscribersGetRequest.channelId)
  return _impl_.channelid_.Release();
}
inline void ChannelSubscribersGetRequest::set_allocated_channelid(std::string* channelid) {
  if (channelid != nullptr) {
    
  } else {
    
  }
  _impl_.channelid_.SetAllocated(channelid, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.channelid_.IsDefault()) {
    _impl_.channelid_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Channel.ChannelSubscribersGetRequest.channelId)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Channel
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ChannelSubscribersGetRequest_2eproto
