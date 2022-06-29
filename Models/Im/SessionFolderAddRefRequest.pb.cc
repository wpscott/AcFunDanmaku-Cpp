// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SessionFolderAddRefRequest.proto

#include "SessionFolderAddRefRequest.pb.h"

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
PROTOBUF_CONSTEXPR SessionFolderAddRefRequest::SessionFolderAddRefRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.sessionreference_)*/{}
  , /*decltype(_impl_.targetsessionfolderid_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct SessionFolderAddRefRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SessionFolderAddRefRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~SessionFolderAddRefRequestDefaultTypeInternal() {}
  union {
    SessionFolderAddRefRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SessionFolderAddRefRequestDefaultTypeInternal _SessionFolderAddRefRequest_default_instance_;
}  // namespace SessionFolder
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_SessionFolderAddRefRequest_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_SessionFolderAddRefRequest_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_SessionFolderAddRefRequest_2eproto = nullptr;

const uint32_t TableStruct_SessionFolderAddRefRequest_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderAddRefRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderAddRefRequest, _impl_.sessionreference_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderAddRefRequest, _impl_.targetsessionfolderid_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderAddRefRequest)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Cloud::SessionFolder::_SessionFolderAddRefRequest_default_instance_._instance,
};

const char descriptor_table_protodef_SessionFolderAddRefRequest_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n SessionFolderAddRefRequest.proto\022!AcFu"
  "nDanmu.Im.Cloud.SessionFolder\032\026SessionRe"
  "ference.proto\"\212\001\n\032SessionFolderAddRefReq"
  "uest\022M\n\020sessionReference\030\001 \003(\01323.AcFunDa"
  "nmu.Im.Cloud.SessionFolder.SessionRefere"
  "nce\022\035\n\025targetSessionFolderId\030\002 \001(\tb\006prot"
  "o3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_SessionFolderAddRefRequest_2eproto_deps[1] = {
  &::descriptor_table_SessionReference_2eproto,
};
static ::_pbi::once_flag descriptor_table_SessionFolderAddRefRequest_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_SessionFolderAddRefRequest_2eproto = {
    false, false, 242, descriptor_table_protodef_SessionFolderAddRefRequest_2eproto,
    "SessionFolderAddRefRequest.proto",
    &descriptor_table_SessionFolderAddRefRequest_2eproto_once, descriptor_table_SessionFolderAddRefRequest_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_SessionFolderAddRefRequest_2eproto::offsets,
    file_level_metadata_SessionFolderAddRefRequest_2eproto, file_level_enum_descriptors_SessionFolderAddRefRequest_2eproto,
    file_level_service_descriptors_SessionFolderAddRefRequest_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_SessionFolderAddRefRequest_2eproto_getter() {
  return &descriptor_table_SessionFolderAddRefRequest_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_SessionFolderAddRefRequest_2eproto(&descriptor_table_SessionFolderAddRefRequest_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace SessionFolder {

// ===================================================================

class SessionFolderAddRefRequest::_Internal {
 public:
};

void SessionFolderAddRefRequest::clear_sessionreference() {
  _impl_.sessionreference_.Clear();
}
SessionFolderAddRefRequest::SessionFolderAddRefRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderAddRefRequest)
}
SessionFolderAddRefRequest::SessionFolderAddRefRequest(const SessionFolderAddRefRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  SessionFolderAddRefRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.sessionreference_){from._impl_.sessionreference_}
    , decltype(_impl_.targetsessionfolderid_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.targetsessionfolderid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.targetsessionfolderid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_targetsessionfolderid().empty()) {
    _this->_impl_.targetsessionfolderid_.Set(from._internal_targetsessionfolderid(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderAddRefRequest)
}

inline void SessionFolderAddRefRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.sessionreference_){arena}
    , decltype(_impl_.targetsessionfolderid_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.targetsessionfolderid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.targetsessionfolderid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

SessionFolderAddRefRequest::~SessionFolderAddRefRequest() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderAddRefRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SessionFolderAddRefRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.sessionreference_.~RepeatedPtrField();
  _impl_.targetsessionfolderid_.Destroy();
}

void SessionFolderAddRefRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void SessionFolderAddRefRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderAddRefRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.sessionreference_.Clear();
  _impl_.targetsessionfolderid_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SessionFolderAddRefRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .AcFunDanmu.Im.Cloud.SessionFolder.SessionReference sessionReference = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_sessionreference(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else
          goto handle_unusual;
        continue;
      // string targetSessionFolderId = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_targetsessionfolderid();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderAddRefRequest.targetSessionFolderId"));
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

uint8_t* SessionFolderAddRefRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderAddRefRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .AcFunDanmu.Im.Cloud.SessionFolder.SessionReference sessionReference = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_sessionreference_size()); i < n; i++) {
    const auto& repfield = this->_internal_sessionreference(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  // string targetSessionFolderId = 2;
  if (!this->_internal_targetsessionfolderid().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_targetsessionfolderid().data(), static_cast<int>(this->_internal_targetsessionfolderid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderAddRefRequest.targetSessionFolderId");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_targetsessionfolderid(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderAddRefRequest)
  return target;
}

size_t SessionFolderAddRefRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderAddRefRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .AcFunDanmu.Im.Cloud.SessionFolder.SessionReference sessionReference = 1;
  total_size += 1UL * this->_internal_sessionreference_size();
  for (const auto& msg : this->_impl_.sessionreference_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // string targetSessionFolderId = 2;
  if (!this->_internal_targetsessionfolderid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_targetsessionfolderid());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SessionFolderAddRefRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    SessionFolderAddRefRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SessionFolderAddRefRequest::GetClassData() const { return &_class_data_; }


void SessionFolderAddRefRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<SessionFolderAddRefRequest*>(&to_msg);
  auto& from = static_cast<const SessionFolderAddRefRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderAddRefRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.sessionreference_.MergeFrom(from._impl_.sessionreference_);
  if (!from._internal_targetsessionfolderid().empty()) {
    _this->_internal_set_targetsessionfolderid(from._internal_targetsessionfolderid());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SessionFolderAddRefRequest::CopyFrom(const SessionFolderAddRefRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderAddRefRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SessionFolderAddRefRequest::IsInitialized() const {
  return true;
}

void SessionFolderAddRefRequest::InternalSwap(SessionFolderAddRefRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.sessionreference_.InternalSwap(&other->_impl_.sessionreference_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.targetsessionfolderid_, lhs_arena,
      &other->_impl_.targetsessionfolderid_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata SessionFolderAddRefRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_SessionFolderAddRefRequest_2eproto_getter, &descriptor_table_SessionFolderAddRefRequest_2eproto_once,
      file_level_metadata_SessionFolderAddRefRequest_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace SessionFolder
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderAddRefRequest*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderAddRefRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderAddRefRequest >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
