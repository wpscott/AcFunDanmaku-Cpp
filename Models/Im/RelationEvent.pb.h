// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: RelationEvent.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_RelationEvent_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_RelationEvent_2eproto

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_RelationEvent_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_RelationEvent_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_RelationEvent_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Data {
namespace Update {
class RelationEvent;
struct RelationEventDefaultTypeInternal;
extern RelationEventDefaultTypeInternal _RelationEvent_default_instance_;
}  // namespace Update
}  // namespace Data
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Cloud::Data::Update::RelationEvent* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Cloud::Data::Update::RelationEvent>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Data {
namespace Update {

enum RelationEvent_RelationEventType : int {
  RelationEvent_RelationEventType_UNKNOWN = 0,
  RelationEvent_RelationEventType_FOLLOWED = 1,
  RelationEvent_RelationEventType_UNFOLLOWED = 2,
  RelationEvent_RelationEventType_RelationEvent_RelationEventType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  RelationEvent_RelationEventType_RelationEvent_RelationEventType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool RelationEvent_RelationEventType_IsValid(int value);
constexpr RelationEvent_RelationEventType RelationEvent_RelationEventType_RelationEventType_MIN = RelationEvent_RelationEventType_UNKNOWN;
constexpr RelationEvent_RelationEventType RelationEvent_RelationEventType_RelationEventType_MAX = RelationEvent_RelationEventType_UNFOLLOWED;
constexpr int RelationEvent_RelationEventType_RelationEventType_ARRAYSIZE = RelationEvent_RelationEventType_RelationEventType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* RelationEvent_RelationEventType_descriptor();
template<typename T>
inline const std::string& RelationEvent_RelationEventType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, RelationEvent_RelationEventType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function RelationEvent_RelationEventType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    RelationEvent_RelationEventType_descriptor(), enum_t_value);
}
inline bool RelationEvent_RelationEventType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, RelationEvent_RelationEventType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<RelationEvent_RelationEventType>(
    RelationEvent_RelationEventType_descriptor(), name, value);
}
// ===================================================================

