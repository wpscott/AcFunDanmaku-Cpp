// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CommonStateSignalPKSoundConfigChanged.proto

#include "CommonStateSignalPKSoundConfigChanged.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace AcFunDanmu {
PROTOBUF_CONSTEXPR CommonStateSignalPKSoundConfigChanged::CommonStateSignalPKSoundConfigChanged(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.a_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.b_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct CommonStateSignalPKSoundConfigChangedDefaultTypeInternal {
  PROTOBUF_CONSTEXPR CommonStateSignalPKSoundConfigChangedDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~CommonStateSignalPKSoundConfigChangedDefaultTypeInternal() {}
  union {
    CommonStateSignalPKSoundConfigChanged _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 CommonStateSignalPKSoundConfigChangedDefaultTypeInternal _CommonStateSignalPKSoundConfigChanged_default_instance_;
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_CommonStateSignalPKSoundConfigChanged_2eproto[1];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_CommonStateSignalPKSoundConfigChanged_2eproto[1];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_CommonStateSignalPKSoundConfigChanged_2eproto = nullptr;

const uint32_t TableStruct_CommonStateSignalPKSoundConfigChanged_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonStateSignalPKSoundConfigChanged, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonStateSignalPKSoundConfigChanged, _impl_.a_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonStateSignalPKSoundConfigChanged, _impl_.b_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::CommonStateSignalPKSoundConfigChanged)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::_CommonStateSignalPKSoundConfigChanged_default_instance_._instance,
};

const char descriptor_table_protodef_CommonStateSignalPKSoundConfigChanged_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n+CommonStateSignalPKSoundConfigChanged."
  "proto\022\nAcFunDanmu\"\230\001\n%CommonStateSignalP"
  "KSoundConfigChanged\022\t\n\001a\030\001 \001(\t\022D\n\001b\030\002 \001("
  "\01629.AcFunDanmu.CommonStateSignalPKSoundC"
  "onfigChanged.unknown\"\036\n\007unknown\022\005\n\001c\020\000\022\005"
  "\n\001d\020\001\022\005\n\001e\020\002b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_CommonStateSignalPKSoundConfigChanged_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_CommonStateSignalPKSoundConfigChanged_2eproto = {
    false, false, 220, descriptor_table_protodef_CommonStateSignalPKSoundConfigChanged_2eproto,
    "CommonStateSignalPKSoundConfigChanged.proto",
    &descriptor_table_CommonStateSignalPKSoundConfigChanged_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_CommonStateSignalPKSoundConfigChanged_2eproto::offsets,
    file_level_metadata_CommonStateSignalPKSoundConfigChanged_2eproto, file_level_enum_descriptors_CommonStateSignalPKSoundConfigChanged_2eproto,
    file_level_service_descriptors_CommonStateSignalPKSoundConfigChanged_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_CommonStateSignalPKSoundConfigChanged_2eproto_getter() {
  return &descriptor_table_CommonStateSignalPKSoundConfigChanged_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_CommonStateSignalPKSoundConfigChanged_2eproto(&descriptor_table_CommonStateSignalPKSoundConfigChanged_2eproto);
namespace AcFunDanmu {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* CommonStateSignalPKSoundConfigChanged_unknown_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_CommonStateSignalPKSoundConfigChanged_2eproto);
  return file_level_enum_descriptors_CommonStateSignalPKSoundConfigChanged_2eproto[0];
}
bool CommonStateSignalPKSoundConfigChanged_unknown_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
constexpr CommonStateSignalPKSoundConfigChanged_unknown CommonStateSignalPKSoundConfigChanged::c;
constexpr CommonStateSignalPKSoundConfigChanged_unknown CommonStateSignalPKSoundConfigChanged::d;
constexpr CommonStateSignalPKSoundConfigChanged_unknown CommonStateSignalPKSoundConfigChanged::e;
constexpr CommonStateSignalPKSoundConfigChanged_unknown CommonStateSignalPKSoundConfigChanged::unknown_MIN;
constexpr CommonStateSignalPKSoundConfigChanged_unknown CommonStateSignalPKSoundConfigChanged::unknown_MAX;
constexpr int CommonStateSignalPKSoundConfigChanged::unknown_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

// ===================================================================

class CommonStateSignalPKSoundConfigChanged::_Internal {
 public:
};

CommonStateSignalPKSoundConfigChanged::CommonStateSignalPKSoundConfigChanged(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.CommonStateSignalPKSoundConfigChanged)
}
CommonStateSignalPKSoundConfigChanged::CommonStateSignalPKSoundConfigChanged(const CommonStateSignalPKSoundConfigChanged& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  CommonStateSignalPKSoundConfigChanged* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.a_){}
    , decltype(_impl_.b_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.a_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.a_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_a().empty()) {
    _this->_impl_.a_.Set(from._internal_a(), 
      _this->GetArenaForAllocation());
  }
  _this->_impl_.b_ = from._impl_.b_;
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.CommonStateSignalPKSoundConfigChanged)
}

