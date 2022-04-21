// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CommonActionSignalGift.proto

#include "CommonActionSignalGift.pb.h"

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
namespace AcFunDanmu {
constexpr CommonActionSignalGift::CommonActionSignalGift(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : comboid_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , user_(nullptr)
  , drawgiftinfo_(nullptr)
  , sendtimems_(int64_t{0})
  , giftid_(int64_t{0})
  , count_(0)
  , combo_(0)
  , value_(int64_t{0})
  , slotdisplaydurationms_(int64_t{0})
  , expiredurationms_(int64_t{0}){}
struct CommonActionSignalGiftDefaultTypeInternal {
  constexpr CommonActionSignalGiftDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~CommonActionSignalGiftDefaultTypeInternal() {}
  union {
    CommonActionSignalGift _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT CommonActionSignalGiftDefaultTypeInternal _CommonActionSignalGift_default_instance_;
}  // namespace AcFunDanmu
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_CommonActionSignalGift_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_CommonActionSignalGift_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_CommonActionSignalGift_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_CommonActionSignalGift_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonActionSignalGift, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonActionSignalGift, user_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonActionSignalGift, sendtimems_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonActionSignalGift, giftid_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonActionSignalGift, count_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonActionSignalGift, combo_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonActionSignalGift, value_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonActionSignalGift, comboid_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonActionSignalGift, slotdisplaydurationms_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonActionSignalGift, expiredurationms_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonActionSignalGift, drawgiftinfo_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::AcFunDanmu::CommonActionSignalGift)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::AcFunDanmu::_CommonActionSignalGift_default_instance_),
};

const char descriptor_table_protodef_CommonActionSignalGift_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\034CommonActionSignalGift.proto\022\nAcFunDan"
  "mu\032\024ZtLiveUserInfo.proto\032\024ZtDrawGiftInfo"
  ".proto\"\217\002\n\026CommonActionSignalGift\022(\n\004use"
  "r\030\001 \001(\0132\032.AcFunDanmu.ZtLiveUserInfo\022\022\n\ns"
  "endTimeMs\030\002 \001(\003\022\016\n\006giftId\030\003 \001(\003\022\r\n\005count"
  "\030\004 \001(\005\022\r\n\005combo\030\005 \001(\005\022\r\n\005value\030\006 \001(\003\022\017\n\007"
  "comboId\030\007 \001(\t\022\035\n\025slotDisplayDurationMs\030\010"
  " \001(\003\022\030\n\020expireDurationMs\030\t \001(\003\0220\n\014drawGi"
  "ftInfo\030\n \001(\0132\032.AcFunDanmu.ZtDrawGiftInfo"
  "b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_CommonActionSignalGift_2eproto_deps[2] = {
  &::descriptor_table_ZtDrawGiftInfo_2eproto,
  &::descriptor_table_ZtLiveUserInfo_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_CommonActionSignalGift_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_CommonActionSignalGift_2eproto = {
  false, false, 368, descriptor_table_protodef_CommonActionSignalGift_2eproto, "CommonActionSignalGift.proto", 
  &descriptor_table_CommonActionSignalGift_2eproto_once, descriptor_table_CommonActionSignalGift_2eproto_deps, 2, 1,
  schemas, file_default_instances, TableStruct_CommonActionSignalGift_2eproto::offsets,
  file_level_metadata_CommonActionSignalGift_2eproto, file_level_enum_descriptors_CommonActionSignalGift_2eproto, file_level_service_descriptors_CommonActionSignalGift_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_CommonActionSignalGift_2eproto_getter() {
  return &descriptor_table_CommonActionSignalGift_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_CommonActionSignalGift_2eproto(&descriptor_table_CommonActionSignalGift_2eproto);
namespace AcFunDanmu {

// ===================================================================

class CommonActionSignalGift::_Internal {
 public:
  static const ::AcFunDanmu::ZtLiveUserInfo& user(const CommonActionSignalGift* msg);
  static const ::AcFunDanmu::ZtDrawGiftInfo& drawgiftinfo(const CommonActionSignalGift* msg);
};

const ::AcFunDanmu::ZtLiveUserInfo&
CommonActionSignalGift::_Internal::user(const CommonActionSignalGift* msg) {
  return *msg->user_;
}
const ::AcFunDanmu::ZtDrawGiftInfo&
CommonActionSignalGift::_Internal::drawgiftinfo(const CommonActionSignalGift* msg) {
  return *msg->drawgiftinfo_;
}
void CommonActionSignalGift::clear_user() {
  if (GetArenaForAllocation() == nullptr && user_ != nullptr) {
    delete user_;
  }
  user_ = nullptr;
}
void CommonActionSignalGift::clear_drawgiftinfo() {
  if (GetArenaForAllocation() == nullptr && drawgiftinfo_ != nullptr) {
    delete drawgiftinfo_;
  }
  drawgiftinfo_ = nullptr;
}
CommonActionSignalGift::CommonActionSignalGift(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.CommonActionSignalGift)
}
CommonActionSignalGift::CommonActionSignalGift(const CommonActionSignalGift& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  comboid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_comboid().empty()) {
    comboid_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_comboid(), 
      GetArenaForAllocation());
  }
  if (from._internal_has_user()) {
    user_ = new ::AcFunDanmu::ZtLiveUserInfo(*from.user_);
  } else {
    user_ = nullptr;
  }
  if (from._internal_has_drawgiftinfo()) {
    drawgiftinfo_ = new ::AcFunDanmu::ZtDrawGiftInfo(*from.drawgiftinfo_);
  } else {
    drawgiftinfo_ = nullptr;
  }
  ::memcpy(&sendtimems_, &from.sendtimems_,
    static_cast<size_t>(reinterpret_cast<char*>(&expiredurationms_) -
    reinterpret_cast<char*>(&sendtimems_)) + sizeof(expiredurationms_));
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.CommonActionSignalGift)
}

