// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CommonNotifySignalLiveManagerState.proto

#include "CommonNotifySignalLiveManagerState.pb.h"

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
class CommonNotifySignalLiveManagerStateDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<CommonNotifySignalLiveManagerState> _instance;
} _CommonNotifySignalLiveManagerState_default_instance_;
}  // namespace AcFunDanmu
static void InitDefaultsscc_info_CommonNotifySignalLiveManagerState_CommonNotifySignalLiveManagerState_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::AcFunDanmu::_CommonNotifySignalLiveManagerState_default_instance_;
    new (ptr) ::AcFunDanmu::CommonNotifySignalLiveManagerState();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::AcFunDanmu::CommonNotifySignalLiveManagerState::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_CommonNotifySignalLiveManagerState_CommonNotifySignalLiveManagerState_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_CommonNotifySignalLiveManagerState_CommonNotifySignalLiveManagerState_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_CommonNotifySignalLiveManagerState_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_CommonNotifySignalLiveManagerState_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_CommonNotifySignalLiveManagerState_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_CommonNotifySignalLiveManagerState_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonNotifySignalLiveManagerState, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonNotifySignalLiveManagerState, state_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::AcFunDanmu::CommonNotifySignalLiveManagerState)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::AcFunDanmu::_CommonNotifySignalLiveManagerState_default_instance_),
};

const char descriptor_table_protodef_CommonNotifySignalLiveManagerState_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n(CommonNotifySignalLiveManagerState.pro"
  "to\022\nAcFunDanmu\"\323\001\n\"CommonNotifySignalLiv"
  "eManagerState\022J\n\005state\030\001 \001(\0162;.AcFunDanm"
  "u.CommonNotifySignalLiveManagerState.Man"
  "agerState\"a\n\014ManagerState\022\031\n\025MANAGER_STA"
  "TE_UNKNOWN\020\000\022\021\n\rMANAGER_ADDED\020\001\022\023\n\017MANAG"
  "ER_REMOVED\020\002\022\016\n\nIS_MANAGER\020\003b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_CommonNotifySignalLiveManagerState_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_CommonNotifySignalLiveManagerState_2eproto_sccs[1] = {
  &scc_info_CommonNotifySignalLiveManagerState_CommonNotifySignalLiveManagerState_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_CommonNotifySignalLiveManagerState_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_CommonNotifySignalLiveManagerState_2eproto = {
  false, false, descriptor_table_protodef_CommonNotifySignalLiveManagerState_2eproto, "CommonNotifySignalLiveManagerState.proto", 276,
  &descriptor_table_CommonNotifySignalLiveManagerState_2eproto_once, descriptor_table_CommonNotifySignalLiveManagerState_2eproto_sccs, descriptor_table_CommonNotifySignalLiveManagerState_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_CommonNotifySignalLiveManagerState_2eproto::offsets,
  file_level_metadata_CommonNotifySignalLiveManagerState_2eproto, 1, file_level_enum_descriptors_CommonNotifySignalLiveManagerState_2eproto, file_level_service_descriptors_CommonNotifySignalLiveManagerState_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_CommonNotifySignalLiveManagerState_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_CommonNotifySignalLiveManagerState_2eproto)), true);
namespace AcFunDanmu {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* CommonNotifySignalLiveManagerState_ManagerState_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_CommonNotifySignalLiveManagerState_2eproto);
  return file_level_enum_descriptors_CommonNotifySignalLiveManagerState_2eproto[0];
}
bool CommonNotifySignalLiveManagerState_ManagerState_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr CommonNotifySignalLiveManagerState_ManagerState CommonNotifySignalLiveManagerState::MANAGER_STATE_UNKNOWN;
constexpr CommonNotifySignalLiveManagerState_ManagerState CommonNotifySignalLiveManagerState::MANAGER_ADDED;
constexpr CommonNotifySignalLiveManagerState_ManagerState CommonNotifySignalLiveManagerState::MANAGER_REMOVED;
constexpr CommonNotifySignalLiveManagerState_ManagerState CommonNotifySignalLiveManagerState::IS_MANAGER;
constexpr CommonNotifySignalLiveManagerState_ManagerState CommonNotifySignalLiveManagerState::ManagerState_MIN;
constexpr CommonNotifySignalLiveManagerState_ManagerState CommonNotifySignalLiveManagerState::ManagerState_MAX;
constexpr int CommonNotifySignalLiveManagerState::ManagerState_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

