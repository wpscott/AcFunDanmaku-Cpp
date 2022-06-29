// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GifAttachment.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_GifAttachment_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_GifAttachment_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_GifAttachment_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_GifAttachment_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_GifAttachment_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Message {
class GifAttachment;
struct GifAttachmentDefaultTypeInternal;
extern GifAttachmentDefaultTypeInternal _GifAttachment_default_instance_;
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Message::GifAttachment* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Message::GifAttachment>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Message {

// ===================================================================

class GifAttachment final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Message.GifAttachment) */ {
 public:
  inline GifAttachment() : GifAttachment(nullptr) {}
  ~GifAttachment() override;
  explicit PROTOBUF_CONSTEXPR GifAttachment(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  GifAttachment(const GifAttachment& from);
  GifAttachment(GifAttachment&& from) noexcept
    : GifAttachment() {
    *this = ::std::move(from);
  }

  inline GifAttachment& operator=(const GifAttachment& from) {
    CopyFrom(from);
    return *this;
  }
  inline GifAttachment& operator=(GifAttachment&& from) noexcept {
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
  static const GifAttachment& default_instance() {
    return *internal_default_instance();
  }
  static inline const GifAttachment* internal_default_instance() {
    return reinterpret_cast<const GifAttachment*>(
               &_GifAttachment_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(GifAttachment& a, GifAttachment& b) {
    a.Swap(&b);
  }
  inline void Swap(GifAttachment* other) {
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
  void UnsafeArenaSwap(GifAttachment* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  GifAttachment* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<GifAttachment>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const GifAttachment& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const GifAttachment& from) {
    GifAttachment::MergeImpl(*this, from);
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
  void InternalSwap(GifAttachment* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Message.GifAttachment";
  }
  protected:
  explicit GifAttachment(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMimeTypeFieldNumber = 1,
    kUrlFieldNumber = 2,
    kThumbaUrlFieldNumber = 5,
    kTextFieldNumber = 6,
    kWidthFieldNumber = 3,
    kHeightFieldNumber = 4,
  };
  // string mimeType = 1;
  void clear_mimetype();
  const std::string& mimetype() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_mimetype(ArgT0&& arg0, ArgT... args);
  std::string* mutable_mimetype();
  PROTOBUF_NODISCARD std::string* release_mimetype();
  void set_allocated_mimetype(std::string* mimetype);
  private:
  const std::string& _internal_mimetype() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_mimetype(const std::string& value);
  std::string* _internal_mutable_mimetype();
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

  // string thumbaUrl = 5;
  void clear_thumbaurl();
  const std::string& thumbaurl() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_thumbaurl(ArgT0&& arg0, ArgT... args);
  std::string* mutable_thumbaurl();
  PROTOBUF_NODISCARD std::string* release_thumbaurl();
  void set_allocated_thumbaurl(std::string* thumbaurl);
  private:
  const std::string& _internal_thumbaurl() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_thumbaurl(const std::string& value);
  std::string* _internal_mutable_thumbaurl();
  public:

  // string text = 6;
  void clear_text();
  const std::string& text() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_text(ArgT0&& arg0, ArgT... args);
  std::string* mutable_text();
  PROTOBUF_NODISCARD std::string* release_text();
  void set_allocated_text(std::string* text);
  private:
  const std::string& _internal_text() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_text(const std::string& value);
  std::string* _internal_mutable_text();
  public:

  // int32 width = 3;
  void clear_width();
  int32_t width() const;
  void set_width(int32_t value);
  private:
  int32_t _internal_width() const;
  void _internal_set_width(int32_t value);
  public:

  // int32 height = 4;
  void clear_height();
  int32_t height() const;
  void set_height(int32_t value);
  private:
  int32_t _internal_height() const;
  void _internal_set_height(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Message.GifAttachment)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr mimetype_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr url_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr thumbaurl_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr text_;
    int32_t width_;
    int32_t height_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_GifAttachment_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GifAttachment

// string mimeType = 1;
inline void GifAttachment::clear_mimetype() {
  _impl_.mimetype_.ClearToEmpty();
}
inline const std::string& GifAttachment::mimetype() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.GifAttachment.mimeType)
  return _internal_mimetype();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void GifAttachment::set_mimetype(ArgT0&& arg0, ArgT... args) {
 
 _impl_.mimetype_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.GifAttachment.mimeType)
}
inline std::string* GifAttachment::mutable_mimetype() {
  std::string* _s = _internal_mutable_mimetype();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Message.GifAttachment.mimeType)
  return _s;
}
inline const std::string& GifAttachment::_internal_mimetype() const {
  return _impl_.mimetype_.Get();
}
inline void GifAttachment::_internal_set_mimetype(const std::string& value) {
  
  _impl_.mimetype_.Set(value, GetArenaForAllocation());
}
inline std::string* GifAttachment::_internal_mutable_mimetype() {
  
  return _impl_.mimetype_.Mutable(GetArenaForAllocation());
}
inline std::string* GifAttachment::release_mimetype() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Message.GifAttachment.mimeType)
  return _impl_.mimetype_.Release();
}
inline void GifAttachment::set_allocated_mimetype(std::string* mimetype) {
  if (mimetype != nullptr) {
    
  } else {
    
  }
  _impl_.mimetype_.SetAllocated(mimetype, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.mimetype_.IsDefault()) {
    _impl_.mimetype_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Message.GifAttachment.mimeType)
}

// string url = 2;
inline void GifAttachment::clear_url() {
  _impl_.url_.ClearToEmpty();
}
inline const std::string& GifAttachment::url() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.GifAttachment.url)
  return _internal_url();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void GifAttachment::set_url(ArgT0&& arg0, ArgT... args) {
 
 _impl_.url_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.GifAttachment.url)
}
inline std::string* GifAttachment::mutable_url() {
  std::string* _s = _internal_mutable_url();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Message.GifAttachment.url)
  return _s;
}
inline const std::string& GifAttachment::_internal_url() const {
  return _impl_.url_.Get();
}
inline void GifAttachment::_internal_set_url(const std::string& value) {
  
  _impl_.url_.Set(value, GetArenaForAllocation());
}
inline std::string* GifAttachment::_internal_mutable_url() {
  
  return _impl_.url_.Mutable(GetArenaForAllocation());
}
inline std::string* GifAttachment::release_url() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Message.GifAttachment.url)
  return _impl_.url_.Release();
}
inline void GifAttachment::set_allocated_url(std::string* url) {
  if (url != nullptr) {
    
  } else {
    
  }
  _impl_.url_.SetAllocated(url, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.url_.IsDefault()) {
    _impl_.url_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Message.GifAttachment.url)
}

