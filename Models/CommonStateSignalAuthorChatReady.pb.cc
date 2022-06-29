// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CommonStateSignalAuthorChatReady.proto

#include "CommonStateSignalAuthorChatReady.pb.h"

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
PROTOBUF_CONSTEXPR CommonStateSignalAuthorChatReady::CommonStateSignalAuthorChatReady(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.authorchatid_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.inviteruserinfo_)*/nullptr
  , /*decltype(_impl_.inviteeuserinfo_)*/nullptr
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct CommonStateSignalAuthorChatReadyDefaultTypeInternal {
  PROTOBUF_CONSTEXPR CommonStateSignalAuthorChatReadyDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~CommonStateSignalAuthorChatReadyDefaultTypeInternal() {}
  union {
    CommonStateSignalAuthorChatReady _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 CommonStateSignalAuthorChatReadyDefaultTypeInternal _CommonStateSignalAuthorChatReady_default_instance_;
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_CommonStateSignalAuthorChatReady_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_CommonStateSignalAuthorChatReady_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_CommonStateSignalAuthorChatReady_2eproto = nullptr;

const uint32_t TableStruct_CommonStateSignalAuthorChatReady_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonStateSignalAuthorChatReady, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonStateSignalAuthorChatReady, _impl_.authorchatid_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonStateSignalAuthorChatReady, _impl_.inviteruserinfo_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonStateSignalAuthorChatReady, _impl_.inviteeuserinfo_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::CommonStateSignalAuthorChatReady)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::_CommonStateSignalAuthorChatReady_default_instance_._instance,
};

const char descriptor_table_protodef_CommonStateSignalAuthorChatReady_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n&CommonStateSignalAuthorChatReady.proto"
  "\022\nAcFunDanmu\032\032AuthorChatPlayerInfo.proto"
  "\"\256\001\n CommonStateSignalAuthorChatReady\022\024\n"
  "\014authorChatId\030\001 \001(\t\0229\n\017inviterUserInfo\030\002"
  " \001(\0132 .AcFunDanmu.AuthorChatPlayerInfo\0229"
  "\n\017inviteeUserInfo\030\003 \001(\0132 .AcFunDanmu.Aut"
  "horChatPlayerInfob\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_CommonStateSignalAuthorChatReady_2eproto_deps[1] = {
  &::descriptor_table_AuthorChatPlayerInfo_2eproto,
};
static ::_pbi::once_flag descriptor_table_CommonStateSignalAuthorChatReady_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_CommonStateSignalAuthorChatReady_2eproto = {
    false, false, 265, descriptor_table_protodef_CommonStateSignalAuthorChatReady_2eproto,
    "CommonStateSignalAuthorChatReady.proto",
    &descriptor_table_CommonStateSignalAuthorChatReady_2eproto_once, descriptor_table_CommonStateSignalAuthorChatReady_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_CommonStateSignalAuthorChatReady_2eproto::offsets,
    file_level_metadata_CommonStateSignalAuthorChatReady_2eproto, file_level_enum_descriptors_CommonStateSignalAuthorChatReady_2eproto,
    file_level_service_descriptors_CommonStateSignalAuthorChatReady_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_CommonStateSignalAuthorChatReady_2eproto_getter() {
  return &descriptor_table_CommonStateSignalAuthorChatReady_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_CommonStateSignalAuthorChatReady_2eproto(&descriptor_table_CommonStateSignalAuthorChatReady_2eproto);
namespace AcFunDanmu {

// ===================================================================

class CommonStateSignalAuthorChatReady::_Internal {
 public:
  static const ::AcFunDanmu::AuthorChatPlayerInfo& inviteruserinfo(const CommonStateSignalAuthorChatReady* msg);
  static const ::AcFunDanmu::AuthorChatPlayerInfo& inviteeuserinfo(const CommonStateSignalAuthorChatReady* msg);
};

const ::AcFunDanmu::AuthorChatPlayerInfo&
CommonStateSignalAuthorChatReady::_Internal::inviteruserinfo(const CommonStateSignalAuthorChatReady* msg) {
  return *msg->_impl_.inviteruserinfo_;
}
const ::AcFunDanmu::AuthorChatPlayerInfo&
CommonStateSignalAuthorChatReady::_Internal::inviteeuserinfo(const CommonStateSignalAuthorChatReady* msg) {
  return *msg->_impl_.inviteeuserinfo_;
}
void CommonStateSignalAuthorChatReady::clear_inviteruserinfo() {
  if (GetArenaForAllocation() == nullptr && _impl_.inviteruserinfo_ != nullptr) {
    delete _impl_.inviteruserinfo_;
  }
  _impl_.inviteruserinfo_ = nullptr;
}
void CommonStateSignalAuthorChatReady::clear_inviteeuserinfo() {
  if (GetArenaForAllocation() == nullptr && _impl_.inviteeuserinfo_ != nullptr) {
    delete _impl_.inviteeuserinfo_;
  }
  _impl_.inviteeuserinfo_ = nullptr;
}
CommonStateSignalAuthorChatReady::CommonStateSignalAuthorChatReady(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.CommonStateSignalAuthorChatReady)
}
CommonStateSignalAuthorChatReady::CommonStateSignalAuthorChatReady(const CommonStateSignalAuthorChatReady& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  CommonStateSignalAuthorChatReady* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.authorchatid_){}
    , decltype(_impl_.inviteruserinfo_){nullptr}
    , decltype(_impl_.inviteeuserinfo_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.authorchatid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.authorchatid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_authorchatid().empty()) {
    _this->_impl_.authorchatid_.Set(from._internal_authorchatid(), 
      _this->GetArenaForAllocation());
  }
  if (from._internal_has_inviteruserinfo()) {
    _this->_impl_.inviteruserinfo_ = new ::AcFunDanmu::AuthorChatPlayerInfo(*from._impl_.inviteruserinfo_);
  }
  if (from._internal_has_inviteeuserinfo()) {
    _this->_impl_.inviteeuserinfo_ = new ::AcFunDanmu::AuthorChatPlayerInfo(*from._impl_.inviteeuserinfo_);
  }
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.CommonStateSignalAuthorChatReady)
}

