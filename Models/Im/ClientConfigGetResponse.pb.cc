// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ClientConfigGetResponse.proto

#include "ClientConfigGetResponse.pb.h"

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
namespace Config {
PROTOBUF_CONSTEXPR ClientConfigGetResponse::ClientConfigGetResponse(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.clientconfig_)*/nullptr
  , /*decltype(_impl_.version_)*/0u
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct ClientConfigGetResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ClientConfigGetResponseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ClientConfigGetResponseDefaultTypeInternal() {}
  union {
    ClientConfigGetResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ClientConfigGetResponseDefaultTypeInternal _ClientConfigGetResponse_default_instance_;
}  // namespace Config
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_ClientConfigGetResponse_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_ClientConfigGetResponse_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_ClientConfigGetResponse_2eproto = nullptr;

const uint32_t TableStruct_ClientConfigGetResponse_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Config::ClientConfigGetResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Config::ClientConfigGetResponse, _impl_.version_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Config::ClientConfigGetResponse, _impl_.clientconfig_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Cloud::Config::ClientConfigGetResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Cloud::Config::_ClientConfigGetResponse_default_instance_._instance,
};

const char descriptor_table_protodef_ClientConfigGetResponse_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\035ClientConfigGetResponse.proto\022\032AcFunDa"
  "nmu.Im.Cloud.Config\032\022ClientConfig.proto\""
  "j\n\027ClientConfigGetResponse\022\017\n\007version\030\001 "
  "\001(\r\022>\n\014clientConfig\030\002 \001(\0132(.AcFunDanmu.I"
  "m.Cloud.Config.ClientConfigb\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_ClientConfigGetResponse_2eproto_deps[1] = {
  &::descriptor_table_ClientConfig_2eproto,
};
static ::_pbi::once_flag descriptor_table_ClientConfigGetResponse_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_ClientConfigGetResponse_2eproto = {
    false, false, 195, descriptor_table_protodef_ClientConfigGetResponse_2eproto,
    "ClientConfigGetResponse.proto",
    &descriptor_table_ClientConfigGetResponse_2eproto_once, descriptor_table_ClientConfigGetResponse_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_ClientConfigGetResponse_2eproto::offsets,
    file_level_metadata_ClientConfigGetResponse_2eproto, file_level_enum_descriptors_ClientConfigGetResponse_2eproto,
    file_level_service_descriptors_ClientConfigGetResponse_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_ClientConfigGetResponse_2eproto_getter() {
  return &descriptor_table_ClientConfigGetResponse_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_ClientConfigGetResponse_2eproto(&descriptor_table_ClientConfigGetResponse_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Config {

// ===================================================================

class ClientConfigGetResponse::_Internal {
 public:
  static const ::AcFunDanmu::Im::Cloud::Config::ClientConfig& clientconfig(const ClientConfigGetResponse* msg);
};

const ::AcFunDanmu::Im::Cloud::Config::ClientConfig&
ClientConfigGetResponse::_Internal::clientconfig(const ClientConfigGetResponse* msg) {
  return *msg->_impl_.clientconfig_;
}
void ClientConfigGetResponse::clear_clientconfig() {
  if (GetArenaForAllocation() == nullptr && _impl_.clientconfig_ != nullptr) {
    delete _impl_.clientconfig_;
  }
  _impl_.clientconfig_ = nullptr;
}
ClientConfigGetResponse::ClientConfigGetResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Cloud.Config.ClientConfigGetResponse)
}
ClientConfigGetResponse::ClientConfigGetResponse(const ClientConfigGetResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  ClientConfigGetResponse* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.clientconfig_){nullptr}
    , decltype(_impl_.version_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_clientconfig()) {
    _this->_impl_.clientconfig_ = new ::AcFunDanmu::Im::Cloud::Config::ClientConfig(*from._impl_.clientconfig_);
  }
  _this->_impl_.version_ = from._impl_.version_;
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Cloud.Config.ClientConfigGetResponse)
}

inline void ClientConfigGetResponse::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.clientconfig_){nullptr}
    , decltype(_impl_.version_){0u}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

ClientConfigGetResponse::~ClientConfigGetResponse() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Cloud.Config.ClientConfigGetResponse)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ClientConfigGetResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete _impl_.clientconfig_;
}

void ClientConfigGetResponse::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ClientConfigGetResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Cloud.Config.ClientConfigGetResponse)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaForAllocation() == nullptr && _impl_.clientconfig_ != nullptr) {
    delete _impl_.clientconfig_;
  }
  _impl_.clientconfig_ = nullptr;
  _impl_.version_ = 0u;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ClientConfigGetResponse::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // uint32 version = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.version_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .AcFunDanmu.Im.Cloud.Config.ClientConfig clientConfig = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_clientconfig(), ptr);
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

uint8_t* ClientConfigGetResponse::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Cloud.Config.ClientConfigGetResponse)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 version = 1;
  if (this->_internal_version() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(1, this->_internal_version(), target);
  }

  // .AcFunDanmu.Im.Cloud.Config.ClientConfig clientConfig = 2;
  if (this->_internal_has_clientconfig()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::clientconfig(this),
        _Internal::clientconfig(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Cloud.Config.ClientConfigGetResponse)
  return target;
}

size_t ClientConfigGetResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Cloud.Config.ClientConfigGetResponse)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .AcFunDanmu.Im.Cloud.Config.ClientConfig clientConfig = 2;
  if (this->_internal_has_clientconfig()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.clientconfig_);
  }

  // uint32 version = 1;
  if (this->_internal_version() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_version());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ClientConfigGetResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    ClientConfigGetResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ClientConfigGetResponse::GetClassData() const { return &_class_data_; }


void ClientConfigGetResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<ClientConfigGetResponse*>(&to_msg);
  auto& from = static_cast<const ClientConfigGetResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Cloud.Config.ClientConfigGetResponse)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_clientconfig()) {
    _this->_internal_mutable_clientconfig()->::AcFunDanmu::Im::Cloud::Config::ClientConfig::MergeFrom(
        from._internal_clientconfig());
  }
  if (from._internal_version() != 0) {
    _this->_internal_set_version(from._internal_version());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ClientConfigGetResponse::CopyFrom(const ClientConfigGetResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Cloud.Config.ClientConfigGetResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ClientConfigGetResponse::IsInitialized() const {
  return true;
}

void ClientConfigGetResponse::InternalSwap(ClientConfigGetResponse* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ClientConfigGetResponse, _impl_.version_)
      + sizeof(ClientConfigGetResponse::_impl_.version_)
      - PROTOBUF_FIELD_OFFSET(ClientConfigGetResponse, _impl_.clientconfig_)>(
          reinterpret_cast<char*>(&_impl_.clientconfig_),
          reinterpret_cast<char*>(&other->_impl_.clientconfig_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ClientConfigGetResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_ClientConfigGetResponse_2eproto_getter, &descriptor_table_ClientConfigGetResponse_2eproto_once,
      file_level_metadata_ClientConfigGetResponse_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Config
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Cloud::Config::ClientConfigGetResponse*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Cloud::Config::ClientConfigGetResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Cloud::Config::ClientConfigGetResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
