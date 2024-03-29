// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SessionSearchResponse.proto

#include "SessionSearchResponse.pb.h"

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
namespace Search {
PROTOBUF_CONSTEXPR SessionSearchResponse::SessionSearchResponse(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.userresult_)*/{}
  , /*decltype(_impl_.groupresult_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct SessionSearchResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SessionSearchResponseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~SessionSearchResponseDefaultTypeInternal() {}
  union {
    SessionSearchResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SessionSearchResponseDefaultTypeInternal _SessionSearchResponse_default_instance_;
}  // namespace Search
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_SessionSearchResponse_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_SessionSearchResponse_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_SessionSearchResponse_2eproto = nullptr;

const uint32_t TableStruct_SessionSearchResponse_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Search::SessionSearchResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Search::SessionSearchResponse, _impl_.userresult_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Search::SessionSearchResponse, _impl_.groupresult_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Cloud::Search::SessionSearchResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Cloud::Search::_SessionSearchResponse_default_instance_._instance,
};

const char descriptor_table_protodef_SessionSearchResponse_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\033SessionSearchResponse.proto\022\032AcFunDanm"
  "u.Im.Cloud.Search\032\032GroupMsgSearchResult."
  "proto\032\031UserMsgSearchResult.proto\"\243\001\n\025Ses"
  "sionSearchResponse\022C\n\nuserResult\030\001 \003(\0132/"
  ".AcFunDanmu.Im.Cloud.Search.UserMsgSearc"
  "hResult\022E\n\013groupResult\030\002 \003(\01320.AcFunDanm"
  "u.Im.Cloud.Search.GroupMsgSearchResultb\006"
  "proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_SessionSearchResponse_2eproto_deps[2] = {
  &::descriptor_table_GroupMsgSearchResult_2eproto,
  &::descriptor_table_UserMsgSearchResult_2eproto,
};
static ::_pbi::once_flag descriptor_table_SessionSearchResponse_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_SessionSearchResponse_2eproto = {
    false, false, 286, descriptor_table_protodef_SessionSearchResponse_2eproto,
    "SessionSearchResponse.proto",
    &descriptor_table_SessionSearchResponse_2eproto_once, descriptor_table_SessionSearchResponse_2eproto_deps, 2, 1,
    schemas, file_default_instances, TableStruct_SessionSearchResponse_2eproto::offsets,
    file_level_metadata_SessionSearchResponse_2eproto, file_level_enum_descriptors_SessionSearchResponse_2eproto,
    file_level_service_descriptors_SessionSearchResponse_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_SessionSearchResponse_2eproto_getter() {
  return &descriptor_table_SessionSearchResponse_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_SessionSearchResponse_2eproto(&descriptor_table_SessionSearchResponse_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Search {

// ===================================================================

class SessionSearchResponse::_Internal {
 public:
};

void SessionSearchResponse::clear_userresult() {
  _impl_.userresult_.Clear();
}
void SessionSearchResponse::clear_groupresult() {
  _impl_.groupresult_.Clear();
}
SessionSearchResponse::SessionSearchResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Cloud.Search.SessionSearchResponse)
}
SessionSearchResponse::SessionSearchResponse(const SessionSearchResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  SessionSearchResponse* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.userresult_){from._impl_.userresult_}
    , decltype(_impl_.groupresult_){from._impl_.groupresult_}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Cloud.Search.SessionSearchResponse)
}

inline void SessionSearchResponse::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.userresult_){arena}
    , decltype(_impl_.groupresult_){arena}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

SessionSearchResponse::~SessionSearchResponse() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Cloud.Search.SessionSearchResponse)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SessionSearchResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.userresult_.~RepeatedPtrField();
  _impl_.groupresult_.~RepeatedPtrField();
}

void SessionSearchResponse::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void SessionSearchResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Cloud.Search.SessionSearchResponse)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.userresult_.Clear();
  _impl_.groupresult_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SessionSearchResponse::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .AcFunDanmu.Im.Cloud.Search.UserMsgSearchResult userResult = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_userresult(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else
          goto handle_unusual;
        continue;
      // repeated .AcFunDanmu.Im.Cloud.Search.GroupMsgSearchResult groupResult = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_groupresult(), ptr);
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

uint8_t* SessionSearchResponse::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Cloud.Search.SessionSearchResponse)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .AcFunDanmu.Im.Cloud.Search.UserMsgSearchResult userResult = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_userresult_size()); i < n; i++) {
    const auto& repfield = this->_internal_userresult(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  // repeated .AcFunDanmu.Im.Cloud.Search.GroupMsgSearchResult groupResult = 2;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_groupresult_size()); i < n; i++) {
    const auto& repfield = this->_internal_groupresult(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(2, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Cloud.Search.SessionSearchResponse)
  return target;
}

size_t SessionSearchResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Cloud.Search.SessionSearchResponse)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .AcFunDanmu.Im.Cloud.Search.UserMsgSearchResult userResult = 1;
  total_size += 1UL * this->_internal_userresult_size();
  for (const auto& msg : this->_impl_.userresult_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .AcFunDanmu.Im.Cloud.Search.GroupMsgSearchResult groupResult = 2;
  total_size += 1UL * this->_internal_groupresult_size();
  for (const auto& msg : this->_impl_.groupresult_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SessionSearchResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    SessionSearchResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SessionSearchResponse::GetClassData() const { return &_class_data_; }


void SessionSearchResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<SessionSearchResponse*>(&to_msg);
  auto& from = static_cast<const SessionSearchResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Cloud.Search.SessionSearchResponse)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.userresult_.MergeFrom(from._impl_.userresult_);
  _this->_impl_.groupresult_.MergeFrom(from._impl_.groupresult_);
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SessionSearchResponse::CopyFrom(const SessionSearchResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Cloud.Search.SessionSearchResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SessionSearchResponse::IsInitialized() const {
  return true;
}

void SessionSearchResponse::InternalSwap(SessionSearchResponse* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.userresult_.InternalSwap(&other->_impl_.userresult_);
  _impl_.groupresult_.InternalSwap(&other->_impl_.groupresult_);
}

::PROTOBUF_NAMESPACE_ID::Metadata SessionSearchResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_SessionSearchResponse_2eproto_getter, &descriptor_table_SessionSearchResponse_2eproto_once,
      file_level_metadata_SessionSearchResponse_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Search
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Cloud::Search::SessionSearchResponse*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Cloud::Search::SessionSearchResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Cloud::Search::SessionSearchResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