inline void CommonStateSignalAuthorChatReady::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.authorchatid_){}
    , decltype(_impl_.inviteruserinfo_){nullptr}
    , decltype(_impl_.inviteeuserinfo_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.authorchatid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.authorchatid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

CommonStateSignalAuthorChatReady::~CommonStateSignalAuthorChatReady() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.CommonStateSignalAuthorChatReady)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void CommonStateSignalAuthorChatReady::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.authorchatid_.Destroy();
  if (this != internal_default_instance()) delete _impl_.inviteruserinfo_;
  if (this != internal_default_instance()) delete _impl_.inviteeuserinfo_;
}

void CommonStateSignalAuthorChatReady::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void CommonStateSignalAuthorChatReady::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.CommonStateSignalAuthorChatReady)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.authorchatid_.ClearToEmpty();
  if (GetArenaForAllocation() == nullptr && _impl_.inviteruserinfo_ != nullptr) {
    delete _impl_.inviteruserinfo_;
  }
  _impl_.inviteruserinfo_ = nullptr;
  if (GetArenaForAllocation() == nullptr && _impl_.inviteeuserinfo_ != nullptr) {
    delete _impl_.inviteeuserinfo_;
  }
  _impl_.inviteeuserinfo_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* CommonStateSignalAuthorChatReady::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string authorChatId = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_authorchatid();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.CommonStateSignalAuthorChatReady.authorChatId"));
        } else
          goto handle_unusual;
        continue;
      // .AcFunDanmu.AuthorChatPlayerInfo inviterUserInfo = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_inviteruserinfo(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .AcFunDanmu.AuthorChatPlayerInfo inviteeUserInfo = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_inviteeuserinfo(), ptr);
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

