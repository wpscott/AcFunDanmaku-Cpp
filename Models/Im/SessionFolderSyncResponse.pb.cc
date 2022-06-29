// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SessionFolderSyncResponse.proto

#include "SessionFolderSyncResponse.pb.h"

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
PROTOBUF_CONSTEXPR SessionFolderSyncResponse::SessionFolderSyncResponse(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.sessionfolderbasic_)*/{}
  , /*decltype(_impl_.added_)*/{}
  , /*decltype(_impl_.removed_)*/{}
  , /*decltype(_impl_.synccookie_)*/nullptr
  , /*decltype(_impl_.notfullfetch_)*/false
  , /*decltype(_impl_.clearlocaldata_)*/false
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct SessionFolderSyncResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SessionFolderSyncResponseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~SessionFolderSyncResponseDefaultTypeInternal() {}
  union {
    SessionFolderSyncResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SessionFolderSyncResponseDefaultTypeInternal _SessionFolderSyncResponse_default_instance_;
}  // namespace SessionFolder
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_SessionFolderSyncResponse_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_SessionFolderSyncResponse_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_SessionFolderSyncResponse_2eproto = nullptr;

const uint32_t TableStruct_SessionFolderSyncResponse_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderSyncResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderSyncResponse, _impl_.synccookie_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderSyncResponse, _impl_.sessionfolderbasic_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderSyncResponse, _impl_.added_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderSyncResponse, _impl_.removed_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderSyncResponse, _impl_.notfullfetch_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderSyncResponse, _impl_.clearlocaldata_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderSyncResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Cloud::SessionFolder::_SessionFolderSyncResponse_default_instance_._instance,
};

const char descriptor_table_protodef_SessionFolderSyncResponse_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\037SessionFolderSyncResponse.proto\022!AcFun"
  "Danmu.Im.Cloud.SessionFolder\032\030SessionFol"
  "derBasic.proto\032 SessionReferenceUpdateIt"
  "em.proto\032\020SyncCookie.proto\"\357\002\n\031SessionFo"
  "lderSyncResponse\0223\n\nsyncCookie\030\001 \001(\0132\037.A"
  "cFunDanmu.Im.Basic.SyncCookie\022Q\n\022session"
  "FolderBasic\030\002 \003(\01325.AcFunDanmu.Im.Cloud."
  "SessionFolder.SessionFolderBasic\022L\n\005adde"
  "d\030\003 \003(\0132=.AcFunDanmu.Im.Cloud.SessionFol"
  "der.SessionReferenceUpdateItem\022N\n\007remove"
  "d\030\004 \003(\0132=.AcFunDanmu.Im.Cloud.SessionFol"
  "der.SessionReferenceUpdateItem\022\024\n\014notFul"
  "lFetch\030\005 \001(\010\022\026\n\016clearLocalData\030\006 \001(\010b\006pr"
  "oto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_SessionFolderSyncResponse_2eproto_deps[3] = {
  &::descriptor_table_SessionFolderBasic_2eproto,
  &::descriptor_table_SessionReferenceUpdateItem_2eproto,
  &::descriptor_table_SyncCookie_2eproto,
};
static ::_pbi::once_flag descriptor_table_SessionFolderSyncResponse_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_SessionFolderSyncResponse_2eproto = {
    false, false, 524, descriptor_table_protodef_SessionFolderSyncResponse_2eproto,
    "SessionFolderSyncResponse.proto",
    &descriptor_table_SessionFolderSyncResponse_2eproto_once, descriptor_table_SessionFolderSyncResponse_2eproto_deps, 3, 1,
    schemas, file_default_instances, TableStruct_SessionFolderSyncResponse_2eproto::offsets,
    file_level_metadata_SessionFolderSyncResponse_2eproto, file_level_enum_descriptors_SessionFolderSyncResponse_2eproto,
    file_level_service_descriptors_SessionFolderSyncResponse_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_SessionFolderSyncResponse_2eproto_getter() {
  return &descriptor_table_SessionFolderSyncResponse_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_SessionFolderSyncResponse_2eproto(&descriptor_table_SessionFolderSyncResponse_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace SessionFolder {

// ===================================================================

class SessionFolderSyncResponse::_Internal {
 public:
  static const ::AcFunDanmu::Im::Basic::SyncCookie& synccookie(const SessionFolderSyncResponse* msg);
};

const ::AcFunDanmu::Im::Basic::SyncCookie&
SessionFolderSyncResponse::_Internal::synccookie(const SessionFolderSyncResponse* msg) {
  return *msg->_impl_.synccookie_;
}
void SessionFolderSyncResponse::clear_synccookie() {
  if (GetArenaForAllocation() == nullptr && _impl_.synccookie_ != nullptr) {
    delete _impl_.synccookie_;
  }
  _impl_.synccookie_ = nullptr;
}
void SessionFolderSyncResponse::clear_sessionfolderbasic() {
  _impl_.sessionfolderbasic_.Clear();
}
void SessionFolderSyncResponse::clear_added() {
  _impl_.added_.Clear();
}
void SessionFolderSyncResponse::clear_removed() {
  _impl_.removed_.Clear();
}
SessionFolderSyncResponse::SessionFolderSyncResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderSyncResponse)
}
SessionFolderSyncResponse::SessionFolderSyncResponse(const SessionFolderSyncResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  SessionFolderSyncResponse* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.sessionfolderbasic_){from._impl_.sessionfolderbasic_}
    , decltype(_impl_.added_){from._impl_.added_}
    , decltype(_impl_.removed_){from._impl_.removed_}
    , decltype(_impl_.synccookie_){nullptr}
    , decltype(_impl_.notfullfetch_){}
    , decltype(_impl_.clearlocaldata_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_synccookie()) {
    _this->_impl_.synccookie_ = new ::AcFunDanmu::Im::Basic::SyncCookie(*from._impl_.synccookie_);
  }
  ::memcpy(&_impl_.notfullfetch_, &from._impl_.notfullfetch_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.clearlocaldata_) -
    reinterpret_cast<char*>(&_impl_.notfullfetch_)) + sizeof(_impl_.clearlocaldata_));
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderSyncResponse)
}

