// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ImageTextMessage.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ImageTextMessage_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ImageTextMessage_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_ImageTextMessage_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ImageTextMessage_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ImageTextMessage_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Message {
class ImageTextMessage;
struct ImageTextMessageDefaultTypeInternal;
extern ImageTextMessageDefaultTypeInternal _ImageTextMessage_default_instance_;
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Message::ImageTextMessage* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Message::ImageTextMessage>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Message {

// ===================================================================

class ImageTextMessage final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Message.ImageTextMessage) */ {
 public:
  inline ImageTextMessage() : ImageTextMessage(nullptr) {}
  ~ImageTextMessage() override;
  explicit PROTOBUF_CONSTEXPR ImageTextMessage(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ImageTextMessage(const ImageTextMessage& from);
  ImageTextMessage(ImageTextMessage&& from) noexcept
    : ImageTextMessage() {
    *this = ::std::move(from);
  }

  inline ImageTextMessage& operator=(const ImageTextMessage& from) {
    CopyFrom(from);
    return *this;
  }
  inline ImageTextMessage& operator=(ImageTextMessage&& from) noexcept {
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
  static const ImageTextMessage& default_instance() {
    return *internal_default_instance();
  }
  static inline const ImageTextMessage* internal_default_instance() {
    return reinterpret_cast<const ImageTextMessage*>(
               &_ImageTextMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ImageTextMessage& a, ImageTextMessage& b) {
    a.Swap(&b);
  }
  inline void Swap(ImageTextMessage* other) {
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
  void UnsafeArenaSwap(ImageTextMessage* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ImageTextMessage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ImageTextMessage>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ImageTextMessage& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const ImageTextMessage& from) {
    ImageTextMessage::MergeImpl(*this, from);
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
  void InternalSwap(ImageTextMessage* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Message.ImageTextMessage";
  }
  protected:
  explicit ImageTextMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTitleFieldNumber = 1,
    kDescriptionFieldNumber = 2,
    kImageUrlFieldNumber = 3,
    kActionUrlFieldNumber = 4,
    kWidthFieldNumber = 5,
    kAspectRatioFieldNumber = 6,
  };
  // string title = 1;
  void clear_title();
  const std::string& title() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_title(ArgT0&& arg0, ArgT... args);
  std::string* mutable_title();
  PROTOBUF_NODISCARD std::string* release_title();
  void set_allocated_title(std::string* title);
  private:
  const std::string& _internal_title() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_title(const std::string& value);
  std::string* _internal_mutable_title();
  public:

  // string description = 2;
  void clear_description();
  const std::string& description() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_description(ArgT0&& arg0, ArgT... args);
  std::string* mutable_description();
  PROTOBUF_NODISCARD std::string* release_description();
  void set_allocated_description(std::string* description);
  private:
  const std::string& _internal_description() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_description(const std::string& value);
  std::string* _internal_mutable_description();
  public:

  // string imageUrl = 3;
  void clear_imageurl();
  const std::string& imageurl() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_imageurl(ArgT0&& arg0, ArgT... args);
  std::string* mutable_imageurl();
  PROTOBUF_NODISCARD std::string* release_imageurl();
  void set_allocated_imageurl(std::string* imageurl);
  private:
  const std::string& _internal_imageurl() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_imageurl(const std::string& value);
  std::string* _internal_mutable_imageurl();
  public:

  // string actionUrl = 4;
  void clear_actionurl();
  const std::string& actionurl() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_actionurl(ArgT0&& arg0, ArgT... args);
  std::string* mutable_actionurl();
  PROTOBUF_NODISCARD std::string* release_actionurl();
  void set_allocated_actionurl(std::string* actionurl);
  private:
  const std::string& _internal_actionurl() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_actionurl(const std::string& value);
  std::string* _internal_mutable_actionurl();
  public:

  // int32 width = 5;
  void clear_width();
  int32_t width() const;
  void set_width(int32_t value);
  private:
  int32_t _internal_width() const;
  void _internal_set_width(int32_t value);
  public:

  // float aspectRatio = 6;
  void clear_aspectratio();
  float aspectratio() const;
  void set_aspectratio(float value);
  private:
  float _internal_aspectratio() const;
  void _internal_set_aspectratio(float value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Message.ImageTextMessage)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr title_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr description_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr imageurl_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr actionurl_;
    int32_t width_;
    float aspectratio_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_ImageTextMessage_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ImageTextMessage

// string title = 1;
inline void ImageTextMessage::clear_title() {
  _impl_.title_.ClearToEmpty();
}
inline const std::string& ImageTextMessage::title() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.ImageTextMessage.title)
  return _internal_title();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ImageTextMessage::set_title(ArgT0&& arg0, ArgT... args) {
 
 _impl_.title_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.ImageTextMessage.title)
}
inline std::string* ImageTextMessage::mutable_title() {
  std::string* _s = _internal_mutable_title();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Message.ImageTextMessage.title)
  return _s;
}
inline const std::string& ImageTextMessage::_internal_title() const {
  return _impl_.title_.Get();
}
inline void ImageTextMessage::_internal_set_title(const std::string& value) {
  
  _impl_.title_.Set(value, GetArenaForAllocation());
}
inline std::string* ImageTextMessage::_internal_mutable_title() {
  
  return _impl_.title_.Mutable(GetArenaForAllocation());
}
inline std::string* ImageTextMessage::release_title() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Message.ImageTextMessage.title)
  return _impl_.title_.Release();
}
inline void ImageTextMessage::set_allocated_title(std::string* title) {
  if (title != nullptr) {
    
  } else {
    
  }
  _impl_.title_.SetAllocated(title, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.title_.IsDefault()) {
    _impl_.title_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Message.ImageTextMessage.title)
}

