// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CsQuestionMessageContent.proto

#include "CsQuestionMessageContent.pb.h"

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
PROTOBUF_CONSTEXPR CsQuestionMessageContent_CsQuestion::CsQuestionMessageContent_CsQuestion(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.text_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.actionurl_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.questionid_)*/int64_t{0}
  , /*decltype(_impl_.actiontype_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct CsQuestionMessageContent_CsQuestionDefaultTypeInternal {
  PROTOBUF_CONSTEXPR CsQuestionMessageContent_CsQuestionDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~CsQuestionMessageContent_CsQuestionDefaultTypeInternal() {}
  union {
    CsQuestionMessageContent_CsQuestion _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 CsQuestionMessageContent_CsQuestionDefaultTypeInternal _CsQuestionMessageContent_CsQuestion_default_instance_;
PROTOBUF_CONSTEXPR CsQuestionMessageContent::CsQuestionMessageContent(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.question_)*/{}
  , /*decltype(_impl_.title_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.bizcontent_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct CsQuestionMessageContentDefaultTypeInternal {
  PROTOBUF_CONSTEXPR CsQuestionMessageContentDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~CsQuestionMessageContentDefaultTypeInternal() {}
  union {
    CsQuestionMessageContent _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 CsQuestionMessageContentDefaultTypeInternal _CsQuestionMessageContent_default_instance_;
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_CsQuestionMessageContent_2eproto[2];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_CsQuestionMessageContent_2eproto[1];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_CsQuestionMessageContent_2eproto = nullptr;

const uint32_t TableStruct_CsQuestionMessageContent_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::CsQuestionMessageContent_CsQuestion, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::CsQuestionMessageContent_CsQuestion, _impl_.questionid_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::CsQuestionMessageContent_CsQuestion, _impl_.text_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::CsQuestionMessageContent_CsQuestion, _impl_.actionurl_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::CsQuestionMessageContent_CsQuestion, _impl_.actiontype_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::CsQuestionMessageContent, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::CsQuestionMessageContent, _impl_.title_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::CsQuestionMessageContent, _impl_.question_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::CsQuestionMessageContent, _impl_.bizcontent_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Cloud::Message::CsQuestionMessageContent_CsQuestion)},
  { 10, -1, -1, sizeof(::AcFunDanmu::Im::Cloud::Message::CsQuestionMessageContent)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Cloud::Message::_CsQuestionMessageContent_CsQuestion_default_instance_._instance,
  &::AcFunDanmu::Im::Cloud::Message::_CsQuestionMessageContent_default_instance_._instance,
};

const char descriptor_table_protodef_CsQuestionMessageContent_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\036CsQuestionMessageContent.proto\022\033AcFunD"
  "anmu.Im.Cloud.Message\"\364\002\n\030CsQuestionMess"
  "ageContent\022\r\n\005title\030\001 \001(\t\022R\n\010question\030\002 "
  "\003(\0132@.AcFunDanmu.Im.Cloud.Message.CsQues"
  "tionMessageContent.CsQuestion\022\022\n\nbizCont"
  "ent\030\003 \001(\014\032\340\001\n\nCsQuestion\022\022\n\nquestionId\030\001"
  " \001(\003\022\014\n\004text\030\002 \001(\t\022\021\n\tactionUrl\030\003 \001(\t\022_\n"
  "\nactionType\030\004 \001(\0162K.AcFunDanmu.Im.Cloud."
  "Message.CsQuestionMessageContent.CsQuest"
  "ion.ActionType\"<\n\nActionType\022\016\n\nAT_UNKNO"
  "WN\020\000\022\014\n\010REDIRECT\020\001\022\020\n\014SEND_MESSAGE\020\002b\006pr"
  "oto3"
  ;
static ::_pbi::once_flag descriptor_table_CsQuestionMessageContent_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_CsQuestionMessageContent_2eproto = {
    false, false, 444, descriptor_table_protodef_CsQuestionMessageContent_2eproto,
    "CsQuestionMessageContent.proto",
    &descriptor_table_CsQuestionMessageContent_2eproto_once, nullptr, 0, 2,
    schemas, file_default_instances, TableStruct_CsQuestionMessageContent_2eproto::offsets,
    file_level_metadata_CsQuestionMessageContent_2eproto, file_level_enum_descriptors_CsQuestionMessageContent_2eproto,
    file_level_service_descriptors_CsQuestionMessageContent_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_CsQuestionMessageContent_2eproto_getter() {
  return &descriptor_table_CsQuestionMessageContent_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_CsQuestionMessageContent_2eproto(&descriptor_table_CsQuestionMessageContent_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* CsQuestionMessageContent_CsQuestion_ActionType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_CsQuestionMessageContent_2eproto);
  return file_level_enum_descriptors_CsQuestionMessageContent_2eproto[0];
}
bool CsQuestionMessageContent_CsQuestion_ActionType_IsValid(int value) {
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
constexpr CsQuestionMessageContent_CsQuestion_ActionType CsQuestionMessageContent_CsQuestion::AT_UNKNOWN;
constexpr CsQuestionMessageContent_CsQuestion_ActionType CsQuestionMessageContent_CsQuestion::REDIRECT;
constexpr CsQuestionMessageContent_CsQuestion_ActionType CsQuestionMessageContent_CsQuestion::SEND_MESSAGE;
constexpr CsQuestionMessageContent_CsQuestion_ActionType CsQuestionMessageContent_CsQuestion::ActionType_MIN;
constexpr CsQuestionMessageContent_CsQuestion_ActionType CsQuestionMessageContent_CsQuestion::ActionType_MAX;
constexpr int CsQuestionMessageContent_CsQuestion::ActionType_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

// ===================================================================

class CsQuestionMessageContent_CsQuestion::_Internal {
 public:
};

CsQuestionMessageContent_CsQuestion::CsQuestionMessageContent_CsQuestion(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Cloud.Message.CsQuestionMessageContent.CsQuestion)
}
CsQuestionMessageContent_CsQuestion::CsQuestionMessageContent_CsQuestion(const CsQuestionMessageContent_CsQuestion& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  CsQuestionMessageContent_CsQuestion* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.text_){}
    , decltype(_impl_.actionurl_){}
    , decltype(_impl_.questionid_){}
    , decltype(_impl_.actiontype_){}
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
  _impl_.actionurl_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.actionurl_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_actionurl().empty()) {
    _this->_impl_.actionurl_.Set(from._internal_actionurl(), 
      _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.questionid_, &from._impl_.questionid_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.actiontype_) -
    reinterpret_cast<char*>(&_impl_.questionid_)) + sizeof(_impl_.actiontype_));
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Cloud.Message.CsQuestionMessageContent.CsQuestion)
}

inline void CsQuestionMessageContent_CsQuestion::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.text_){}
    , decltype(_impl_.actionurl_){}
    , decltype(_impl_.questionid_){int64_t{0}}
    , decltype(_impl_.actiontype_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.text_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.text_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.actionurl_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.actionurl_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

CsQuestionMessageContent_CsQuestion::~CsQuestionMessageContent_CsQuestion() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Cloud.Message.CsQuestionMessageContent.CsQuestion)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void CsQuestionMessageContent_CsQuestion::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.text_.Destroy();
  _impl_.actionurl_.Destroy();
}

void CsQuestionMessageContent_CsQuestion::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void CsQuestionMessageContent_CsQuestion::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Cloud.Message.CsQuestionMessageContent.CsQuestion)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.text_.ClearToEmpty();
  _impl_.actionurl_.ClearToEmpty();
  ::memset(&_impl_.questionid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.actiontype_) -
      reinterpret_cast<char*>(&_impl_.questionid_)) + sizeof(_impl_.actiontype_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* CsQuestionMessageContent_CsQuestion::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
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
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Cloud.Message.CsQuestionMessageContent.CsQuestion.text"));
        } else
          goto handle_unusual;
        continue;
      // string actionUrl = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_actionurl();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Cloud.Message.CsQuestionMessageContent.CsQuestion.actionUrl"));
        } else
          goto handle_unusual;
        continue;
      // .AcFunDanmu.Im.Cloud.Message.CsQuestionMessageContent.CsQuestion.ActionType actionType = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_actiontype(static_cast<::AcFunDanmu::Im::Cloud::Message::CsQuestionMessageContent_CsQuestion_ActionType>(val));
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

uint8_t* CsQuestionMessageContent_CsQuestion::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Cloud.Message.CsQuestionMessageContent.CsQuestion)
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
      "AcFunDanmu.Im.Cloud.Message.CsQuestionMessageContent.CsQuestion.text");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_text(), target);
  }

  // string actionUrl = 3;
  if (!this->_internal_actionurl().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_actionurl().data(), static_cast<int>(this->_internal_actionurl().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Cloud.Message.CsQuestionMessageContent.CsQuestion.actionUrl");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_actionurl(), target);
  }

  // .AcFunDanmu.Im.Cloud.Message.CsQuestionMessageContent.CsQuestion.ActionType actionType = 4;
  if (this->_internal_actiontype() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      4, this->_internal_actiontype(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Cloud.Message.CsQuestionMessageContent.CsQuestion)
  return target;
}

size_t CsQuestionMessageContent_CsQuestion::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Cloud.Message.CsQuestionMessageContent.CsQuestion)
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

  // string actionUrl = 3;
  if (!this->_internal_actionurl().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_actionurl());
  }

  // int64 questionId = 1;
  if (this->_internal_questionid() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_questionid());
  }

  // .AcFunDanmu.Im.Cloud.Message.CsQuestionMessageContent.CsQuestion.ActionType actionType = 4;
  if (this->_internal_actiontype() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_actiontype());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData CsQuestionMessageContent_CsQuestion::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    CsQuestionMessageContent_CsQuestion::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*CsQuestionMessageContent_CsQuestion::GetClassData() const { return &_class_data_; }


void CsQuestionMessageContent_CsQuestion::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<CsQuestionMessageContent_CsQuestion*>(&to_msg);
  auto& from = static_cast<const CsQuestionMessageContent_CsQuestion&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Cloud.Message.CsQuestionMessageContent.CsQuestion)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_text().empty()) {
    _this->_internal_set_text(from._internal_text());
  }
  if (!from._internal_actionurl().empty()) {
    _this->_internal_set_actionurl(from._internal_actionurl());
  }
  if (from._internal_questionid() != 0) {
    _this->_internal_set_questionid(from._internal_questionid());
  }
  if (from._internal_actiontype() != 0) {
    _this->_internal_set_actiontype(from._internal_actiontype());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void CsQuestionMessageContent_CsQuestion::CopyFrom(const CsQuestionMessageContent_CsQuestion& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Cloud.Message.CsQuestionMessageContent.CsQuestion)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CsQuestionMessageContent_CsQuestion::IsInitialized() const {
  return true;
}

void CsQuestionMessageContent_CsQuestion::InternalSwap(CsQuestionMessageContent_CsQuestion* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.text_, lhs_arena,
      &other->_impl_.text_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.actionurl_, lhs_arena,
      &other->_impl_.actionurl_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(CsQuestionMessageContent_CsQuestion, _impl_.actiontype_)
      + sizeof(CsQuestionMessageContent_CsQuestion::_impl_.actiontype_)
      - PROTOBUF_FIELD_OFFSET(CsQuestionMessageContent_CsQuestion, _impl_.questionid_)>(
          reinterpret_cast<char*>(&_impl_.questionid_),
          reinterpret_cast<char*>(&other->_impl_.questionid_));
}

::PROTOBUF_NAMESPACE_ID::Metadata CsQuestionMessageContent_CsQuestion::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_CsQuestionMessageContent_2eproto_getter, &descriptor_table_CsQuestionMessageContent_2eproto_once,
      file_level_metadata_CsQuestionMessageContent_2eproto[0]);
}

// ===================================================================

class CsQuestionMessageContent::_Internal {
 public:
};

CsQuestionMessageContent::CsQuestionMessageContent(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Cloud.Message.CsQuestionMessageContent)
}
CsQuestionMessageContent::CsQuestionMessageContent(const CsQuestionMessageContent& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  CsQuestionMessageContent* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.question_){from._impl_.question_}
    , decltype(_impl_.title_){}
    , decltype(_impl_.bizcontent_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.title_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.title_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_title().empty()) {
    _this->_impl_.title_.Set(from._internal_title(), 
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
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Cloud.Message.CsQuestionMessageContent)
}

inline void CsQuestionMessageContent::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.question_){arena}
    , decltype(_impl_.title_){}
    , decltype(_impl_.bizcontent_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.title_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.title_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.bizcontent_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.bizcontent_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

CsQuestionMessageContent::~CsQuestionMessageContent() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Cloud.Message.CsQuestionMessageContent)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void CsQuestionMessageContent::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.question_.~RepeatedPtrField();
  _impl_.title_.Destroy();
  _impl_.bizcontent_.Destroy();
}

void CsQuestionMessageContent::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void CsQuestionMessageContent::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Cloud.Message.CsQuestionMessageContent)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.question_.Clear();
  _impl_.title_.ClearToEmpty();
  _impl_.bizcontent_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* CsQuestionMessageContent::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string title = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_title();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Cloud.Message.CsQuestionMessageContent.title"));
        } else
          goto handle_unusual;
        continue;
      // repeated .AcFunDanmu.Im.Cloud.Message.CsQuestionMessageContent.CsQuestion question = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_question(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
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

uint8_t* CsQuestionMessageContent::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Cloud.Message.CsQuestionMessageContent)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string title = 1;
  if (!this->_internal_title().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_title().data(), static_cast<int>(this->_internal_title().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Cloud.Message.CsQuestionMessageContent.title");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_title(), target);
  }

  // repeated .AcFunDanmu.Im.Cloud.Message.CsQuestionMessageContent.CsQuestion question = 2;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_question_size()); i < n; i++) {
    const auto& repfield = this->_internal_question(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(2, repfield, repfield.GetCachedSize(), target, stream);
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
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Cloud.Message.CsQuestionMessageContent)
  return target;
}

size_t CsQuestionMessageContent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Cloud.Message.CsQuestionMessageContent)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .AcFunDanmu.Im.Cloud.Message.CsQuestionMessageContent.CsQuestion question = 2;
  total_size += 1UL * this->_internal_question_size();
  for (const auto& msg : this->_impl_.question_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // string title = 1;
  if (!this->_internal_title().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_title());
  }

  // bytes bizContent = 3;
  if (!this->_internal_bizcontent().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_bizcontent());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData CsQuestionMessageContent::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    CsQuestionMessageContent::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*CsQuestionMessageContent::GetClassData() const { return &_class_data_; }


void CsQuestionMessageContent::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<CsQuestionMessageContent*>(&to_msg);
  auto& from = static_cast<const CsQuestionMessageContent&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Cloud.Message.CsQuestionMessageContent)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.question_.MergeFrom(from._impl_.question_);
  if (!from._internal_title().empty()) {
    _this->_internal_set_title(from._internal_title());
  }
  if (!from._internal_bizcontent().empty()) {
    _this->_internal_set_bizcontent(from._internal_bizcontent());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void CsQuestionMessageContent::CopyFrom(const CsQuestionMessageContent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Cloud.Message.CsQuestionMessageContent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CsQuestionMessageContent::IsInitialized() const {
  return true;
}

void CsQuestionMessageContent::InternalSwap(CsQuestionMessageContent* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.question_.InternalSwap(&other->_impl_.question_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.title_, lhs_arena,
      &other->_impl_.title_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.bizcontent_, lhs_arena,
      &other->_impl_.bizcontent_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata CsQuestionMessageContent::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_CsQuestionMessageContent_2eproto_getter, &descriptor_table_CsQuestionMessageContent_2eproto_once,
      file_level_metadata_CsQuestionMessageContent_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Cloud::Message::CsQuestionMessageContent_CsQuestion*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Cloud::Message::CsQuestionMessageContent_CsQuestion >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Cloud::Message::CsQuestionMessageContent_CsQuestion >(arena);
}
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Cloud::Message::CsQuestionMessageContent*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Cloud::Message::CsQuestionMessageContent >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Cloud::Message::CsQuestionMessageContent >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
