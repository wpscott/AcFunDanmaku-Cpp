// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ZtLiveActionSignalItem.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ZtLiveActionSignalItem_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ZtLiveActionSignalItem_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_ZtLiveActionSignalItem_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ZtLiveActionSignalItem_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ZtLiveActionSignalItem_2eproto;
namespace AcFunDanmu {
class ZtLiveActionSignalItem;
struct ZtLiveActionSignalItemDefaultTypeInternal;
extern ZtLiveActionSignalItemDefaultTypeInternal _ZtLiveActionSignalItem_default_instance_;
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::ZtLiveActionSignalItem* Arena::CreateMaybeMessage<::AcFunDanmu::ZtLiveActionSignalItem>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {

// ===================================================================

class ZtLiveActionSignalItem final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.ZtLiveActionSignalItem) */ {
 public:
  inline ZtLiveActionSignalItem() : ZtLiveActionSignalItem(nullptr) {}
  ~ZtLiveActionSignalItem() override;
  explicit PROTOBUF_CONSTEXPR ZtLiveActionSignalItem(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ZtLiveActionSignalItem(const ZtLiveActionSignalItem& from);
  ZtLiveActionSignalItem(ZtLiveActionSignalItem&& from) noexcept
    : ZtLiveActionSignalItem() {
    *this = ::std::move(from);
  }

  inline ZtLiveActionSignalItem& operator=(const ZtLiveActionSignalItem& from) {
    CopyFrom(from);
    return *this;
  }
  inline ZtLiveActionSignalItem& operator=(ZtLiveActionSignalItem&& from) noexcept {
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
  static const ZtLiveActionSignalItem& default_instance() {
    return *internal_default_instance();
  }
  static inline const ZtLiveActionSignalItem* internal_default_instance() {
    return reinterpret_cast<const ZtLiveActionSignalItem*>(
               &_ZtLiveActionSignalItem_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ZtLiveActionSignalItem& a, ZtLiveActionSignalItem& b) {
    a.Swap(&b);
  }
  inline void Swap(ZtLiveActionSignalItem* other) {
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
  void UnsafeArenaSwap(ZtLiveActionSignalItem* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ZtLiveActionSignalItem* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ZtLiveActionSignalItem>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ZtLiveActionSignalItem& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const ZtLiveActionSignalItem& from) {
    ZtLiveActionSignalItem::MergeImpl(*this, from);
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
  void InternalSwap(ZtLiveActionSignalItem* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.ZtLiveActionSignalItem";
  }
  protected:
  explicit ZtLiveActionSignalItem(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPayloadFieldNumber = 2,
    kSignalTypeFieldNumber = 1,
  };
  // repeated bytes payload = 2;
  int payload_size() const;
  private:
  int _internal_payload_size() const;
  public:
  void clear_payload();
  const std::string& payload(int index) const;
  std::string* mutable_payload(int index);
  void set_payload(int index, const std::string& value);
  void set_payload(int index, std::string&& value);
  void set_payload(int index, const char* value);
  void set_payload(int index, const void* value, size_t size);
  std::string* add_payload();
  void add_payload(const std::string& value);
  void add_payload(std::string&& value);
  void add_payload(const char* value);
  void add_payload(const void* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& payload() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_payload();
  private:
  const std::string& _internal_payload(int index) const;
  std::string* _internal_add_payload();
  public:

  // string signalType = 1;
  void clear_signaltype();
  const std::string& signaltype() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_signaltype(ArgT0&& arg0, ArgT... args);
  std::string* mutable_signaltype();
  PROTOBUF_NODISCARD std::string* release_signaltype();
  void set_allocated_signaltype(std::string* signaltype);
  private:
  const std::string& _internal_signaltype() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_signaltype(const std::string& value);
  std::string* _internal_mutable_signaltype();
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.ZtLiveActionSignalItem)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> payload_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr signaltype_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_ZtLiveActionSignalItem_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ZtLiveActionSignalItem

// string signalType = 1;
inline void ZtLiveActionSignalItem::clear_signaltype() {
  _impl_.signaltype_.ClearToEmpty();
}
inline const std::string& ZtLiveActionSignalItem::signaltype() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.ZtLiveActionSignalItem.signalType)
  return _internal_signaltype();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ZtLiveActionSignalItem::set_signaltype(ArgT0&& arg0, ArgT... args) {
 
 _impl_.signaltype_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.ZtLiveActionSignalItem.signalType)
}
inline std::string* ZtLiveActionSignalItem::mutable_signaltype() {
  std::string* _s = _internal_mutable_signaltype();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.ZtLiveActionSignalItem.signalType)
  return _s;
}
inline const std::string& ZtLiveActionSignalItem::_internal_signaltype() const {
  return _impl_.signaltype_.Get();
}
inline void ZtLiveActionSignalItem::_internal_set_signaltype(const std::string& value) {
  
  _impl_.signaltype_.Set(value, GetArenaForAllocation());
}
inline std::string* ZtLiveActionSignalItem::_internal_mutable_signaltype() {
  
  return _impl_.signaltype_.Mutable(GetArenaForAllocation());
}
inline std::string* ZtLiveActionSignalItem::release_signaltype() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.ZtLiveActionSignalItem.signalType)
  return _impl_.signaltype_.Release();
}
inline void ZtLiveActionSignalItem::set_allocated_signaltype(std::string* signaltype) {
  if (signaltype != nullptr) {
    
  } else {
    
  }
  _impl_.signaltype_.SetAllocated(signaltype, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.signaltype_.IsDefault()) {
    _impl_.signaltype_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.ZtLiveActionSignalItem.signalType)
}

// repeated bytes payload = 2;
inline int ZtLiveActionSignalItem::_internal_payload_size() const {
  return _impl_.payload_.size();
}
inline int ZtLiveActionSignalItem::payload_size() const {
  return _internal_payload_size();
}
inline void ZtLiveActionSignalItem::clear_payload() {
  _impl_.payload_.Clear();
}
inline std::string* ZtLiveActionSignalItem::add_payload() {
  std::string* _s = _internal_add_payload();
  // @@protoc_insertion_point(field_add_mutable:AcFunDanmu.ZtLiveActionSignalItem.payload)
  return _s;
}
inline const std::string& ZtLiveActionSignalItem::_internal_payload(int index) const {
  return _impl_.payload_.Get(index);
}
inline const std::string& ZtLiveActionSignalItem::payload(int index) const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.ZtLiveActionSignalItem.payload)
  return _internal_payload(index);
}
inline std::string* ZtLiveActionSignalItem::mutable_payload(int index) {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.ZtLiveActionSignalItem.payload)
  return _impl_.payload_.Mutable(index);
}
inline void ZtLiveActionSignalItem::set_payload(int index, const std::string& value) {
  _impl_.payload_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.ZtLiveActionSignalItem.payload)
}
inline void ZtLiveActionSignalItem::set_payload(int index, std::string&& value) {
  _impl_.payload_.Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:AcFunDanmu.ZtLiveActionSignalItem.payload)
}
inline void ZtLiveActionSignalItem::set_payload(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _impl_.payload_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:AcFunDanmu.ZtLiveActionSignalItem.payload)
}
inline void ZtLiveActionSignalItem::set_payload(int index, const void* value, size_t size) {
  _impl_.payload_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:AcFunDanmu.ZtLiveActionSignalItem.payload)
}
inline std::string* ZtLiveActionSignalItem::_internal_add_payload() {
  return _impl_.payload_.Add();
}
inline void ZtLiveActionSignalItem::add_payload(const std::string& value) {
  _impl_.payload_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:AcFunDanmu.ZtLiveActionSignalItem.payload)
}
inline void ZtLiveActionSignalItem::add_payload(std::string&& value) {
  _impl_.payload_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:AcFunDanmu.ZtLiveActionSignalItem.payload)
}
inline void ZtLiveActionSignalItem::add_payload(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _impl_.payload_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:AcFunDanmu.ZtLiveActionSignalItem.payload)
}
inline void ZtLiveActionSignalItem::add_payload(const void* value, size_t size) {
  _impl_.payload_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:AcFunDanmu.ZtLiveActionSignalItem.payload)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
ZtLiveActionSignalItem::payload() const {
  // @@protoc_insertion_point(field_list:AcFunDanmu.ZtLiveActionSignalItem.payload)
  return _impl_.payload_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
ZtLiveActionSignalItem::mutable_payload() {
  // @@protoc_insertion_point(field_mutable_list:AcFunDanmu.ZtLiveActionSignalItem.payload)
  return &_impl_.payload_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ZtLiveActionSignalItem_2eproto
