// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ZtCommonInfo.proto

#include "ZtCommonInfo.pb.h"

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
namespace AcFunDanmu {
class ZtCommonInfoDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ZtCommonInfo> _instance;
} _ZtCommonInfo_default_instance_;
}  // namespace AcFunDanmu
static void InitDefaultsscc_info_ZtCommonInfo_ZtCommonInfo_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::AcFunDanmu::_ZtCommonInfo_default_instance_;
    new (ptr) ::AcFunDanmu::ZtCommonInfo();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ZtCommonInfo_ZtCommonInfo_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_ZtCommonInfo_ZtCommonInfo_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_ZtCommonInfo_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_ZtCommonInfo_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_ZtCommonInfo_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_ZtCommonInfo_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtCommonInfo, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtCommonInfo, kpn_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtCommonInfo, kpf_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtCommonInfo, subbiz_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtCommonInfo, uid_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtCommonInfo, did_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtCommonInfo, clientip_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtCommonInfo, appver_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtCommonInfo, ver_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtCommonInfo, lat_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtCommonInfo, lon_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtCommonInfo, mod_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtCommonInfo, net_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtCommonInfo, sys_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtCommonInfo, c_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtCommonInfo, language_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtCommonInfo, countrycode_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::AcFunDanmu::ZtCommonInfo)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::AcFunDanmu::_ZtCommonInfo_default_instance_),
};

const char descriptor_table_protodef_ZtCommonInfo_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\022ZtCommonInfo.proto\022\nAcFunDanmu\"\364\001\n\014ZtC"
  "ommonInfo\022\013\n\003kpn\030\001 \001(\t\022\013\n\003kpf\030\002 \001(\t\022\016\n\006s"
  "ubBiz\030\003 \001(\t\022\013\n\003uid\030\004 \001(\003\022\013\n\003did\030\005 \001(\t\022\020\n"
  "\010clientIp\030\006 \001(\003\022\016\n\006appVer\030\007 \001(\t\022\013\n\003ver\030\010"
  " \001(\t\022\013\n\003lat\030\t \001(\t\022\013\n\003lon\030\n \001(\t\022\013\n\003mod\030\013 "
  "\001(\t\022\013\n\003net\030\014 \001(\t\022\013\n\003sys\030\r \001(\t\022\t\n\001c\030\016 \001(\t"
  "\022\020\n\010language\030\017 \001(\t\022\023\n\013countryCode\030\020 \001(\tb"
  "\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_ZtCommonInfo_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_ZtCommonInfo_2eproto_sccs[1] = {
  &scc_info_ZtCommonInfo_ZtCommonInfo_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_ZtCommonInfo_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ZtCommonInfo_2eproto = {
  false, false, descriptor_table_protodef_ZtCommonInfo_2eproto, "ZtCommonInfo.proto", 287,
  &descriptor_table_ZtCommonInfo_2eproto_once, descriptor_table_ZtCommonInfo_2eproto_sccs, descriptor_table_ZtCommonInfo_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_ZtCommonInfo_2eproto::offsets,
  file_level_metadata_ZtCommonInfo_2eproto, 1, file_level_enum_descriptors_ZtCommonInfo_2eproto, file_level_service_descriptors_ZtCommonInfo_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_ZtCommonInfo_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_ZtCommonInfo_2eproto)), true);
namespace AcFunDanmu {

// ===================================================================

class ZtCommonInfo::_Internal {
 public:
};

ZtCommonInfo::ZtCommonInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.ZtCommonInfo)
}
ZtCommonInfo::ZtCommonInfo(const ZtCommonInfo& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  kpn_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_kpn().empty()) {
    kpn_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_kpn(), 
      GetArena());
  }
  kpf_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_kpf().empty()) {
    kpf_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_kpf(), 
      GetArena());
  }
  subbiz_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_subbiz().empty()) {
    subbiz_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_subbiz(), 
      GetArena());
  }
  did_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_did().empty()) {
    did_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_did(), 
      GetArena());
  }
  appver_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_appver().empty()) {
    appver_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_appver(), 
      GetArena());
  }
  ver_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_ver().empty()) {
    ver_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_ver(), 
      GetArena());
  }
  lat_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_lat().empty()) {
    lat_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_lat(), 
      GetArena());
  }
  lon_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_lon().empty()) {
    lon_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_lon(), 
      GetArena());
  }
  mod_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_mod().empty()) {
    mod_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_mod(), 
      GetArena());
  }
  net_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_net().empty()) {
    net_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_net(), 
      GetArena());
  }
  sys_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_sys().empty()) {
    sys_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_sys(), 
      GetArena());
  }
  c_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_c().empty()) {
    c_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_c(), 
      GetArena());
  }
  language_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_language().empty()) {
    language_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_language(), 
      GetArena());
  }
  countrycode_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_countrycode().empty()) {
    countrycode_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_countrycode(), 
      GetArena());
  }
  ::memcpy(&uid_, &from.uid_,
    static_cast<size_t>(reinterpret_cast<char*>(&clientip_) -
    reinterpret_cast<char*>(&uid_)) + sizeof(clientip_));
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.ZtCommonInfo)
}

