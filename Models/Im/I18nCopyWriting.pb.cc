// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: I18nCopyWriting.proto

#include "I18nCopyWriting.pb.h"

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
namespace Im {
namespace Basic {
PROTOBUF_CONSTEXPR I18nCopyWriting::I18nCopyWriting(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.formatparam_)*/{}
  , /*decltype(_impl_.formatkey_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct I18nCopyWritingDefaultTypeInternal {
  PROTOBUF_CONSTEXPR I18nCopyWritingDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~I18nCopyWritingDefaultTypeInternal() {}
  union {
    I18nCopyWriting _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 I18nCopyWritingDefaultTypeInternal _I18nCopyWriting_default_instance_;
}  // namespace Basic
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_I18nCopyWriting_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_I18nCopyWriting_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_I18nCopyWriting_2eproto = nullptr;

const uint32_t TableStruct_I18nCopyWriting_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Basic::I18nCopyWriting, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Basic::I18nCopyWriting, _impl_.formatkey_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Basic::I18nCopyWriting, _impl_.formatparam_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Basic::I18nCopyWriting)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Basic::_I18nCopyWriting_default_instance_._instance,
};

const char descriptor_table_protodef_I18nCopyWriting_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\025I18nCopyWriting.proto\022\023AcFunDanmu.Im.B"
  "asic\"9\n\017I18nCopyWriting\022\021\n\tformatKey\030\001 \001"
  "(\t\022\023\n\013formatParam\030\002 \003(\tb\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_I18nCopyWriting_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_I18nCopyWriting_2eproto = {
    false, false, 111, descriptor_table_protodef_I18nCopyWriting_2eproto,
    "I18nCopyWriting.proto",
    &descriptor_table_I18nCopyWriting_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_I18nCopyWriting_2eproto::offsets,
    file_level_metadata_I18nCopyWriting_2eproto, file_level_enum_descriptors_I18nCopyWriting_2eproto,
    file_level_service_descriptors_I18nCopyWriting_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_I18nCopyWriting_2eproto_getter() {
  return &descriptor_table_I18nCopyWriting_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_I18nCopyWriting_2eproto(&descriptor_table_I18nCopyWriting_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Basic {

// ===================================================================

class I18nCopyWriting::_Internal {
 public:
};

I18nCopyWriting::I18nCopyWriting(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Basic.I18nCopyWriting)
}
I18nCopyWriting::I18nCopyWriting(const I18nCopyWriting& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  I18nCopyWriting* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.formatparam_){from._impl_.formatparam_}
    , decltype(_impl_.formatkey_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.formatkey_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.formatkey_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_formatkey().empty()) {
    _this->_impl_.formatkey_.Set(from._internal_formatkey(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Basic.I18nCopyWriting)
}

inline void I18nCopyWriting::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.formatparam_){arena}
    , decltype(_impl_.formatkey_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.formatkey_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.formatkey_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

I18nCopyWriting::~I18nCopyWriting() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Basic.I18nCopyWriting)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void I18nCopyWriting::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.formatparam_.~RepeatedPtrField();
  _impl_.formatkey_.Destroy();
}

void I18nCopyWriting::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void I18nCopyWriting::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Basic.I18nCopyWriting)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.formatparam_.Clear();
  _impl_.formatkey_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* I18nCopyWriting::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string formatKey = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_formatkey();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Basic.I18nCopyWriting.formatKey"));
        } else
          goto handle_unusual;
        continue;
      // repeated string formatParam = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_formatparam();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Basic.I18nCopyWriting.formatParam"));
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

uint8_t* I18nCopyWriting::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Basic.I18nCopyWriting)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string formatKey = 1;
  if (!this->_internal_formatkey().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_formatkey().data(), static_cast<int>(this->_internal_formatkey().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Basic.I18nCopyWriting.formatKey");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_formatkey(), target);
  }

  // repeated string formatParam = 2;
  for (int i = 0, n = this->_internal_formatparam_size(); i < n; i++) {
    const auto& s = this->_internal_formatparam(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Basic.I18nCopyWriting.formatParam");
    target = stream->WriteString(2, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Basic.I18nCopyWriting)
  return target;
}

size_t I18nCopyWriting::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Basic.I18nCopyWriting)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string formatParam = 2;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_impl_.formatparam_.size());
  for (int i = 0, n = _impl_.formatparam_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      _impl_.formatparam_.Get(i));
  }

  // string formatKey = 1;
  if (!this->_internal_formatkey().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_formatkey());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData I18nCopyWriting::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    I18nCopyWriting::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*I18nCopyWriting::GetClassData() const { return &_class_data_; }


void I18nCopyWriting::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<I18nCopyWriting*>(&to_msg);
  auto& from = static_cast<const I18nCopyWriting&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Basic.I18nCopyWriting)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.formatparam_.MergeFrom(from._impl_.formatparam_);
  if (!from._internal_formatkey().empty()) {
    _this->_internal_set_formatkey(from._internal_formatkey());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void I18nCopyWriting::CopyFrom(const I18nCopyWriting& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Basic.I18nCopyWriting)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool I18nCopyWriting::IsInitialized() const {
  return true;
}

void I18nCopyWriting::InternalSwap(I18nCopyWriting* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.formatparam_.InternalSwap(&other->_impl_.formatparam_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.formatkey_, lhs_arena,
      &other->_impl_.formatkey_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata I18nCopyWriting::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_I18nCopyWriting_2eproto_getter, &descriptor_table_I18nCopyWriting_2eproto_once,
      file_level_metadata_I18nCopyWriting_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Basic
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Basic::I18nCopyWriting*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Basic::I18nCopyWriting >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Basic::I18nCopyWriting >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
