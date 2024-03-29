// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: EnterSession.proto

#include "EnterSession.pb.h"

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
namespace Message {
PROTOBUF_CONSTEXPR EnterSession::EnterSession(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.pagerefer_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.extrainfo_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.actiontype_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.chattarget_)*/nullptr
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct EnterSessionDefaultTypeInternal {
  PROTOBUF_CONSTEXPR EnterSessionDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~EnterSessionDefaultTypeInternal() {}
  union {
    EnterSession _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 EnterSessionDefaultTypeInternal _EnterSession_default_instance_;
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_EnterSession_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_EnterSession_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_EnterSession_2eproto = nullptr;

const uint32_t TableStruct_EnterSession_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::EnterSession, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::EnterSession, _impl_.chattarget_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::EnterSession, _impl_.pagerefer_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::EnterSession, _impl_.extrainfo_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::EnterSession, _impl_.actiontype_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Message::EnterSession)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Message::_EnterSession_default_instance_._instance,
};

const char descriptor_table_protodef_EnterSession_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\022EnterSession.proto\022\025AcFunDanmu.Im.Mess"
  "age\032\020ChatTarget.proto\"\177\n\014EnterSession\0225\n"
  "\nchatTarget\030\001 \001(\0132!.AcFunDanmu.Im.Messag"
  "e.ChatTarget\022\021\n\tpageRefer\030\002 \001(\t\022\021\n\textra"
  "Info\030\003 \001(\t\022\022\n\nactionType\030\004 \001(\tb\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_EnterSession_2eproto_deps[1] = {
  &::descriptor_table_ChatTarget_2eproto,
};
static ::_pbi::once_flag descriptor_table_EnterSession_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_EnterSession_2eproto = {
    false, false, 198, descriptor_table_protodef_EnterSession_2eproto,
    "EnterSession.proto",
    &descriptor_table_EnterSession_2eproto_once, descriptor_table_EnterSession_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_EnterSession_2eproto::offsets,
    file_level_metadata_EnterSession_2eproto, file_level_enum_descriptors_EnterSession_2eproto,
    file_level_service_descriptors_EnterSession_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_EnterSession_2eproto_getter() {
  return &descriptor_table_EnterSession_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_EnterSession_2eproto(&descriptor_table_EnterSession_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Message {

// ===================================================================

class EnterSession::_Internal {
 public:
  static const ::AcFunDanmu::Im::Message::ChatTarget& chattarget(const EnterSession* msg);
};

const ::AcFunDanmu::Im::Message::ChatTarget&
EnterSession::_Internal::chattarget(const EnterSession* msg) {
  return *msg->_impl_.chattarget_;
}
void EnterSession::clear_chattarget() {
  if (GetArenaForAllocation() == nullptr && _impl_.chattarget_ != nullptr) {
    delete _impl_.chattarget_;
  }
  _impl_.chattarget_ = nullptr;
}
EnterSession::EnterSession(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Message.EnterSession)
}
EnterSession::EnterSession(const EnterSession& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  EnterSession* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.pagerefer_){}
    , decltype(_impl_.extrainfo_){}
    , decltype(_impl_.actiontype_){}
    , decltype(_impl_.chattarget_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.pagerefer_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.pagerefer_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_pagerefer().empty()) {
    _this->_impl_.pagerefer_.Set(from._internal_pagerefer(), 
      _this->GetArenaForAllocation());
  }
  _impl_.extrainfo_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.extrainfo_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_extrainfo().empty()) {
    _this->_impl_.extrainfo_.Set(from._internal_extrainfo(), 
      _this->GetArenaForAllocation());
  }
  _impl_.actiontype_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.actiontype_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_actiontype().empty()) {
    _this->_impl_.actiontype_.Set(from._internal_actiontype(), 
      _this->GetArenaForAllocation());
  }
  if (from._internal_has_chattarget()) {
    _this->_impl_.chattarget_ = new ::AcFunDanmu::Im::Message::ChatTarget(*from._impl_.chattarget_);
  }
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Message.EnterSession)
}