void ZtCommonInfo::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ZtCommonInfo_ZtCommonInfo_2eproto.base);
  kpn_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  kpf_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  subbiz_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  did_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  appver_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ver_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  lat_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  lon_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  mod_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  net_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  sys_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  c_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  language_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  countrycode_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
      reinterpret_cast<char*>(&uid_) - reinterpret_cast<char*>(this)),
      0, static_cast<size_t>(reinterpret_cast<char*>(&clientip_) -
      reinterpret_cast<char*>(&uid_)) + sizeof(clientip_));
}

ZtCommonInfo::~ZtCommonInfo() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.ZtCommonInfo)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void ZtCommonInfo::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  kpn_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  kpf_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  subbiz_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  did_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  appver_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ver_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  lat_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  lon_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  mod_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  net_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  sys_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  c_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  language_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  countrycode_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void ZtCommonInfo::ArenaDtor(void* object) {
  ZtCommonInfo* _this = reinterpret_cast< ZtCommonInfo* >(object);
  (void)_this;
}
void ZtCommonInfo::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ZtCommonInfo::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ZtCommonInfo& ZtCommonInfo::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ZtCommonInfo_ZtCommonInfo_2eproto.base);
  return *internal_default_instance();
}


void ZtCommonInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.ZtCommonInfo)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  kpn_.ClearToEmpty();
  kpf_.ClearToEmpty();
  subbiz_.ClearToEmpty();
  did_.ClearToEmpty();
  appver_.ClearToEmpty();
  ver_.ClearToEmpty();
  lat_.ClearToEmpty();
  lon_.ClearToEmpty();
  mod_.ClearToEmpty();
  net_.ClearToEmpty();
  sys_.ClearToEmpty();
  c_.ClearToEmpty();
  language_.ClearToEmpty();
  countrycode_.ClearToEmpty();
  ::memset(&uid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&clientip_) -
      reinterpret_cast<char*>(&uid_)) + sizeof(clientip_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ZtCommonInfo::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string kpn = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_kpn();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "AcFunDanmu.ZtCommonInfo.kpn"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string kpf = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_kpf();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "AcFunDanmu.ZtCommonInfo.kpf"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string subBiz = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_subbiz();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "AcFunDanmu.ZtCommonInfo.subBiz"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int64 uid = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          uid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string did = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          auto str = _internal_mutable_did();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "AcFunDanmu.ZtCommonInfo.did"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int64 clientIp = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 48)) {
          clientip_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string appVer = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          auto str = _internal_mutable_appver();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "AcFunDanmu.ZtCommonInfo.appVer"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string ver = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 66)) {
          auto str = _internal_mutable_ver();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "AcFunDanmu.ZtCommonInfo.ver"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string lat = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 74)) {
          auto str = _internal_mutable_lat();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "AcFunDanmu.ZtCommonInfo.lat"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string lon = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 82)) {
          auto str = _internal_mutable_lon();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "AcFunDanmu.ZtCommonInfo.lon"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string mod = 11;
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 90)) {
          auto str = _internal_mutable_mod();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "AcFunDanmu.ZtCommonInfo.mod"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string net = 12;
      case 12:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 98)) {
          auto str = _internal_mutable_net();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "AcFunDanmu.ZtCommonInfo.net"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string sys = 13;
      case 13:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 106)) {
          auto str = _internal_mutable_sys();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "AcFunDanmu.ZtCommonInfo.sys"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string c = 14;
      case 14:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 114)) {
          auto str = _internal_mutable_c();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "AcFunDanmu.ZtCommonInfo.c"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string language = 15;
      case 15:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 122)) {
          auto str = _internal_mutable_language();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "AcFunDanmu.ZtCommonInfo.language"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string countryCode = 16;
      case 16:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 130)) {
          auto str = _internal_mutable_countrycode();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "AcFunDanmu.ZtCommonInfo.countryCode"));
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

