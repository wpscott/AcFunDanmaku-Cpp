// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ZtLiveScNotifySignal.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ZtLiveScNotifySignal_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ZtLiveScNotifySignal_2eproto

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
#include "ZtLiveNotifySignalItem.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ZtLiveScNotifySignal_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ZtLiveScNotifySignal_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ZtLiveScNotifySignal_2eproto;
namespace AcFunDanmu {
class ZtLiveScNotifySignal;
struct ZtLiveScNotifySignalDefaultTypeInternal;
extern ZtLiveScNotifySignalDefaultTypeInternal _ZtLiveScNotifySignal_default_instance_;
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::ZtLiveScNotifySignal* Arena::CreateMaybeMessage<::AcFunDanmu::ZtLiveScNotifySignal>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {

// ===================================================================

class ZtLiveScNotifySignal final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.ZtLiveScNotifySignal) */ {
 public:
  inline ZtLiveScNotifySignal() : ZtLiveScNotifySignal(nullptr) {}
  ~ZtLiveScNotifySignal() override;
  explicit PROTOBUF_CONSTEXPR ZtLiveScNotifySignal(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ZtLiveScNotifySignal(const ZtLiveScNotifySignal& from);
  ZtLiveScNotifySignal(ZtLiveScNotifySignal&& from) noexcept
    : ZtLiveScNotifySignal() {
    *this = ::std::move(from);
  }

  inline ZtLiveScNotifySignal& operator=(const ZtLiveScNotifySignal& from) {
    CopyFrom(from);
    return *this;
  }
  inline ZtLiveScNotifySignal& operator=(ZtLiveScNotifySignal&& from) noexcept {
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
  static const ZtLiveScNotifySignal& default_instance() {
    return *internal_default_instance();
  }
  static inline const ZtLiveScNotifySignal* internal_default_instance() {
    return reinterpret_cast<const ZtLiveScNotifySignal*>(
               &_ZtLiveScNotifySignal_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ZtLiveScNotifySignal& a, ZtLiveScNotifySignal& b) {
    a.Swap(&b);
  }
  inline void Swap(ZtLiveScNotifySignal* other) {
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
  void UnsafeArenaSwap(ZtLiveScNotifySignal* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ZtLiveScNotifySignal* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ZtLiveScNotifySignal>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ZtLiveScNotifySignal& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const ZtLiveScNotifySignal& from) {
    ZtLiveScNotifySignal::MergeImpl(*this, from);
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
  void InternalSwap(ZtLiveScNotifySignal* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.ZtLiveScNotifySignal";
  }
  protected:
  explicit ZtLiveScNotifySignal(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kItemFieldNumber = 1,
  };
  // repeated .AcFunDanmu.ZtLiveNotifySignalItem item = 1;
  int item_size() const;
  private:
  int _internal_item_size() const;
  public:
  void clear_item();
  ::AcFunDanmu::ZtLiveNotifySignalItem* mutable_item(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::ZtLiveNotifySignalItem >*
      mutable_item();
  private:
  const ::AcFunDanmu::ZtLiveNotifySignalItem& _internal_item(int index) const;
  ::AcFunDanmu::ZtLiveNotifySignalItem* _internal_add_item();
  public:
  const ::AcFunDanmu::ZtLiveNotifySignalItem& item(int index) const;
  ::AcFunDanmu::ZtLiveNotifySignalItem* add_item();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::ZtLiveNotifySignalItem >&
      item() const;

  // @@protoc_insertion_point(class_scope:AcFunDanmu.ZtLiveScNotifySignal)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::ZtLiveNotifySignalItem > item_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_ZtLiveScNotifySignal_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ZtLiveScNotifySignal

// repeated .AcFunDanmu.ZtLiveNotifySignalItem item = 1;
inline int ZtLiveScNotifySignal::_internal_item_size() const {
  return _impl_.item_.size();
}
inline int ZtLiveScNotifySignal::item_size() const {
  return _internal_item_size();
}
inline ::AcFunDanmu::ZtLiveNotifySignalItem* ZtLiveScNotifySignal::mutable_item(int index) {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.ZtLiveScNotifySignal.item)
  return _impl_.item_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::ZtLiveNotifySignalItem >*
ZtLiveScNotifySignal::mutable_item() {
  // @@protoc_insertion_point(field_mutable_list:AcFunDanmu.ZtLiveScNotifySignal.item)
  return &_impl_.item_;
}
inline const ::AcFunDanmu::ZtLiveNotifySignalItem& ZtLiveScNotifySignal::_internal_item(int index) const {
  return _impl_.item_.Get(index);
}
inline const ::AcFunDanmu::ZtLiveNotifySignalItem& ZtLiveScNotifySignal::item(int index) const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.ZtLiveScNotifySignal.item)
  return _internal_item(index);
}
inline ::AcFunDanmu::ZtLiveNotifySignalItem* ZtLiveScNotifySignal::_internal_add_item() {
  return _impl_.item_.Add();
}
inline ::AcFunDanmu::ZtLiveNotifySignalItem* ZtLiveScNotifySignal::add_item() {
  ::AcFunDanmu::ZtLiveNotifySignalItem* _add = _internal_add_item();
  // @@protoc_insertion_point(field_add:AcFunDanmu.ZtLiveScNotifySignal.item)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::ZtLiveNotifySignalItem >&
ZtLiveScNotifySignal::item() const {
  // @@protoc_insertion_point(field_list:AcFunDanmu.ZtLiveScNotifySignal.item)
  return _impl_.item_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ZtLiveScNotifySignal_2eproto
