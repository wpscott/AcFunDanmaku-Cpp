// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: TimeFilter.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_TimeFilter_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_TimeFilter_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_TimeFilter_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_TimeFilter_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_TimeFilter_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Search {
class TimeFilter;
struct TimeFilterDefaultTypeInternal;
extern TimeFilterDefaultTypeInternal _TimeFilter_default_instance_;
}  // namespace Search
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Cloud::Search::TimeFilter* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Cloud::Search::TimeFilter>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Search {

// ===================================================================

class TimeFilter final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Cloud.Search.TimeFilter) */ {
 public:
  inline TimeFilter() : TimeFilter(nullptr) {}
  ~TimeFilter() override;
  explicit PROTOBUF_CONSTEXPR TimeFilter(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  TimeFilter(const TimeFilter& from);
  TimeFilter(TimeFilter&& from) noexcept
    : TimeFilter() {
    *this = ::std::move(from);
  }

  inline TimeFilter& operator=(const TimeFilter& from) {
    CopyFrom(from);
    return *this;
  }
  inline TimeFilter& operator=(TimeFilter&& from) noexcept {
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
  static const TimeFilter& default_instance() {
    return *internal_default_instance();
  }
  static inline const TimeFilter* internal_default_instance() {
    return reinterpret_cast<const TimeFilter*>(
               &_TimeFilter_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(TimeFilter& a, TimeFilter& b) {
    a.Swap(&b);
  }
  inline void Swap(TimeFilter* other) {
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
  void UnsafeArenaSwap(TimeFilter* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  TimeFilter* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<TimeFilter>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const TimeFilter& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const TimeFilter& from) {
    TimeFilter::MergeImpl(*this, from);
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
  void InternalSwap(TimeFilter* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Cloud.Search.TimeFilter";
  }
  protected:
  explicit TimeFilter(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kBeginTimeFieldNumber = 1,
    kEndTimeFieldNumber = 2,
  };
  // int64 beginTime = 1;
  void clear_begintime();
  int64_t begintime() const;
  void set_begintime(int64_t value);
  private:
  int64_t _internal_begintime() const;
  void _internal_set_begintime(int64_t value);
  public:

  // int64 endTime = 2;
  void clear_endtime();
  int64_t endtime() const;
  void set_endtime(int64_t value);
  private:
  int64_t _internal_endtime() const;
  void _internal_set_endtime(int64_t value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Cloud.Search.TimeFilter)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    int64_t begintime_;
    int64_t endtime_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_TimeFilter_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TimeFilter

// int64 beginTime = 1;
inline void TimeFilter::clear_begintime() {
  _impl_.begintime_ = int64_t{0};
}
inline int64_t TimeFilter::_internal_begintime() const {
  return _impl_.begintime_;
}
inline int64_t TimeFilter::begintime() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Search.TimeFilter.beginTime)
  return _internal_begintime();
}
inline void TimeFilter::_internal_set_begintime(int64_t value) {
  
  _impl_.begintime_ = value;
}
inline void TimeFilter::set_begintime(int64_t value) {
  _internal_set_begintime(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Search.TimeFilter.beginTime)
}

// int64 endTime = 2;
inline void TimeFilter::clear_endtime() {
  _impl_.endtime_ = int64_t{0};
}
inline int64_t TimeFilter::_internal_endtime() const {
  return _impl_.endtime_;
}
inline int64_t TimeFilter::endtime() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Search.TimeFilter.endTime)
  return _internal_endtime();
}
inline void TimeFilter::_internal_set_endtime(int64_t value) {
  
  _impl_.endtime_ = value;
}
inline void TimeFilter::set_endtime(int64_t value) {
  _internal_set_endtime(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Search.TimeFilter.endTime)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Search
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_TimeFilter_2eproto