void CommonActionSignalGift::SharedCtor() {
comboid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&user_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&expiredurationms_) -
    reinterpret_cast<char*>(&user_)) + sizeof(expiredurationms_));
}

CommonActionSignalGift::~CommonActionSignalGift() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.CommonActionSignalGift)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void CommonActionSignalGift::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  comboid_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete user_;
  if (this != internal_default_instance()) delete drawgiftinfo_;
}

void CommonActionSignalGift::ArenaDtor(void* object) {
  CommonActionSignalGift* _this = reinterpret_cast< CommonActionSignalGift* >(object);
  (void)_this;
}
void CommonActionSignalGift::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void CommonActionSignalGift::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void CommonActionSignalGift::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.CommonActionSignalGift)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  comboid_.ClearToEmpty();
  if (GetArenaForAllocation() == nullptr && user_ != nullptr) {
    delete user_;
  }
  user_ = nullptr;
  if (GetArenaForAllocation() == nullptr && drawgiftinfo_ != nullptr) {
    delete drawgiftinfo_;
  }
  drawgiftinfo_ = nullptr;
  ::memset(&sendtimems_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&expiredurationms_) -
      reinterpret_cast<char*>(&sendtimems_)) + sizeof(expiredurationms_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* CommonActionSignalGift::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .AcFunDanmu.ZtLiveUserInfo user = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_user(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int64 sendTimeMs = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          sendtimems_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int64 giftId = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          giftid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 count = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          count_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 combo = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          combo_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int64 value = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 48)) {
          value_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string comboId = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          auto str = _internal_mutable_comboid();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "AcFunDanmu.CommonActionSignalGift.comboId"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int64 slotDisplayDurationMs = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 64)) {
          slotdisplaydurationms_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int64 expireDurationMs = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 72)) {
          expiredurationms_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .AcFunDanmu.ZtDrawGiftInfo drawGiftInfo = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 82)) {
          ptr = ctx->ParseMessage(_internal_mutable_drawgiftinfo(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* CommonActionSignalGift::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.CommonActionSignalGift)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .AcFunDanmu.ZtLiveUserInfo user = 1;
  if (this->has_user()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::user(this), target, stream);
  }

  // int64 sendTimeMs = 2;
  if (this->sendtimems() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(2, this->_internal_sendtimems(), target);
  }

  // int64 giftId = 3;
  if (this->giftid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(3, this->_internal_giftid(), target);
  }

  // int32 count = 4;
  if (this->count() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(4, this->_internal_count(), target);
  }

  // int32 combo = 5;
  if (this->combo() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(5, this->_internal_combo(), target);
  }

  // int64 value = 6;
  if (this->value() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(6, this->_internal_value(), target);
  }

  // string comboId = 7;
  if (!this->comboid().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_comboid().data(), static_cast<int>(this->_internal_comboid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.CommonActionSignalGift.comboId");
    target = stream->WriteStringMaybeAliased(
        7, this->_internal_comboid(), target);
  }

  // int64 slotDisplayDurationMs = 8;
  if (this->slotdisplaydurationms() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(8, this->_internal_slotdisplaydurationms(), target);
  }

  // int64 expireDurationMs = 9;
  if (this->expiredurationms() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(9, this->_internal_expiredurationms(), target);
  }

  // .AcFunDanmu.ZtDrawGiftInfo drawGiftInfo = 10;
  if (this->has_drawgiftinfo()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        10, _Internal::drawgiftinfo(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.CommonActionSignalGift)
  return target;
}

size_t CommonActionSignalGift::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.CommonActionSignalGift)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string comboId = 7;
  if (!this->comboid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_comboid());
  }

  // .AcFunDanmu.ZtLiveUserInfo user = 1;
  if (this->has_user()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *user_);
  }

  // .AcFunDanmu.ZtDrawGiftInfo drawGiftInfo = 10;
  if (this->has_drawgiftinfo()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *drawgiftinfo_);
  }

  // int64 sendTimeMs = 2;
  if (this->sendtimems() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_sendtimems());
  }

  // int64 giftId = 3;
  if (this->giftid() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_giftid());
  }

  // int32 count = 4;
  if (this->count() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_count());
  }

  // int32 combo = 5;
  if (this->combo() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_combo());
  }

  // int64 value = 6;
  if (this->value() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_value());
  }

  // int64 slotDisplayDurationMs = 8;
  if (this->slotdisplaydurationms() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_slotdisplaydurationms());
  }

  // int64 expireDurationMs = 9;
  if (this->expiredurationms() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_expiredurationms());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void CommonActionSignalGift::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:AcFunDanmu.CommonActionSignalGift)
  GOOGLE_DCHECK_NE(&from, this);
  const CommonActionSignalGift* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<CommonActionSignalGift>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:AcFunDanmu.CommonActionSignalGift)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:AcFunDanmu.CommonActionSignalGift)
    MergeFrom(*source);
  }
}

