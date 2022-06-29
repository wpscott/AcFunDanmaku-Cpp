// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ZtLiveUserInfo.proto

#include "ZtLiveUserInfo.pb.h"

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
PROTOBUF_CONSTEXPR ZtLiveUserInfo::ZtLiveUserInfo(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.avatar_)*/{}
  , /*decltype(_impl_.nickname_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.badge_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.g_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.useridentity_)*/nullptr
  , /*decltype(_impl_.userid_)*/int64_t{0}
  , /*decltype(_impl_.f_)*/false
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct ZtLiveUserInfoDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ZtLiveUserInfoDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ZtLiveUserInfoDefaultTypeInternal() {}
  union {
    ZtLiveUserInfo _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ZtLiveUserInfoDefaultTypeInternal _ZtLiveUserInfo_default_instance_;
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_ZtLiveUserInfo_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_ZtLiveUserInfo_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_ZtLiveUserInfo_2eproto = nullptr;

const uint32_t TableStruct_ZtLiveUserInfo_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtLiveUserInfo, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtLiveUserInfo, _impl_.userid_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtLiveUserInfo, _impl_.nickname_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtLiveUserInfo, _impl_.avatar_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtLiveUserInfo, _impl_.badge_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtLiveUserInfo, _impl_.useridentity_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtLiveUserInfo, _impl_.f_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtLiveUserInfo, _impl_.g_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::ZtLiveUserInfo)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::_ZtLiveUserInfo_default_instance_._instance,
};

const char descriptor_table_protodef_ZtLiveUserInfo_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\024ZtLiveUserInfo.proto\022\nAcFunDanmu\032\022Imag"
  "eCdnNode.proto\032\030ZtLiveUserIdentity.proto"
  "\"\267\001\n\016ZtLiveUserInfo\022\016\n\006userId\030\001 \001(\003\022\020\n\010n"
  "ickname\030\002 \001(\t\022(\n\006avatar\030\003 \003(\0132\030.AcFunDan"
  "mu.ImageCdnNode\022\r\n\005badge\030\004 \001(\t\0224\n\014userId"
  "entity\030\005 \001(\0132\036.AcFunDanmu.ZtLiveUserIden"
  "tity\022\t\n\001f\030\006 \001(\010\022\t\n\001g\030\007 \001(\tb\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_ZtLiveUserInfo_2eproto_deps[2] = {
  &::descriptor_table_ImageCdnNode_2eproto,
  &::descriptor_table_ZtLiveUserIdentity_2eproto,
};
static ::_pbi::once_flag descriptor_table_ZtLiveUserInfo_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_ZtLiveUserInfo_2eproto = {
    false, false, 274, descriptor_table_protodef_ZtLiveUserInfo_2eproto,
    "ZtLiveUserInfo.proto",
    &descriptor_table_ZtLiveUserInfo_2eproto_once, descriptor_table_ZtLiveUserInfo_2eproto_deps, 2, 1,
    schemas, file_default_instances, TableStruct_ZtLiveUserInfo_2eproto::offsets,
    file_level_metadata_ZtLiveUserInfo_2eproto, file_level_enum_descriptors_ZtLiveUserInfo_2eproto,
    file_level_service_descriptors_ZtLiveUserInfo_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_ZtLiveUserInfo_2eproto_getter() {
  return &descriptor_table_ZtLiveUserInfo_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_ZtLiveUserInfo_2eproto(&descriptor_table_ZtLiveUserInfo_2eproto);
namespace AcFunDanmu {

// ===================================================================

class ZtLiveUserInfo::_Internal {
 public:
  static const ::AcFunDanmu::ZtLiveUserIdentity& useridentity(const ZtLiveUserInfo* msg);
};

const ::AcFunDanmu::ZtLiveUserIdentity&
ZtLiveUserInfo::_Internal::useridentity(const ZtLiveUserInfo* msg) {
  return *msg->_impl_.useridentity_;
}
void ZtLiveUserInfo::clear_avatar() {
  _impl_.avatar_.Clear();
}
void ZtLiveUserInfo::clear_useridentity() {
  if (GetArenaForAllocation() == nullptr && _impl_.useridentity_ != nullptr) {
    delete _impl_.useridentity_;
  }
  _impl_.useridentity_ = nullptr;
}
ZtLiveUserInfo::ZtLiveUserInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.ZtLiveUserInfo)
}
ZtLiveUserInfo::ZtLiveUserInfo(const ZtLiveUserInfo& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  ZtLiveUserInfo* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.avatar_){from._impl_.avatar_}
    , decltype(_impl_.nickname_){}
    , decltype(_impl_.badge_){}
    , decltype(_impl_.g_){}
    , decltype(_impl_.useridentity_){nullptr}
    , decltype(_impl_.userid_){}
    , decltype(_impl_.f_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.nickname_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.nickname_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_nickname().empty()) {
    _this->_impl_.nickname_.Set(from._internal_nickname(), 
      _this->GetArenaForAllocation());
  }
  _impl_.badge_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.badge_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_badge().empty()) {
    _this->_impl_.badge_.Set(from._internal_badge(), 
      _this->GetArenaForAllocation());
  }
  _impl_.g_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.g_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_g().empty()) {
    _this->_impl_.g_.Set(from._internal_g(), 
      _this->GetArenaForAllocation());
  }
  if (from._internal_has_useridentity()) {
    _this->_impl_.useridentity_ = new ::AcFunDanmu::ZtLiveUserIdentity(*from._impl_.useridentity_);
  }
  ::memcpy(&_impl_.userid_, &from._impl_.userid_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.f_) -
    reinterpret_cast<char*>(&_impl_.userid_)) + sizeof(_impl_.f_));
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.ZtLiveUserInfo)
}

