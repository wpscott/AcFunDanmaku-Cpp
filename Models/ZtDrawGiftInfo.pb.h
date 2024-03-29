// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ZtDrawGiftInfo.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ZtDrawGiftInfo_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ZtDrawGiftInfo_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_ZtDrawGiftInfo_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ZtDrawGiftInfo_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ZtDrawGiftInfo_2eproto;
namespace AcFunDanmu {
class ZtDrawGiftInfo;
struct ZtDrawGiftInfoDefaultTypeInternal;
extern ZtDrawGiftInfoDefaultTypeInternal _ZtDrawGiftInfo_default_instance_;
class ZtDrawGiftInfo_ZtDrawPoint;
struct ZtDrawGiftInfo_ZtDrawPointDefaultTypeInternal;
extern ZtDrawGiftInfo_ZtDrawPointDefaultTypeInternal _ZtDrawGiftInfo_ZtDrawPoint_default_instance_;
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::ZtDrawGiftInfo* Arena::CreateMaybeMessage<::AcFunDanmu::ZtDrawGiftInfo>(Arena*);
template<> ::AcFunDanmu::ZtDrawGiftInfo_ZtDrawPoint* Arena::CreateMaybeMessage<::AcFunDanmu::ZtDrawGiftInfo_ZtDrawPoint>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {

// ===================================================================

class ZtDrawGiftInfo_ZtDrawPoint final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.ZtDrawGiftInfo.ZtDrawPoint) */ {
 public:
  inline ZtDrawGiftInfo_ZtDrawPoint() : ZtDrawGiftInfo_ZtDrawPoint(nullptr) {}
  ~ZtDrawGiftInfo_ZtDrawPoint() override;
  explicit PROTOBUF_CONSTEXPR ZtDrawGiftInfo_ZtDrawPoint(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ZtDrawGiftInfo_ZtDrawPoint(const ZtDrawGiftInfo_ZtDrawPoint& from);
  ZtDrawGiftInfo_ZtDrawPoint(ZtDrawGiftInfo_ZtDrawPoint&& from) noexcept
    : ZtDrawGiftInfo_ZtDrawPoint() {
    *this = ::std::move(from);
  }

  inline ZtDrawGiftInfo_ZtDrawPoint& operator=(const ZtDrawGiftInfo_ZtDrawPoint& from) {
    CopyFrom(from);
    return *this;
  }
  inline ZtDrawGiftInfo_ZtDrawPoint& operator=(ZtDrawGiftInfo_ZtDrawPoint&& from) noexcept {
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
  static const ZtDrawGiftInfo_ZtDrawPoint& default_instance() {
    return *internal_default_instance();
  }
  static inline const ZtDrawGiftInfo_ZtDrawPoint* internal_default_instance() {
    return reinterpret_cast<const ZtDrawGiftInfo_ZtDrawPoint*>(
               &_ZtDrawGiftInfo_ZtDrawPoint_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ZtDrawGiftInfo_ZtDrawPoint& a, ZtDrawGiftInfo_ZtDrawPoint& b) {
    a.Swap(&b);
  }
  inline void Swap(ZtDrawGiftInfo_ZtDrawPoint* other) {
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
  void UnsafeArenaSwap(ZtDrawGiftInfo_ZtDrawPoint* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ZtDrawGiftInfo_ZtDrawPoint* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ZtDrawGiftInfo_ZtDrawPoint>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ZtDrawGiftInfo_ZtDrawPoint& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const ZtDrawGiftInfo_ZtDrawPoint& from) {
    ZtDrawGiftInfo_ZtDrawPoint::MergeImpl(*this, from);
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
  void InternalSwap(ZtDrawGiftInfo_ZtDrawPoint* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.ZtDrawGiftInfo.ZtDrawPoint";
  }
  protected:
  explicit ZtDrawGiftInfo_ZtDrawPoint(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMarginLeftFieldNumber = 1,
    kMarginTopFieldNumber = 2,
    kScaleRatioFieldNumber = 3,
    kPointWidthFieldNumber = 5,
    kPointHeightFieldNumber = 6,
    kHandupFieldNumber = 4,
  };
  // int64 marginLeft = 1;
  void clear_marginleft();
  int64_t marginleft() const;
  void set_marginleft(int64_t value);
  private:
  int64_t _internal_marginleft() const;
  void _internal_set_marginleft(int64_t value);
  public:

  // int64 marginTop = 2;
  void clear_margintop();
  int64_t margintop() const;
  void set_margintop(int64_t value);
  private:
  int64_t _internal_margintop() const;
  void _internal_set_margintop(int64_t value);
  public:

  // double scaleRatio = 3;
  void clear_scaleratio();
  double scaleratio() const;
  void set_scaleratio(double value);
  private:
  double _internal_scaleratio() const;
  void _internal_set_scaleratio(double value);
  public:

  // int64 pointWidth = 5;
  void clear_pointwidth();
  int64_t pointwidth() const;
  void set_pointwidth(int64_t value);
  private:
  int64_t _internal_pointwidth() const;
  void _internal_set_pointwidth(int64_t value);
  public:

  // int64 pointHeight = 6;
  void clear_pointheight();
  int64_t pointheight() const;
  void set_pointheight(int64_t value);
  private:
  int64_t _internal_pointheight() const;
  void _internal_set_pointheight(int64_t value);
  public:

  // bool handup = 4;
  void clear_handup();
  bool handup() const;
  void set_handup(bool value);
  private:
  bool _internal_handup() const;
  void _internal_set_handup(bool value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.ZtDrawGiftInfo.ZtDrawPoint)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    int64_t marginleft_;
    int64_t margintop_;
    double scaleratio_;
    int64_t pointwidth_;
    int64_t pointheight_;
    bool handup_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_ZtDrawGiftInfo_2eproto;
};
// -------------------------------------------------------------------

class ZtDrawGiftInfo final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.ZtDrawGiftInfo) */ {
 public:
  inline ZtDrawGiftInfo() : ZtDrawGiftInfo(nullptr) {}
  ~ZtDrawGiftInfo() override;
  explicit PROTOBUF_CONSTEXPR ZtDrawGiftInfo(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ZtDrawGiftInfo(const ZtDrawGiftInfo& from);
  ZtDrawGiftInfo(ZtDrawGiftInfo&& from) noexcept
    : ZtDrawGiftInfo() {
    *this = ::std::move(from);
  }

  inline ZtDrawGiftInfo& operator=(const ZtDrawGiftInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline ZtDrawGiftInfo& operator=(ZtDrawGiftInfo&& from) noexcept {
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
  static const ZtDrawGiftInfo& default_instance() {
    return *internal_default_instance();
  }
  static inline const ZtDrawGiftInfo* internal_default_instance() {
    return reinterpret_cast<const ZtDrawGiftInfo*>(
               &_ZtDrawGiftInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(ZtDrawGiftInfo& a, ZtDrawGiftInfo& b) {
    a.Swap(&b);
  }
  inline void Swap(ZtDrawGiftInfo* other) {
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
  void UnsafeArenaSwap(ZtDrawGiftInfo* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ZtDrawGiftInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ZtDrawGiftInfo>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ZtDrawGiftInfo& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const ZtDrawGiftInfo& from) {
    ZtDrawGiftInfo::MergeImpl(*this, from);
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
  void InternalSwap(ZtDrawGiftInfo* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.ZtDrawGiftInfo";
  }
  protected:
  explicit ZtDrawGiftInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef ZtDrawGiftInfo_ZtDrawPoint ZtDrawPoint;

  // accessors -------------------------------------------------------

  enum : int {
    kDrawPointFieldNumber = 3,
    kScreenWidthFieldNumber = 1,
    kScreenHeightFieldNumber = 2,
  };
  // repeated .AcFunDanmu.ZtDrawGiftInfo.ZtDrawPoint drawPoint = 3;
  int drawpoint_size() const;
  private:
  int _internal_drawpoint_size() const;
  public:
  void clear_drawpoint();
  ::AcFunDanmu::ZtDrawGiftInfo_ZtDrawPoint* mutable_drawpoint(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::ZtDrawGiftInfo_ZtDrawPoint >*
      mutable_drawpoint();
  private:
  const ::AcFunDanmu::ZtDrawGiftInfo_ZtDrawPoint& _internal_drawpoint(int index) const;
  ::AcFunDanmu::ZtDrawGiftInfo_ZtDrawPoint* _internal_add_drawpoint();
  public:
  const ::AcFunDanmu::ZtDrawGiftInfo_ZtDrawPoint& drawpoint(int index) const;
  ::AcFunDanmu::ZtDrawGiftInfo_ZtDrawPoint* add_drawpoint();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::ZtDrawGiftInfo_ZtDrawPoint >&
      drawpoint() const;

  // int64 screenWidth = 1;
  void clear_screenwidth();
  int64_t screenwidth() const;
  void set_screenwidth(int64_t value);
  private:
  int64_t _internal_screenwidth() const;
  void _internal_set_screenwidth(int64_t value);
  public:

  // int64 screenHeight = 2;
  void clear_screenheight();
  int64_t screenheight() const;
  void set_screenheight(int64_t value);
  private:
  int64_t _internal_screenheight() const;
  void _internal_set_screenheight(int64_t value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.ZtDrawGiftInfo)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::ZtDrawGiftInfo_ZtDrawPoint > drawpoint_;
    int64_t screenwidth_;
    int64_t screenheight_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_ZtDrawGiftInfo_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ZtDrawGiftInfo_ZtDrawPoint

// int64 marginLeft = 1;
inline void ZtDrawGiftInfo_ZtDrawPoint::clear_marginleft() {
  _impl_.marginleft_ = int64_t{0};
}
inline int64_t ZtDrawGiftInfo_ZtDrawPoint::_internal_marginleft() const {
  return _impl_.marginleft_;
}
inline int64_t ZtDrawGiftInfo_ZtDrawPoint::marginleft() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.ZtDrawGiftInfo.ZtDrawPoint.marginLeft)
  return _internal_marginleft();
}
inline void ZtDrawGiftInfo_ZtDrawPoint::_internal_set_marginleft(int64_t value) {
  
  _impl_.marginleft_ = value;
}
inline void ZtDrawGiftInfo_ZtDrawPoint::set_marginleft(int64_t value) {
  _internal_set_marginleft(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.ZtDrawGiftInfo.ZtDrawPoint.marginLeft)
}

// int64 marginTop = 2;
inline void ZtDrawGiftInfo_ZtDrawPoint::clear_margintop() {
  _impl_.margintop_ = int64_t{0};
}
inline int64_t ZtDrawGiftInfo_ZtDrawPoint::_internal_margintop() const {
  return _impl_.margintop_;
}
inline int64_t ZtDrawGiftInfo_ZtDrawPoint::margintop() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.ZtDrawGiftInfo.ZtDrawPoint.marginTop)
  return _internal_margintop();
}
inline void ZtDrawGiftInfo_ZtDrawPoint::_internal_set_margintop(int64_t value) {
  
  _impl_.margintop_ = value;
}
inline void ZtDrawGiftInfo_ZtDrawPoint::set_margintop(int64_t value) {
  _internal_set_margintop(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.ZtDrawGiftInfo.ZtDrawPoint.marginTop)
}

// double scaleRatio = 3;
inline void ZtDrawGiftInfo_ZtDrawPoint::clear_scaleratio() {
  _impl_.scaleratio_ = 0;
}
inline double ZtDrawGiftInfo_ZtDrawPoint::_internal_scaleratio() const {
  return _impl_.scaleratio_;
}
inline double ZtDrawGiftInfo_ZtDrawPoint::scaleratio() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.ZtDrawGiftInfo.ZtDrawPoint.scaleRatio)
  return _internal_scaleratio();
}
inline void ZtDrawGiftInfo_ZtDrawPoint::_internal_set_scaleratio(double value) {
  
  _impl_.scaleratio_ = value;
}
inline void ZtDrawGiftInfo_ZtDrawPoint::set_scaleratio(double value) {
  _internal_set_scaleratio(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.ZtDrawGiftInfo.ZtDrawPoint.scaleRatio)
}

// bool handup = 4;
inline void ZtDrawGiftInfo_ZtDrawPoint::clear_handup() {
  _impl_.handup_ = false;
}
inline bool ZtDrawGiftInfo_ZtDrawPoint::_internal_handup() const {
  return _impl_.handup_;
}
inline bool ZtDrawGiftInfo_ZtDrawPoint::handup() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.ZtDrawGiftInfo.ZtDrawPoint.handup)
  return _internal_handup();
}
inline void ZtDrawGiftInfo_ZtDrawPoint::_internal_set_handup(bool value) {
  
  _impl_.handup_ = value;
}
inline void ZtDrawGiftInfo_ZtDrawPoint::set_handup(bool value) {
  _internal_set_handup(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.ZtDrawGiftInfo.ZtDrawPoint.handup)
}

// int64 pointWidth = 5;
inline void ZtDrawGiftInfo_ZtDrawPoint::clear_pointwidth() {
  _impl_.pointwidth_ = int64_t{0};
}
inline int64_t ZtDrawGiftInfo_ZtDrawPoint::_internal_pointwidth() const {
  return _impl_.pointwidth_;
}
inline int64_t ZtDrawGiftInfo_ZtDrawPoint::pointwidth() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.ZtDrawGiftInfo.ZtDrawPoint.pointWidth)
  return _internal_pointwidth();
}
inline void ZtDrawGiftInfo_ZtDrawPoint::_internal_set_pointwidth(int64_t value) {
  
  _impl_.pointwidth_ = value;
}
inline void ZtDrawGiftInfo_ZtDrawPoint::set_pointwidth(int64_t value) {
  _internal_set_pointwidth(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.ZtDrawGiftInfo.ZtDrawPoint.pointWidth)
}

// int64 pointHeight = 6;
inline void ZtDrawGiftInfo_ZtDrawPoint::clear_pointheight() {
  _impl_.pointheight_ = int64_t{0};
}
inline int64_t ZtDrawGiftInfo_ZtDrawPoint::_internal_pointheight() const {
  return _impl_.pointheight_;
}
inline int64_t ZtDrawGiftInfo_ZtDrawPoint::pointheight() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.ZtDrawGiftInfo.ZtDrawPoint.pointHeight)
  return _internal_pointheight();
}
inline void ZtDrawGiftInfo_ZtDrawPoint::_internal_set_pointheight(int64_t value) {
  
  _impl_.pointheight_ = value;
}
inline void ZtDrawGiftInfo_ZtDrawPoint::set_pointheight(int64_t value) {
  _internal_set_pointheight(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.ZtDrawGiftInfo.ZtDrawPoint.pointHeight)
}

// -------------------------------------------------------------------

// ZtDrawGiftInfo

// int64 screenWidth = 1;
inline void ZtDrawGiftInfo::clear_screenwidth() {
  _impl_.screenwidth_ = int64_t{0};
}
inline int64_t ZtDrawGiftInfo::_internal_screenwidth() const {
  return _impl_.screenwidth_;
}
inline int64_t ZtDrawGiftInfo::screenwidth() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.ZtDrawGiftInfo.screenWidth)
  return _internal_screenwidth();
}
inline void ZtDrawGiftInfo::_internal_set_screenwidth(int64_t value) {
  
  _impl_.screenwidth_ = value;
}
inline void ZtDrawGiftInfo::set_screenwidth(int64_t value) {
  _internal_set_screenwidth(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.ZtDrawGiftInfo.screenWidth)
}

