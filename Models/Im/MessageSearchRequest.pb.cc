// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageSearchRequest.proto

#include "MessageSearchRequest.pb.h"

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
PROTOBUF_CONSTEXPR MessageSearchRequest::MessageSearchRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.msgtype_)*/{}
  , /*decltype(_impl_._msgtype_cached_byte_size_)*/{0}
  , /*decltype(_impl_.filename_)*/{}
  , /*decltype(_impl_.query_)*/{}
  , /*decltype(_impl_.messagetype_)*/{}
  , /*decltype(_impl_._messagetype_cached_byte_size_)*/{0}
  , /*decltype(_impl_.offset_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.chattarget_)*/nullptr
  , /*decltype(_impl_.from_)*/nullptr
  , /*decltype(_impl_.timefilter_)*/nullptr
  , /*decltype(_impl_.msgcountpersession_)*/0
  , /*decltype(_impl_.searchafteroffset_)*/false
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct MessageSearchRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR MessageSearchRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~MessageSearchRequestDefaultTypeInternal() {}
  union {
    MessageSearchRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 MessageSearchRequestDefaultTypeInternal _MessageSearchRequest_default_instance_;
}  // namespace Search
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_MessageSearchRequest_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_MessageSearchRequest_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_MessageSearchRequest_2eproto = nullptr;

const uint32_t TableStruct_MessageSearchRequest_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Search::MessageSearchRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Search::MessageSearchRequest, _impl_.chattarget_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Search::MessageSearchRequest, _impl_.from_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Search::MessageSearchRequest, _impl_.msgtype_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Search::MessageSearchRequest, _impl_.filename_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Search::MessageSearchRequest, _impl_.query_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Search::MessageSearchRequest, _impl_.offset_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Search::MessageSearchRequest, _impl_.timefilter_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Search::MessageSearchRequest, _impl_.msgcountpersession_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Search::MessageSearchRequest, _impl_.messagetype_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Search::MessageSearchRequest, _impl_.searchafteroffset_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Cloud::Search::MessageSearchRequest)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Cloud::Search::_MessageSearchRequest_default_instance_._instance,
};

