// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Location.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Location_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Location_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_Location_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Location_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Location_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {
class Location;
struct LocationDefaultTypeInternal;
extern LocationDefaultTypeInternal _Location_default_instance_;
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Cloud::Message::Location* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Cloud::Message::Location>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {

// ===================================================================

class Location final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Cloud.Message.Location) */ {
 public:
  inline Location() : Location(nullptr) {}
  ~Location() override;
  explicit PROTOBUF_CONSTEXPR Location(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Location(const Location& from);
  Location(Location&& from) noexcept
    : Location() {
    *this = ::std::move(from);
  }

  inline Location& operator=(const Location& from) {
    CopyFrom(from);
    return *this;
  }
  inline Location& operator=(Location&& from) noexcept {
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
  static const Location& default_instance() {
    return *internal_default_instance();
  }
  static inline const Location* internal_default_instance() {
    return reinterpret_cast<const Location*>(
               &_Location_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Location& a, Location& b) {
    a.Swap(&b);
  }
  inline void Swap(Location* other) {
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
  void UnsafeArenaSwap(Location* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Location* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Location>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Location& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Location& from) {
    Location::MergeImpl(*this, from);
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
  void InternalSwap(Location* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Cloud.Message.Location";
  }
  protected:
  explicit Location(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLatitudeFieldNumber = 2,
    kLongitudeFieldNumber = 3,
    kPoiFieldNumber = 4,
    kPoiIdFieldNumber = 1,
  };
  // string latitude = 2;
  void clear_latitude();
  const std::string& latitude() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_latitude(ArgT0&& arg0, ArgT... args);
  std::string* mutable_latitude();
  PROTOBUF_NODISCARD std::string* release_latitude();
  void set_allocated_latitude(std::string* latitude);
  private:
  const std::string& _internal_latitude() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_latitude(const std::string& value);
  std::string* _internal_mutable_latitude();
  public:

  // string longitude = 3;
  void clear_longitude();
  const std::string& longitude() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_longitude(ArgT0&& arg0, ArgT... args);
  std::string* mutable_longitude();
  PROTOBUF_NODISCARD std::string* release_longitude();
  void set_allocated_longitude(std::string* longitude);
  private:
  const std::string& _internal_longitude() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_longitude(const std::string& value);
  std::string* _internal_mutable_longitude();
  public:

  // string poi = 4;
  void clear_poi();
  const std::string& poi() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_poi(ArgT0&& arg0, ArgT... args);
  std::string* mutable_poi();
  PROTOBUF_NODISCARD std::string* release_poi();
  void set_allocated_poi(std::string* poi);
  private:
  const std::string& _internal_poi() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_poi(const std::string& value);
  std::string* _internal_mutable_poi();
  public:

  // int64 poiId = 1;
  void clear_poiid();
  int64_t poiid() const;
  void set_poiid(int64_t value);
  private:
  int64_t _internal_poiid() const;
  void _internal_set_poiid(int64_t value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Cloud.Message.Location)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr latitude_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr longitude_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr poi_;
    int64_t poiid_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_Location_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Location

// int64 poiId = 1;
inline void Location::clear_poiid() {
  _impl_.poiid_ = int64_t{0};
}
inline int64_t Location::_internal_poiid() const {
  return _impl_.poiid_;
}
inline int64_t Location::poiid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.Location.poiId)
  return _internal_poiid();
}
inline void Location::_internal_set_poiid(int64_t value) {
  
  _impl_.poiid_ = value;
}
inline void Location::set_poiid(int64_t value) {
  _internal_set_poiid(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Message.Location.poiId)
}

// string latitude = 2;
inline void Location::clear_latitude() {
  _impl_.latitude_.ClearToEmpty();
}
inline const std::string& Location::latitude() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.Location.latitude)
  return _internal_latitude();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Location::set_latitude(ArgT0&& arg0, ArgT... args) {
 
 _impl_.latitude_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Message.Location.latitude)
}
inline std::string* Location::mutable_latitude() {
  std::string* _s = _internal_mutable_latitude();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Message.Location.latitude)
  return _s;
}
inline const std::string& Location::_internal_latitude() const {
  return _impl_.latitude_.Get();
}
inline void Location::_internal_set_latitude(const std::string& value) {
  
  _impl_.latitude_.Set(value, GetArenaForAllocation());
}
inline std::string* Location::_internal_mutable_latitude() {
  
  return _impl_.latitude_.Mutable(GetArenaForAllocation());
}
inline std::string* Location::release_latitude() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Message.Location.latitude)
  return _impl_.latitude_.Release();
}
inline void Location::set_allocated_latitude(std::string* latitude) {
  if (latitude != nullptr) {
    
  } else {
    
  }
  _impl_.latitude_.SetAllocated(latitude, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.latitude_.IsDefault()) {
    _impl_.latitude_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Message.Location.latitude)
}

// string longitude = 3;
inline void Location::clear_longitude() {
  _impl_.longitude_.ClearToEmpty();
}
inline const std::string& Location::longitude() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.Location.longitude)
  return _internal_longitude();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Location::set_longitude(ArgT0&& arg0, ArgT... args) {
 
 _impl_.longitude_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Message.Location.longitude)
}
inline std::string* Location::mutable_longitude() {
  std::string* _s = _internal_mutable_longitude();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Message.Location.longitude)
  return _s;
}
inline const std::string& Location::_internal_longitude() const {
  return _impl_.longitude_.Get();
}
inline void Location::_internal_set_longitude(const std::string& value) {
  
  _impl_.longitude_.Set(value, GetArenaForAllocation());
}
inline std::string* Location::_internal_mutable_longitude() {
  
  return _impl_.longitude_.Mutable(GetArenaForAllocation());
}
inline std::string* Location::release_longitude() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Message.Location.longitude)
  return _impl_.longitude_.Release();
}
inline void Location::set_allocated_longitude(std::string* longitude) {
  if (longitude != nullptr) {
    
  } else {
    
  }
  _impl_.longitude_.SetAllocated(longitude, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.longitude_.IsDefault()) {
    _impl_.longitude_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Message.Location.longitude)
}

// string poi = 4;
inline void Location::clear_poi() {
  _impl_.poi_.ClearToEmpty();
}
inline const std::string& Location::poi() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.Location.poi)
  return _internal_poi();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Location::set_poi(ArgT0&& arg0, ArgT... args) {
 
 _impl_.poi_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Message.Location.poi)
}
inline std::string* Location::mutable_poi() {
  std::string* _s = _internal_mutable_poi();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Message.Location.poi)
  return _s;
}
inline const std::string& Location::_internal_poi() const {
  return _impl_.poi_.Get();
}
inline void Location::_internal_set_poi(const std::string& value) {
  
  _impl_.poi_.Set(value, GetArenaForAllocation());
}
inline std::string* Location::_internal_mutable_poi() {
  
  return _impl_.poi_.Mutable(GetArenaForAllocation());
}
inline std::string* Location::release_poi() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Message.Location.poi)
  return _impl_.poi_.Release();
}
inline void Location::set_allocated_poi(std::string* poi) {
  if (poi != nullptr) {
    
  } else {
    
  }
  _impl_.poi_.SetAllocated(poi, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.poi_.IsDefault()) {
    _impl_.poi_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Message.Location.poi)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Location_2eproto
