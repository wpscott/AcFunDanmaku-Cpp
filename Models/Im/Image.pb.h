// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Image.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Image_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Image_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_Image_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Image_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Image_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {
class Image;
struct ImageDefaultTypeInternal;
extern ImageDefaultTypeInternal _Image_default_instance_;
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Cloud::Message::Image* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Cloud::Message::Image>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {

// ===================================================================

class Image final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Cloud.Message.Image) */ {
 public:
  inline Image() : Image(nullptr) {}
  ~Image() override;
  explicit PROTOBUF_CONSTEXPR Image(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Image(const Image& from);
  Image(Image&& from) noexcept
    : Image() {
    *this = ::std::move(from);
  }

  inline Image& operator=(const Image& from) {
    CopyFrom(from);
    return *this;
  }
  inline Image& operator=(Image&& from) noexcept {
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
  static const Image& default_instance() {
    return *internal_default_instance();
  }
  static inline const Image* internal_default_instance() {
    return reinterpret_cast<const Image*>(
               &_Image_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Image& a, Image& b) {
    a.Swap(&b);
  }
  inline void Swap(Image* other) {
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
  void UnsafeArenaSwap(Image* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Image* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Image>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Image& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Image& from) {
    Image::MergeImpl(*this, from);
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
  void InternalSwap(Image* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Cloud.Message.Image";
  }
  protected:
  explicit Image(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUriFieldNumber = 1,
    kWidthFieldNumber = 2,
    kHeightFieldNumber = 3,
    kContentLengthFieldNumber = 4,
  };
  // string uri = 1;
  void clear_uri();
  const std::string& uri() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_uri(ArgT0&& arg0, ArgT... args);
  std::string* mutable_uri();
  PROTOBUF_NODISCARD std::string* release_uri();
  void set_allocated_uri(std::string* uri);
  private:
  const std::string& _internal_uri() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_uri(const std::string& value);
  std::string* _internal_mutable_uri();
  public:

  // int32 width = 2;
  void clear_width();
  int32_t width() const;
  void set_width(int32_t value);
  private:
  int32_t _internal_width() const;
  void _internal_set_width(int32_t value);
  public:

  // int32 height = 3;
  void clear_height();
  int32_t height() const;
  void set_height(int32_t value);
  private:
  int32_t _internal_height() const;
  void _internal_set_height(int32_t value);
  public:

  // int64 contentLength = 4;
  void clear_contentlength();
  int64_t contentlength() const;
  void set_contentlength(int64_t value);
  private:
  int64_t _internal_contentlength() const;
  void _internal_set_contentlength(int64_t value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Cloud.Message.Image)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr uri_;
    int32_t width_;
    int32_t height_;
    int64_t contentlength_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_Image_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Image

// string uri = 1;
inline void Image::clear_uri() {
  _impl_.uri_.ClearToEmpty();
}
inline const std::string& Image::uri() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.Image.uri)
  return _internal_uri();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Image::set_uri(ArgT0&& arg0, ArgT... args) {
 
 _impl_.uri_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Message.Image.uri)
}
inline std::string* Image::mutable_uri() {
  std::string* _s = _internal_mutable_uri();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Message.Image.uri)
  return _s;
}
inline const std::string& Image::_internal_uri() const {
  return _impl_.uri_.Get();
}
inline void Image::_internal_set_uri(const std::string& value) {
  
  _impl_.uri_.Set(value, GetArenaForAllocation());
}
inline std::string* Image::_internal_mutable_uri() {
  
  return _impl_.uri_.Mutable(GetArenaForAllocation());
}
inline std::string* Image::release_uri() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Message.Image.uri)
  return _impl_.uri_.Release();
}
inline void Image::set_allocated_uri(std::string* uri) {
  if (uri != nullptr) {
    
  } else {
    
  }
  _impl_.uri_.SetAllocated(uri, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.uri_.IsDefault()) {
    _impl_.uri_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Message.Image.uri)
}

// int32 width = 2;
inline void Image::clear_width() {
  _impl_.width_ = 0;
}
inline int32_t Image::_internal_width() const {
  return _impl_.width_;
}
inline int32_t Image::width() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.Image.width)
  return _internal_width();
}
inline void Image::_internal_set_width(int32_t value) {
  
  _impl_.width_ = value;
}
inline void Image::set_width(int32_t value) {
  _internal_set_width(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Message.Image.width)
}

// int32 height = 3;
inline void Image::clear_height() {
  _impl_.height_ = 0;
}
inline int32_t Image::_internal_height() const {
  return _impl_.height_;
}
inline int32_t Image::height() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.Image.height)
  return _internal_height();
}
inline void Image::_internal_set_height(int32_t value) {
  
  _impl_.height_ = value;
}
inline void Image::set_height(int32_t value) {
  _internal_set_height(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Message.Image.height)
}

// int64 contentLength = 4;
inline void Image::clear_contentlength() {
  _impl_.contentlength_ = int64_t{0};
}
inline int64_t Image::_internal_contentlength() const {
  return _impl_.contentlength_;
}
inline int64_t Image::contentlength() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.Image.contentLength)
  return _internal_contentlength();
}
inline void Image::_internal_set_contentlength(int64_t value) {
  
  _impl_.contentlength_ = value;
}
inline void Image::set_contentlength(int64_t value) {
  _internal_set_contentlength(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Message.Image.contentLength)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Image_2eproto