class RelationEvent final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Cloud.Data.Update.RelationEvent) */ {
 public:
  inline RelationEvent() : RelationEvent(nullptr) {}
  ~RelationEvent() override;
  explicit PROTOBUF_CONSTEXPR RelationEvent(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  RelationEvent(const RelationEvent& from);
  RelationEvent(RelationEvent&& from) noexcept
    : RelationEvent() {
    *this = ::std::move(from);
  }

  inline RelationEvent& operator=(const RelationEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline RelationEvent& operator=(RelationEvent&& from) noexcept {
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
  static const RelationEvent& default_instance() {
    return *internal_default_instance();
  }
  static inline const RelationEvent* internal_default_instance() {
    return reinterpret_cast<const RelationEvent*>(
               &_RelationEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(RelationEvent& a, RelationEvent& b) {
    a.Swap(&b);
  }
  inline void Swap(RelationEvent* other) {
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
  void UnsafeArenaSwap(RelationEvent* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  RelationEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<RelationEvent>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const RelationEvent& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const RelationEvent& from) {
    RelationEvent::MergeImpl(*this, from);
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
  void InternalSwap(RelationEvent* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Cloud.Data.Update.RelationEvent";
  }
  protected:
  explicit RelationEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef RelationEvent_RelationEventType RelationEventType;
  static constexpr RelationEventType UNKNOWN =
    RelationEvent_RelationEventType_UNKNOWN;
  static constexpr RelationEventType FOLLOWED =
    RelationEvent_RelationEventType_FOLLOWED;
  static constexpr RelationEventType UNFOLLOWED =
    RelationEvent_RelationEventType_UNFOLLOWED;
  static inline bool RelationEventType_IsValid(int value) {
    return RelationEvent_RelationEventType_IsValid(value);
  }
  static constexpr RelationEventType RelationEventType_MIN =
    RelationEvent_RelationEventType_RelationEventType_MIN;
  static constexpr RelationEventType RelationEventType_MAX =
    RelationEvent_RelationEventType_RelationEventType_MAX;
  static constexpr int RelationEventType_ARRAYSIZE =
    RelationEvent_RelationEventType_RelationEventType_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  RelationEventType_descriptor() {
    return RelationEvent_RelationEventType_descriptor();
  }
  template<typename T>
  static inline const std::string& RelationEventType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, RelationEventType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function RelationEventType_Name.");
    return RelationEvent_RelationEventType_Name(enum_t_value);
  }
  static inline bool RelationEventType_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      RelationEventType* value) {
    return RelationEvent_RelationEventType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kFromIdFieldNumber = 2,
    kTargetIdFieldNumber = 3,
    kRelationEventTypeFieldNumber = 1,
  };
  // int64 fromId = 2;
  void clear_fromid();
  int64_t fromid() const;
  void set_fromid(int64_t value);
  private:
  int64_t _internal_fromid() const;
  void _internal_set_fromid(int64_t value);
  public:

  // int64 targetId = 3;
  void clear_targetid();
  int64_t targetid() const;
  void set_targetid(int64_t value);
  private:
  int64_t _internal_targetid() const;
  void _internal_set_targetid(int64_t value);
  public:

  // .AcFunDanmu.Im.Cloud.Data.Update.RelationEvent.RelationEventType relationEventType = 1;
  void clear_relationeventtype();
  ::AcFunDanmu::Im::Cloud::Data::Update::RelationEvent_RelationEventType relationeventtype() const;
  void set_relationeventtype(::AcFunDanmu::Im::Cloud::Data::Update::RelationEvent_RelationEventType value);
  private:
  ::AcFunDanmu::Im::Cloud::Data::Update::RelationEvent_RelationEventType _internal_relationeventtype() const;
  void _internal_set_relationeventtype(::AcFunDanmu::Im::Cloud::Data::Update::RelationEvent_RelationEventType value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Cloud.Data.Update.RelationEvent)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    int64_t fromid_;
    int64_t targetid_;
    int relationeventtype_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_RelationEvent_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RelationEvent

// .AcFunDanmu.Im.Cloud.Data.Update.RelationEvent.RelationEventType relationEventType = 1;
inline void RelationEvent::clear_relationeventtype() {
  _impl_.relationeventtype_ = 0;
}
inline ::AcFunDanmu::Im::Cloud::Data::Update::RelationEvent_RelationEventType RelationEvent::_internal_relationeventtype() const {
  return static_cast< ::AcFunDanmu::Im::Cloud::Data::Update::RelationEvent_RelationEventType >(_impl_.relationeventtype_);
}
inline ::AcFunDanmu::Im::Cloud::Data::Update::RelationEvent_RelationEventType RelationEvent::relationeventtype() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Data.Update.RelationEvent.relationEventType)
  return _internal_relationeventtype();
}
inline void RelationEvent::_internal_set_relationeventtype(::AcFunDanmu::Im::Cloud::Data::Update::RelationEvent_RelationEventType value) {
  
  _impl_.relationeventtype_ = value;
}
inline void RelationEvent::set_relationeventtype(::AcFunDanmu::Im::Cloud::Data::Update::RelationEvent_RelationEventType value) {
  _internal_set_relationeventtype(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Data.Update.RelationEvent.relationEventType)
}

// int64 fromId = 2;
inline void RelationEvent::clear_fromid() {
  _impl_.fromid_ = int64_t{0};
}
inline int64_t RelationEvent::_internal_fromid() const {
  return _impl_.fromid_;
}
inline int64_t RelationEvent::fromid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Data.Update.RelationEvent.fromId)
  return _internal_fromid();
}
inline void RelationEvent::_internal_set_fromid(int64_t value) {
  
  _impl_.fromid_ = value;
}
inline void RelationEvent::set_fromid(int64_t value) {
  _internal_set_fromid(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Data.Update.RelationEvent.fromId)
}

// int64 targetId = 3;
inline void RelationEvent::clear_targetid() {
  _impl_.targetid_ = int64_t{0};
}
inline int64_t RelationEvent::_internal_targetid() const {
  return _impl_.targetid_;
}
inline int64_t RelationEvent::targetid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Data.Update.RelationEvent.targetId)
  return _internal_targetid();
}
inline void RelationEvent::_internal_set_targetid(int64_t value) {
  
  _impl_.targetid_ = value;
}
inline void RelationEvent::set_targetid(int64_t value) {
  _internal_set_targetid(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Data.Update.RelationEvent.targetId)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Update
}  // namespace Data
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::AcFunDanmu::Im::Cloud::Data::Update::RelationEvent_RelationEventType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::AcFunDanmu::Im::Cloud::Data::Update::RelationEvent_RelationEventType>() {
  return ::AcFunDanmu::Im::Cloud::Data::Update::RelationEvent_RelationEventType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_RelationEvent_2eproto