inline void ZtLiveUserInfo::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.avatar_){arena}
    , decltype(_impl_.nickname_){}
    , decltype(_impl_.badge_){}
    , decltype(_impl_.g_){}
    , decltype(_impl_.useridentity_){nullptr}
    , decltype(_impl_.userid_){int64_t{0}}
    , decltype(_impl_.f_){false}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.nickname_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.nickname_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.badge_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.badge_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.g_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.g_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

ZtLiveUserInfo::~ZtLiveUserInfo() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.ZtLiveUserInfo)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ZtLiveUserInfo::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.avatar_.~RepeatedPtrField();
  _impl_.nickname_.Destroy();
  _impl_.badge_.Destroy();
  _impl_.g_.Destroy();
  if (this != internal_default_instance()) delete _impl_.useridentity_;
}

void ZtLiveUserInfo::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ZtLiveUserInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.ZtLiveUserInfo)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.avatar_.Clear();
  _impl_.nickname_.ClearToEmpty();
  _impl_.badge_.ClearToEmpty();
  _impl_.g_.ClearToEmpty();
  if (GetArenaForAllocation() == nullptr && _impl_.useridentity_ != nullptr) {
    delete _impl_.useridentity_;
  }
  _impl_.useridentity_ = nullptr;
  ::memset(&_impl_.userid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.f_) -
      reinterpret_cast<char*>(&_impl_.userid_)) + sizeof(_impl_.f_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ZtLiveUserInfo::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int64 userId = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.userid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string nickname = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_nickname();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.ZtLiveUserInfo.nickname"));
        } else
          goto handle_unusual;
        continue;
      // repeated .AcFunDanmu.ImageCdnNode avatar = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_avatar(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else
          goto handle_unusual;
        continue;
      // string badge = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_badge();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.ZtLiveUserInfo.badge"));
        } else
          goto handle_unusual;
        continue;
      // .AcFunDanmu.ZtLiveUserIdentity userIdentity = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          ptr = ctx->ParseMessage(_internal_mutable_useridentity(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bool f = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 48)) {
          _impl_.f_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string g = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 58)) {
          auto str = _internal_mutable_g();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.ZtLiveUserInfo.g"));
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

uint8_t* ZtLiveUserInfo::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.ZtLiveUserInfo)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 userId = 1;
  if (this->_internal_userid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(1, this->_internal_userid(), target);
  }

  // string nickname = 2;
  if (!this->_internal_nickname().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_nickname().data(), static_cast<int>(this->_internal_nickname().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.ZtLiveUserInfo.nickname");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_nickname(), target);
  }

  // repeated .AcFunDanmu.ImageCdnNode avatar = 3;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_avatar_size()); i < n; i++) {
    const auto& repfield = this->_internal_avatar(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(3, repfield, repfield.GetCachedSize(), target, stream);
  }

  // string badge = 4;
  if (!this->_internal_badge().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_badge().data(), static_cast<int>(this->_internal_badge().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.ZtLiveUserInfo.badge");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_badge(), target);
  }

  // .AcFunDanmu.ZtLiveUserIdentity userIdentity = 5;
  if (this->_internal_has_useridentity()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(5, _Internal::useridentity(this),
        _Internal::useridentity(this).GetCachedSize(), target, stream);
  }

  // bool f = 6;
  if (this->_internal_f() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(6, this->_internal_f(), target);
  }

  // string g = 7;
  if (!this->_internal_g().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_g().data(), static_cast<int>(this->_internal_g().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.ZtLiveUserInfo.g");
    target = stream->WriteStringMaybeAliased(
        7, this->_internal_g(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.ZtLiveUserInfo)
  return target;
}

size_t ZtLiveUserInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.ZtLiveUserInfo)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .AcFunDanmu.ImageCdnNode avatar = 3;
  total_size += 1UL * this->_internal_avatar_size();
  for (const auto& msg : this->_impl_.avatar_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // string nickname = 2;
  if (!this->_internal_nickname().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_nickname());
  }

  // string badge = 4;
  if (!this->_internal_badge().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_badge());
  }

  // string g = 7;
  if (!this->_internal_g().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_g());
  }

  // .AcFunDanmu.ZtLiveUserIdentity userIdentity = 5;
  if (this->_internal_has_useridentity()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.useridentity_);
  }

  // int64 userId = 1;
  if (this->_internal_userid() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_userid());
  }

  // bool f = 6;
  if (this->_internal_f() != 0) {
    total_size += 1 + 1;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ZtLiveUserInfo::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    ZtLiveUserInfo::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ZtLiveUserInfo::GetClassData() const { return &_class_data_; }


void ZtLiveUserInfo::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<ZtLiveUserInfo*>(&to_msg);
  auto& from = static_cast<const ZtLiveUserInfo&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.ZtLiveUserInfo)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.avatar_.MergeFrom(from._impl_.avatar_);
  if (!from._internal_nickname().empty()) {
    _this->_internal_set_nickname(from._internal_nickname());
  }
  if (!from._internal_badge().empty()) {
    _this->_internal_set_badge(from._internal_badge());
  }
  if (!from._internal_g().empty()) {
    _this->_internal_set_g(from._internal_g());
  }
  if (from._internal_has_useridentity()) {
    _this->_internal_mutable_useridentity()->::AcFunDanmu::ZtLiveUserIdentity::MergeFrom(
        from._internal_useridentity());
  }
  if (from._internal_userid() != 0) {
    _this->_internal_set_userid(from._internal_userid());
  }
  if (from._internal_f() != 0) {
    _this->_internal_set_f(from._internal_f());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ZtLiveUserInfo::CopyFrom(const ZtLiveUserInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.ZtLiveUserInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ZtLiveUserInfo::IsInitialized() const {
  return true;
}

void ZtLiveUserInfo::InternalSwap(ZtLiveUserInfo* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.avatar_.InternalSwap(&other->_impl_.avatar_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.nickname_, lhs_arena,
      &other->_impl_.nickname_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.badge_, lhs_arena,
      &other->_impl_.badge_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.g_, lhs_arena,
      &other->_impl_.g_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ZtLiveUserInfo, _impl_.f_)
      + sizeof(ZtLiveUserInfo::_impl_.f_)
      - PROTOBUF_FIELD_OFFSET(ZtLiveUserInfo, _impl_.useridentity_)>(
          reinterpret_cast<char*>(&_impl_.useridentity_),
          reinterpret_cast<char*>(&other->_impl_.useridentity_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ZtLiveUserInfo::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_ZtLiveUserInfo_2eproto_getter, &descriptor_table_ZtLiveUserInfo_2eproto_once,
      file_level_metadata_ZtLiveUserInfo_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::ZtLiveUserInfo*
Arena::CreateMaybeMessage< ::AcFunDanmu::ZtLiveUserInfo >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::ZtLiveUserInfo >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
