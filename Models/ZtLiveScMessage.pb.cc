// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ZtLiveScMessage.proto

#include "ZtLiveScMessage.pb.h"

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
namespace AcFunDanmu {
constexpr ZtLiveScMessage::ZtLiveScMessage(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : messagetype_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , payload_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , liveid_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , ticket_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , servertimestampms_(int64_t{0})
  , compressiontype_(0)
{}
struct ZtLiveScMessageDefaultTypeInternal {
  constexpr ZtLiveScMessageDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~ZtLiveScMessageDefaultTypeInternal() {}
  union {
    ZtLiveScMessage _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT ZtLiveScMessageDefaultTypeInternal _ZtLiveScMessage_default_instance_;
}  // namespace AcFunDanmu
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_ZtLiveScMessage_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_ZtLiveScMessage_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_ZtLiveScMessage_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_ZtLiveScMessage_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtLiveScMessage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtLiveScMessage, messagetype_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtLiveScMessage, compressiontype_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtLiveScMessage, payload_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtLiveScMessage, liveid_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtLiveScMessage, ticket_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtLiveScMessage, servertimestampms_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::AcFunDanmu::ZtLiveScMessage)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::AcFunDanmu::_ZtLiveScMessage_default_instance_),
};

const char descriptor_table_protodef_ZtLiveScMessage_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\025ZtLiveScMessage.proto\022\nAcFunDanmu\"\354\001\n\017"
  "ZtLiveScMessage\022\023\n\013messageType\030\001 \001(\t\022D\n\017"
  "compressionType\030\002 \001(\0162+.AcFunDanmu.ZtLiv"
  "eScMessage.CompressionType\022\017\n\007payload\030\003 "
  "\001(\014\022\016\n\006liveId\030\004 \001(\t\022\016\n\006ticket\030\005 \001(\t\022\031\n\021s"
  "erverTimestampMs\030\006 \001(\003\"2\n\017CompressionTyp"
  "e\022\013\n\007UNKNOWN\020\000\022\010\n\004NONE\020\001\022\010\n\004GZIP\020\002b\006prot"
  "o3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_ZtLiveScMessage_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ZtLiveScMessage_2eproto = {
  false, false, 282, descriptor_table_protodef_ZtLiveScMessage_2eproto, "ZtLiveScMessage.proto", 
  &descriptor_table_ZtLiveScMessage_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_ZtLiveScMessage_2eproto::offsets,
  file_level_metadata_ZtLiveScMessage_2eproto, file_level_enum_descriptors_ZtLiveScMessage_2eproto, file_level_service_descriptors_ZtLiveScMessage_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_ZtLiveScMessage_2eproto_getter() {
  return &descriptor_table_ZtLiveScMessage_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_ZtLiveScMessage_2eproto(&descriptor_table_ZtLiveScMessage_2eproto);
namespace AcFunDanmu {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ZtLiveScMessage_CompressionType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_ZtLiveScMessage_2eproto);
  return file_level_enum_descriptors_ZtLiveScMessage_2eproto[0];
}
bool ZtLiveScMessage_CompressionType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr ZtLiveScMessage_CompressionType ZtLiveScMessage::UNKNOWN;
constexpr ZtLiveScMessage_CompressionType ZtLiveScMessage::NONE;
constexpr ZtLiveScMessage_CompressionType ZtLiveScMessage::GZIP;
constexpr ZtLiveScMessage_CompressionType ZtLiveScMessage::CompressionType_MIN;
constexpr ZtLiveScMessage_CompressionType ZtLiveScMessage::CompressionType_MAX;
constexpr int ZtLiveScMessage::CompressionType_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

class ZtLiveScMessage::_Internal {
 public:
};

ZtLiveScMessage::ZtLiveScMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.ZtLiveScMessage)
}
ZtLiveScMessage::ZtLiveScMessage(const ZtLiveScMessage& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  messagetype_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_messagetype().empty()) {
    messagetype_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_messagetype(), 
      GetArenaForAllocation());
  }
  payload_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_payload().empty()) {
    payload_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_payload(), 
      GetArenaForAllocation());
  }
  liveid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_liveid().empty()) {
    liveid_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_liveid(), 
      GetArenaForAllocation());
  }
  ticket_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_ticket().empty()) {
    ticket_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_ticket(), 
      GetArenaForAllocation());
  }
  ::memcpy(&servertimestampms_, &from.servertimestampms_,
    static_cast<size_t>(reinterpret_cast<char*>(&compressiontype_) -
    reinterpret_cast<char*>(&servertimestampms_)) + sizeof(compressiontype_));
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.ZtLiveScMessage)
}

void ZtLiveScMessage::SharedCtor() {
messagetype_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
payload_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
liveid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
ticket_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&servertimestampms_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&compressiontype_) -
    reinterpret_cast<char*>(&servertimestampms_)) + sizeof(compressiontype_));
}

