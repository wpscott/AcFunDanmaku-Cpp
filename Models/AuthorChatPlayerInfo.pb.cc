// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AuthorChatPlayerInfo.proto

#include "AuthorChatPlayerInfo.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_ZtLiveUserInfo_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_ZtLiveUserInfo_ZtLiveUserInfo_2eproto;
namespace AcFunDanmu {
class AuthorChatPlayerInfoDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<AuthorChatPlayerInfo> _instance;
} _AuthorChatPlayerInfo_default_instance_;
}  // namespace AcFunDanmu
static void InitDefaultsscc_info_AuthorChatPlayerInfo_AuthorChatPlayerInfo_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::AcFunDanmu::_AuthorChatPlayerInfo_default_instance_;
    new (ptr) ::AcFunDanmu::AuthorChatPlayerInfo();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_AuthorChatPlayerInfo_AuthorChatPlayerInfo_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_AuthorChatPlayerInfo_AuthorChatPlayerInfo_2eproto}, {
      &scc_info_ZtLiveUserInfo_ZtLiveUserInfo_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_AuthorChatPlayerInfo_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_AuthorChatPlayerInfo_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_AuthorChatPlayerInfo_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_AuthorChatPlayerInfo_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::AuthorChatPlayerInfo, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::AuthorChatPlayerInfo, player_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::AuthorChatPlayerInfo, liveid_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::AuthorChatPlayerInfo, enablejumppeerliveroom_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::AcFunDanmu::AuthorChatPlayerInfo)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::AcFunDanmu::_AuthorChatPlayerInfo_default_instance_),
};

const char descriptor_table_protodef_AuthorChatPlayerInfo_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\032AuthorChatPlayerInfo.proto\022\nAcFunDanmu"
  "\032\024ZtLiveUserInfo.proto\"r\n\024AuthorChatPlay"
  "erInfo\022*\n\006player\030\001 \001(\0132\032.AcFunDanmu.ZtLi"
  "veUserInfo\022\016\n\006liveId\030\002 \001(\t\022\036\n\026enableJump"
  "PeerLiveRoom\030\003 \001(\010b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_AuthorChatPlayerInfo_2eproto_deps[1] = {
  &::descriptor_table_ZtLiveUserInfo_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_AuthorChatPlayerInfo_2eproto_sccs[1] = {
  &scc_info_AuthorChatPlayerInfo_AuthorChatPlayerInfo_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_AuthorChatPlayerInfo_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_AuthorChatPlayerInfo_2eproto = {
  false, false, descriptor_table_protodef_AuthorChatPlayerInfo_2eproto, "AuthorChatPlayerInfo.proto", 186,
  &descriptor_table_AuthorChatPlayerInfo_2eproto_once, descriptor_table_AuthorChatPlayerInfo_2eproto_sccs, descriptor_table_AuthorChatPlayerInfo_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_AuthorChatPlayerInfo_2eproto::offsets,
  file_level_metadata_AuthorChatPlayerInfo_2eproto, 1, file_level_enum_descriptors_AuthorChatPlayerInfo_2eproto, file_level_service_descriptors_AuthorChatPlayerInfo_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_AuthorChatPlayerInfo_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_AuthorChatPlayerInfo_2eproto)), true);
namespace AcFunDanmu {

// ===================================================================

class AuthorChatPlayerInfo::_Internal {
 public:
  static const ::AcFunDanmu::ZtLiveUserInfo& player(const AuthorChatPlayerInfo* msg);
};

const ::AcFunDanmu::ZtLiveUserInfo&
AuthorChatPlayerInfo::_Internal::player(const AuthorChatPlayerInfo* msg) {
  return *msg->player_;
}
void AuthorChatPlayerInfo::clear_player() {
  if (GetArena() == nullptr && player_ != nullptr) {
    delete player_;
  }
  player_ = nullptr;
}
AuthorChatPlayerInfo::AuthorChatPlayerInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.AuthorChatPlayerInfo)
}
AuthorChatPlayerInfo::AuthorChatPlayerInfo(const AuthorChatPlayerInfo& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  liveid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_liveid().empty()) {
    liveid_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_liveid(), 
      GetArena());
  }
  if (from._internal_has_player()) {
    player_ = new ::AcFunDanmu::ZtLiveUserInfo(*from.player_);
  } else {
    player_ = nullptr;
  }
  enablejumppeerliveroom_ = from.enablejumppeerliveroom_;
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.AuthorChatPlayerInfo)
}

