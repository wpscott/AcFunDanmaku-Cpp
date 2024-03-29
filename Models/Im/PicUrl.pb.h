// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PicUrl.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_PicUrl_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_PicUrl_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_PicUrl_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_PicUrl_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_PicUrl_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {
class PicUrl;
struct PicUrlDefaultTypeInternal;
extern PicUrlDefaultTypeInternal _PicUrl_default_instance_;
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Cloud::Message::PicUrl* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Cloud::Message::PicUrl>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {

// ===================================================================

class PicUrl final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Cloud.Message.PicUrl) */ {
 public:
  inline PicUrl() : PicUrl(nullptr) {}
  ~PicUrl() override;
  explicit PROTOBUF_CONSTEXPR PicUrl(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  PicUrl(const PicUrl& from);
  PicUrl(PicUrl&& from) noexcept
    : PicUrl() {
    *this = ::std::move(from);
  }

  inline PicUrl& operator=(const PicUrl& from) {
    CopyFrom(from);
    return *this;
  }
  inline PicUrl& operator=(PicUrl&& from) noexcept {
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
  static const PicUrl& default_instance() {
    return *internal_default_instance();
  }
  static inline const PicUrl* internal_default_instance() {
    return reinterpret_cast<const PicUrl*>(
               &_PicUrl_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PicUrl& a, PicUrl& b) {
    a.Swap(&b);
  }
  inline void Swap(PicUrl* other) {
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
  void UnsafeArenaSwap(PicUrl* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  PicUrl* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<PicUrl>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const PicUrl& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const PicUrl& from) {
    PicUrl::MergeImpl(*this, from);
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
  void InternalSwap(PicUrl* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Cloud.Message.PicUrl";
  }
  protected:
  explicit PicUrl(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCdnFieldNumber = 1,
    kUrlFieldNumber = 2,
    kUrlPatternFieldNumber = 3,
    kIpFieldNumber = 4,
  };
  // string cdn = 1;
  void clear_cdn();
  const std::string& cdn() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_cdn(ArgT0&& arg0, ArgT... args);
  std::string* mutable_cdn();
  PROTOBUF_NODISCARD std::string* release_cdn();
  void set_allocated_cdn(std::string* cdn);
  private:
  const std::string& _internal_cdn() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_cdn(const std::string& value);
  std::string* _internal_mutable_cdn();
  public:

  // string url = 2;
  void clear_url();
  const std::string& url() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_url(ArgT0&& arg0, ArgT... args);
  std::string* mutable_url();
  PROTOBUF_NODISCARD std::string* release_url();
  void set_allocated_url(std::string* url);
  private:
  const std::string& _internal_url() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_url(const std::string& value);
  std::string* _internal_mutable_url();
  public:

  // string urlPattern = 3;
  void clear_urlpattern();
  const std::string& urlpattern() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_urlpattern(ArgT0&& arg0, ArgT... args);
  std::string* mutable_urlpattern();
  PROTOBUF_NODISCARD std::string* release_urlpattern();
  void set_allocated_urlpattern(std::string* urlpattern);
  private:
  const std::string& _internal_urlpattern() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_urlpattern(const std::string& value);
  std::string* _internal_mutable_urlpattern();
  public:

  // string ip = 4;
  void clear_ip();
  const std::string& ip() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_ip(ArgT0&& arg0, ArgT... args);
  std::string* mutable_ip();
  PROTOBUF_NODISCARD std::string* release_ip();
  void set_allocated_ip(std::string* ip);
  private:
  const std::string& _internal_ip() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_ip(const std::string& value);
  std::string* _internal_mutable_ip();
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Cloud.Message.PicUrl)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr cdn_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr url_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr urlpattern_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr ip_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_PicUrl_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PicUrl

// string cdn = 1;
inline void PicUrl::clear_cdn() {
  _impl_.cdn_.ClearToEmpty();
}
inline const std::string& PicUrl::cdn() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.PicUrl.cdn)
  return _internal_cdn();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void PicUrl::set_cdn(ArgT0&& arg0, ArgT... args) {
 
 _impl_.cdn_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Message.PicUrl.cdn)
}
inline std::string* PicUrl::mutable_cdn() {
  std::string* _s = _internal_mutable_cdn();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Message.PicUrl.cdn)
  return _s;
}
inline const std::string& PicUrl::_internal_cdn() const {
  return _impl_.cdn_.Get();
}
inline void PicUrl::_internal_set_cdn(const std::string& value) {
  
  _impl_.cdn_.Set(value, GetArenaForAllocation());
}
inline std::string* PicUrl::_internal_mutable_cdn() {
  
  return _impl_.cdn_.Mutable(GetArenaForAllocation());
}
inline std::string* PicUrl::release_cdn() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Message.PicUrl.cdn)
  return _impl_.cdn_.Release();
}
inline void PicUrl::set_allocated_cdn(std::string* cdn) {
  if (cdn != nullptr) {
    
  } else {
    
  }
  _impl_.cdn_.SetAllocated(cdn, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.cdn_.IsDefault()) {
    _impl_.cdn_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Message.PicUrl.cdn)
}