ZtLiveScMessage::~ZtLiveScMessage() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.ZtLiveScMessage)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void ZtLiveScMessage::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  messagetype_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  payload_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  liveid_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ticket_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void ZtLiveScMessage::ArenaDtor(void* object) {
  ZtLiveScMessage* _this = reinterpret_cast< ZtLiveScMessage* >(object);
  (void)_this;
}
void ZtLiveScMessage::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ZtLiveScMessage::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void ZtLiveScMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.ZtLiveScMessage)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  messagetype_.ClearToEmpty();
  payload_.ClearToEmpty();
  liveid_.ClearToEmpty();
  ticket_.ClearToEmpty();
  ::memset(&servertimestampms_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&compressiontype_) -
      reinterpret_cast<char*>(&servertimestampms_)) + sizeof(compressiontype_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ZtLiveScMessage::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string messageType = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_messagetype();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "AcFunDanmu.ZtLiveScMessage.messageType"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .AcFunDanmu.ZtLiveScMessage.CompressionType compressionType = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_compressiontype(static_cast<::AcFunDanmu::ZtLiveScMessage_CompressionType>(val));
        } else goto handle_unusual;
        continue;
      // bytes payload = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_payload();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string liveId = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_liveid();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "AcFunDanmu.ZtLiveScMessage.liveId"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string ticket = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          auto str = _internal_mutable_ticket();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "AcFunDanmu.ZtLiveScMessage.ticket"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int64 serverTimestampMs = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 48)) {
          servertimestampms_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* ZtLiveScMessage::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.ZtLiveScMessage)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string messageType = 1;
  if (!this->messagetype().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_messagetype().data(), static_cast<int>(this->_internal_messagetype().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.ZtLiveScMessage.messageType");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_messagetype(), target);
  }

  // .AcFunDanmu.ZtLiveScMessage.CompressionType compressionType = 2;
  if (this->compressiontype() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      2, this->_internal_compressiontype(), target);
  }

  // bytes payload = 3;
  if (!this->payload().empty()) {
    target = stream->WriteBytesMaybeAliased(
        3, this->_internal_payload(), target);
  }

  // string liveId = 4;
  if (!this->liveid().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_liveid().data(), static_cast<int>(this->_internal_liveid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.ZtLiveScMessage.liveId");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_liveid(), target);
  }

  // string ticket = 5;
  if (!this->ticket().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_ticket().data(), static_cast<int>(this->_internal_ticket().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.ZtLiveScMessage.ticket");
    target = stream->WriteStringMaybeAliased(
        5, this->_internal_ticket(), target);
  }

  // int64 serverTimestampMs = 6;
  if (this->servertimestampms() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(6, this->_internal_servertimestampms(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.ZtLiveScMessage)
  return target;
}

size_t ZtLiveScMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.ZtLiveScMessage)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string messageType = 1;
  if (!this->messagetype().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_messagetype());
  }

  // bytes payload = 3;
  if (!this->payload().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_payload());
  }

  // string liveId = 4;
  if (!this->liveid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_liveid());
  }

  // string ticket = 5;
  if (!this->ticket().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_ticket());
  }

  // int64 serverTimestampMs = 6;
  if (this->servertimestampms() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_servertimestampms());
  }

  // .AcFunDanmu.ZtLiveScMessage.CompressionType compressionType = 2;
  if (this->compressiontype() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_compressiontype());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ZtLiveScMessage::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:AcFunDanmu.ZtLiveScMessage)
  GOOGLE_DCHECK_NE(&from, this);
  const ZtLiveScMessage* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ZtLiveScMessage>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:AcFunDanmu.ZtLiveScMessage)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:AcFunDanmu.ZtLiveScMessage)
    MergeFrom(*source);
  }
}

void ZtLiveScMessage::MergeFrom(const ZtLiveScMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.ZtLiveScMessage)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from.messagetype().empty()) {
    _internal_set_messagetype(from._internal_messagetype());
  }
  if (!from.payload().empty()) {
    _internal_set_payload(from._internal_payload());
  }
  if (!from.liveid().empty()) {
    _internal_set_liveid(from._internal_liveid());
  }
  if (!from.ticket().empty()) {
    _internal_set_ticket(from._internal_ticket());
  }
  if (from.servertimestampms() != 0) {
    _internal_set_servertimestampms(from._internal_servertimestampms());
  }
  if (from.compressiontype() != 0) {
    _internal_set_compressiontype(from._internal_compressiontype());
  }
}

void ZtLiveScMessage::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:AcFunDanmu.ZtLiveScMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ZtLiveScMessage::CopyFrom(const ZtLiveScMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.ZtLiveScMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ZtLiveScMessage::IsInitialized() const {
  return true;
}

void ZtLiveScMessage::InternalSwap(ZtLiveScMessage* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &messagetype_, GetArenaForAllocation(),
      &other->messagetype_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &payload_, GetArenaForAllocation(),
      &other->payload_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &liveid_, GetArenaForAllocation(),
      &other->liveid_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &ticket_, GetArenaForAllocation(),
      &other->ticket_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ZtLiveScMessage, compressiontype_)
      + sizeof(ZtLiveScMessage::compressiontype_)
      - PROTOBUF_FIELD_OFFSET(ZtLiveScMessage, servertimestampms_)>(
          reinterpret_cast<char*>(&servertimestampms_),
          reinterpret_cast<char*>(&other->servertimestampms_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ZtLiveScMessage::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_ZtLiveScMessage_2eproto_getter, &descriptor_table_ZtLiveScMessage_2eproto_once,
      file_level_metadata_ZtLiveScMessage_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::ZtLiveScMessage* Arena::CreateMaybeMessage< ::AcFunDanmu::ZtLiveScMessage >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::ZtLiveScMessage >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