uint8_t* CommonStateSignalAuthorChatReady::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.CommonStateSignalAuthorChatReady)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string authorChatId = 1;
  if (!this->_internal_authorchatid().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_authorchatid().data(), static_cast<int>(this->_internal_authorchatid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.CommonStateSignalAuthorChatReady.authorChatId");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_authorchatid(), target);
  }

  // .AcFunDanmu.AuthorChatPlayerInfo inviterUserInfo = 2;
  if (this->_internal_has_inviteruserinfo()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::inviteruserinfo(this),
        _Internal::inviteruserinfo(this).GetCachedSize(), target, stream);
  }

  // .AcFunDanmu.AuthorChatPlayerInfo inviteeUserInfo = 3;
  if (this->_internal_has_inviteeuserinfo()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, _Internal::inviteeuserinfo(this),
        _Internal::inviteeuserinfo(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.CommonStateSignalAuthorChatReady)
  return target;
}

size_t CommonStateSignalAuthorChatReady::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.CommonStateSignalAuthorChatReady)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string authorChatId = 1;
  if (!this->_internal_authorchatid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_authorchatid());
  }

  // .AcFunDanmu.AuthorChatPlayerInfo inviterUserInfo = 2;
  if (this->_internal_has_inviteruserinfo()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.inviteruserinfo_);
  }

  // .AcFunDanmu.AuthorChatPlayerInfo inviteeUserInfo = 3;
  if (this->_internal_has_inviteeuserinfo()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.inviteeuserinfo_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData CommonStateSignalAuthorChatReady::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    CommonStateSignalAuthorChatReady::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*CommonStateSignalAuthorChatReady::GetClassData() const { return &_class_data_; }


void CommonStateSignalAuthorChatReady::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<CommonStateSignalAuthorChatReady*>(&to_msg);
  auto& from = static_cast<const CommonStateSignalAuthorChatReady&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.CommonStateSignalAuthorChatReady)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_authorchatid().empty()) {
    _this->_internal_set_authorchatid(from._internal_authorchatid());
  }
  if (from._internal_has_inviteruserinfo()) {
    _this->_internal_mutable_inviteruserinfo()->::AcFunDanmu::AuthorChatPlayerInfo::MergeFrom(
        from._internal_inviteruserinfo());
  }
  if (from._internal_has_inviteeuserinfo()) {
    _this->_internal_mutable_inviteeuserinfo()->::AcFunDanmu::AuthorChatPlayerInfo::MergeFrom(
        from._internal_inviteeuserinfo());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void CommonStateSignalAuthorChatReady::CopyFrom(const CommonStateSignalAuthorChatReady& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.CommonStateSignalAuthorChatReady)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CommonStateSignalAuthorChatReady::IsInitialized() const {
  return true;
}

void CommonStateSignalAuthorChatReady::InternalSwap(CommonStateSignalAuthorChatReady* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.authorchatid_, lhs_arena,
      &other->_impl_.authorchatid_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(CommonStateSignalAuthorChatReady, _impl_.inviteeuserinfo_)
      + sizeof(CommonStateSignalAuthorChatReady::_impl_.inviteeuserinfo_)
      - PROTOBUF_FIELD_OFFSET(CommonStateSignalAuthorChatReady, _impl_.inviteruserinfo_)>(
          reinterpret_cast<char*>(&_impl_.inviteruserinfo_),
          reinterpret_cast<char*>(&other->_impl_.inviteruserinfo_));
}

::PROTOBUF_NAMESPACE_ID::Metadata CommonStateSignalAuthorChatReady::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_CommonStateSignalAuthorChatReady_2eproto_getter, &descriptor_table_CommonStateSignalAuthorChatReady_2eproto_once,
      file_level_metadata_CommonStateSignalAuthorChatReady_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::CommonStateSignalAuthorChatReady*
Arena::CreateMaybeMessage< ::AcFunDanmu::CommonStateSignalAuthorChatReady >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::CommonStateSignalAuthorChatReady >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
