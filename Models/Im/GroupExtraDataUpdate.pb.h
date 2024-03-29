// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GroupExtraDataUpdate.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_GroupExtraDataUpdate_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_GroupExtraDataUpdate_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_GroupExtraDataUpdate_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_GroupExtraDataUpdate_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_GroupExtraDataUpdate_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {
class GroupExtraDataUpdate;
struct GroupExtraDataUpdateDefaultTypeInternal;
extern GroupExtraDataUpdateDefaultTypeInternal _GroupExtraDataUpdate_default_instance_;
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Cloud::Message::GroupExtraDataUpdate* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Cloud::Message::GroupExtraDataUpdate>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {

// ===================================================================

class GroupExtraDataUpdate final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Cloud.Message.GroupExtraDataUpdate) */ {
 public:
  inline GroupExtraDataUpdate() : GroupExtraDataUpdate(nullptr) {}
  ~GroupExtraDataUpdate() override;
  explicit PROTOBUF_CONSTEXPR GroupExtraDataUpdate(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  GroupExtraDataUpdate(const GroupExtraDataUpdate& from);
  GroupExtraDataUpdate(GroupExtraDataUpdate&& from) noexcept
    : GroupExtraDataUpdate() {
    *this = ::std::move(from);
  }

  inline GroupExtraDataUpdate& operator=(const GroupExtraDataUpdate& from) {
    CopyFrom(from);
    return *this;
  }
  inline GroupExtraDataUpdate& operator=(GroupExtraDataUpdate&& from) noexcept {
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
  static const GroupExtraDataUpdate& default_instance() {
    return *internal_default_instance();
  }
  static inline const GroupExtraDataUpdate* internal_default_instance() {
    return reinterpret_cast<const GroupExtraDataUpdate*>(
               &_GroupExtraDataUpdate_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(GroupExtraDataUpdate& a, GroupExtraDataUpdate& b) {
    a.Swap(&b);
  }
  inline void Swap(GroupExtraDataUpdate* other) {
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
  void UnsafeArenaSwap(GroupExtraDataUpdate* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  GroupExtraDataUpdate* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<GroupExtraDataUpdate>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const GroupExtraDataUpdate& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const GroupExtraDataUpdate& from) {
    GroupExtraDataUpdate::MergeImpl(*this, from);
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
  void InternalSwap(GroupExtraDataUpdate* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Cloud.Message.GroupExtraDataUpdate";
  }
  protected:
  explicit GroupExtraDataUpdate(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kExtraFieldNumber = 1,
  };
  // string extra = 1;
  void clear_extra();
  const std::string& extra() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_extra(ArgT0&& arg0, ArgT... args);
  std::string* mutable_extra();
  PROTOBUF_NODISCARD std::string* release_extra();
  void set_allocated_extra(std::string* extra);
  private:
  const std::string& _internal_extra() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_extra(const std::string& value);
  std::string* _internal_mutable_extra();
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Cloud.Message.GroupExtraDataUpdate)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr extra_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_GroupExtraDataUpdate_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GroupExtraDataUpdate

// string extra = 1;
inline void GroupExtraDataUpdate::clear_extra() {
  _impl_.extra_.ClearToEmpty();
}
inline const std::string& GroupExtraDataUpdate::extra() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.GroupExtraDataUpdate.extra)
  return _internal_extra();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void GroupExtraDataUpdate::set_extra(ArgT0&& arg0, ArgT... args) {
 
 _impl_.extra_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Message.GroupExtraDataUpdate.extra)
}
inline std::string* GroupExtraDataUpdate::mutable_extra() {
  std::string* _s = _internal_mutable_extra();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Message.GroupExtraDataUpdate.extra)
  return _s;
}
inline const std::string& GroupExtraDataUpdate::_internal_extra() const {
  return _impl_.extra_.Get();
}
inline void GroupExtraDataUpdate::_internal_set_extra(const std::string& value) {
  
  _impl_.extra_.Set(value, GetArenaForAllocation());
}
inline std::string* GroupExtraDataUpdate::_internal_mutable_extra() {
  
  return _impl_.extra_.Mutable(GetArenaForAllocation());
}
inline std::string* GroupExtraDataUpdate::release_extra() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Message.GroupExtraDataUpdate.extra)
  return _impl_.extra_.Release();
}
inline void GroupExtraDataUpdate::set_allocated_extra(std::string* extra) {
  if (extra != nullptr) {
    
  } else {
    
  }
  _impl_.extra_.SetAllocated(extra, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.extra_.IsDefault()) {
    _impl_.extra_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Message.GroupExtraDataUpdate.extra)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_GroupExtraDataUpdate_2eproto
