// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: BackgroundStyle.proto

#include "BackgroundStyle.pb.h"

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
PROTOBUF_CONSTEXPR BackgroundStyle::BackgroundStyle(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.b_)*/{}
  , /*decltype(_impl_.a_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct BackgroundStyleDefaultTypeInternal {
  PROTOBUF_CONSTEXPR BackgroundStyleDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~BackgroundStyleDefaultTypeInternal() {}
  union {
    BackgroundStyle _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 BackgroundStyleDefaultTypeInternal _BackgroundStyle_default_instance_;
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_BackgroundStyle_2eproto[1];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_BackgroundStyle_2eproto[1];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_BackgroundStyle_2eproto = nullptr;

const uint32_t TableStruct_BackgroundStyle_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::BackgroundStyle, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::BackgroundStyle, _impl_.a_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::BackgroundStyle, _impl_.b_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::BackgroundStyle)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::_BackgroundStyle_default_instance_._instance,
};

const char descriptor_table_protodef_BackgroundStyle_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\025BackgroundStyle.proto\022\nAcFunDanmu\032\022Ima"
  "geCdnNode.proto\"a\n\017BackgroundStyle\022\t\n\001a\030"
  "\001 \001(\t\022#\n\001b\030\002 \003(\0132\030.AcFunDanmu.ImageCdnNo"
  "de\"\036\n\007unknown\022\005\n\001c\020\000\022\005\n\001d\020\001\022\005\n\001e\020\002b\006prot"
  "o3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_BackgroundStyle_2eproto_deps[1] = {
  &::descriptor_table_ImageCdnNode_2eproto,
};
static ::_pbi::once_flag descriptor_table_BackgroundStyle_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_BackgroundStyle_2eproto = {
    false, false, 162, descriptor_table_protodef_BackgroundStyle_2eproto,
    "BackgroundStyle.proto",
    &descriptor_table_BackgroundStyle_2eproto_once, descriptor_table_BackgroundStyle_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_BackgroundStyle_2eproto::offsets,
    file_level_metadata_BackgroundStyle_2eproto, file_level_enum_descriptors_BackgroundStyle_2eproto,
    file_level_service_descriptors_BackgroundStyle_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_BackgroundStyle_2eproto_getter() {
  return &descriptor_table_BackgroundStyle_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_BackgroundStyle_2eproto(&descriptor_table_BackgroundStyle_2eproto);
namespace AcFunDanmu {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* BackgroundStyle_unknown_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_BackgroundStyle_2eproto);
  return file_level_enum_descriptors_BackgroundStyle_2eproto[0];
}
bool BackgroundStyle_unknown_IsValid(int value) {
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
constexpr BackgroundStyle_unknown BackgroundStyle::c;
constexpr BackgroundStyle_unknown BackgroundStyle::d;
constexpr BackgroundStyle_unknown BackgroundStyle::e;
constexpr BackgroundStyle_unknown BackgroundStyle::unknown_MIN;
constexpr BackgroundStyle_unknown BackgroundStyle::unknown_MAX;
constexpr int BackgroundStyle::unknown_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

// ===================================================================

class BackgroundStyle::_Internal {
 public:
};

void BackgroundStyle::clear_b() {
  _impl_.b_.Clear();
}
BackgroundStyle::BackgroundStyle(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.BackgroundStyle)
}
BackgroundStyle::BackgroundStyle(const BackgroundStyle& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  BackgroundStyle* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.b_){from._impl_.b_}
    , decltype(_impl_.a_){}
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
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.BackgroundStyle)
}

inline void BackgroundStyle::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.b_){arena}
    , decltype(_impl_.a_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.a_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.a_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

BackgroundStyle::~BackgroundStyle() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.BackgroundStyle)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void BackgroundStyle::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.b_.~RepeatedPtrField();
  _impl_.a_.Destroy();
}

void BackgroundStyle::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void BackgroundStyle::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.BackgroundStyle)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.b_.Clear();
  _impl_.a_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* BackgroundStyle::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
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
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.BackgroundStyle.a"));
        } else
          goto handle_unusual;
        continue;
      // repeated .AcFunDanmu.ImageCdnNode b = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_b(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
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

uint8_t* BackgroundStyle::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.BackgroundStyle)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string a = 1;
  if (!this->_internal_a().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_a().data(), static_cast<int>(this->_internal_a().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.BackgroundStyle.a");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_a(), target);
  }

  // repeated .AcFunDanmu.ImageCdnNode b = 2;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_b_size()); i < n; i++) {
    const auto& repfield = this->_internal_b(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(2, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.BackgroundStyle)
  return target;
}

size_t BackgroundStyle::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.BackgroundStyle)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .AcFunDanmu.ImageCdnNode b = 2;
  total_size += 1UL * this->_internal_b_size();
  for (const auto& msg : this->_impl_.b_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // string a = 1;
  if (!this->_internal_a().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_a());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData BackgroundStyle::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    BackgroundStyle::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*BackgroundStyle::GetClassData() const { return &_class_data_; }


void BackgroundStyle::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<BackgroundStyle*>(&to_msg);
  auto& from = static_cast<const BackgroundStyle&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.BackgroundStyle)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.b_.MergeFrom(from._impl_.b_);
  if (!from._internal_a().empty()) {
    _this->_internal_set_a(from._internal_a());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void BackgroundStyle::CopyFrom(const BackgroundStyle& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.BackgroundStyle)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BackgroundStyle::IsInitialized() const {
  return true;
}

void BackgroundStyle::InternalSwap(BackgroundStyle* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.b_.InternalSwap(&other->_impl_.b_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.a_, lhs_arena,
      &other->_impl_.a_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata BackgroundStyle::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_BackgroundStyle_2eproto_getter, &descriptor_table_BackgroundStyle_2eproto_once,
      file_level_metadata_BackgroundStyle_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::BackgroundStyle*
Arena::CreateMaybeMessage< ::AcFunDanmu::BackgroundStyle >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::BackgroundStyle >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
