// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Ping.proto

#include "Ping.pb.h"

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
namespace AcFunDanmu {
class PingRequestDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<PingRequest> _instance;
} _PingRequest_default_instance_;
class PingResponseDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<PingResponse> _instance;
} _PingResponse_default_instance_;
}  // namespace AcFunDanmu
static void InitDefaultsscc_info_PingRequest_Ping_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::AcFunDanmu::_PingRequest_default_instance_;
    new (ptr) ::AcFunDanmu::PingRequest();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_PingRequest_Ping_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_PingRequest_Ping_2eproto}, {}};

static void InitDefaultsscc_info_PingResponse_Ping_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::AcFunDanmu::_PingResponse_default_instance_;
    new (ptr) ::AcFunDanmu::PingResponse();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_PingResponse_Ping_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_PingResponse_Ping_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_Ping_2eproto[2];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_Ping_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_Ping_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_Ping_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::PingRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::PingRequest, pingtype_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::PingRequest, pinground_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::PingResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::PingResponse, servertimestamp_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::PingResponse, clientip_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::PingResponse, redirectip_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::PingResponse, redirectport_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::AcFunDanmu::PingRequest)},
  { 7, -1, sizeof(::AcFunDanmu::PingResponse)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::AcFunDanmu::_PingRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::AcFunDanmu::_PingResponse_default_instance_),
};

const char descriptor_table_protodef_Ping_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\nPing.proto\022\nAcFunDanmu\"\225\001\n\013PingRequest"
  "\0222\n\010pingType\030\001 \001(\0162 .AcFunDanmu.PingRequ"
  "est.PingType\022\021\n\tpingRound\030\002 \001(\r\"\?\n\010PingT"
  "ype\022\014\n\010kInvalid\020\000\022\022\n\016kPriorRegister\020\001\022\021\n"
  "\rkPostRegister\020\002\"c\n\014PingResponse\022\027\n\017serv"
  "erTimestamp\030\001 \001(\017\022\020\n\010clientIp\030\002 \001(\007\022\022\n\nr"
  "edirectIp\030\003 \001(\007\022\024\n\014redirectPort\030\004 \001(\rb\006p"
  "roto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_Ping_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_Ping_2eproto_sccs[2] = {
  &scc_info_PingRequest_Ping_2eproto.base,
  &scc_info_PingResponse_Ping_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_Ping_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Ping_2eproto = {
  false, false, descriptor_table_protodef_Ping_2eproto, "Ping.proto", 285,
  &descriptor_table_Ping_2eproto_once, descriptor_table_Ping_2eproto_sccs, descriptor_table_Ping_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_Ping_2eproto::offsets,
  file_level_metadata_Ping_2eproto, 2, file_level_enum_descriptors_Ping_2eproto, file_level_service_descriptors_Ping_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_Ping_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_Ping_2eproto)), true);
namespace AcFunDanmu {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* PingRequest_PingType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_Ping_2eproto);
  return file_level_enum_descriptors_Ping_2eproto[0];
}
bool PingRequest_PingType_IsValid(int value) {
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
constexpr PingRequest_PingType PingRequest::kInvalid;
constexpr PingRequest_PingType PingRequest::kPriorRegister;
constexpr PingRequest_PingType PingRequest::kPostRegister;
constexpr PingRequest_PingType PingRequest::PingType_MIN;
constexpr PingRequest_PingType PingRequest::PingType_MAX;
constexpr int PingRequest::PingType_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

class PingRequest::_Internal {
 public:
};

PingRequest::PingRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.PingRequest)
}
PingRequest::PingRequest(const PingRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&pingtype_, &from.pingtype_,
    static_cast<size_t>(reinterpret_cast<char*>(&pinground_) -
    reinterpret_cast<char*>(&pingtype_)) + sizeof(pinground_));
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.PingRequest)
}

void PingRequest::SharedCtor() {
  ::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
      reinterpret_cast<char*>(&pingtype_) - reinterpret_cast<char*>(this)),
      0, static_cast<size_t>(reinterpret_cast<char*>(&pinground_) -
      reinterpret_cast<char*>(&pingtype_)) + sizeof(pinground_));
}

PingRequest::~PingRequest() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.PingRequest)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void PingRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void PingRequest::ArenaDtor(void* object) {
  PingRequest* _this = reinterpret_cast< PingRequest* >(object);
  (void)_this;
}
void PingRequest::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void PingRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const PingRequest& PingRequest::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_PingRequest_Ping_2eproto.base);
  return *internal_default_instance();
}


void PingRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.PingRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&pingtype_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&pinground_) -
      reinterpret_cast<char*>(&pingtype_)) + sizeof(pinground_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* PingRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .AcFunDanmu.PingRequest.PingType pingType = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_pingtype(static_cast<::AcFunDanmu::PingRequest_PingType>(val));
        } else goto handle_unusual;
        continue;
      // uint32 pingRound = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          pinground_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
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

::PROTOBUF_NAMESPACE_ID::uint8* PingRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.PingRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .AcFunDanmu.PingRequest.PingType pingType = 1;
  if (this->pingtype() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_pingtype(), target);
  }

  // uint32 pingRound = 2;
  if (this->pinground() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(2, this->_internal_pinground(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.PingRequest)
  return target;
}

size_t PingRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.PingRequest)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .AcFunDanmu.PingRequest.PingType pingType = 1;
  if (this->pingtype() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_pingtype());
  }

  // uint32 pingRound = 2;
  if (this->pinground() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_pinground());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void PingRequest::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:AcFunDanmu.PingRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const PingRequest* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<PingRequest>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:AcFunDanmu.PingRequest)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:AcFunDanmu.PingRequest)
    MergeFrom(*source);
  }
}