void CommonActionSignalGift::MergeFrom(const CommonActionSignalGift& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.CommonActionSignalGift)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from.comboid().empty()) {
    _internal_set_comboid(from._internal_comboid());
  }
  if (from.has_user()) {
    _internal_mutable_user()->::AcFunDanmu::ZtLiveUserInfo::MergeFrom(from._internal_user());
  }
  if (from.has_drawgiftinfo()) {
    _internal_mutable_drawgiftinfo()->::AcFunDanmu::ZtDrawGiftInfo::MergeFrom(from._internal_drawgiftinfo());
  }
  if (from.sendtimems() != 0) {
    _internal_set_sendtimems(from._internal_sendtimems());
  }
  if (from.giftid() != 0) {
    _internal_set_giftid(from._internal_giftid());
  }
  if (from.count() != 0) {
    _internal_set_count(from._internal_count());
  }
  if (from.combo() != 0) {
    _internal_set_combo(from._internal_combo());
  }
  if (from.value() != 0) {
    _internal_set_value(from._internal_value());
  }
  if (from.slotdisplaydurationms() != 0) {
    _internal_set_slotdisplaydurationms(from._internal_slotdisplaydurationms());
  }
  if (from.expiredurationms() != 0) {
    _internal_set_expiredurationms(from._internal_expiredurationms());
  }
}

void CommonActionSignalGift::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:AcFunDanmu.CommonActionSignalGift)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CommonActionSignalGift::CopyFrom(const CommonActionSignalGift& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.CommonActionSignalGift)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CommonActionSignalGift::IsInitialized() const {
  return true;
}

void CommonActionSignalGift::InternalSwap(CommonActionSignalGift* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &comboid_, GetArenaForAllocation(),
      &other->comboid_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(CommonActionSignalGift, expiredurationms_)
      + sizeof(CommonActionSignalGift::expiredurationms_)
      - PROTOBUF_FIELD_OFFSET(CommonActionSignalGift, user_)>(
          reinterpret_cast<char*>(&user_),
          reinterpret_cast<char*>(&other->user_));
}

::PROTOBUF_NAMESPACE_ID::Metadata CommonActionSignalGift::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_CommonActionSignalGift_2eproto_getter, &descriptor_table_CommonActionSignalGift_2eproto_once,
      file_level_metadata_CommonActionSignalGift_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::CommonActionSignalGift* Arena::CreateMaybeMessage< ::AcFunDanmu::CommonActionSignalGift >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::CommonActionSignalGift >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
