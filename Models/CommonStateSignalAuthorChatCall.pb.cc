// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CommonStateSignalAuthorChatCall.proto

#include "CommonStateSignalAuthorChatCall.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_AuthorChatPlayerInfo_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_AuthorChatPlayerInfo_AuthorChatPlayerInfo_2eproto;
namespace AcFunDanmu {
class CommonStateSignalAuthorChatCallDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<CommonStateSignalAuthorChatCall> _instance;
} _CommonStateSignalAuthorChatCall_default_instance_;
}  // namespace AcFunDanmu
static void InitDefaultsscc_info_CommonStateSignalAuthorChatCall_CommonStateSignalAuthorChatCall_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::AcFunDanmu::_CommonStateSignalAuthorChatCall_default_instance_;
    new (ptr) ::AcFunDanmu::CommonStateSignalAuthorChatCall();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_CommonStateSignalAuthorChatCall_CommonStateSignalAuthorChatCall_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_CommonStateSignalAuthorChatCall_CommonStateSignalAuthorChatCall_2eproto}, {
      &scc_info_AuthorChatPlayerInfo_AuthorChatPlayerInfo_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_CommonStateSignalAuthorChatCall_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_CommonStateSignalAuthorChatCall_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_CommonStateSignalAuthorChatCall_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_CommonStateSignalAuthorChatCall_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonStateSignalAuthorChatCall, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonStateSignalAuthorChatCall, authorchatid_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonStateSignalAuthorChatCall, inviteruserinfo_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonStateSignalAuthorChatCall, calltimestampms_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::AcFunDanmu::CommonStateSignalAuthorChatCall)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::AcFunDanmu::_CommonStateSignalAuthorChatCall_default_instance_),
};

const char descriptor_table_protodef_CommonStateSignalAuthorChatCall_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n%CommonStateSignalAuthorChatCall.proto\022"
  "\nAcFunDanmu\032\032AuthorChatPlayerInfo.proto\""
  "\213\001\n\037CommonStateSignalAuthorChatCall\022\024\n\014a"
  "uthorChatId\030\001 \001(\t\0229\n\017inviterUserInfo\030\002 \001"
  "(\0132 .AcFunDanmu.AuthorChatPlayerInfo\022\027\n\017"
  "callTimestampMs\030\003 \001(\003b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_CommonStateSignalAuthorChatCall_2eproto_deps[1] = {
  &::descriptor_table_AuthorChatPlayerInfo_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_CommonStateSignalAuthorChatCall_2eproto_sccs[1] = {
  &scc_info_CommonStateSignalAuthorChatCall_CommonStateSignalAuthorChatCall_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_CommonStateSignalAuthorChatCall_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_CommonStateSignalAuthorChatCall_2eproto = {
  false, false, descriptor_table_protodef_CommonStateSignalAuthorChatCall_2eproto, "CommonStateSignalAuthorChatCall.proto", 229,
  &descriptor_table_CommonStateSignalAuthorChatCall_2eproto_once, descriptor_table_CommonStateSignalAuthorChatCall_2eproto_sccs, descriptor_table_CommonStateSignalAuthorChatCall_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_CommonStateSignalAuthorChatCall_2eproto::offsets,
  file_level_metadata_CommonStateSignalAuthorChatCall_2eproto, 1, file_level_enum_descriptors_CommonStateSignalAuthorChatCall_2eproto, file_level_service_descriptors_CommonStateSignalAuthorChatCall_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_CommonStateSignalAuthorChatCall_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_CommonStateSignalAuthorChatCall_2eproto)), true);
namespace AcFunDanmu {

// ===================================================================

class CommonStateSignalAuthorChatCall::_Internal {
 public:
  static const ::AcFunDanmu::AuthorChatPlayerInfo& inviteruserinfo(const CommonStateSignalAuthorChatCall* msg);
};

const ::AcFunDanmu::AuthorChatPlayerInfo&
CommonStateSignalAuthorChatCall::_Internal::inviteruserinfo(const CommonStateSignalAuthorChatCall* msg) {
  return *msg->inviteruserinfo_;
}
void CommonStateSignalAuthorChatCall::clear_inviteruserinfo() {
  if (GetArena() == nullptr && inviteruserinfo_ != nullptr) {
    delete inviteruserinfo_;
  }
  inviteruserinfo_ = nullptr;
}
CommonStateSignalAuthorChatCall::CommonStateSignalAuthorChatCall(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.CommonStateSignalAuthorChatCall)
}
CommonStateSignalAuthorChatCall::CommonStateSignalAuthorChatCall(const CommonStateSignalAuthorChatCall& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  authorchatid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_authorchatid().empty()) {
    authorchatid_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_authorchatid(), 
      GetArena());
  }
  if (from._internal_has_inviteruserinfo()) {
    inviteruserinfo_ = new ::AcFunDanmu::AuthorChatPlayerInfo(*from.inviteruserinfo_);
  } else {
    inviteruserinfo_ = nullptr;
  }
  calltimestampms_ = from.calltimestampms_;
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.CommonStateSignalAuthorChatCall)
}