::PROTOBUF_NAMESPACE_ID::uint8* ZtCommonInfo::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.ZtCommonInfo)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string kpn = 1;
  if (this->kpn().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_kpn().data(), static_cast<int>(this->_internal_kpn().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.ZtCommonInfo.kpn");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_kpn(), target);
  }

  // string kpf = 2;
  if (this->kpf().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_kpf().data(), static_cast<int>(this->_internal_kpf().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.ZtCommonInfo.kpf");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_kpf(), target);
  }

  // string subBiz = 3;
  if (this->subbiz().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_subbiz().data(), static_cast<int>(this->_internal_subbiz().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.ZtCommonInfo.subBiz");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_subbiz(), target);
  }

  // int64 uid = 4;
  if (this->uid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(4, this->_internal_uid(), target);
  }

  // string did = 5;
  if (this->did().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_did().data(), static_cast<int>(this->_internal_did().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.ZtCommonInfo.did");
    target = stream->WriteStringMaybeAliased(
        5, this->_internal_did(), target);
  }

  // int64 clientIp = 6;
  if (this->clientip() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(6, this->_internal_clientip(), target);
  }

  // string appVer = 7;
  if (this->appver().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_appver().data(), static_cast<int>(this->_internal_appver().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.ZtCommonInfo.appVer");
    target = stream->WriteStringMaybeAliased(
        7, this->_internal_appver(), target);
  }

  // string ver = 8;
  if (this->ver().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_ver().data(), static_cast<int>(this->_internal_ver().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.ZtCommonInfo.ver");
    target = stream->WriteStringMaybeAliased(
        8, this->_internal_ver(), target);
  }

  // string lat = 9;
  if (this->lat().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_lat().data(), static_cast<int>(this->_internal_lat().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.ZtCommonInfo.lat");
    target = stream->WriteStringMaybeAliased(
        9, this->_internal_lat(), target);
  }

  // string lon = 10;
  if (this->lon().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_lon().data(), static_cast<int>(this->_internal_lon().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.ZtCommonInfo.lon");
    target = stream->WriteStringMaybeAliased(
        10, this->_internal_lon(), target);
  }

  // string mod = 11;
  if (this->mod().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_mod().data(), static_cast<int>(this->_internal_mod().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.ZtCommonInfo.mod");
    target = stream->WriteStringMaybeAliased(
        11, this->_internal_mod(), target);
  }

  // string net = 12;
  if (this->net().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_net().data(), static_cast<int>(this->_internal_net().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.ZtCommonInfo.net");
    target = stream->WriteStringMaybeAliased(
        12, this->_internal_net(), target);
  }

  // string sys = 13;
  if (this->sys().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_sys().data(), static_cast<int>(this->_internal_sys().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.ZtCommonInfo.sys");
    target = stream->WriteStringMaybeAliased(
        13, this->_internal_sys(), target);
  }

  // string c = 14;
  if (this->c().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_c().data(), static_cast<int>(this->_internal_c().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.ZtCommonInfo.c");
    target = stream->WriteStringMaybeAliased(
        14, this->_internal_c(), target);
  }

  // string language = 15;
  if (this->language().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_language().data(), static_cast<int>(this->_internal_language().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.ZtCommonInfo.language");
    target = stream->WriteStringMaybeAliased(
        15, this->_internal_language(), target);
  }

  // string countryCode = 16;
  if (this->countrycode().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_countrycode().data(), static_cast<int>(this->_internal_countrycode().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.ZtCommonInfo.countryCode");
    target = stream->WriteStringMaybeAliased(
        16, this->_internal_countrycode(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.ZtCommonInfo)
  return target;
}

size_t ZtCommonInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.ZtCommonInfo)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string kpn = 1;
  if (this->kpn().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_kpn());
  }

  // string kpf = 2;
  if (this->kpf().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_kpf());
  }

  // string subBiz = 3;
  if (this->subbiz().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_subbiz());
  }

  // string did = 5;
  if (this->did().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_did());
  }

  // string appVer = 7;
  if (this->appver().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_appver());
  }

  // string ver = 8;
  if (this->ver().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_ver());
  }

  // string lat = 9;
  if (this->lat().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_lat());
  }

  // string lon = 10;
  if (this->lon().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_lon());
  }

  // string mod = 11;
  if (this->mod().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_mod());
  }

  // string net = 12;
  if (this->net().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_net());
  }

  // string sys = 13;
  if (this->sys().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_sys());
  }

  // string c = 14;
  if (this->c().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_c());
  }

  // string language = 15;
  if (this->language().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_language());
  }

  // string countryCode = 16;
  if (this->countrycode().size() > 0) {
    total_size += 2 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_countrycode());
  }

  // int64 uid = 4;
  if (this->uid() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_uid());
  }

  // int64 clientIp = 6;
  if (this->clientip() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_clientip());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ZtCommonInfo::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:AcFunDanmu.ZtCommonInfo)
  GOOGLE_DCHECK_NE(&from, this);
  const ZtCommonInfo* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ZtCommonInfo>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:AcFunDanmu.ZtCommonInfo)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:AcFunDanmu.ZtCommonInfo)
    MergeFrom(*source);
  }
}