void AuthorChatPlayerInfo::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_AuthorChatPlayerInfo_AuthorChatPlayerInfo_2eproto.base);
  liveid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
      reinterpret_cast<char*>(&player_) - reinterpret_cast<char*>(this)),
      0, static_cast<size_t>(reinterpret_cast<char*>(&enablejumppeerliveroom_) -
      reinterpret_cast<char*>(&player_)) + sizeof(enablejumppeerliveroom_));
}

AuthorChatPlayerInfo::~AuthorChatPlayerInfo() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.AuthorChatPlayerInfo)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void AuthorChatPlayerInfo::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  liveid_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete player_;
}

void AuthorChatPlayerInfo::ArenaDtor(void* object) {
  AuthorChatPlayerInfo* _this = reinterpret_cast< AuthorChatPlayerInfo* >(object);
  (void)_this;
}
void AuthorChatPlayerInfo::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void AuthorChatPlayerInfo::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const AuthorChatPlayerInfo& AuthorChatPlayerInfo::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_AuthorChatPlayerInfo_AuthorChatPlayerInfo_2eproto.base);
  return *internal_default_instance();
}


void AuthorChatPlayerInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.AuthorChatPlayerInfo)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  liveid_.ClearToEmpty();
  if (GetArena() == nullptr && player_ != nullptr) {
    delete player_;
  }
  player_ = nullptr;
  enablejumppeerliveroom_ = false;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* AuthorChatPlayerInfo::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .AcFunDanmu.ZtLiveUserInfo player = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_player(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string liveId = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_liveid();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "AcFunDanmu.AuthorChatPlayerInfo.liveId"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bool enableJumpPeerLiveRoom = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          enablejumppeerliveroom_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* AuthorChatPlayerInfo::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.AuthorChatPlayerInfo)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .AcFunDanmu.ZtLiveUserInfo player = 1;
  if (this->has_player()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::player(this), target, stream);
  }

  // string liveId = 2;
  if (this->liveid().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_liveid().data(), static_cast<int>(this->_internal_liveid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.AuthorChatPlayerInfo.liveId");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_liveid(), target);
  }

  // bool enableJumpPeerLiveRoom = 3;
  if (this->enablejumppeerliveroom() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(3, this->_internal_enablejumppeerliveroom(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.AuthorChatPlayerInfo)
  return target;
}

size_t AuthorChatPlayerInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.AuthorChatPlayerInfo)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string liveId = 2;
  if (this->liveid().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_liveid());
  }

  // .AcFunDanmu.ZtLiveUserInfo player = 1;
  if (this->has_player()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *player_);
  }

  // bool enableJumpPeerLiveRoom = 3;
  if (this->enablejumppeerliveroom() != 0) {
    total_size += 1 + 1;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void AuthorChatPlayerInfo::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:AcFunDanmu.AuthorChatPlayerInfo)
  GOOGLE_DCHECK_NE(&from, this);
  const AuthorChatPlayerInfo* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<AuthorChatPlayerInfo>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:AcFunDanmu.AuthorChatPlayerInfo)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:AcFunDanmu.AuthorChatPlayerInfo)
    MergeFrom(*source);
  }
}

void AuthorChatPlayerInfo::MergeFrom(const AuthorChatPlayerInfo& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.AuthorChatPlayerInfo)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.liveid().size() > 0) {
    _internal_set_liveid(from._internal_liveid());
  }
  if (from.has_player()) {
    _internal_mutable_player()->::AcFunDanmu::ZtLiveUserInfo::MergeFrom(from._internal_player());
  }
  if (from.enablejumppeerliveroom() != 0) {
    _internal_set_enablejumppeerliveroom(from._internal_enablejumppeerliveroom());
  }
}

void AuthorChatPlayerInfo::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:AcFunDanmu.AuthorChatPlayerInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AuthorChatPlayerInfo::CopyFrom(const AuthorChatPlayerInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.AuthorChatPlayerInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AuthorChatPlayerInfo::IsInitialized() const {
  return true;
}

void AuthorChatPlayerInfo::InternalSwap(AuthorChatPlayerInfo* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  liveid_.Swap(&other->liveid_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(AuthorChatPlayerInfo, enablejumppeerliveroom_)
      + sizeof(AuthorChatPlayerInfo::enablejumppeerliveroom_)
      - PROTOBUF_FIELD_OFFSET(AuthorChatPlayerInfo, player_)>(
          reinterpret_cast<char*>(&player_),
          reinterpret_cast<char*>(&other->player_));
}

::PROTOBUF_NAMESPACE_ID::Metadata AuthorChatPlayerInfo::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::AuthorChatPlayerInfo* Arena::CreateMaybeMessage< ::AcFunDanmu::AuthorChatPlayerInfo >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::AuthorChatPlayerInfo >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>