// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CommonStateSignalChatReady.proto

#include "CommonStateSignalChatReady.pb.h"

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
PROTOBUF_CONSTEXPR CommonStateSignalChatReady::CommonStateSignalChatReady(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.chatid_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.guestuserinfo_)*/nullptr
  , /*decltype(_impl_.mediatype_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct CommonStateSignalChatReadyDefaultTypeInternal {
  PROTOBUF_CONSTEXPR CommonStateSignalChatReadyDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~CommonStateSignalChatReadyDefaultTypeInternal() {}
  union {
    CommonStateSignalChatReady _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 CommonStateSignalChatReadyDefaultTypeInternal _CommonStateSignalChatReady_default_instance_;
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_CommonStateSignalChatReady_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_CommonStateSignalChatReady_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_CommonStateSignalChatReady_2eproto = nullptr;

const uint32_t TableStruct_CommonStateSignalChatReady_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonStateSignalChatReady, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonStateSignalChatReady, _impl_.chatid_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonStateSignalChatReady, _impl_.guestuserinfo_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonStateSignalChatReady, _impl_.mediatype_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::CommonStateSignalChatReady)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::_CommonStateSignalChatReady_default_instance_._instance,
};

const char descriptor_table_protodef_CommonStateSignalChatReady_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n CommonStateSignalChatReady.proto\022\nAcFu"
  "nDanmu\032\023ChatMediaType.proto\032\024ZtLiveUserI"
  "nfo.proto\"\215\001\n\032CommonStateSignalChatReady"
  "\022\016\n\006chatId\030\001 \001(\t\0221\n\rguestUserInfo\030\002 \001(\0132"
  "\032.AcFunDanmu.ZtLiveUserInfo\022,\n\tmediaType"
  "\030\003 \001(\0162\031.AcFunDanmu.ChatMediaTypeb\006proto"
  "3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_CommonStateSignalChatReady_2eproto_deps[2] = {
  &::descriptor_table_ChatMediaType_2eproto,
  &::descriptor_table_ZtLiveUserInfo_2eproto,
};
static ::_pbi::once_flag descriptor_table_CommonStateSignalChatReady_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_CommonStateSignalChatReady_2eproto = {
    false, false, 241, descriptor_table_protodef_CommonStateSignalChatReady_2eproto,
    "CommonStateSignalChatReady.proto",
    &descriptor_table_CommonStateSignalChatReady_2eproto_once, descriptor_table_CommonStateSignalChatReady_2eproto_deps, 2, 1,
    schemas, file_default_instances, TableStruct_CommonStateSignalChatReady_2eproto::offsets,
    file_level_metadata_CommonStateSignalChatReady_2eproto, file_level_enum_descriptors_CommonStateSignalChatReady_2eproto,
    file_level_service_descriptors_CommonStateSignalChatReady_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_CommonStateSignalChatReady_2eproto_getter() {
  return &descriptor_table_CommonStateSignalChatReady_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_CommonStateSignalChatReady_2eproto(&descriptor_table_CommonStateSignalChatReady_2eproto);
namespace AcFunDanmu {

// ===================================================================

class CommonStateSignalChatReady::_Internal {
 public:
  static const ::AcFunDanmu::ZtLiveUserInfo& guestuserinfo(const CommonStateSignalChatReady* msg);
};

const ::AcFunDanmu::ZtLiveUserInfo&
CommonStateSignalChatReady::_Internal::guestuserinfo(const CommonStateSignalChatReady* msg) {
  return *msg->_impl_.guestuserinfo_;
}
void CommonStateSignalChatReady::clear_guestuserinfo() {
  if (GetArenaForAllocation() == nullptr && _impl_.guestuserinfo_ != nullptr) {
    delete _impl_.guestuserinfo_;
  }
  _impl_.guestuserinfo_ = nullptr;
}
CommonStateSignalChatReady::CommonStateSignalChatReady(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.CommonStateSignalChatReady)
}
CommonStateSignalChatReady::CommonStateSignalChatReady(const CommonStateSignalChatReady& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  CommonStateSignalChatReady* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.chatid_){}
    , decltype(_impl_.guestuserinfo_){nullptr}
    , decltype(_impl_.mediatype_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.chatid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.chatid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_chatid().empty()) {
    _this->_impl_.chatid_.Set(from._internal_chatid(), 
      _this->GetArenaForAllocation());
  }
  if (from._internal_has_guestuserinfo()) {
    _this->_impl_.guestuserinfo_ = new ::AcFunDanmu::ZtLiveUserInfo(*from._impl_.guestuserinfo_);
  }
  _this->_impl_.mediatype_ = from._impl_.mediatype_;
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.CommonStateSignalChatReady)
}

inline void CommonStateSignalChatReady::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.chatid_){}
    , decltype(_impl_.guestuserinfo_){nullptr}
    , decltype(_impl_.mediatype_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.chatid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.chatid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

CommonStateSignalChatReady::~CommonStateSignalChatReady() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.CommonStateSignalChatReady)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void CommonStateSignalChatReady::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.chatid_.Destroy();
  if (this != internal_default_instance()) delete _impl_.guestuserinfo_;
}

void CommonStateSignalChatReady::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void CommonStateSignalChatReady::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.CommonStateSignalChatReady)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.chatid_.ClearToEmpty();
  if (GetArenaForAllocation() == nullptr && _impl_.guestuserinfo_ != nullptr) {
    delete _impl_.guestuserinfo_;
  }
  _impl_.guestuserinfo_ = nullptr;
  _impl_.mediatype_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* CommonStateSignalChatReady::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string chatId = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_chatid();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.CommonStateSignalChatReady.chatId"));
        } else
          goto handle_unusual;
        continue;
      // .AcFunDanmu.ZtLiveUserInfo guestUserInfo = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_guestuserinfo(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .AcFunDanmu.ChatMediaType mediaType = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_mediatype(static_cast<::AcFunDanmu::ChatMediaType>(val));
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

uint8_t* CommonStateSignalChatReady::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.CommonStateSignalChatReady)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string chatId = 1;
  if (!this->_internal_chatid().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_chatid().data(), static_cast<int>(this->_internal_chatid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.CommonStateSignalChatReady.chatId");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_chatid(), target);
  }

  // .AcFunDanmu.ZtLiveUserInfo guestUserInfo = 2;
  if (this->_internal_has_guestuserinfo()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::guestuserinfo(this),
        _Internal::guestuserinfo(this).GetCachedSize(), target, stream);
  }

  // .AcFunDanmu.ChatMediaType mediaType = 3;
  if (this->_internal_mediatype() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      3, this->_internal_mediatype(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.CommonStateSignalChatReady)
  return target;
}

size_t CommonStateSignalChatReady::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.CommonStateSignalChatReady)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string chatId = 1;
  if (!this->_internal_chatid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_chatid());
  }

  // .AcFunDanmu.ZtLiveUserInfo guestUserInfo = 2;
  if (this->_internal_has_guestuserinfo()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.guestuserinfo_);
  }

  // .AcFunDanmu.ChatMediaType mediaType = 3;
  if (this->_internal_mediatype() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_mediatype());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData CommonStateSignalChatReady::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    CommonStateSignalChatReady::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*CommonStateSignalChatReady::GetClassData() const { return &_class_data_; }


void CommonStateSignalChatReady::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<CommonStateSignalChatReady*>(&to_msg);
  auto& from = static_cast<const CommonStateSignalChatReady&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.CommonStateSignalChatReady)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_chatid().empty()) {
    _this->_internal_set_chatid(from._internal_chatid());
  }
  if (from._internal_has_guestuserinfo()) {
    _this->_internal_mutable_guestuserinfo()->::AcFunDanmu::ZtLiveUserInfo::MergeFrom(
        from._internal_guestuserinfo());
  }
  if (from._internal_mediatype() != 0) {
    _this->_internal_set_mediatype(from._internal_mediatype());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void CommonStateSignalChatReady::CopyFrom(const CommonStateSignalChatReady& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.CommonStateSignalChatReady)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CommonStateSignalChatReady::IsInitialized() const {
  return true;
}

void CommonStateSignalChatReady::InternalSwap(CommonStateSignalChatReady* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.chatid_, lhs_arena,
      &other->_impl_.chatid_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(CommonStateSignalChatReady, _impl_.mediatype_)
      + sizeof(CommonStateSignalChatReady::_impl_.mediatype_)
      - PROTOBUF_FIELD_OFFSET(CommonStateSignalChatReady, _impl_.guestuserinfo_)>(
          reinterpret_cast<char*>(&_impl_.guestuserinfo_),
          reinterpret_cast<char*>(&other->_impl_.guestuserinfo_));
}

::PROTOBUF_NAMESPACE_ID::Metadata CommonStateSignalChatReady::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_CommonStateSignalChatReady_2eproto_getter, &descriptor_table_CommonStateSignalChatReady_2eproto_once,
      file_level_metadata_CommonStateSignalChatReady_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::CommonStateSignalChatReady*
Arena::CreateMaybeMessage< ::AcFunDanmu::CommonStateSignalChatReady >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::CommonStateSignalChatReady >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