// string url = 2;
inline void PicUrl::clear_url() {
  _impl_.url_.ClearToEmpty();
}
inline const std::string& PicUrl::url() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.PicUrl.url)
  return _internal_url();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void PicUrl::set_url(ArgT0&& arg0, ArgT... args) {
 
 _impl_.url_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Message.PicUrl.url)
}
inline std::string* PicUrl::mutable_url() {
  std::string* _s = _internal_mutable_url();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Message.PicUrl.url)
  return _s;
}
inline const std::string& PicUrl::_internal_url() const {
  return _impl_.url_.Get();
}
inline void PicUrl::_internal_set_url(const std::string& value) {
  
  _impl_.url_.Set(value, GetArenaForAllocation());
}
inline std::string* PicUrl::_internal_mutable_url() {
  
  return _impl_.url_.Mutable(GetArenaForAllocation());
}
inline std::string* PicUrl::release_url() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Message.PicUrl.url)
  return _impl_.url_.Release();
}
inline void PicUrl::set_allocated_url(std::string* url) {
  if (url != nullptr) {
    
  } else {
    
  }
  _impl_.url_.SetAllocated(url, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.url_.IsDefault()) {
    _impl_.url_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Message.PicUrl.url)
}

// string urlPattern = 3;
inline void PicUrl::clear_urlpattern() {
  _impl_.urlpattern_.ClearToEmpty();
}
inline const std::string& PicUrl::urlpattern() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.PicUrl.urlPattern)
  return _internal_urlpattern();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void PicUrl::set_urlpattern(ArgT0&& arg0, ArgT... args) {
 
 _impl_.urlpattern_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Message.PicUrl.urlPattern)
}
inline std::string* PicUrl::mutable_urlpattern() {
  std::string* _s = _internal_mutable_urlpattern();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Message.PicUrl.urlPattern)
  return _s;
}
inline const std::string& PicUrl::_internal_urlpattern() const {
  return _impl_.urlpattern_.Get();
}
inline void PicUrl::_internal_set_urlpattern(const std::string& value) {
  
  _impl_.urlpattern_.Set(value, GetArenaForAllocation());
}
inline std::string* PicUrl::_internal_mutable_urlpattern() {
  
  return _impl_.urlpattern_.Mutable(GetArenaForAllocation());
}
inline std::string* PicUrl::release_urlpattern() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Message.PicUrl.urlPattern)
  return _impl_.urlpattern_.Release();
}
inline void PicUrl::set_allocated_urlpattern(std::string* urlpattern) {
  if (urlpattern != nullptr) {
    
  } else {
    
  }
  _impl_.urlpattern_.SetAllocated(urlpattern, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.urlpattern_.IsDefault()) {
    _impl_.urlpattern_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Message.PicUrl.urlPattern)
}

// string ip = 4;
inline void PicUrl::clear_ip() {
  _impl_.ip_.ClearToEmpty();
}
inline const std::string& PicUrl::ip() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.PicUrl.ip)
  return _internal_ip();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void PicUrl::set_ip(ArgT0&& arg0, ArgT... args) {
 
 _impl_.ip_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Message.PicUrl.ip)
}
inline std::string* PicUrl::mutable_ip() {
  std::string* _s = _internal_mutable_ip();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Message.PicUrl.ip)
  return _s;
}
inline const std::string& PicUrl::_internal_ip() const {
  return _impl_.ip_.Get();
}
inline void PicUrl::_internal_set_ip(const std::string& value) {
  
  _impl_.ip_.Set(value, GetArenaForAllocation());
}
inline std::string* PicUrl::_internal_mutable_ip() {
  
  return _impl_.ip_.Mutable(GetArenaForAllocation());
}
inline std::string* PicUrl::release_ip() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Message.PicUrl.ip)
  return _impl_.ip_.Release();
}
inline void PicUrl::set_allocated_ip(std::string* ip) {
  if (ip != nullptr) {
    
  } else {
    
  }
  _impl_.ip_.SetAllocated(ip, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.ip_.IsDefault()) {
    _impl_.ip_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Message.PicUrl.ip)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_PicUrl_2eproto
