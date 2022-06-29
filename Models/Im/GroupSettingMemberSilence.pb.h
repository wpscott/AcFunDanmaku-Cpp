// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GroupSettingMemberSilence.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_GroupSettingMemberSilence_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_GroupSettingMemberSilence_2eproto

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
#include "GroupMemberSilenceInfo.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_GroupSettingMemberSilence_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_GroupSettingMemberSilence_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_GroupSettingMemberSilence_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {
class GroupSettingMemberSilence;
struct GroupSettingMemberSilenceDefaultTypeInternal;
extern GroupSettingMemberSilenceDefaultTypeInternal _GroupSettingMemberSilence_default_instance_;
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Cloud::Message::GroupSettingMemberSilence* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Cloud::Message::GroupSettingMemberSilence>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {

// ===================================================================

class GroupSettingMemberSilence final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Cloud.Message.GroupSettingMemberSilence) */ {
 public:
  inline GroupSettingMemberSilence() : GroupSettingMemberSilence(nullptr) {}
  ~GroupSettingMemberSilence() override;
  explicit PROTOBUF_CONSTEXPR GroupSettingMemberSilence(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  GroupSettingMemberSilence(const GroupSettingMemberSilence& from);
  GroupSettingMemberSilence(GroupSettingMemberSilence&& from) noexcept
    : GroupSettingMemberSilence() {
    *this = ::std::move(from);
  }

  inline GroupSettingMemberSilence& operator=(const GroupSettingMemberSilence& from) {
    CopyFrom(from);
    return *this;
  }
  inline GroupSettingMemberSilence& operator=(GroupSettingMemberSilence&& from) noexcept {
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
  static const GroupSettingMemberSilence& default_instance() {
    return *internal_default_instance();
  }
  static inline const GroupSettingMemberSilence* internal_default_instance() {
    return reinterpret_cast<const GroupSettingMemberSilence*>(
               &_GroupSettingMemberSilence_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(GroupSettingMemberSilence& a, GroupSettingMemberSilence& b) {
    a.Swap(&b);
  }
  inline void Swap(GroupSettingMemberSilence* other) {
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
  void UnsafeArenaSwap(GroupSettingMemberSilence* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  GroupSettingMemberSilence* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<GroupSettingMemberSilence>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const GroupSettingMemberSilence& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const GroupSettingMemberSilence& from) {
    GroupSettingMemberSilence::MergeImpl(*this, from);
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
  void InternalSwap(GroupSettingMemberSilence* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Cloud.Message.GroupSettingMemberSilence";
  }
  protected:
  explicit GroupSettingMemberSilence(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMemberSilenceInfoFieldNumber = 2,
    kMuteAllFieldNumber = 1,
  };
  // repeated .AcFunDanmu.Im.Cloud.Message.GroupMemberSilenceInfo memberSilenceInfo = 2;
  int membersilenceinfo_size() const;
  private:
  int _internal_membersilenceinfo_size() const;
  public:
  void clear_membersilenceinfo();
  ::AcFunDanmu::Im::Cloud::Message::GroupMemberSilenceInfo* mutable_membersilenceinfo(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::Message::GroupMemberSilenceInfo >*
      mutable_membersilenceinfo();
  private:
  const ::AcFunDanmu::Im::Cloud::Message::GroupMemberSilenceInfo& _internal_membersilenceinfo(int index) const;
  ::AcFunDanmu::Im::Cloud::Message::GroupMemberSilenceInfo* _internal_add_membersilenceinfo();
  public:
  const ::AcFunDanmu::Im::Cloud::Message::GroupMemberSilenceInfo& membersilenceinfo(int index) const;
  ::AcFunDanmu::Im::Cloud::Message::GroupMemberSilenceInfo* add_membersilenceinfo();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::Message::GroupMemberSilenceInfo >&
      membersilenceinfo() const;

  // bool muteAll = 1;
  void clear_muteall();
  bool muteall() const;
  void set_muteall(bool value);
  private:
  bool _internal_muteall() const;
  void _internal_set_muteall(bool value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Cloud.Message.GroupSettingMemberSilence)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::Message::GroupMemberSilenceInfo > membersilenceinfo_;
    bool muteall_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_GroupSettingMemberSilence_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GroupSettingMemberSilence

// bool muteAll = 1;
inline void GroupSettingMemberSilence::clear_muteall() {
  _impl_.muteall_ = false;
}
inline bool GroupSettingMemberSilence::_internal_muteall() const {
  return _impl_.muteall_;
}
inline bool GroupSettingMemberSilence::muteall() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.GroupSettingMemberSilence.muteAll)
  return _internal_muteall();
}
inline void GroupSettingMemberSilence::_internal_set_muteall(bool value) {
  
  _impl_.muteall_ = value;
}
inline void GroupSettingMemberSilence::set_muteall(bool value) {
  _internal_set_muteall(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Message.GroupSettingMemberSilence.muteAll)
}

// repeated .AcFunDanmu.Im.Cloud.Message.GroupMemberSilenceInfo memberSilenceInfo = 2;
inline int GroupSettingMemberSilence::_internal_membersilenceinfo_size() const {
  return _impl_.membersilenceinfo_.size();
}
inline int GroupSettingMemberSilence::membersilenceinfo_size() const {
  return _internal_membersilenceinfo_size();
}
inline ::AcFunDanmu::Im::Cloud::Message::GroupMemberSilenceInfo* GroupSettingMemberSilence::mutable_membersilenceinfo(int index) {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Message.GroupSettingMemberSilence.memberSilenceInfo)
  return _impl_.membersilenceinfo_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::Message::GroupMemberSilenceInfo >*
GroupSettingMemberSilence::mutable_membersilenceinfo() {
  // @@protoc_insertion_point(field_mutable_list:AcFunDanmu.Im.Cloud.Message.GroupSettingMemberSilence.memberSilenceInfo)
  return &_impl_.membersilenceinfo_;
}
inline const ::AcFunDanmu::Im::Cloud::Message::GroupMemberSilenceInfo& GroupSettingMemberSilence::_internal_membersilenceinfo(int index) const {
  return _impl_.membersilenceinfo_.Get(index);
}
inline const ::AcFunDanmu::Im::Cloud::Message::GroupMemberSilenceInfo& GroupSettingMemberSilence::membersilenceinfo(int index) const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.GroupSettingMemberSilence.memberSilenceInfo)
  return _internal_membersilenceinfo(index);
}
inline ::AcFunDanmu::Im::Cloud::Message::GroupMemberSilenceInfo* GroupSettingMemberSilence::_internal_add_membersilenceinfo() {
  return _impl_.membersilenceinfo_.Add();
}
inline ::AcFunDanmu::Im::Cloud::Message::GroupMemberSilenceInfo* GroupSettingMemberSilence::add_membersilenceinfo() {
  ::AcFunDanmu::Im::Cloud::Message::GroupMemberSilenceInfo* _add = _internal_add_membersilenceinfo();
  // @@protoc_insertion_point(field_add:AcFunDanmu.Im.Cloud.Message.GroupSettingMemberSilence.memberSilenceInfo)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::Message::GroupMemberSilenceInfo >&
GroupSettingMemberSilence::membersilenceinfo() const {
  // @@protoc_insertion_point(field_list:AcFunDanmu.Im.Cloud.Message.GroupSettingMemberSilence.memberSilenceInfo)
  return _impl_.membersilenceinfo_;
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_GroupSettingMemberSilence_2eproto
