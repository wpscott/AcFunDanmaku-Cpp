// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ZtLiveScStatusChanged.proto

#include "ZtLiveScStatusChanged.pb.h"

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
PROTOBUF_CONSTEXPR ZtLiveScStatusChanged_BannedInfo::ZtLiveScStatusChanged_BannedInfo(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.banreason_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.b_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct ZtLiveScStatusChanged_BannedInfoDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ZtLiveScStatusChanged_BannedInfoDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ZtLiveScStatusChanged_BannedInfoDefaultTypeInternal() {}
  union {
    ZtLiveScStatusChanged_BannedInfo _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ZtLiveScStatusChanged_BannedInfoDefaultTypeInternal _ZtLiveScStatusChanged_BannedInfo_default_instance_;
PROTOBUF_CONSTEXPR ZtLiveScStatusChanged::ZtLiveScStatusChanged(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.bannedinfo_)*/nullptr
  , /*decltype(_impl_.maxrandomdelayms_)*/int64_t{0}
  , /*decltype(_impl_.type_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct ZtLiveScStatusChangedDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ZtLiveScStatusChangedDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ZtLiveScStatusChangedDefaultTypeInternal() {}
  union {
    ZtLiveScStatusChanged _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ZtLiveScStatusChangedDefaultTypeInternal _ZtLiveScStatusChanged_default_instance_;
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_ZtLiveScStatusChanged_2eproto[2];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_ZtLiveScStatusChanged_2eproto[1];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_ZtLiveScStatusChanged_2eproto = nullptr;

const uint32_t TableStruct_ZtLiveScStatusChanged_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtLiveScStatusChanged_BannedInfo, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtLiveScStatusChanged_BannedInfo, _impl_.banreason_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtLiveScStatusChanged_BannedInfo, _impl_.b_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtLiveScStatusChanged, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtLiveScStatusChanged, _impl_.type_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtLiveScStatusChanged, _impl_.maxrandomdelayms_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtLiveScStatusChanged, _impl_.bannedinfo_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::ZtLiveScStatusChanged_BannedInfo)},
  { 8, -1, -1, sizeof(::AcFunDanmu::ZtLiveScStatusChanged)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::_ZtLiveScStatusChanged_BannedInfo_default_instance_._instance,
  &::AcFunDanmu::_ZtLiveScStatusChanged_default_instance_._instance,
};

const char descriptor_table_protodef_ZtLiveScStatusChanged_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\033ZtLiveScStatusChanged.proto\022\nAcFunDanm"
  "u\"\267\002\n\025ZtLiveScStatusChanged\0224\n\004type\030\001 \001("
  "\0162&.AcFunDanmu.ZtLiveScStatusChanged.Typ"
  "e\022\030\n\020maxRandomDelayMs\030\002 \001(\003\022@\n\nbannedInf"
  "o\030\003 \001(\0132,.AcFunDanmu.ZtLiveScStatusChang"
  "ed.BannedInfo\032*\n\nBannedInfo\022\021\n\tbanReason"
  "\030\001 \001(\t\022\t\n\001b\030\002 \001(\t\"`\n\004Type\022\013\n\007UNKNOWN\020\000\022\017"
  "\n\013LIVE_CLOSED\020\001\022\023\n\017NEW_LIVE_OPENED\020\002\022\024\n\020"
  "LIVE_URL_CHANGED\020\003\022\017\n\013LIVE_BANNED\020\004b\006pro"
  "to3"
  ;
static ::_pbi::once_flag descriptor_table_ZtLiveScStatusChanged_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_ZtLiveScStatusChanged_2eproto = {
    false, false, 363, descriptor_table_protodef_ZtLiveScStatusChanged_2eproto,
    "ZtLiveScStatusChanged.proto",
    &descriptor_table_ZtLiveScStatusChanged_2eproto_once, nullptr, 0, 2,
    schemas, file_default_instances, TableStruct_ZtLiveScStatusChanged_2eproto::offsets,
    file_level_metadata_ZtLiveScStatusChanged_2eproto, file_level_enum_descriptors_ZtLiveScStatusChanged_2eproto,
    file_level_service_descriptors_ZtLiveScStatusChanged_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_ZtLiveScStatusChanged_2eproto_getter() {
  return &descriptor_table_ZtLiveScStatusChanged_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_ZtLiveScStatusChanged_2eproto(&descriptor_table_ZtLiveScStatusChanged_2eproto);
namespace AcFunDanmu {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ZtLiveScStatusChanged_Type_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_ZtLiveScStatusChanged_2eproto);
  return file_level_enum_descriptors_ZtLiveScStatusChanged_2eproto[0];
}
bool ZtLiveScStatusChanged_Type_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
constexpr ZtLiveScStatusChanged_Type ZtLiveScStatusChanged::UNKNOWN;
constexpr ZtLiveScStatusChanged_Type ZtLiveScStatusChanged::LIVE_CLOSED;
constexpr ZtLiveScStatusChanged_Type ZtLiveScStatusChanged::NEW_LIVE_OPENED;
constexpr ZtLiveScStatusChanged_Type ZtLiveScStatusChanged::LIVE_URL_CHANGED;
constexpr ZtLiveScStatusChanged_Type ZtLiveScStatusChanged::LIVE_BANNED;
constexpr ZtLiveScStatusChanged_Type ZtLiveScStatusChanged::Type_MIN;
constexpr ZtLiveScStatusChanged_Type ZtLiveScStatusChanged::Type_MAX;
constexpr int ZtLiveScStatusChanged::Type_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

// ===================================================================

class ZtLiveScStatusChanged_BannedInfo::_Internal {
 public:
};

ZtLiveScStatusChanged_BannedInfo::ZtLiveScStatusChanged_BannedInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.ZtLiveScStatusChanged.BannedInfo)
}
ZtLiveScStatusChanged_BannedInfo::ZtLiveScStatusChanged_BannedInfo(const ZtLiveScStatusChanged_BannedInfo& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  ZtLiveScStatusChanged_BannedInfo* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.banreason_){}
    , decltype(_impl_.b_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.banreason_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.banreason_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_banreason().empty()) {
    _this->_impl_.banreason_.Set(from._internal_banreason(), 
      _this->GetArenaForAllocation());
  }
  _impl_.b_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.b_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_b().empty()) {
    _this->_impl_.b_.Set(from._internal_b(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.ZtLiveScStatusChanged.BannedInfo)
}

inline void ZtLiveScStatusChanged_BannedInfo::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.banreason_){}
    , decltype(_impl_.b_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.banreason_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.banreason_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.b_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.b_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

ZtLiveScStatusChanged_BannedInfo::~ZtLiveScStatusChanged_BannedInfo() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.ZtLiveScStatusChanged.BannedInfo)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ZtLiveScStatusChanged_BannedInfo::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.banreason_.Destroy();
  _impl_.b_.Destroy();
}

void ZtLiveScStatusChanged_BannedInfo::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ZtLiveScStatusChanged_BannedInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.ZtLiveScStatusChanged.BannedInfo)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.banreason_.ClearToEmpty();
  _impl_.b_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ZtLiveScStatusChanged_BannedInfo::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string banReason = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_banreason();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.ZtLiveScStatusChanged.BannedInfo.banReason"));
        } else
          goto handle_unusual;
        continue;
      // string b = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_b();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.ZtLiveScStatusChanged.BannedInfo.b"));
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

uint8_t* ZtLiveScStatusChanged_BannedInfo::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.ZtLiveScStatusChanged.BannedInfo)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string banReason = 1;
  if (!this->_internal_banreason().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_banreason().data(), static_cast<int>(this->_internal_banreason().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.ZtLiveScStatusChanged.BannedInfo.banReason");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_banreason(), target);
  }

  // string b = 2;
  if (!this->_internal_b().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_b().data(), static_cast<int>(this->_internal_b().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.ZtLiveScStatusChanged.BannedInfo.b");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_b(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.ZtLiveScStatusChanged.BannedInfo)
  return target;
}

size_t ZtLiveScStatusChanged_BannedInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.ZtLiveScStatusChanged.BannedInfo)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string banReason = 1;
  if (!this->_internal_banreason().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_banreason());
  }

  // string b = 2;
  if (!this->_internal_b().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_b());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ZtLiveScStatusChanged_BannedInfo::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    ZtLiveScStatusChanged_BannedInfo::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ZtLiveScStatusChanged_BannedInfo::GetClassData() const { return &_class_data_; }


void ZtLiveScStatusChanged_BannedInfo::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<ZtLiveScStatusChanged_BannedInfo*>(&to_msg);
  auto& from = static_cast<const ZtLiveScStatusChanged_BannedInfo&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.ZtLiveScStatusChanged.BannedInfo)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_banreason().empty()) {
    _this->_internal_set_banreason(from._internal_banreason());
  }
  if (!from._internal_b().empty()) {
    _this->_internal_set_b(from._internal_b());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ZtLiveScStatusChanged_BannedInfo::CopyFrom(const ZtLiveScStatusChanged_BannedInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.ZtLiveScStatusChanged.BannedInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ZtLiveScStatusChanged_BannedInfo::IsInitialized() const {
  return true;
}

void ZtLiveScStatusChanged_BannedInfo::InternalSwap(ZtLiveScStatusChanged_BannedInfo* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.banreason_, lhs_arena,
      &other->_impl_.banreason_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.b_, lhs_arena,
      &other->_impl_.b_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata ZtLiveScStatusChanged_BannedInfo::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_ZtLiveScStatusChanged_2eproto_getter, &descriptor_table_ZtLiveScStatusChanged_2eproto_once,
      file_level_metadata_ZtLiveScStatusChanged_2eproto[0]);
}

// ===================================================================

class ZtLiveScStatusChanged::_Internal {
 public:
  static const ::AcFunDanmu::ZtLiveScStatusChanged_BannedInfo& bannedinfo(const ZtLiveScStatusChanged* msg);
};

const ::AcFunDanmu::ZtLiveScStatusChanged_BannedInfo&
ZtLiveScStatusChanged::_Internal::bannedinfo(const ZtLiveScStatusChanged* msg) {
  return *msg->_impl_.bannedinfo_;
}
ZtLiveScStatusChanged::ZtLiveScStatusChanged(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.ZtLiveScStatusChanged)
}
ZtLiveScStatusChanged::ZtLiveScStatusChanged(const ZtLiveScStatusChanged& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  ZtLiveScStatusChanged* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.bannedinfo_){nullptr}
    , decltype(_impl_.maxrandomdelayms_){}
    , decltype(_impl_.type_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_bannedinfo()) {
    _this->_impl_.bannedinfo_ = new ::AcFunDanmu::ZtLiveScStatusChanged_BannedInfo(*from._impl_.bannedinfo_);
  }
  ::memcpy(&_impl_.maxrandomdelayms_, &from._impl_.maxrandomdelayms_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.type_) -
    reinterpret_cast<char*>(&_impl_.maxrandomdelayms_)) + sizeof(_impl_.type_));
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.ZtLiveScStatusChanged)
}

inline void ZtLiveScStatusChanged::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.bannedinfo_){nullptr}
    , decltype(_impl_.maxrandomdelayms_){int64_t{0}}
    , decltype(_impl_.type_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

ZtLiveScStatusChanged::~ZtLiveScStatusChanged() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.ZtLiveScStatusChanged)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ZtLiveScStatusChanged::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete _impl_.bannedinfo_;
}

void ZtLiveScStatusChanged::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ZtLiveScStatusChanged::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.ZtLiveScStatusChanged)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaForAllocation() == nullptr && _impl_.bannedinfo_ != nullptr) {
    delete _impl_.bannedinfo_;
  }
  _impl_.bannedinfo_ = nullptr;
  ::memset(&_impl_.maxrandomdelayms_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.type_) -
      reinterpret_cast<char*>(&_impl_.maxrandomdelayms_)) + sizeof(_impl_.type_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ZtLiveScStatusChanged::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .AcFunDanmu.ZtLiveScStatusChanged.Type type = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_type(static_cast<::AcFunDanmu::ZtLiveScStatusChanged_Type>(val));
        } else
          goto handle_unusual;
        continue;
      // int64 maxRandomDelayMs = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.maxrandomdelayms_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .AcFunDanmu.ZtLiveScStatusChanged.BannedInfo bannedInfo = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_bannedinfo(), ptr);
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

uint8_t* ZtLiveScStatusChanged::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.ZtLiveScStatusChanged)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .AcFunDanmu.ZtLiveScStatusChanged.Type type = 1;
  if (this->_internal_type() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      1, this->_internal_type(), target);
  }

  // int64 maxRandomDelayMs = 2;
  if (this->_internal_maxrandomdelayms() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(2, this->_internal_maxrandomdelayms(), target);
  }

  // .AcFunDanmu.ZtLiveScStatusChanged.BannedInfo bannedInfo = 3;
  if (this->_internal_has_bannedinfo()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, _Internal::bannedinfo(this),
        _Internal::bannedinfo(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.ZtLiveScStatusChanged)
  return target;
}

size_t ZtLiveScStatusChanged::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.ZtLiveScStatusChanged)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .AcFunDanmu.ZtLiveScStatusChanged.BannedInfo bannedInfo = 3;
  if (this->_internal_has_bannedinfo()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.bannedinfo_);
  }

  // int64 maxRandomDelayMs = 2;
  if (this->_internal_maxrandomdelayms() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_maxrandomdelayms());
  }

  // .AcFunDanmu.ZtLiveScStatusChanged.Type type = 1;
  if (this->_internal_type() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_type());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ZtLiveScStatusChanged::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    ZtLiveScStatusChanged::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ZtLiveScStatusChanged::GetClassData() const { return &_class_data_; }


void ZtLiveScStatusChanged::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<ZtLiveScStatusChanged*>(&to_msg);
  auto& from = static_cast<const ZtLiveScStatusChanged&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.ZtLiveScStatusChanged)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_bannedinfo()) {
    _this->_internal_mutable_bannedinfo()->::AcFunDanmu::ZtLiveScStatusChanged_BannedInfo::MergeFrom(
        from._internal_bannedinfo());
  }
  if (from._internal_maxrandomdelayms() != 0) {
    _this->_internal_set_maxrandomdelayms(from._internal_maxrandomdelayms());
  }
  if (from._internal_type() != 0) {
    _this->_internal_set_type(from._internal_type());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ZtLiveScStatusChanged::CopyFrom(const ZtLiveScStatusChanged& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.ZtLiveScStatusChanged)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ZtLiveScStatusChanged::IsInitialized() const {
  return true;
}

void ZtLiveScStatusChanged::InternalSwap(ZtLiveScStatusChanged* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ZtLiveScStatusChanged, _impl_.type_)
      + sizeof(ZtLiveScStatusChanged::_impl_.type_)
      - PROTOBUF_FIELD_OFFSET(ZtLiveScStatusChanged, _impl_.bannedinfo_)>(
          reinterpret_cast<char*>(&_impl_.bannedinfo_),
          reinterpret_cast<char*>(&other->_impl_.bannedinfo_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ZtLiveScStatusChanged::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_ZtLiveScStatusChanged_2eproto_getter, &descriptor_table_ZtLiveScStatusChanged_2eproto_once,
      file_level_metadata_ZtLiveScStatusChanged_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::ZtLiveScStatusChanged_BannedInfo*
Arena::CreateMaybeMessage< ::AcFunDanmu::ZtLiveScStatusChanged_BannedInfo >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::ZtLiveScStatusChanged_BannedInfo >(arena);
}
template<> PROTOBUF_NOINLINE ::AcFunDanmu::ZtLiveScStatusChanged*
Arena::CreateMaybeMessage< ::AcFunDanmu::ZtLiveScStatusChanged >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::ZtLiveScStatusChanged >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
