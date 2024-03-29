// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Reminder.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Reminder_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Reminder_2eproto

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
#include "RemindBody.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Reminder_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Reminder_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Reminder_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Message {
class Reminder;
struct ReminderDefaultTypeInternal;
extern ReminderDefaultTypeInternal _Reminder_default_instance_;
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Message::Reminder* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Message::Reminder>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Message {

// ===================================================================

class Reminder final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Message.Reminder) */ {
 public:
  inline Reminder() : Reminder(nullptr) {}
  ~Reminder() override;
  explicit PROTOBUF_CONSTEXPR Reminder(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Reminder(const Reminder& from);
  Reminder(Reminder&& from) noexcept
    : Reminder() {
    *this = ::std::move(from);
  }

  inline Reminder& operator=(const Reminder& from) {
    CopyFrom(from);
    return *this;
  }
  inline Reminder& operator=(Reminder&& from) noexcept {
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
  static const Reminder& default_instance() {
    return *internal_default_instance();
  }
  static inline const Reminder* internal_default_instance() {
    return reinterpret_cast<const Reminder*>(
               &_Reminder_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Reminder& a, Reminder& b) {
    a.Swap(&b);
  }
  inline void Swap(Reminder* other) {
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
  void UnsafeArenaSwap(Reminder* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Reminder* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Reminder>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Reminder& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Reminder& from) {
    Reminder::MergeImpl(*this, from);
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
  void InternalSwap(Reminder* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Message.Reminder";
  }
  protected:
  explicit Reminder(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRemindBodyFieldNumber = 2,
    kOriginTextFieldNumber = 1,
  };
  // repeated .AcFunDanmu.Im.Message.RemindBody remindBody = 2;
  int remindbody_size() const;
  private:
  int _internal_remindbody_size() const;
  public:
  void clear_remindbody();
  ::AcFunDanmu::Im::Message::RemindBody* mutable_remindbody(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Message::RemindBody >*
      mutable_remindbody();
  private:
  const ::AcFunDanmu::Im::Message::RemindBody& _internal_remindbody(int index) const;
  ::AcFunDanmu::Im::Message::RemindBody* _internal_add_remindbody();
  public:
  const ::AcFunDanmu::Im::Message::RemindBody& remindbody(int index) const;
  ::AcFunDanmu::Im::Message::RemindBody* add_remindbody();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Message::RemindBody >&
      remindbody() const;

  // string originText = 1;
  void clear_origintext();
  const std::string& origintext() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_origintext(ArgT0&& arg0, ArgT... args);
  std::string* mutable_origintext();
  PROTOBUF_NODISCARD std::string* release_origintext();
  void set_allocated_origintext(std::string* origintext);
  private:
  const std::string& _internal_origintext() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_origintext(const std::string& value);
  std::string* _internal_mutable_origintext();
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Message.Reminder)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Message::RemindBody > remindbody_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr origintext_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_Reminder_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Reminder

// string originText = 1;
inline void Reminder::clear_origintext() {
  _impl_.origintext_.ClearToEmpty();
}
inline const std::string& Reminder::origintext() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.Reminder.originText)
  return _internal_origintext();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Reminder::set_origintext(ArgT0&& arg0, ArgT... args) {
 
 _impl_.origintext_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.Reminder.originText)
}
inline std::string* Reminder::mutable_origintext() {
  std::string* _s = _internal_mutable_origintext();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Message.Reminder.originText)
  return _s;
}
inline const std::string& Reminder::_internal_origintext() const {
  return _impl_.origintext_.Get();
}
inline void Reminder::_internal_set_origintext(const std::string& value) {
  
  _impl_.origintext_.Set(value, GetArenaForAllocation());
}
inline std::string* Reminder::_internal_mutable_origintext() {
  
  return _impl_.origintext_.Mutable(GetArenaForAllocation());
}
inline std::string* Reminder::release_origintext() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Message.Reminder.originText)
  return _impl_.origintext_.Release();
}
inline void Reminder::set_allocated_origintext(std::string* origintext) {
  if (origintext != nullptr) {
    
  } else {
    
  }
  _impl_.origintext_.SetAllocated(origintext, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.origintext_.IsDefault()) {
    _impl_.origintext_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Message.Reminder.originText)
}

// repeated .AcFunDanmu.Im.Message.RemindBody remindBody = 2;
inline int Reminder::_internal_remindbody_size() const {
  return _impl_.remindbody_.size();
}
inline int Reminder::remindbody_size() const {
  return _internal_remindbody_size();
}
inline ::AcFunDanmu::Im::Message::RemindBody* Reminder::mutable_remindbody(int index) {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Message.Reminder.remindBody)
  return _impl_.remindbody_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Message::RemindBody >*
Reminder::mutable_remindbody() {
  // @@protoc_insertion_point(field_mutable_list:AcFunDanmu.Im.Message.Reminder.remindBody)
  return &_impl_.remindbody_;
}
inline const ::AcFunDanmu::Im::Message::RemindBody& Reminder::_internal_remindbody(int index) const {
  return _impl_.remindbody_.Get(index);
}
inline const ::AcFunDanmu::Im::Message::RemindBody& Reminder::remindbody(int index) const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.Reminder.remindBody)
  return _internal_remindbody(index);
}
inline ::AcFunDanmu::Im::Message::RemindBody* Reminder::_internal_add_remindbody() {
  return _impl_.remindbody_.Add();
}
inline ::AcFunDanmu::Im::Message::RemindBody* Reminder::add_remindbody() {
  ::AcFunDanmu::Im::Message::RemindBody* _add = _internal_add_remindbody();
  // @@protoc_insertion_point(field_add:AcFunDanmu.Im.Message.Reminder.remindBody)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Message::RemindBody >&
Reminder::remindbody() const {
  // @@protoc_insertion_point(field_list:AcFunDanmu.Im.Message.Reminder.remindBody)
  return _impl_.remindbody_;
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Reminder_2eproto