// int64 screenHeight = 2;
inline void ZtDrawGiftInfo::clear_screenheight() {
  _impl_.screenheight_ = int64_t{0};
}
inline int64_t ZtDrawGiftInfo::_internal_screenheight() const {
  return _impl_.screenheight_;
}
inline int64_t ZtDrawGiftInfo::screenheight() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.ZtDrawGiftInfo.screenHeight)
  return _internal_screenheight();
}
inline void ZtDrawGiftInfo::_internal_set_screenheight(int64_t value) {
  
  _impl_.screenheight_ = value;
}
inline void ZtDrawGiftInfo::set_screenheight(int64_t value) {
  _internal_set_screenheight(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.ZtDrawGiftInfo.screenHeight)
}

// repeated .AcFunDanmu.ZtDrawGiftInfo.ZtDrawPoint drawPoint = 3;
inline int ZtDrawGiftInfo::_internal_drawpoint_size() const {
  return _impl_.drawpoint_.size();
}
inline int ZtDrawGiftInfo::drawpoint_size() const {
  return _internal_drawpoint_size();
}
inline void ZtDrawGiftInfo::clear_drawpoint() {
  _impl_.drawpoint_.Clear();
}
inline ::AcFunDanmu::ZtDrawGiftInfo_ZtDrawPoint* ZtDrawGiftInfo::mutable_drawpoint(int index) {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.ZtDrawGiftInfo.drawPoint)
  return _impl_.drawpoint_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::ZtDrawGiftInfo_ZtDrawPoint >*
