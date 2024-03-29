// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SessionSearchRequest.proto

#include "SessionSearchRequest.pb.h"

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
namespace Search {
PROTOBUF_CONSTEXPR SessionSearchRequest::SessionSearchRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.groupname_)*/{}
  , /*decltype(_impl_.membername_)*/{}
  , /*decltype(_impl_.query_)*/{}
  , /*decltype(_impl_.filename_)*/{}
  , /*decltype(_impl_.memberid_)*/{}
  , /*decltype(_impl_.timefilter_)*/nullptr
  , /*decltype(_impl_.msgcountpersession_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct SessionSearchRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SessionSearchRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~SessionSearchRequestDefaultTypeInternal() {}
  union {
    SessionSearchRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SessionSearchRequestDefaultTypeInternal _SessionSearchRequest_default_instance_;
}  // namespace Search
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_SessionSearchRequest_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_SessionSearchRequest_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_SessionSearchRequest_2eproto = nullptr;

const uint32_t TableStruct_SessionSearchRequest_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Search::SessionSearchRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Search::SessionSearchRequest, _impl_.groupname_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Search::SessionSearchRequest, _impl_.membername_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Search::SessionSearchRequest, _impl_.query_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Search::SessionSearchRequest, _impl_.filename_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Search::SessionSearchRequest, _impl_.timefilter_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Search::SessionSearchRequest, _impl_.msgcountpersession_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Search::SessionSearchRequest, _impl_.memberid_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Cloud::Search::SessionSearchRequest)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Cloud::Search::_SessionSearchRequest_default_instance_._instance,
};

const char descriptor_table_protodef_SessionSearchRequest_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\032SessionSearchRequest.proto\022\032AcFunDanmu"
  ".Im.Cloud.Search\032\020TimeFilter.proto\"\310\001\n\024S"
  "essionSearchRequest\022\021\n\tgroupName\030\001 \003(\t\022\022"
  "\n\nmemberName\030\002 \003(\t\022\r\n\005query\030\003 \003(\t\022\020\n\010fil"
  "eName\030\004 \003(\t\022:\n\ntimeFilter\030\005 \001(\0132&.AcFunD"
  "anmu.Im.Cloud.Search.TimeFilter\022\032\n\022msgCo"
  "untPerSession\030\006 \001(\005\022\020\n\010memberId\030\007 \003(\tb\006p"
  "roto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_SessionSearchRequest_2eproto_deps[1] = {
  &::descriptor_table_TimeFilter_2eproto,
};
static ::_pbi::once_flag descriptor_table_SessionSearchRequest_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_SessionSearchRequest_2eproto = {
    false, false, 285, descriptor_table_protodef_SessionSearchRequest_2eproto,
    "SessionSearchRequest.proto",
    &descriptor_table_SessionSearchRequest_2eproto_once, descriptor_table_SessionSearchRequest_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_SessionSearchRequest_2eproto::offsets,
    file_level_metadata_SessionSearchRequest_2eproto, file_level_enum_descriptors_SessionSearchRequest_2eproto,
    file_level_service_descriptors_SessionSearchRequest_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_SessionSearchRequest_2eproto_getter() {
  return &descriptor_table_SessionSearchRequest_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_SessionSearchRequest_2eproto(&descriptor_table_SessionSearchRequest_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Search {

// ===================================================================

class SessionSearchRequest::_Internal {
 public:
  static const ::AcFunDanmu::Im::Cloud::Search::TimeFilter& timefilter(const SessionSearchRequest* msg);
};

const ::AcFunDanmu::Im::Cloud::Search::TimeFilter&
SessionSearchRequest::_Internal::timefilter(const SessionSearchRequest* msg) {
  return *msg->_impl_.timefilter_;
}
void SessionSearchRequest::clear_timefilter() {
  if (GetArenaForAllocation() == nullptr && _impl_.timefilter_ != nullptr) {
    delete _impl_.timefilter_;
  }
  _impl_.timefilter_ = nullptr;
}
SessionSearchRequest::SessionSearchRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Cloud.Search.SessionSearchRequest)
}
SessionSearchRequest::SessionSearchRequest(const SessionSearchRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  SessionSearchRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.groupname_){from._impl_.groupname_}
    , decltype(_impl_.membername_){from._impl_.membername_}
    , decltype(_impl_.query_){from._impl_.query_}
    , decltype(_impl_.filename_){from._impl_.filename_}
    , decltype(_impl_.memberid_){from._impl_.memberid_}
    , decltype(_impl_.timefilter_){nullptr}
    , decltype(_impl_.msgcountpersession_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_timefilter()) {
    _this->_impl_.timefilter_ = new ::AcFunDanmu::Im::Cloud::Search::TimeFilter(*from._impl_.timefilter_);
  }
  _this->_impl_.msgcountpersession_ = from._impl_.msgcountpersession_;
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Cloud.Search.SessionSearchRequest)
}

inline void SessionSearchRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.groupname_){arena}
    , decltype(_impl_.membername_){arena}
    , decltype(_impl_.query_){arena}
    , decltype(_impl_.filename_){arena}
    , decltype(_impl_.memberid_){arena}
    , decltype(_impl_.timefilter_){nullptr}
    , decltype(_impl_.msgcountpersession_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

SessionSearchRequest::~SessionSearchRequest() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Cloud.Search.SessionSearchRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SessionSearchRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.groupname_.~RepeatedPtrField();
  _impl_.membername_.~RepeatedPtrField();
  _impl_.query_.~RepeatedPtrField();
  _impl_.filename_.~RepeatedPtrField();
  _impl_.memberid_.~RepeatedPtrField();
  if (this != internal_default_instance()) delete _impl_.timefilter_;
}

void SessionSearchRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void SessionSearchRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Cloud.Search.SessionSearchRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.groupname_.Clear();
  _impl_.membername_.Clear();
  _impl_.query_.Clear();
  _impl_.filename_.Clear();
  _impl_.memberid_.Clear();
  if (GetArenaForAllocation() == nullptr && _impl_.timefilter_ != nullptr) {
    delete _impl_.timefilter_;
  }
  _impl_.timefilter_ = nullptr;
  _impl_.msgcountpersession_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SessionSearchRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated string groupName = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_groupname();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Cloud.Search.SessionSearchRequest.groupName"));
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else
          goto handle_unusual;
        continue;
      // repeated string memberName = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_membername();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Cloud.Search.SessionSearchRequest.memberName"));
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else
          goto handle_unusual;
        continue;
      // repeated string query = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_query();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Cloud.Search.SessionSearchRequest.query"));
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else
          goto handle_unusual;
        continue;
      // repeated string fileName = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_filename();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Cloud.Search.SessionSearchRequest.fileName"));
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<34>(ptr));
        } else
          goto handle_unusual;
        continue;
      // .AcFunDanmu.Im.Cloud.Search.TimeFilter timeFilter = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          ptr = ctx->ParseMessage(_internal_mutable_timefilter(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 msgCountPerSession = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 48)) {
          _impl_.msgcountpersession_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated string memberId = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 58)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_memberid();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Cloud.Search.SessionSearchRequest.memberId"));
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<58>(ptr));
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

uint8_t* SessionSearchRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Cloud.Search.SessionSearchRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated string groupName = 1;
  for (int i = 0, n = this->_internal_groupname_size(); i < n; i++) {
    const auto& s = this->_internal_groupname(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Cloud.Search.SessionSearchRequest.groupName");
    target = stream->WriteString(1, s, target);
  }

  // repeated string memberName = 2;
  for (int i = 0, n = this->_internal_membername_size(); i < n; i++) {
    const auto& s = this->_internal_membername(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Cloud.Search.SessionSearchRequest.memberName");
    target = stream->WriteString(2, s, target);
  }

  // repeated string query = 3;
  for (int i = 0, n = this->_internal_query_size(); i < n; i++) {
    const auto& s = this->_internal_query(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Cloud.Search.SessionSearchRequest.query");
    target = stream->WriteString(3, s, target);
  }

  // repeated string fileName = 4;
  for (int i = 0, n = this->_internal_filename_size(); i < n; i++) {
    const auto& s = this->_internal_filename(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Cloud.Search.SessionSearchRequest.fileName");
    target = stream->WriteString(4, s, target);
  }

  // .AcFunDanmu.Im.Cloud.Search.TimeFilter timeFilter = 5;
  if (this->_internal_has_timefilter()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(5, _Internal::timefilter(this),
        _Internal::timefilter(this).GetCachedSize(), target, stream);
  }

  // int32 msgCountPerSession = 6;
  if (this->_internal_msgcountpersession() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(6, this->_internal_msgcountpersession(), target);
  }

  // repeated string memberId = 7;
  for (int i = 0, n = this->_internal_memberid_size(); i < n; i++) {
    const auto& s = this->_internal_memberid(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Cloud.Search.SessionSearchRequest.memberId");
    target = stream->WriteString(7, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Cloud.Search.SessionSearchRequest)
  return target;
}

size_t SessionSearchRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Cloud.Search.SessionSearchRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string groupName = 1;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_impl_.groupname_.size());
  for (int i = 0, n = _impl_.groupname_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      _impl_.groupname_.Get(i));
  }

  // repeated string memberName = 2;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_impl_.membername_.size());
  for (int i = 0, n = _impl_.membername_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      _impl_.membername_.Get(i));
  }

  // repeated string query = 3;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_impl_.query_.size());
  for (int i = 0, n = _impl_.query_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      _impl_.query_.Get(i));
  }

  // repeated string fileName = 4;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_impl_.filename_.size());
  for (int i = 0, n = _impl_.filename_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      _impl_.filename_.Get(i));
  }

  // repeated string memberId = 7;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_impl_.memberid_.size());
  for (int i = 0, n = _impl_.memberid_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      _impl_.memberid_.Get(i));
  }

  // .AcFunDanmu.Im.Cloud.Search.TimeFilter timeFilter = 5;
  if (this->_internal_has_timefilter()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.timefilter_);
  }

  // int32 msgCountPerSession = 6;
  if (this->_internal_msgcountpersession() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_msgcountpersession());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SessionSearchRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    SessionSearchRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SessionSearchRequest::GetClassData() const { return &_class_data_; }


void SessionSearchRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<SessionSearchRequest*>(&to_msg);
  auto& from = static_cast<const SessionSearchRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Cloud.Search.SessionSearchRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.groupname_.MergeFrom(from._impl_.groupname_);
  _this->_impl_.membername_.MergeFrom(from._impl_.membername_);
  _this->_impl_.query_.MergeFrom(from._impl_.query_);
  _this->_impl_.filename_.MergeFrom(from._impl_.filename_);
  _this->_impl_.memberid_.MergeFrom(from._impl_.memberid_);
  if (from._internal_has_timefilter()) {
    _this->_internal_mutable_timefilter()->::AcFunDanmu::Im::Cloud::Search::TimeFilter::MergeFrom(
        from._internal_timefilter());
  }
  if (from._internal_msgcountpersession() != 0) {
    _this->_internal_set_msgcountpersession(from._internal_msgcountpersession());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SessionSearchRequest::CopyFrom(const SessionSearchRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Cloud.Search.SessionSearchRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SessionSearchRequest::IsInitialized() const {
  return true;
}

void SessionSearchRequest::InternalSwap(SessionSearchRequest* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.groupname_.InternalSwap(&other->_impl_.groupname_);
  _impl_.membername_.InternalSwap(&other->_impl_.membername_);
  _impl_.query_.InternalSwap(&other->_impl_.query_);
  _impl_.filename_.InternalSwap(&other->_impl_.filename_);
  _impl_.memberid_.InternalSwap(&other->_impl_.memberid_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(SessionSearchRequest, _impl_.msgcountpersession_)
      + sizeof(SessionSearchRequest::_impl_.msgcountpersession_)
      - PROTOBUF_FIELD_OFFSET(SessionSearchRequest, _impl_.timefilter_)>(
          reinterpret_cast<char*>(&_impl_.timefilter_),
          reinterpret_cast<char*>(&other->_impl_.timefilter_));
}

::PROTOBUF_NAMESPACE_ID::Metadata SessionSearchRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_SessionSearchRequest_2eproto_getter, &descriptor_table_SessionSearchRequest_2eproto_once,
      file_level_metadata_SessionSearchRequest_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Search
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Cloud::Search::SessionSearchRequest*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Cloud::Search::SessionSearchRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Cloud::Search::SessionSearchRequest >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