inline void CommonStateSignalPKSoundConfigChanged::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.a_){}
    , decltype(_impl_.b_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.a_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.a_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

CommonStateSignalPKSoundConfigChanged::~CommonStateSignalPKSoundConfigChanged() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.CommonStateSignalPKSoundConfigChanged)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void CommonStateSignalPKSoundConfigChanged::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.a_.Destroy();
}

void CommonStateSignalPKSoundConfigChanged::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void CommonStateSignalPKSoundConfigChanged::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.CommonStateSignalPKSoundConfigChanged)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.a_.ClearToEmpty();
  _impl_.b_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* CommonStateSignalPKSoundConfigChanged::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string a = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_a();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.CommonStateSignalPKSoundConfigChanged.a"));
        } else
          goto handle_unusual;
        continue;
      // .AcFunDanmu.CommonStateSignalPKSoundConfigChanged.unknown b = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_b(static_cast<::AcFunDanmu::CommonStateSignalPKSoundConfigChanged_unknown>(val));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* CommonStateSignalPKSoundConfigChanged::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.CommonStateSignalPKSoundConfigChanged)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string a = 1;
  if (!this->_internal_a().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_a().data(), static_cast<int>(this->_internal_a().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.CommonStateSignalPKSoundConfigChanged.a");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_a(), target);
  }

  // .AcFunDanmu.CommonStateSignalPKSoundConfigChanged.unknown b = 2;
  if (this->_internal_b() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      2, this->_internal_b(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.CommonStateSignalPKSoundConfigChanged)
  return target;
}

size_t CommonStateSignalPKSoundConfigChanged::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.CommonStateSignalPKSoundConfigChanged)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string a = 1;
  if (!this->_internal_a().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_a());
  }

  // .AcFunDanmu.CommonStateSignalPKSoundConfigChanged.unknown b = 2;
  if (this->_internal_b() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_b());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData CommonStateSignalPKSoundConfigChanged::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    CommonStateSignalPKSoundConfigChanged::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*CommonStateSignalPKSoundConfigChanged::GetClassData() const { return &_class_data_; }


void CommonStateSignalPKSoundConfigChanged::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<CommonStateSignalPKSoundConfigChanged*>(&to_msg);
  auto& from = static_cast<const CommonStateSignalPKSoundConfigChanged&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.CommonStateSignalPKSoundConfigChanged)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_a().empty()) {
    _this->_internal_set_a(from._internal_a());
  }
  if (from._internal_b() != 0) {
    _this->_internal_set_b(from._internal_b());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void CommonStateSignalPKSoundConfigChanged::CopyFrom(const CommonStateSignalPKSoundConfigChanged& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.CommonStateSignalPKSoundConfigChanged)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CommonStateSignalPKSoundConfigChanged::IsInitialized() const {
  return true;
}

void CommonStateSignalPKSoundConfigChanged::InternalSwap(CommonStateSignalPKSoundConfigChanged* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.a_, lhs_arena,
      &other->_impl_.a_, rhs_arena
  );
  swap(_impl_.b_, other->_impl_.b_);
}

::PROTOBUF_NAMESPACE_ID::Metadata CommonStateSignalPKSoundConfigChanged::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_CommonStateSignalPKSoundConfigChanged_2eproto_getter, &descriptor_table_CommonStateSignalPKSoundConfigChanged_2eproto_once,
      file_level_metadata_CommonStateSignalPKSoundConfigChanged_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::CommonStateSignalPKSoundConfigChanged*
Arena::CreateMaybeMessage< ::AcFunDanmu::CommonStateSignalPKSoundConfigChanged >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::CommonStateSignalPKSoundConfigChanged >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