// int32 width = 3;
inline void GifAttachment::clear_width() {
  _impl_.width_ = 0;
}
inline int32_t GifAttachment::_internal_width() const {
  return _impl_.width_;
}
inline int32_t GifAttachment::width() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.GifAttachment.width)
  return _internal_width();
}
inline void GifAttachment::_internal_set_width(int32_t value) {
  
  _impl_.width_ = value;
}
inline void GifAttachment::set_width(int32_t value) {
  _internal_set_width(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.GifAttachment.width)
}

// int32 height = 4;
inline void GifAttachment::clear_height() {
  _impl_.height_ = 0;
}
inline int32_t GifAttachment::_internal_height() const {
  return _impl_.height_;
}
inline int32_t GifAttachment::height() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.GifAttachment.height)
  return _internal_height();
}
inline void GifAttachment::_internal_set_height(int32_t value) {
  
  _impl_.height_ = value;
}
inline void GifAttachment::set_height(int32_t value) {
  _internal_set_height(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.GifAttachment.height)
}

// string thumbaUrl = 5;
inline void GifAttachment::clear_thumbaurl() {
  _impl_.thumbaurl_.ClearToEmpty();
}
inline const std::string& GifAttachment::thumbaurl() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.GifAttachment.thumbaUrl)
  return _internal_thumbaurl();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void GifAttachment::set_thumbaurl(ArgT0&& arg0, ArgT... args) {
 
 _impl_.thumbaurl_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.GifAttachment.thumbaUrl)
}
inline std::string* GifAttachment::mutable_thumbaurl() {
  std::string* _s = _internal_mutable_thumbaurl();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Message.GifAttachment.thumbaUrl)
  return _s;
}
inline const std::string& GifAttachment::_internal_thumbaurl() const {
  return _impl_.thumbaurl_.Get();
}
inline void GifAttachment::_internal_set_thumbaurl(const std::string& value) {
  
  _impl_.thumbaurl_.Set(value, GetArenaForAllocation());
}
inline std::string* GifAttachment::_internal_mutable_thumbaurl() {
  
  return _impl_.thumbaurl_.Mutable(GetArenaForAllocation());
}
inline std::string* GifAttachment::release_thumbaurl() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Message.GifAttachment.thumbaUrl)
  return _impl_.thumbaurl_.Release();
}
inline void GifAttachment::set_allocated_thumbaurl(std::string* thumbaurl) {
  if (thumbaurl != nullptr) {
    
  } else {
    
  }
  _impl_.thumbaurl_.SetAllocated(thumbaurl, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.thumbaurl_.IsDefault()) {
    _impl_.thumbaurl_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Message.GifAttachment.thumbaUrl)
}

// string text = 6;
inline void GifAttachment::clear_text() {
  _impl_.text_.ClearToEmpty();
}
inline const std::string& GifAttachment::text() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.GifAttachment.text)
  return _internal_text();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void GifAttachment::set_text(ArgT0&& arg0, ArgT... args) {
 
 _impl_.text_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.GifAttachment.text)
}
inline std::string* GifAttachment::mutable_text() {
  std::string* _s = _internal_mutable_text();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Message.GifAttachment.text)
  return _s;
}
inline const std::string& GifAttachment::_internal_text() const {
  return _impl_.text_.Get();
}
inline void GifAttachment::_internal_set_text(const std::string& value) {
  
  _impl_.text_.Set(value, GetArenaForAllocation());
}
inline std::string* GifAttachment::_internal_mutable_text() {
  
  return _impl_.text_.Mutable(GetArenaForAllocation());
}
inline std::string* GifAttachment::release_text() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Message.GifAttachment.text)
  return _impl_.text_.Release();
}
inline void GifAttachment::set_allocated_text(std::string* text) {
  if (text != nullptr) {
    
  } else {
    
  }
  _impl_.text_.SetAllocated(text, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.text_.IsDefault()) {
    _impl_.text_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Message.GifAttachment.text)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_GifAttachment_2eproto