ZtDrawGiftInfo::mutable_drawpoint() {
  // @@protoc_insertion_point(field_mutable_list:AcFunDanmu.ZtDrawGiftInfo.drawPoint)
  return &_impl_.drawpoint_;
}
inline const ::AcFunDanmu::ZtDrawGiftInfo_ZtDrawPoint& ZtDrawGiftInfo::_internal_drawpoint(int index) const {
  return _impl_.drawpoint_.Get(index);
}
inline const ::AcFunDanmu::ZtDrawGiftInfo_ZtDrawPoint& ZtDrawGiftInfo::drawpoint(int index) const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.ZtDrawGiftInfo.drawPoint)
  return _internal_drawpoint(index);
}
inline ::AcFunDanmu::ZtDrawGiftInfo_ZtDrawPoint* ZtDrawGiftInfo::_internal_add_drawpoint() {
  return _impl_.drawpoint_.Add();
}
inline ::AcFunDanmu::ZtDrawGiftInfo_ZtDrawPoint* ZtDrawGiftInfo::add_drawpoint() {
  ::AcFunDanmu::ZtDrawGiftInfo_ZtDrawPoint* _add = _internal_add_drawpoint();
  // @@protoc_insertion_point(field_add:AcFunDanmu.ZtDrawGiftInfo.drawPoint)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::ZtDrawGiftInfo_ZtDrawPoint >&
ZtDrawGiftInfo::drawpoint() const {
  // @@protoc_insertion_point(field_list:AcFunDanmu.ZtDrawGiftInfo.drawPoint)
  return _impl_.drawpoint_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ZtDrawGiftInfo_2eproto