void PingRequest::MergeFrom(const PingRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.PingRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.pingtype() != 0) {
    _internal_set_pingtype(from._internal_pingtype());
  }
  if (from.pinground() != 0) {
    _internal_set_pinground(from._internal_pinground());
  }
}

void PingRequest::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:AcFunDanmu.PingRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PingRequest::CopyFrom(const PingRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.PingRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PingRequest::IsInitialized() const {
  return true;
}

void PingRequest::InternalSwap(PingRequest* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(PingRequest, pinground_)
      + sizeof(PingRequest::pinground_)
      - PROTOBUF_FIELD_OFFSET(PingRequest, pingtype_)>(
          reinterpret_cast<char*>(&pingtype_),
          reinterpret_cast<char*>(&other->pingtype_));
}

::PROTOBUF_NAMESPACE_ID::Metadata PingRequest::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

class PingResponse::_Internal {
 public:
};

PingResponse::PingResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.PingResponse)
}
PingResponse::PingResponse(const PingResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&servertimestamp_, &from.servertimestamp_,
    static_cast<size_t>(reinterpret_cast<char*>(&redirectport_) -
    reinterpret_cast<char*>(&servertimestamp_)) + sizeof(redirectport_));
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.PingResponse)
}

void PingResponse::SharedCtor() {
  ::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
      reinterpret_cast<char*>(&servertimestamp_) - reinterpret_cast<char*>(this)),
      0, static_cast<size_t>(reinterpret_cast<char*>(&redirectport_) -
      reinterpret_cast<char*>(&servertimestamp_)) + sizeof(redirectport_));
}

PingResponse::~PingResponse() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.PingResponse)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void PingResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void PingResponse::ArenaDtor(void* object) {
  PingResponse* _this = reinterpret_cast< PingResponse* >(object);
  (void)_this;
}
void PingResponse::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void PingResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const PingResponse& PingResponse::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_PingResponse_Ping_2eproto.base);
  return *internal_default_instance();
}


void PingResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.PingResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&servertimestamp_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&redirectport_) -
      reinterpret_cast<char*>(&servertimestamp_)) + sizeof(redirectport_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* PingResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // sfixed32 serverTimestamp = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 13)) {
          servertimestamp_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::PROTOBUF_NAMESPACE_ID::int32>(ptr);
          ptr += sizeof(::PROTOBUF_NAMESPACE_ID::int32);
        } else goto handle_unusual;
        continue;
      // fixed32 clientIp = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 21)) {
          clientip_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::PROTOBUF_NAMESPACE_ID::uint32>(ptr);
          ptr += sizeof(::PROTOBUF_NAMESPACE_ID::uint32);
        } else goto handle_unusual;
        continue;
      // fixed32 redirectIp = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 29)) {
          redirectip_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::PROTOBUF_NAMESPACE_ID::uint32>(ptr);
          ptr += sizeof(::PROTOBUF_NAMESPACE_ID::uint32);
        } else goto handle_unusual;
        continue;
      // uint32 redirectPort = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          redirectport_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
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

::PROTOBUF_NAMESPACE_ID::uint8* PingResponse::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.PingResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // sfixed32 serverTimestamp = 1;
  if (this->servertimestamp() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteSFixed32ToArray(1, this->_internal_servertimestamp(), target);
  }

  // fixed32 clientIp = 2;
  if (this->clientip() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFixed32ToArray(2, this->_internal_clientip(), target);
  }

  // fixed32 redirectIp = 3;
  if (this->redirectip() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFixed32ToArray(3, this->_internal_redirectip(), target);
  }

  // uint32 redirectPort = 4;
  if (this->redirectport() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(4, this->_internal_redirectport(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.PingResponse)
  return target;
}

size_t PingResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.PingResponse)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // sfixed32 serverTimestamp = 1;
  if (this->servertimestamp() != 0) {
    total_size += 1 + 4;
  }

  // fixed32 clientIp = 2;
  if (this->clientip() != 0) {
    total_size += 1 + 4;
  }

  // fixed32 redirectIp = 3;
  if (this->redirectip() != 0) {
    total_size += 1 + 4;
  }

  // uint32 redirectPort = 4;
  if (this->redirectport() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_redirectport());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void PingResponse::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:AcFunDanmu.PingResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const PingResponse* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<PingResponse>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:AcFunDanmu.PingResponse)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:AcFunDanmu.PingResponse)
    MergeFrom(*source);
  }
}

void PingResponse::MergeFrom(const PingResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.PingResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.servertimestamp() != 0) {
    _internal_set_servertimestamp(from._internal_servertimestamp());
  }
  if (from.clientip() != 0) {
    _internal_set_clientip(from._internal_clientip());
  }
  if (from.redirectip() != 0) {
    _internal_set_redirectip(from._internal_redirectip());
  }
  if (from.redirectport() != 0) {
    _internal_set_redirectport(from._internal_redirectport());
  }
}

void PingResponse::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:AcFunDanmu.PingResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PingResponse::CopyFrom(const PingResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.PingResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PingResponse::IsInitialized() const {
  return true;
}

void PingResponse::InternalSwap(PingResponse* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(PingResponse, redirectport_)
      + sizeof(PingResponse::redirectport_)
      - PROTOBUF_FIELD_OFFSET(PingResponse, servertimestamp_)>(
          reinterpret_cast<char*>(&servertimestamp_),
          reinterpret_cast<char*>(&other->servertimestamp_));
}

::PROTOBUF_NAMESPACE_ID::Metadata PingResponse::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::PingRequest* Arena::CreateMaybeMessage< ::AcFunDanmu::PingRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::PingRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::AcFunDanmu::PingResponse* Arena::CreateMaybeMessage< ::AcFunDanmu::PingResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::PingResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