void CommonStateSignalAuthorChatCall::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_CommonStateSignalAuthorChatCall_CommonStateSignalAuthorChatCall_2eproto.base);
  authorchatid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
      reinterpret_cast<char*>(&inviteruserinfo_) - reinterpret_cast<char*>(this)),
      0, static_cast<size_t>(reinterpret_cast<char*>(&calltimestampms_) -
      reinterpret_cast<char*>(&inviteruserinfo_)) + sizeof(calltimestampms_));
}

CommonStateSignalAuthorChatCall::~CommonStateSignalAuthorChatCall() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.CommonStateSignalAuthorChatCall)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void CommonStateSignalAuthorChatCall::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  authorchatid_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete inviteruserinfo_;
}

void CommonStateSignalAuthorChatCall::ArenaDtor(void* object) {
  CommonStateSignalAuthorChatCall* _this = reinterpret_cast< CommonStateSignalAuthorChatCall* >(object);
  (void)_this;
}
void CommonStateSignalAuthorChatCall::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void CommonStateSignalAuthorChatCall::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const CommonStateSignalAuthorChatCall& CommonStateSignalAuthorChatCall::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_CommonStateSignalAuthorChatCall_CommonStateSignalAuthorChatCall_2eproto.base);
  return *internal_default_instance();
}


void CommonStateSignalAuthorChatCall::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.CommonStateSignalAuthorChatCall)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  authorchatid_.ClearToEmpty();
  if (GetArena() == nullptr && inviteruserinfo_ != nullptr) {
    delete inviteruserinfo_;
  }
  inviteruserinfo_ = nullptr;
  calltimestampms_ = PROTOBUF_LONGLONG(0);
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* CommonStateSignalAuthorChatCall::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string authorChatId = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_authorchatid();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "AcFunDanmu.CommonStateSignalAuthorChatCall.authorChatId"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .AcFunDanmu.AuthorChatPlayerInfo inviterUserInfo = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_inviteruserinfo(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int64 callTimestampMs = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          calltimestampms_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* CommonStateSignalAuthorChatCall::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.CommonStateSignalAuthorChatCall)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string authorChatId = 1;
  if (this->authorchatid().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_authorchatid().data(), static_cast<int>(this->_internal_authorchatid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.CommonStateSignalAuthorChatCall.authorChatId");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_authorchatid(), target);
  }

  // .AcFunDanmu.AuthorChatPlayerInfo inviterUserInfo = 2;
  if (this->has_inviteruserinfo()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::inviteruserinfo(this), target, stream);
  }

  // int64 callTimestampMs = 3;
  if (this->calltimestampms() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(3, this->_internal_calltimestampms(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.CommonStateSignalAuthorChatCall)
  return target;
}

size_t CommonStateSignalAuthorChatCall::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.CommonStateSignalAuthorChatCall)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string authorChatId = 1;
  if (this->authorchatid().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_authorchatid());
  }

  // .AcFunDanmu.AuthorChatPlayerInfo inviterUserInfo = 2;
  if (this->has_inviteruserinfo()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *inviteruserinfo_);
  }

  // int64 callTimestampMs = 3;
  if (this->calltimestampms() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_calltimestampms());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void CommonStateSignalAuthorChatCall::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:AcFunDanmu.CommonStateSignalAuthorChatCall)
  GOOGLE_DCHECK_NE(&from, this);
  const CommonStateSignalAuthorChatCall* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<CommonStateSignalAuthorChatCall>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:AcFunDanmu.CommonStateSignalAuthorChatCall)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:AcFunDanmu.CommonStateSignalAuthorChatCall)
    MergeFrom(*source);
  }
}

void CommonStateSignalAuthorChatCall::MergeFrom(const CommonStateSignalAuthorChatCall& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.CommonStateSignalAuthorChatCall)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.authorchatid().size() > 0) {
    _internal_set_authorchatid(from._internal_authorchatid());
  }
  if (from.has_inviteruserinfo()) {
    _internal_mutable_inviteruserinfo()->::AcFunDanmu::AuthorChatPlayerInfo::MergeFrom(from._internal_inviteruserinfo());
  }
  if (from.calltimestampms() != 0) {
    _internal_set_calltimestampms(from._internal_calltimestampms());
  }
}

void CommonStateSignalAuthorChatCall::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:AcFunDanmu.CommonStateSignalAuthorChatCall)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CommonStateSignalAuthorChatCall::CopyFrom(const CommonStateSignalAuthorChatCall& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.CommonStateSignalAuthorChatCall)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CommonStateSignalAuthorChatCall::IsInitialized() const {
  return true;
}

void CommonStateSignalAuthorChatCall::InternalSwap(CommonStateSignalAuthorChatCall* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  authorchatid_.Swap(&other->authorchatid_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(CommonStateSignalAuthorChatCall, calltimestampms_)
      + sizeof(CommonStateSignalAuthorChatCall::calltimestampms_)
      - PROTOBUF_FIELD_OFFSET(CommonStateSignalAuthorChatCall, inviteruserinfo_)>(
          reinterpret_cast<char*>(&inviteruserinfo_),
          reinterpret_cast<char*>(&other->inviteruserinfo_));
}

::PROTOBUF_NAMESPACE_ID::Metadata CommonStateSignalAuthorChatCall::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::CommonStateSignalAuthorChatCall* Arena::CreateMaybeMessage< ::AcFunDanmu::CommonStateSignalAuthorChatCall >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::CommonStateSignalAuthorChatCall >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
