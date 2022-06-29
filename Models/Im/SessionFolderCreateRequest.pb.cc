// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SessionFolderCreateRequest.proto

#include "SessionFolderCreateRequest.pb.h"

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
PROTOBUF_CONSTEXPR SessionFolderCreateRequest::SessionFolderCreateRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.chattarget_)*/{}
  , /*decltype(_impl_.name_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.extra_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.iconurl_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct SessionFolderCreateRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SessionFolderCreateRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~SessionFolderCreateRequestDefaultTypeInternal() {}
  union {
    SessionFolderCreateRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SessionFolderCreateRequestDefaultTypeInternal _SessionFolderCreateRequest_default_instance_;
}  // namespace SessionFolder
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_SessionFolderCreateRequest_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_SessionFolderCreateRequest_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_SessionFolderCreateRequest_2eproto = nullptr;

const uint32_t TableStruct_SessionFolderCreateRequest_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderCreateRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderCreateRequest, _impl_.name_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderCreateRequest, _impl_.extra_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderCreateRequest, _impl_.iconurl_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderCreateRequest, _impl_.chattarget_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderCreateRequest)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Cloud::SessionFolder::_SessionFolderCreateRequest_default_instance_._instance,
};

const char descriptor_table_protodef_SessionFolderCreateRequest_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n SessionFolderCreateRequest.proto\022!AcFu"
  "nDanmu.Im.Cloud.SessionFolder\032\020ChatTarge"
  "t.proto\"\201\001\n\032SessionFolderCreateRequest\022\014"
  "\n\004name\030\001 \001(\t\022\r\n\005extra\030\002 \001(\014\022\017\n\007iconUrl\030\003"
  " \001(\t\0225\n\nchatTarget\030\004 \003(\0132!.AcFunDanmu.Im"
  ".Message.ChatTargetb\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_SessionFolderCreateRequest_2eproto_deps[1] = {
  &::descriptor_table_ChatTarget_2eproto,
};
static ::_pbi::once_flag descriptor_table_SessionFolderCreateRequest_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_SessionFolderCreateRequest_2eproto = {
    false, false, 227, descriptor_table_protodef_SessionFolderCreateRequest_2eproto,
    "SessionFolderCreateRequest.proto",
    &descriptor_table_SessionFolderCreateRequest_2eproto_once, descriptor_table_SessionFolderCreateRequest_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_SessionFolderCreateRequest_2eproto::offsets,
    file_level_metadata_SessionFolderCreateRequest_2eproto, file_level_enum_descriptors_SessionFolderCreateRequest_2eproto,
    file_level_service_descriptors_SessionFolderCreateRequest_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_SessionFolderCreateRequest_2eproto_getter() {
  return &descriptor_table_SessionFolderCreateRequest_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_SessionFolderCreateRequest_2eproto(&descriptor_table_SessionFolderCreateRequest_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace SessionFolder {

// ===================================================================

class SessionFolderCreateRequest::_Internal {
 public:
};

void SessionFolderCreateRequest::clear_chattarget() {
  _impl_.chattarget_.Clear();
}
SessionFolderCreateRequest::SessionFolderCreateRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderCreateRequest)
}
SessionFolderCreateRequest::SessionFolderCreateRequest(const SessionFolderCreateRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  SessionFolderCreateRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.chattarget_){from._impl_.chattarget_}
    , decltype(_impl_.name_){}
    , decltype(_impl_.extra_){}
    , decltype(_impl_.iconurl_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_name().empty()) {
    _this->_impl_.name_.Set(from._internal_name(), 
      _this->GetArenaForAllocation());
  }
  _impl_.extra_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.extra_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_extra().empty()) {
    _this->_impl_.extra_.Set(from._internal_extra(), 
      _this->GetArenaForAllocation());
  }
  _impl_.iconurl_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.iconurl_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_iconurl().empty()) {
    _this->_impl_.iconurl_.Set(from._internal_iconurl(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderCreateRequest)
}

inline void SessionFolderCreateRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.chattarget_){arena}
    , decltype(_impl_.name_){}
    , decltype(_impl_.extra_){}
    , decltype(_impl_.iconurl_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.extra_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.extra_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.iconurl_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.iconurl_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

SessionFolderCreateRequest::~SessionFolderCreateRequest() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderCreateRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SessionFolderCreateRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.chattarget_.~RepeatedPtrField();
  _impl_.name_.Destroy();
  _impl_.extra_.Destroy();
  _impl_.iconurl_.Destroy();
}

void SessionFolderCreateRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void SessionFolderCreateRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderCreateRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.chattarget_.Clear();
  _impl_.name_.ClearToEmpty();
  _impl_.extra_.ClearToEmpty();
  _impl_.iconurl_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SessionFolderCreateRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderCreateRequest.name"));
        } else
          goto handle_unusual;
        continue;
      // bytes extra = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_extra();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string iconUrl = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_iconurl();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderCreateRequest.iconUrl"));
        } else
          goto handle_unusual;
        continue;
      // repeated .AcFunDanmu.Im.Message.ChatTarget chatTarget = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_chattarget(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<34>(ptr));
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

uint8_t* SessionFolderCreateRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderCreateRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (!this->_internal_name().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderCreateRequest.name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_name(), target);
  }

  // bytes extra = 2;
  if (!this->_internal_extra().empty()) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_extra(), target);
  }

  // string iconUrl = 3;
  if (!this->_internal_iconurl().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_iconurl().data(), static_cast<int>(this->_internal_iconurl().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderCreateRequest.iconUrl");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_iconurl(), target);
  }

  // repeated .AcFunDanmu.Im.Message.ChatTarget chatTarget = 4;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_chattarget_size()); i < n; i++) {
    const auto& repfield = this->_internal_chattarget(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(4, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderCreateRequest)
  return target;
}

size_t SessionFolderCreateRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderCreateRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .AcFunDanmu.Im.Message.ChatTarget chatTarget = 4;
  total_size += 1UL * this->_internal_chattarget_size();
  for (const auto& msg : this->_impl_.chattarget_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // string name = 1;
  if (!this->_internal_name().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  // bytes extra = 2;
  if (!this->_internal_extra().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_extra());
  }

  // string iconUrl = 3;
  if (!this->_internal_iconurl().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_iconurl());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SessionFolderCreateRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    SessionFolderCreateRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SessionFolderCreateRequest::GetClassData() const { return &_class_data_; }


void SessionFolderCreateRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<SessionFolderCreateRequest*>(&to_msg);
  auto& from = static_cast<const SessionFolderCreateRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderCreateRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.chattarget_.MergeFrom(from._impl_.chattarget_);
  if (!from._internal_name().empty()) {
    _this->_internal_set_name(from._internal_name());
  }
  if (!from._internal_extra().empty()) {
    _this->_internal_set_extra(from._internal_extra());
  }
  if (!from._internal_iconurl().empty()) {
    _this->_internal_set_iconurl(from._internal_iconurl());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SessionFolderCreateRequest::CopyFrom(const SessionFolderCreateRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderCreateRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SessionFolderCreateRequest::IsInitialized() const {
  return true;
}

void SessionFolderCreateRequest::InternalSwap(SessionFolderCreateRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.chattarget_.InternalSwap(&other->_impl_.chattarget_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.name_, lhs_arena,
      &other->_impl_.name_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.extra_, lhs_arena,
      &other->_impl_.extra_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.iconurl_, lhs_arena,
      &other->_impl_.iconurl_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata SessionFolderCreateRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_SessionFolderCreateRequest_2eproto_getter, &descriptor_table_SessionFolderCreateRequest_2eproto_once,
      file_level_metadata_SessionFolderCreateRequest_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace SessionFolder
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderCreateRequest*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderCreateRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderCreateRequest >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