inline void EnterSession::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.pagerefer_){}
    , decltype(_impl_.extrainfo_){}
    , decltype(_impl_.actiontype_){}
    , decltype(_impl_.chattarget_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.pagerefer_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.pagerefer_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.extrainfo_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.extrainfo_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.actiontype_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.actiontype_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

EnterSession::~EnterSession() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Message.EnterSession)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void EnterSession::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.pagerefer_.Destroy();
  _impl_.extrainfo_.Destroy();
  _impl_.actiontype_.Destroy();
  if (this != internal_default_instance()) delete _impl_.chattarget_;
}

void EnterSession::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void EnterSession::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Message.EnterSession)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.pagerefer_.ClearToEmpty();
  _impl_.extrainfo_.ClearToEmpty();
  _impl_.actiontype_.ClearToEmpty();
  if (GetArenaForAllocation() == nullptr && _impl_.chattarget_ != nullptr) {
    delete _impl_.chattarget_;
  }
  _impl_.chattarget_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* EnterSession::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .AcFunDanmu.Im.Message.ChatTarget chatTarget = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_chattarget(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string pageRefer = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_pagerefer();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Message.EnterSession.pageRefer"));
        } else
          goto handle_unusual;
        continue;
      // string extraInfo = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_extrainfo();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Message.EnterSession.extraInfo"));
        } else
          goto handle_unusual;
        continue;
      // string actionType = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_actiontype();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Message.EnterSession.actionType"));
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

uint8_t* EnterSession::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Message.EnterSession)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .AcFunDanmu.Im.Message.ChatTarget chatTarget = 1;
  if (this->_internal_has_chattarget()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::chattarget(this),
        _Internal::chattarget(this).GetCachedSize(), target, stream);
  }

  // string pageRefer = 2;
  if (!this->_internal_pagerefer().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_pagerefer().data(), static_cast<int>(this->_internal_pagerefer().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Message.EnterSession.pageRefer");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_pagerefer(), target);
  }

  // string extraInfo = 3;
  if (!this->_internal_extrainfo().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_extrainfo().data(), static_cast<int>(this->_internal_extrainfo().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Message.EnterSession.extraInfo");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_extrainfo(), target);
  }

  // string actionType = 4;
  if (!this->_internal_actiontype().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_actiontype().data(), static_cast<int>(this->_internal_actiontype().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Message.EnterSession.actionType");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_actiontype(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Message.EnterSession)
  return target;
}

size_t EnterSession::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Message.EnterSession)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string pageRefer = 2;
  if (!this->_internal_pagerefer().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_pagerefer());
  }

  // string extraInfo = 3;
  if (!this->_internal_extrainfo().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_extrainfo());
  }

  // string actionType = 4;
  if (!this->_internal_actiontype().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_actiontype());
  }

  // .AcFunDanmu.Im.Message.ChatTarget chatTarget = 1;
  if (this->_internal_has_chattarget()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.chattarget_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData EnterSession::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    EnterSession::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*EnterSession::GetClassData() const { return &_class_data_; }


void EnterSession::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<EnterSession*>(&to_msg);
  auto& from = static_cast<const EnterSession&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Message.EnterSession)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_pagerefer().empty()) {
    _this->_internal_set_pagerefer(from._internal_pagerefer());
  }
  if (!from._internal_extrainfo().empty()) {
    _this->_internal_set_extrainfo(from._internal_extrainfo());
  }
  if (!from._internal_actiontype().empty()) {
    _this->_internal_set_actiontype(from._internal_actiontype());
  }
  if (from._internal_has_chattarget()) {
    _this->_internal_mutable_chattarget()->::AcFunDanmu::Im::Message::ChatTarget::MergeFrom(
        from._internal_chattarget());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void EnterSession::CopyFrom(const EnterSession& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Message.EnterSession)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EnterSession::IsInitialized() const {
  return true;
}

void EnterSession::InternalSwap(EnterSession* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.pagerefer_, lhs_arena,
      &other->_impl_.pagerefer_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.extrainfo_, lhs_arena,
      &other->_impl_.extrainfo_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.actiontype_, lhs_arena,
      &other->_impl_.actiontype_, rhs_arena
  );
  swap(_impl_.chattarget_, other->_impl_.chattarget_);
}

::PROTOBUF_NAMESPACE_ID::Metadata EnterSession::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_EnterSession_2eproto_getter, &descriptor_table_EnterSession_2eproto_once,
      file_level_metadata_EnterSession_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Message::EnterSession*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Message::EnterSession >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Message::EnterSession >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