const char descriptor_table_protodef_MessageSearchRequest_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\032MessageSearchRequest.proto\022\032AcFunDanmu"
  ".Im.Cloud.Search\032\020ChatTarget.proto\032\024ImcM"
  "essageType.proto\032\020TimeFilter.proto\032\nUser"
  ".proto\"\355\002\n\024MessageSearchRequest\0225\n\nchatT"
  "arget\030\001 \001(\0132!.AcFunDanmu.Im.Message.Chat"
  "Target\022\'\n\004from\030\002 \001(\0132\031.AcFunDanmu.Im.Bas"
  "ic.User\022<\n\007msgType\030\003 \003(\0162+.AcFunDanmu.Im"
  ".Cloud.Message.ImcMessageType\022\020\n\010fileNam"
  "e\030\004 \003(\t\022\r\n\005query\030\005 \003(\t\022\016\n\006offset\030\006 \001(\t\022:"
  "\n\ntimeFilter\030\007 \001(\0132&.AcFunDanmu.Im.Cloud"
  ".Search.TimeFilter\022\032\n\022msgCountPerSession"
  "\030\010 \001(\005\022\023\n\013messageType\030\t \003(\005\022\031\n\021searchAft"
  "erOffset\030\n \001(\010b\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_MessageSearchRequest_2eproto_deps[4] = {
  &::descriptor_table_ChatTarget_2eproto,
  &::descriptor_table_ImcMessageType_2eproto,
  &::descriptor_table_TimeFilter_2eproto,
  &::descriptor_table_User_2eproto,
};
static ::_pbi::once_flag descriptor_table_MessageSearchRequest_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_MessageSearchRequest_2eproto = {
    false, false, 502, descriptor_table_protodef_MessageSearchRequest_2eproto,
    "MessageSearchRequest.proto",
    &descriptor_table_MessageSearchRequest_2eproto_once, descriptor_table_MessageSearchRequest_2eproto_deps, 4, 1,
    schemas, file_default_instances, TableStruct_MessageSearchRequest_2eproto::offsets,
    file_level_metadata_MessageSearchRequest_2eproto, file_level_enum_descriptors_MessageSearchRequest_2eproto,
    file_level_service_descriptors_MessageSearchRequest_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_MessageSearchRequest_2eproto_getter() {
  return &descriptor_table_MessageSearchRequest_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_MessageSearchRequest_2eproto(&descriptor_table_MessageSearchRequest_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Search {

// ===================================================================

class MessageSearchRequest::_Internal {
 public:
  static const ::AcFunDanmu::Im::Message::ChatTarget& chattarget(const MessageSearchRequest* msg);
  static const ::AcFunDanmu::Im::Basic::User& from(const MessageSearchRequest* msg);
  static const ::AcFunDanmu::Im::Cloud::Search::TimeFilter& timefilter(const MessageSearchRequest* msg);
};

const ::AcFunDanmu::Im::Message::ChatTarget&
MessageSearchRequest::_Internal::chattarget(const MessageSearchRequest* msg) {
  return *msg->_impl_.chattarget_;
}
const ::AcFunDanmu::Im::Basic::User&
MessageSearchRequest::_Internal::from(const MessageSearchRequest* msg) {
  return *msg->_impl_.from_;
}
const ::AcFunDanmu::Im::Cloud::Search::TimeFilter&
MessageSearchRequest::_Internal::timefilter(const MessageSearchRequest* msg) {
  return *msg->_impl_.timefilter_;
}
void MessageSearchRequest::clear_chattarget() {
  if (GetArenaForAllocation() == nullptr && _impl_.chattarget_ != nullptr) {
    delete _impl_.chattarget_;
  }
  _impl_.chattarget_ = nullptr;
}
void MessageSearchRequest::clear_from() {
  if (GetArenaForAllocation() == nullptr && _impl_.from_ != nullptr) {
    delete _impl_.from_;
  }
  _impl_.from_ = nullptr;
}
void MessageSearchRequest::clear_timefilter() {
  if (GetArenaForAllocation() == nullptr && _impl_.timefilter_ != nullptr) {
    delete _impl_.timefilter_;
  }
  _impl_.timefilter_ = nullptr;
}
MessageSearchRequest::MessageSearchRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Cloud.Search.MessageSearchRequest)
}
MessageSearchRequest::MessageSearchRequest(const MessageSearchRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  MessageSearchRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.msgtype_){from._impl_.msgtype_}
    , /*decltype(_impl_._msgtype_cached_byte_size_)*/{0}
    , decltype(_impl_.filename_){from._impl_.filename_}
    , decltype(_impl_.query_){from._impl_.query_}
    , decltype(_impl_.messagetype_){from._impl_.messagetype_}
    , /*decltype(_impl_._messagetype_cached_byte_size_)*/{0}
    , decltype(_impl_.offset_){}
    , decltype(_impl_.chattarget_){nullptr}
    , decltype(_impl_.from_){nullptr}
    , decltype(_impl_.timefilter_){nullptr}
    , decltype(_impl_.msgcountpersession_){}
    , decltype(_impl_.searchafteroffset_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.offset_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.offset_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_offset().empty()) {
    _this->_impl_.offset_.Set(from._internal_offset(), 
      _this->GetArenaForAllocation());
  }
  if (from._internal_has_chattarget()) {
    _this->_impl_.chattarget_ = new ::AcFunDanmu::Im::Message::ChatTarget(*from._impl_.chattarget_);
  }
  if (from._internal_has_from()) {
    _this->_impl_.from_ = new ::AcFunDanmu::Im::Basic::User(*from._impl_.from_);
  }
  if (from._internal_has_timefilter()) {
    _this->_impl_.timefilter_ = new ::AcFunDanmu::Im::Cloud::Search::TimeFilter(*from._impl_.timefilter_);
  }
  ::memcpy(&_impl_.msgcountpersession_, &from._impl_.msgcountpersession_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.searchafteroffset_) -
    reinterpret_cast<char*>(&_impl_.msgcountpersession_)) + sizeof(_impl_.searchafteroffset_));
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Cloud.Search.MessageSearchRequest)
}

