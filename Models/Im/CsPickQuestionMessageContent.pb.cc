// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CsPickQuestionMessageContent.proto

#include "CsPickQuestionMessageContent.pb.h"

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
namespace Cloud {
namespace Message {
PROTOBUF_CONSTEXPR CsPickQuestionMessageContent::CsPickQuestionMessageContent(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.text_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.bizcontent_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.questionid_)*/int64_t{0}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct CsPickQuestionMessageContentDefaultTypeInternal {
  PROTOBUF_CONSTEXPR CsPickQuestionMessageContentDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~CsPickQuestionMessageContentDefaultTypeInternal() {}
  union {
    CsPickQuestionMessageContent _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 CsPickQuestionMessageContentDefaultTypeInternal _CsPickQuestionMessageContent_default_instance_;
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_CsPickQuestionMessageContent_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_CsPickQuestionMessageContent_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_CsPickQuestionMessageContent_2eproto = nullptr;

const uint32_t TableStruct_CsPickQuestionMessageContent_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::CsPickQuestionMessageContent, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::CsPickQuestionMessageContent, _impl_.questionid_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::CsPickQuestionMessageContent, _impl_.text_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::CsPickQuestionMessageContent, _impl_.bizcontent_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Cloud::Message::CsPickQuestionMessageContent)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Cloud::Message::_CsPickQuestionMessageContent_default_instance_._instance,
};

const char descriptor_table_protodef_CsPickQuestionMessageContent_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\"CsPickQuestionMessageContent.proto\022\033Ac"
  "FunDanmu.Im.Cloud.Message\"T\n\034CsPickQuest"
  "ionMessageContent\022\022\n\nquestionId\030\001 \001(\003\022\014\n"
  "\004text\030\002 \001(\t\022\022\n\nbizContent\030\003 \001(\014b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_CsPickQuestionMessageContent_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_CsPickQuestionMessageContent_2eproto = {
    false, false, 159, descriptor_table_protodef_CsPickQuestionMessageContent_2eproto,
    "CsPickQuestionMessageContent.proto",
    &descriptor_table_CsPickQuestionMessageContent_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_CsPickQuestionMessageContent_2eproto::offsets,
    file_level_metadata_CsPickQuestionMessageContent_2eproto, file_level_enum_descriptors_CsPickQuestionMessageContent_2eproto,
    file_level_service_descriptors_CsPickQuestionMessageContent_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_CsPickQuestionMessageContent_2eproto_getter() {
  return &descriptor_table_CsPickQuestionMessageContent_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_CsPickQuestionMessageContent_2eproto(&descriptor_table_CsPickQuestionMessageContent_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {

// ===================================================================

class CsPickQuestionMessageContent::_Internal {
 public:
};

CsPickQuestionMessageContent::CsPickQuestionMessageContent(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Cloud.Message.CsPickQuestionMessageContent)
}
CsPickQuestionMessageContent::CsPickQuestionMessageContent(const CsPickQuestionMessageContent& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  CsPickQuestionMessageContent* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.text_){}
    , decltype(_impl_.bizcontent_){}
    , decltype(_impl_.questionid_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.text_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.text_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_text().empty()) {
    _this->_impl_.text_.Set(from._internal_text(), 
      _this->GetArenaForAllocation());
  }
  _impl_.bizcontent_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.bizcontent_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_bizcontent().empty()) {
    _this->_impl_.bizcontent_.Set(from._internal_bizcontent(), 
      _this->GetArenaForAllocation());
  }
  _this->_impl_.questionid_ = from._impl_.questionid_;
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Cloud.Message.CsPickQuestionMessageContent)
}

inline void CsPickQuestionMessageContent::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.text_){}
    , decltype(_impl_.bizcontent_){}
    , decltype(_impl_.questionid_){int64_t{0}}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.text_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.text_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.bizcontent_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.bizcontent_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

CsPickQuestionMessageContent::~CsPickQuestionMessageContent() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Cloud.Message.CsPickQuestionMessageContent)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void CsPickQuestionMessageContent::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.text_.Destroy();
  _impl_.bizcontent_.Destroy();
}

void CsPickQuestionMessageContent::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void CsPickQuestionMessageContent::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Cloud.Message.CsPickQuestionMessageContent)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.text_.ClearToEmpty();
  _impl_.bizcontent_.ClearToEmpty();
  _impl_.questionid_ = int64_t{0};
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* CsPickQuestionMessageContent::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int64 questionId = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.questionid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string text = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_text();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Cloud.Message.CsPickQuestionMessageContent.text"));
        } else
          goto handle_unusual;
        continue;
      // bytes bizContent = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_bizcontent();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
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

uint8_t* CsPickQuestionMessageContent::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Cloud.Message.CsPickQuestionMessageContent)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 questionId = 1;
  if (this->_internal_questionid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(1, this->_internal_questionid(), target);
  }

  // string text = 2;
  if (!this->_internal_text().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_text().data(), static_cast<int>(this->_internal_text().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Cloud.Message.CsPickQuestionMessageContent.text");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_text(), target);
  }

  // bytes bizContent = 3;
  if (!this->_internal_bizcontent().empty()) {
    target = stream->WriteBytesMaybeAliased(
        3, this->_internal_bizcontent(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Cloud.Message.CsPickQuestionMessageContent)
  return target;
}

size_t CsPickQuestionMessageContent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Cloud.Message.CsPickQuestionMessageContent)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string text = 2;
  if (!this->_internal_text().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_text());
  }

  // bytes bizContent = 3;
  if (!this->_internal_bizcontent().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_bizcontent());
  }

  // int64 questionId = 1;
  if (this->_internal_questionid() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_questionid());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData CsPickQuestionMessageContent::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    CsPickQuestionMessageContent::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*CsPickQuestionMessageContent::GetClassData() const { return &_class_data_; }


void CsPickQuestionMessageContent::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<CsPickQuestionMessageContent*>(&to_msg);
  auto& from = static_cast<const CsPickQuestionMessageContent&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Cloud.Message.CsPickQuestionMessageContent)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_text().empty()) {
    _this->_internal_set_text(from._internal_text());
  }
  if (!from._internal_bizcontent().empty()) {
    _this->_internal_set_bizcontent(from._internal_bizcontent());
  }
  if (from._internal_questionid() != 0) {
    _this->_internal_set_questionid(from._internal_questionid());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void CsPickQuestionMessageContent::CopyFrom(const CsPickQuestionMessageContent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Cloud.Message.CsPickQuestionMessageContent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CsPickQuestionMessageContent::IsInitialized() const {
  return true;
}

void CsPickQuestionMessageContent::InternalSwap(CsPickQuestionMessageContent* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.text_, lhs_arena,
      &other->_impl_.text_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.bizcontent_, lhs_arena,
      &other->_impl_.bizcontent_, rhs_arena
  );
  swap(_impl_.questionid_, other->_impl_.questionid_);
}

::PROTOBUF_NAMESPACE_ID::Metadata CsPickQuestionMessageContent::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_CsPickQuestionMessageContent_2eproto_getter, &descriptor_table_CsPickQuestionMessageContent_2eproto_once,
      file_level_metadata_CsPickQuestionMessageContent_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Cloud::Message::CsPickQuestionMessageContent*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Cloud::Message::CsPickQuestionMessageContent >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Cloud::Message::CsPickQuestionMessageContent >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