void CommonNotifySignalLiveManagerState::InitAsDefaultInstance() {
}
class CommonNotifySignalLiveManagerState::_Internal {
 public:
};

CommonNotifySignalLiveManagerState::CommonNotifySignalLiveManagerState(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.CommonNotifySignalLiveManagerState)
}
CommonNotifySignalLiveManagerState::CommonNotifySignalLiveManagerState(const CommonNotifySignalLiveManagerState& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  state_ = from.state_;
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.CommonNotifySignalLiveManagerState)
}

void CommonNotifySignalLiveManagerState::SharedCtor() {
  state_ = 0;
}

CommonNotifySignalLiveManagerState::~CommonNotifySignalLiveManagerState() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.CommonNotifySignalLiveManagerState)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void CommonNotifySignalLiveManagerState::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void CommonNotifySignalLiveManagerState::ArenaDtor(void* object) {
  CommonNotifySignalLiveManagerState* _this = reinterpret_cast< CommonNotifySignalLiveManagerState* >(object);
  (void)_this;
}
void CommonNotifySignalLiveManagerState::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void CommonNotifySignalLiveManagerState::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const CommonNotifySignalLiveManagerState& CommonNotifySignalLiveManagerState::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_CommonNotifySignalLiveManagerState_CommonNotifySignalLiveManagerState_2eproto.base);
  return *internal_default_instance();
}


void CommonNotifySignalLiveManagerState::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.CommonNotifySignalLiveManagerState)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  state_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* CommonNotifySignalLiveManagerState::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .AcFunDanmu.CommonNotifySignalLiveManagerState.ManagerState state = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_state(static_cast<::AcFunDanmu::CommonNotifySignalLiveManagerState_ManagerState>(val));
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

::PROTOBUF_NAMESPACE_ID::uint8* CommonNotifySignalLiveManagerState::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.CommonNotifySignalLiveManagerState)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .AcFunDanmu.CommonNotifySignalLiveManagerState.ManagerState state = 1;
  if (this->state() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_state(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.CommonNotifySignalLiveManagerState)
  return target;
}

size_t CommonNotifySignalLiveManagerState::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.CommonNotifySignalLiveManagerState)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .AcFunDanmu.CommonNotifySignalLiveManagerState.ManagerState state = 1;
  if (this->state() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_state());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void CommonNotifySignalLiveManagerState::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:AcFunDanmu.CommonNotifySignalLiveManagerState)
  GOOGLE_DCHECK_NE(&from, this);
  const CommonNotifySignalLiveManagerState* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<CommonNotifySignalLiveManagerState>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:AcFunDanmu.CommonNotifySignalLiveManagerState)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:AcFunDanmu.CommonNotifySignalLiveManagerState)
    MergeFrom(*source);
  }
}

void CommonNotifySignalLiveManagerState::MergeFrom(const CommonNotifySignalLiveManagerState& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.CommonNotifySignalLiveManagerState)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.state() != 0) {
    _internal_set_state(from._internal_state());
  }
}

void CommonNotifySignalLiveManagerState::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:AcFunDanmu.CommonNotifySignalLiveManagerState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CommonNotifySignalLiveManagerState::CopyFrom(const CommonNotifySignalLiveManagerState& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.CommonNotifySignalLiveManagerState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CommonNotifySignalLiveManagerState::IsInitialized() const {
  return true;
}

void CommonNotifySignalLiveManagerState::InternalSwap(CommonNotifySignalLiveManagerState* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(state_, other->state_);
}

::PROTOBUF_NAMESPACE_ID::Metadata CommonNotifySignalLiveManagerState::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::CommonNotifySignalLiveManagerState* Arena::CreateMaybeMessage< ::AcFunDanmu::CommonNotifySignalLiveManagerState >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::CommonNotifySignalLiveManagerState >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>