inline void MessageSearchRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.msgtype_){arena}
    , /*decltype(_impl_._msgtype_cached_byte_size_)*/{0}
    , decltype(_impl_.filename_){arena}
    , decltype(_impl_.query_){arena}
    , decltype(_impl_.messagetype_){arena}
    , /*decltype(_impl_._messagetype_cached_byte_size_)*/{0}
    , decltype(_impl_.offset_){}
    , decltype(_impl_.chattarget_){nullptr}
    , decltype(_impl_.from_){nullptr}
    , decltype(_impl_.timefilter_){nullptr}
    , decltype(_impl_.msgcountpersession_){0}
    , decltype(_impl_.searchafteroffset_){false}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.offset_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.offset_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

MessageSearchRequest::~MessageSearchRequest() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Cloud.Search.MessageSearchRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void MessageSearchRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.msgtype_.~RepeatedField();
  _impl_.filename_.~RepeatedPtrField();
  _impl_.query_.~RepeatedPtrField();
  _impl_.messagetype_.~RepeatedField();
  _impl_.offset_.Destroy();
  if (this != internal_default_instance()) delete _impl_.chattarget_;
  if (this != internal_default_instance()) delete _impl_.from_;
  if (this != internal_default_instance()) delete _impl_.timefilter_;
}

void MessageSearchRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void MessageSearchRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Cloud.Search.MessageSearchRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.msgtype_.Clear();
  _impl_.filename_.Clear();
  _impl_.query_.Clear();
  _impl_.messagetype_.Clear();
  _impl_.offset_.ClearToEmpty();
  if (GetArenaForAllocation() == nullptr && _impl_.chattarget_ != nullptr) {
    delete _impl_.chattarget_;
  }
  _impl_.chattarget_ = nullptr;
  if (GetArenaForAllocation() == nullptr && _impl_.from_ != nullptr) {
    delete _impl_.from_;
  }
  _impl_.from_ = nullptr;
  if (GetArenaForAllocation() == nullptr && _impl_.timefilter_ != nullptr) {
    delete _impl_.timefilter_;
  }
  _impl_.timefilter_ = nullptr;
  ::memset(&_impl_.msgcountpersession_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.searchafteroffset_) -
      reinterpret_cast<char*>(&_impl_.msgcountpersession_)) + sizeof(_impl_.searchafteroffset_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MessageSearchRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .AcFunDanmu.Im.Message.ChatTarget chatTarget = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_chattarget(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .AcFunDanmu.Im.Basic.User from = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_from(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated .AcFunDanmu.Im.Cloud.Message.ImcMessageType msgType = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedEnumParser(_internal_mutable_msgtype(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<uint8_t>(tag) == 24) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_add_msgtype(static_cast<::AcFunDanmu::Im::Cloud::Message::ImcMessageType>(val));
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
            CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Cloud.Search.MessageSearchRequest.fileName"));
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<34>(ptr));
        } else
          goto handle_unusual;
        continue;
      // repeated string query = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_query();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Cloud.Search.MessageSearchRequest.query"));
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<42>(ptr));
        } else
          goto handle_unusual;
        continue;
      // string offset = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 50)) {
          auto str = _internal_mutable_offset();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Cloud.Search.MessageSearchRequest.offset"));
        } else
          goto handle_unusual;
        continue;
      // .AcFunDanmu.Im.Cloud.Search.TimeFilter timeFilter = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 58)) {
          ptr = ctx->ParseMessage(_internal_mutable_timefilter(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 msgCountPerSession = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 64)) {
          _impl_.msgcountpersession_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated int32 messageType = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 74)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedInt32Parser(_internal_mutable_messagetype(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<uint8_t>(tag) == 72) {
          _internal_add_messagetype(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bool searchAfterOffset = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 80)) {
          _impl_.searchafteroffset_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

uint8_t* MessageSearchRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Cloud.Search.MessageSearchRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .AcFunDanmu.Im.Message.ChatTarget chatTarget = 1;
  if (this->_internal_has_chattarget()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::chattarget(this),
        _Internal::chattarget(this).GetCachedSize(), target, stream);
  }

  // .AcFunDanmu.Im.Basic.User from = 2;
  if (this->_internal_has_from()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::from(this),
        _Internal::from(this).GetCachedSize(), target, stream);
  }

  // repeated .AcFunDanmu.Im.Cloud.Message.ImcMessageType msgType = 3;
  {
    int byte_size = _impl_._msgtype_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteEnumPacked(
          3, _impl_.msgtype_, byte_size, target);
    }
  }

  // repeated string fileName = 4;
  for (int i = 0, n = this->_internal_filename_size(); i < n; i++) {
    const auto& s = this->_internal_filename(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Cloud.Search.MessageSearchRequest.fileName");
    target = stream->WriteString(4, s, target);
  }

  // repeated string query = 5;
  for (int i = 0, n = this->_internal_query_size(); i < n; i++) {
    const auto& s = this->_internal_query(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Cloud.Search.MessageSearchRequest.query");
    target = stream->WriteString(5, s, target);
  }

  // string offset = 6;
  if (!this->_internal_offset().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_offset().data(), static_cast<int>(this->_internal_offset().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Cloud.Search.MessageSearchRequest.offset");
    target = stream->WriteStringMaybeAliased(
        6, this->_internal_offset(), target);
  }

  // .AcFunDanmu.Im.Cloud.Search.TimeFilter timeFilter = 7;
  if (this->_internal_has_timefilter()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(7, _Internal::timefilter(this),
        _Internal::timefilter(this).GetCachedSize(), target, stream);
  }

  // int32 msgCountPerSession = 8;
  if (this->_internal_msgcountpersession() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(8, this->_internal_msgcountpersession(), target);
  }

  // repeated int32 messageType = 9;
  {
    int byte_size = _impl_._messagetype_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteInt32Packed(
          9, _internal_messagetype(), byte_size, target);
    }
  }

  // bool searchAfterOffset = 10;
  if (this->_internal_searchafteroffset() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(10, this->_internal_searchafteroffset(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Cloud.Search.MessageSearchRequest)
  return target;
}

size_t MessageSearchRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Cloud.Search.MessageSearchRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .AcFunDanmu.Im.Cloud.Message.ImcMessageType msgType = 3;
  {
    size_t data_size = 0;
    unsigned int count = static_cast<unsigned int>(this->_internal_msgtype_size());for (unsigned int i = 0; i < count; i++) {
      data_size += ::_pbi::WireFormatLite::EnumSize(
        this->_internal_msgtype(static_cast<int>(i)));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::_pbi::WireFormatLite::Int32Size(static_cast<int32_t>(data_size));
    }
    int cached_size = ::_pbi::ToCachedSize(data_size);
    _impl_._msgtype_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // repeated string fileName = 4;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_impl_.filename_.size());
  for (int i = 0, n = _impl_.filename_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      _impl_.filename_.Get(i));
  }

  // repeated string query = 5;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_impl_.query_.size());
  for (int i = 0, n = _impl_.query_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      _impl_.query_.Get(i));
  }

  // repeated int32 messageType = 9;
  {
    size_t data_size = ::_pbi::WireFormatLite::
      Int32Size(this->_impl_.messagetype_);
    if (data_size > 0) {
      total_size += 1 +
        ::_pbi::WireFormatLite::Int32Size(static_cast<int32_t>(data_size));
    }
    int cached_size = ::_pbi::ToCachedSize(data_size);
    _impl_._messagetype_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // string offset = 6;
  if (!this->_internal_offset().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_offset());
  }

  // .AcFunDanmu.Im.Message.ChatTarget chatTarget = 1;
  if (this->_internal_has_chattarget()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.chattarget_);
  }

  // .AcFunDanmu.Im.Basic.User from = 2;
  if (this->_internal_has_from()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.from_);
  }

  // .AcFunDanmu.Im.Cloud.Search.TimeFilter timeFilter = 7;
  if (this->_internal_has_timefilter()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.timefilter_);
  }

  // int32 msgCountPerSession = 8;
  if (this->_internal_msgcountpersession() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_msgcountpersession());
  }

  // bool searchAfterOffset = 10;
  if (this->_internal_searchafteroffset() != 0) {
    total_size += 1 + 1;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData MessageSearchRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    MessageSearchRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*MessageSearchRequest::GetClassData() const { return &_class_data_; }


void MessageSearchRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<MessageSearchRequest*>(&to_msg);
  auto& from = static_cast<const MessageSearchRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Cloud.Search.MessageSearchRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.msgtype_.MergeFrom(from._impl_.msgtype_);
  _this->_impl_.filename_.MergeFrom(from._impl_.filename_);
  _this->_impl_.query_.MergeFrom(from._impl_.query_);
  _this->_impl_.messagetype_.MergeFrom(from._impl_.messagetype_);
  if (!from._internal_offset().empty()) {
    _this->_internal_set_offset(from._internal_offset());
  }
  if (from._internal_has_chattarget()) {
    _this->_internal_mutable_chattarget()->::AcFunDanmu::Im::Message::ChatTarget::MergeFrom(
        from._internal_chattarget());
  }
  if (from._internal_has_from()) {
    _this->_internal_mutable_from()->::AcFunDanmu::Im::Basic::User::MergeFrom(
        from._internal_from());
  }
  if (from._internal_has_timefilter()) {
    _this->_internal_mutable_timefilter()->::AcFunDanmu::Im::Cloud::Search::TimeFilter::MergeFrom(
        from._internal_timefilter());
  }
  if (from._internal_msgcountpersession() != 0) {
    _this->_internal_set_msgcountpersession(from._internal_msgcountpersession());
  }
  if (from._internal_searchafteroffset() != 0) {
    _this->_internal_set_searchafteroffset(from._internal_searchafteroffset());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void MessageSearchRequest::CopyFrom(const MessageSearchRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Cloud.Search.MessageSearchRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MessageSearchRequest::IsInitialized() const {
  return true;
}

void MessageSearchRequest::InternalSwap(MessageSearchRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.msgtype_.InternalSwap(&other->_impl_.msgtype_);
  _impl_.filename_.InternalSwap(&other->_impl_.filename_);
  _impl_.query_.InternalSwap(&other->_impl_.query_);
  _impl_.messagetype_.InternalSwap(&other->_impl_.messagetype_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.offset_, lhs_arena,
      &other->_impl_.offset_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(MessageSearchRequest, _impl_.searchafteroffset_)
      + sizeof(MessageSearchRequest::_impl_.searchafteroffset_)
      - PROTOBUF_FIELD_OFFSET(MessageSearchRequest, _impl_.chattarget_)>(
          reinterpret_cast<char*>(&_impl_.chattarget_),
          reinterpret_cast<char*>(&other->_impl_.chattarget_));
}

::PROTOBUF_NAMESPACE_ID::Metadata MessageSearchRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_MessageSearchRequest_2eproto_getter, &descriptor_table_MessageSearchRequest_2eproto_once,
      file_level_metadata_MessageSearchRequest_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Search
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Cloud::Search::MessageSearchRequest*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Cloud::Search::MessageSearchRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Cloud::Search::MessageSearchRequest >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