// string description = 2;
inline void ImageTextMessage::clear_description() {
  _impl_.description_.ClearToEmpty();
}
inline const std::string& ImageTextMessage::description() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.ImageTextMessage.description)
  return _internal_description();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ImageTextMessage::set_description(ArgT0&& arg0, ArgT... args) {
 
 _impl_.description_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.ImageTextMessage.description)
}
inline std::string* ImageTextMessage::mutable_description() {
  std::string* _s = _internal_mutable_description();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Message.ImageTextMessage.description)
  return _s;
}
inline const std::string& ImageTextMessage::_internal_description() const {
  return _impl_.description_.Get();
}
inline void ImageTextMessage::_internal_set_description(const std::string& value) {
  
  _impl_.description_.Set(value, GetArenaForAllocation());
}
inline std::string* ImageTextMessage::_internal_mutable_description() {
  
  return _impl_.description_.Mutable(GetArenaForAllocation());
}
inline std::string* ImageTextMessage::release_description() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Message.ImageTextMessage.description)
  return _impl_.description_.Release();
}
inline void ImageTextMessage::set_allocated_description(std::string* description) {
  if (description != nullptr) {
    
  } else {
    
  }
  _impl_.description_.SetAllocated(description, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.description_.IsDefault()) {
    _impl_.description_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Message.ImageTextMessage.description)
}

// string imageUrl = 3;
inline void ImageTextMessage::clear_imageurl() {
  _impl_.imageurl_.ClearToEmpty();
}
inline const std::string& ImageTextMessage::imageurl() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.ImageTextMessage.imageUrl)
  return _internal_imageurl();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ImageTextMessage::set_imageurl(ArgT0&& arg0, ArgT... args) {
 
 _impl_.imageurl_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.ImageTextMessage.imageUrl)
}
inline std::string* ImageTextMessage::mutable_imageurl() {
  std::string* _s = _internal_mutable_imageurl();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Message.ImageTextMessage.imageUrl)
  return _s;
}
inline const std::string& ImageTextMessage::_internal_imageurl() const {
  return _impl_.imageurl_.Get();
}
inline void ImageTextMessage::_internal_set_imageurl(const std::string& value) {
  
  _impl_.imageurl_.Set(value, GetArenaForAllocation());
}
inline std::string* ImageTextMessage::_internal_mutable_imageurl() {
  
  return _impl_.imageurl_.Mutable(GetArenaForAllocation());
}
inline std::string* ImageTextMessage::release_imageurl() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Message.ImageTextMessage.imageUrl)
  return _impl_.imageurl_.Release();
}
inline void ImageTextMessage::set_allocated_imageurl(std::string* imageurl) {
  if (imageurl != nullptr) {
    
  } else {
    
  }
  _impl_.imageurl_.SetAllocated(imageurl, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.imageurl_.IsDefault()) {
    _impl_.imageurl_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Message.ImageTextMessage.imageUrl)
}

// string actionUrl = 4;
inline void ImageTextMessage::clear_actionurl() {
  _impl_.actionurl_.ClearToEmpty();
}
inline const std::string& ImageTextMessage::actionurl() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.ImageTextMessage.actionUrl)
  return _internal_actionurl();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ImageTextMessage::set_actionurl(ArgT0&& arg0, ArgT... args) {
 
 _impl_.actionurl_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.ImageTextMessage.actionUrl)
}
inline std::string* ImageTextMessage::mutable_actionurl() {
  std::string* _s = _internal_mutable_actionurl();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Message.ImageTextMessage.actionUrl)
  return _s;
}
inline const std::string& ImageTextMessage::_internal_actionurl() const {
  return _impl_.actionurl_.Get();
}
inline void ImageTextMessage::_internal_set_actionurl(const std::string& value) {
  
  _impl_.actionurl_.Set(value, GetArenaForAllocation());
}
inline std::string* ImageTextMessage::_internal_mutable_actionurl() {
  
  return _impl_.actionurl_.Mutable(GetArenaForAllocation());
}
inline std::string* ImageTextMessage::release_actionurl() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Message.ImageTextMessage.actionUrl)
  return _impl_.actionurl_.Release();
}
inline void ImageTextMessage::set_allocated_actionurl(std::string* actionurl) {
  if (actionurl != nullptr) {
    
  } else {
    
  }
  _impl_.actionurl_.SetAllocated(actionurl, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.actionurl_.IsDefault()) {
    _impl_.actionurl_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Message.ImageTextMessage.actionUrl)
}

// int32 width = 5;
inline void ImageTextMessage::clear_width() {
  _impl_.width_ = 0;
}
inline int32_t ImageTextMessage::_internal_width() const {
  return _impl_.width_;
}
inline int32_t ImageTextMessage::width() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.ImageTextMessage.width)
  return _internal_width();
}
inline void ImageTextMessage::_internal_set_width(int32_t value) {
  
  _impl_.width_ = value;
}
inline void ImageTextMessage::set_width(int32_t value) {
  _internal_set_width(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.ImageTextMessage.width)
}

// float aspectRatio = 6;
inline void ImageTextMessage::clear_aspectratio() {
  _impl_.aspectratio_ = 0;
}
inline float ImageTextMessage::_internal_aspectratio() const {
  return _impl_.aspectratio_;
}
inline float ImageTextMessage::aspectratio() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.ImageTextMessage.aspectRatio)
  return _internal_aspectratio();
}
inline void ImageTextMessage::_internal_set_aspectratio(float value) {
  
  _impl_.aspectratio_ = value;
}
inline void ImageTextMessage::set_aspectratio(float value) {
  _internal_set_aspectratio(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.ImageTextMessage.aspectRatio)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ImageTextMessage_2eproto
