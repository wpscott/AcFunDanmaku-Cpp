// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: LeaveSession.proto

#include "LeaveSession.pb.h"

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
PROTOBUF_CONSTEXPR LeaveSession::LeaveSession(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.extrainfo_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.actiontype_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.chattarget_)*/nullptr
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct LeaveSessionDefaultTypeInternal {
  PROTOBUF_CONSTEXPR LeaveSessionDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~LeaveSessionDefaultTypeInternal() {}
  union {
    LeaveSession _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 LeaveSessionDefaultTypeInternal _LeaveSession_default_instance_;
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_LeaveSession_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_LeaveSession_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_LeaveSession_2eproto = nullptr;

const uint32_t TableStruct_LeaveSession_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::LeaveSession, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::LeaveSession, _impl_.chattarget_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::LeaveSession, _impl_.extrainfo_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::LeaveSession, _impl_.actiontype_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Message::LeaveSession)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Message::_LeaveSession_default_instance_._instance,
};

const char descriptor_table_protodef_LeaveSession_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\022LeaveSession.proto\022\025AcFunDanmu.Im.Mess"
  "age\032\020ChatTarget.proto\"l\n\014LeaveSession\0225\n"
  "\nchatTarget\030\001 \001(\0132!.AcFunDanmu.Im.Messag"
  "e.ChatTarget\022\021\n\textraInfo\030\002 \001(\t\022\022\n\nactio"
  "nType\030\003 \001(\tb\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_LeaveSession_2eproto_deps[1] = {
  &::descriptor_table_ChatTarget_2eproto,
};
static ::_pbi::once_flag descriptor_table_LeaveSession_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_LeaveSession_2eproto = {
    false, false, 179, descriptor_table_protodef_LeaveSession_2eproto,
    "LeaveSession.proto",
    &descriptor_table_LeaveSession_2eproto_once, descriptor_table_LeaveSession_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_LeaveSession_2eproto::offsets,
    file_level_metadata_LeaveSession_2eproto, file_level_enum_descriptors_LeaveSession_2eproto,
    file_level_service_descriptors_LeaveSession_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_LeaveSession_2eproto_getter() {
  return &descriptor_table_LeaveSession_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_LeaveSession_2eproto(&descriptor_table_LeaveSession_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Message {

// ===================================================================

class LeaveSession::_Internal {
 public:
  static const ::AcFunDanmu::Im::Message::ChatTarget& chattarget(const LeaveSession* msg);
};

const ::AcFunDanmu::Im::Message::ChatTarget&
LeaveSession::_Internal::chattarget(const LeaveSession* msg) {
  return *msg->_impl_.chattarget_;
}
void LeaveSession::clear_chattarget() {
  if (GetArenaForAllocation() == nullptr && _impl_.chattarget_ != nullptr) {
    delete _impl_.chattarget_;
  }
  _impl_.chattarget_ = nullptr;
}
LeaveSession::LeaveSession(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Message.LeaveSession)
}
LeaveSession::LeaveSession(const LeaveSession& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  LeaveSession* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.extrainfo_){}
    , decltype(_impl_.actiontype_){}
    , decltype(_impl_.chattarget_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
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
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Message.LeaveSession)
}

inline void LeaveSession::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.extrainfo_){}
    , decltype(_impl_.actiontype_){}
    , decltype(_impl_.chattarget_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.extrainfo_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.extrainfo_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.actiontype_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.actiontype_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

LeaveSession::~LeaveSession() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Message.LeaveSession)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void LeaveSession::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.extrainfo_.Destroy();
  _impl_.actiontype_.Destroy();
  if (this != internal_default_instance()) delete _impl_.chattarget_;
}

void LeaveSession::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void LeaveSession::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Message.LeaveSession)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.extrainfo_.ClearToEmpty();
  _impl_.actiontype_.ClearToEmpty();
  if (GetArenaForAllocation() == nullptr && _impl_.chattarget_ != nullptr) {
    delete _impl_.chattarget_;
  }
  _impl_.chattarget_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* LeaveSession::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
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
      // string extraInfo = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_extrainfo();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Message.LeaveSession.extraInfo"));
        } else
          goto handle_unusual;
        continue;
      // string actionType = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_actiontype();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Message.LeaveSession.actionType"));
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

uint8_t* LeaveSession::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Message.LeaveSession)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .AcFunDanmu.Im.Message.ChatTarget chatTarget = 1;
  if (this->_internal_has_chattarget()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::chattarget(this),
        _Internal::chattarget(this).GetCachedSize(), target, stream);
  }

  // string extraInfo = 2;
  if (!this->_internal_extrainfo().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_extrainfo().data(), static_cast<int>(this->_internal_extrainfo().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Message.LeaveSession.extraInfo");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_extrainfo(), target);
  }

  // string actionType = 3;
  if (!this->_internal_actiontype().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_actiontype().data(), static_cast<int>(this->_internal_actiontype().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Message.LeaveSession.actionType");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_actiontype(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Message.LeaveSession)
  return target;
}

size_t LeaveSession::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Message.LeaveSession)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string extraInfo = 2;
  if (!this->_internal_extrainfo().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_extrainfo());
  }

  // string actionType = 3;
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

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData LeaveSession::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    LeaveSession::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*LeaveSession::GetClassData() const { return &_class_data_; }


void LeaveSession::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<LeaveSession*>(&to_msg);
  auto& from = static_cast<const LeaveSession&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Message.LeaveSession)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

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

void LeaveSession::CopyFrom(const LeaveSession& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Message.LeaveSession)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LeaveSession::IsInitialized() const {
  return true;
}

void LeaveSession::InternalSwap(LeaveSession* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
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

::PROTOBUF_NAMESPACE_ID::Metadata LeaveSession::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_LeaveSession_2eproto_getter, &descriptor_table_LeaveSession_2eproto_once,
      file_level_metadata_LeaveSession_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Message::LeaveSession*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Message::LeaveSession >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Message::LeaveSession >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
