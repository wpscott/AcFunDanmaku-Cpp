// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SessionFolderSortRequest.proto

#include "SessionFolderSortRequest.pb.h"

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
namespace SessionFolder {
PROTOBUF_CONSTEXPR SessionFolderSortRequest::SessionFolderSortRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.sessionfolderid_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct SessionFolderSortRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SessionFolderSortRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~SessionFolderSortRequestDefaultTypeInternal() {}
  union {
    SessionFolderSortRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SessionFolderSortRequestDefaultTypeInternal _SessionFolderSortRequest_default_instance_;
}  // namespace SessionFolder
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_SessionFolderSortRequest_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_SessionFolderSortRequest_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_SessionFolderSortRequest_2eproto = nullptr;

const uint32_t TableStruct_SessionFolderSortRequest_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderSortRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderSortRequest, _impl_.sessionfolderid_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderSortRequest)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Cloud::SessionFolder::_SessionFolderSortRequest_default_instance_._instance,
};

const char descriptor_table_protodef_SessionFolderSortRequest_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\036SessionFolderSortRequest.proto\022!AcFunD"
  "anmu.Im.Cloud.SessionFolder\"3\n\030SessionFo"
  "lderSortRequest\022\027\n\017sessionFolderId\030\001 \003(\t"
  "b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_SessionFolderSortRequest_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_SessionFolderSortRequest_2eproto = {
    false, false, 128, descriptor_table_protodef_SessionFolderSortRequest_2eproto,
    "SessionFolderSortRequest.proto",
    &descriptor_table_SessionFolderSortRequest_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_SessionFolderSortRequest_2eproto::offsets,
    file_level_metadata_SessionFolderSortRequest_2eproto, file_level_enum_descriptors_SessionFolderSortRequest_2eproto,
    file_level_service_descriptors_SessionFolderSortRequest_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_SessionFolderSortRequest_2eproto_getter() {
  return &descriptor_table_SessionFolderSortRequest_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_SessionFolderSortRequest_2eproto(&descriptor_table_SessionFolderSortRequest_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace SessionFolder {

// ===================================================================

class SessionFolderSortRequest::_Internal {
 public:
};

SessionFolderSortRequest::SessionFolderSortRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderSortRequest)
}
SessionFolderSortRequest::SessionFolderSortRequest(const SessionFolderSortRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  SessionFolderSortRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.sessionfolderid_){from._impl_.sessionfolderid_}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderSortRequest)
}

inline void SessionFolderSortRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.sessionfolderid_){arena}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

SessionFolderSortRequest::~SessionFolderSortRequest() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderSortRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SessionFolderSortRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.sessionfolderid_.~RepeatedPtrField();
}

void SessionFolderSortRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void SessionFolderSortRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderSortRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.sessionfolderid_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SessionFolderSortRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated string sessionFolderId = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_sessionfolderid();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderSortRequest.sessionFolderId"));
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
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

uint8_t* SessionFolderSortRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderSortRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated string sessionFolderId = 1;
  for (int i = 0, n = this->_internal_sessionfolderid_size(); i < n; i++) {
    const auto& s = this->_internal_sessionfolderid(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderSortRequest.sessionFolderId");
    target = stream->WriteString(1, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderSortRequest)
  return target;
}

size_t SessionFolderSortRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderSortRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string sessionFolderId = 1;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_impl_.sessionfolderid_.size());
  for (int i = 0, n = _impl_.sessionfolderid_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      _impl_.sessionfolderid_.Get(i));
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SessionFolderSortRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    SessionFolderSortRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SessionFolderSortRequest::GetClassData() const { return &_class_data_; }


void SessionFolderSortRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<SessionFolderSortRequest*>(&to_msg);
  auto& from = static_cast<const SessionFolderSortRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderSortRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.sessionfolderid_.MergeFrom(from._impl_.sessionfolderid_);
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SessionFolderSortRequest::CopyFrom(const SessionFolderSortRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderSortRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SessionFolderSortRequest::IsInitialized() const {
  return true;
}

void SessionFolderSortRequest::InternalSwap(SessionFolderSortRequest* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.sessionfolderid_.InternalSwap(&other->_impl_.sessionfolderid_);
}

::PROTOBUF_NAMESPACE_ID::Metadata SessionFolderSortRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_SessionFolderSortRequest_2eproto_getter, &descriptor_table_SessionFolderSortRequest_2eproto_once,
      file_level_metadata_SessionFolderSortRequest_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace SessionFolder
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderSortRequest*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderSortRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderSortRequest >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