inline void SessionFolderSyncResponse::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.sessionfolderbasic_){arena}
    , decltype(_impl_.added_){arena}
    , decltype(_impl_.removed_){arena}
    , decltype(_impl_.synccookie_){nullptr}
    , decltype(_impl_.notfullfetch_){false}
    , decltype(_impl_.clearlocaldata_){false}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

SessionFolderSyncResponse::~SessionFolderSyncResponse() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderSyncResponse)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SessionFolderSyncResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.sessionfolderbasic_.~RepeatedPtrField();
  _impl_.added_.~RepeatedPtrField();
  _impl_.removed_.~RepeatedPtrField();
  if (this != internal_default_instance()) delete _impl_.synccookie_;
}

void SessionFolderSyncResponse::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void SessionFolderSyncResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderSyncResponse)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.sessionfolderbasic_.Clear();
  _impl_.added_.Clear();
  _impl_.removed_.Clear();
  if (GetArenaForAllocation() == nullptr && _impl_.synccookie_ != nullptr) {
    delete _impl_.synccookie_;
  }
  _impl_.synccookie_ = nullptr;
  ::memset(&_impl_.notfullfetch_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.clearlocaldata_) -
      reinterpret_cast<char*>(&_impl_.notfullfetch_)) + sizeof(_impl_.clearlocaldata_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SessionFolderSyncResponse::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .AcFunDanmu.Im.Basic.SyncCookie syncCookie = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_synccookie(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated .AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderBasic sessionFolderBasic = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_sessionfolderbasic(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else
          goto handle_unusual;
        continue;
      // repeated .AcFunDanmu.Im.Cloud.SessionFolder.SessionReferenceUpdateItem added = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_added(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else
          goto handle_unusual;
        continue;
      // repeated .AcFunDanmu.Im.Cloud.SessionFolder.SessionReferenceUpdateItem removed = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_removed(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<34>(ptr));
        } else
          goto handle_unusual;
        continue;
      // bool notFullFetch = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          _impl_.notfullfetch_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bool clearLocalData = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 48)) {
          _impl_.clearlocaldata_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

uint8_t* SessionFolderSyncResponse::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderSyncResponse)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .AcFunDanmu.Im.Basic.SyncCookie syncCookie = 1;
  if (this->_internal_has_synccookie()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::synccookie(this),
        _Internal::synccookie(this).GetCachedSize(), target, stream);
  }

  // repeated .AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderBasic sessionFolderBasic = 2;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_sessionfolderbasic_size()); i < n; i++) {
    const auto& repfield = this->_internal_sessionfolderbasic(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(2, repfield, repfield.GetCachedSize(), target, stream);
  }

  // repeated .AcFunDanmu.Im.Cloud.SessionFolder.SessionReferenceUpdateItem added = 3;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_added_size()); i < n; i++) {
    const auto& repfield = this->_internal_added(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(3, repfield, repfield.GetCachedSize(), target, stream);
  }

  // repeated .AcFunDanmu.Im.Cloud.SessionFolder.SessionReferenceUpdateItem removed = 4;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_removed_size()); i < n; i++) {
    const auto& repfield = this->_internal_removed(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(4, repfield, repfield.GetCachedSize(), target, stream);
  }

  // bool notFullFetch = 5;
  if (this->_internal_notfullfetch() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(5, this->_internal_notfullfetch(), target);
  }

  // bool clearLocalData = 6;
  if (this->_internal_clearlocaldata() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(6, this->_internal_clearlocaldata(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderSyncResponse)
  return target;
}

size_t SessionFolderSyncResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderSyncResponse)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderBasic sessionFolderBasic = 2;
  total_size += 1UL * this->_internal_sessionfolderbasic_size();
  for (const auto& msg : this->_impl_.sessionfolderbasic_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .AcFunDanmu.Im.Cloud.SessionFolder.SessionReferenceUpdateItem added = 3;
  total_size += 1UL * this->_internal_added_size();
  for (const auto& msg : this->_impl_.added_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .AcFunDanmu.Im.Cloud.SessionFolder.SessionReferenceUpdateItem removed = 4;
  total_size += 1UL * this->_internal_removed_size();
  for (const auto& msg : this->_impl_.removed_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // .AcFunDanmu.Im.Basic.SyncCookie syncCookie = 1;
  if (this->_internal_has_synccookie()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.synccookie_);
  }

  // bool notFullFetch = 5;
  if (this->_internal_notfullfetch() != 0) {
    total_size += 1 + 1;
  }

  // bool clearLocalData = 6;
  if (this->_internal_clearlocaldata() != 0) {
    total_size += 1 + 1;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SessionFolderSyncResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    SessionFolderSyncResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SessionFolderSyncResponse::GetClassData() const { return &_class_data_; }


void SessionFolderSyncResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<SessionFolderSyncResponse*>(&to_msg);
  auto& from = static_cast<const SessionFolderSyncResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderSyncResponse)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.sessionfolderbasic_.MergeFrom(from._impl_.sessionfolderbasic_);
  _this->_impl_.added_.MergeFrom(from._impl_.added_);
  _this->_impl_.removed_.MergeFrom(from._impl_.removed_);
  if (from._internal_has_synccookie()) {
    _this->_internal_mutable_synccookie()->::AcFunDanmu::Im::Basic::SyncCookie::MergeFrom(
        from._internal_synccookie());
  }
  if (from._internal_notfullfetch() != 0) {
    _this->_internal_set_notfullfetch(from._internal_notfullfetch());
  }
  if (from._internal_clearlocaldata() != 0) {
    _this->_internal_set_clearlocaldata(from._internal_clearlocaldata());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SessionFolderSyncResponse::CopyFrom(const SessionFolderSyncResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderSyncResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SessionFolderSyncResponse::IsInitialized() const {
  return true;
}

void SessionFolderSyncResponse::InternalSwap(SessionFolderSyncResponse* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.sessionfolderbasic_.InternalSwap(&other->_impl_.sessionfolderbasic_);
  _impl_.added_.InternalSwap(&other->_impl_.added_);
  _impl_.removed_.InternalSwap(&other->_impl_.removed_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(SessionFolderSyncResponse, _impl_.clearlocaldata_)
      + sizeof(SessionFolderSyncResponse::_impl_.clearlocaldata_)
      - PROTOBUF_FIELD_OFFSET(SessionFolderSyncResponse, _impl_.synccookie_)>(
          reinterpret_cast<char*>(&_impl_.synccookie_),
          reinterpret_cast<char*>(&other->_impl_.synccookie_));
}

::PROTOBUF_NAMESPACE_ID::Metadata SessionFolderSyncResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_SessionFolderSyncResponse_2eproto_getter, &descriptor_table_SessionFolderSyncResponse_2eproto_once,
      file_level_metadata_SessionFolderSyncResponse_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace SessionFolder
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderSyncResponse*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderSyncResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderSyncResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>