void ZtCommonInfo::MergeFrom(const ZtCommonInfo& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.ZtCommonInfo)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.kpn().size() > 0) {
    _internal_set_kpn(from._internal_kpn());
  }
  if (from.kpf().size() > 0) {
    _internal_set_kpf(from._internal_kpf());
  }
  if (from.subbiz().size() > 0) {
    _internal_set_subbiz(from._internal_subbiz());
  }
  if (from.did().size() > 0) {
    _internal_set_did(from._internal_did());
  }
  if (from.appver().size() > 0) {
    _internal_set_appver(from._internal_appver());
  }
  if (from.ver().size() > 0) {
    _internal_set_ver(from._internal_ver());
  }
  if (from.lat().size() > 0) {
    _internal_set_lat(from._internal_lat());
  }
  if (from.lon().size() > 0) {
    _internal_set_lon(from._internal_lon());
  }
  if (from.mod().size() > 0) {
    _internal_set_mod(from._internal_mod());
  }
  if (from.net().size() > 0) {
    _internal_set_net(from._internal_net());
  }
  if (from.sys().size() > 0) {
    _internal_set_sys(from._internal_sys());
  }
  if (from.c().size() > 0) {
    _internal_set_c(from._internal_c());
  }
  if (from.language().size() > 0) {
    _internal_set_language(from._internal_language());
  }
  if (from.countrycode().size() > 0) {
    _internal_set_countrycode(from._internal_countrycode());
  }
  if (from.uid() != 0) {
    _internal_set_uid(from._internal_uid());
  }
  if (from.clientip() != 0) {
    _internal_set_clientip(from._internal_clientip());
  }
}

void ZtCommonInfo::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:AcFunDanmu.ZtCommonInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ZtCommonInfo::CopyFrom(const ZtCommonInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.ZtCommonInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ZtCommonInfo::IsInitialized() const {
  return true;
}

void ZtCommonInfo::InternalSwap(ZtCommonInfo* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  kpn_.Swap(&other->kpn_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  kpf_.Swap(&other->kpf_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  subbiz_.Swap(&other->subbiz_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  did_.Swap(&other->did_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  appver_.Swap(&other->appver_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ver_.Swap(&other->ver_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  lat_.Swap(&other->lat_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  lon_.Swap(&other->lon_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  mod_.Swap(&other->mod_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  net_.Swap(&other->net_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  sys_.Swap(&other->sys_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  c_.Swap(&other->c_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  language_.Swap(&other->language_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  countrycode_.Swap(&other->countrycode_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ZtCommonInfo, clientip_)
      + sizeof(ZtCommonInfo::clientip_)
      - PROTOBUF_FIELD_OFFSET(ZtCommonInfo, uid_)>(
          reinterpret_cast<char*>(&uid_),
          reinterpret_cast<char*>(&other->uid_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ZtCommonInfo::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::ZtCommonInfo* Arena::CreateMaybeMessage< ::AcFunDanmu::ZtCommonInfo >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::ZtCommonInfo >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
