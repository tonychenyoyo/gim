// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "message.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace gim {

namespace {

const ::google::protobuf::Descriptor* Message_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Message_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_message_2eproto() {
  protobuf_AddDesc_message_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "message.proto");
  GOOGLE_CHECK(file != NULL);
  Message_descriptor_ = file->message_type(0);
  static const int Message_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Message, to_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Message, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Message, time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Message, from_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Message, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Message, sn_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Message, data_),
  };
  Message_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Message_descriptor_,
      Message::default_instance_,
      Message_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Message, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Message, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Message));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_message_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Message_descriptor_, &Message::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_message_2eproto() {
  delete Message::default_instance_;
  delete Message_reflection_;
}

void protobuf_AddDesc_message_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\rmessage.proto\022\003gim\"e\n\007Message\022\n\n\002to\030\001 "
    "\001(\t\022\n\n\002id\030\002 \001(\003\022\014\n\004time\030\003 \001(\003\022\014\n\004from\030\004 "
    "\001(\t\022\014\n\004type\030\005 \001(\005\022\n\n\002sn\030\006 \001(\t\022\014\n\004data\030\007 "
    "\001(\014", 123);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "message.proto", &protobuf_RegisterTypes);
  Message::default_instance_ = new Message();
  Message::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_message_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_message_2eproto {
  StaticDescriptorInitializer_message_2eproto() {
    protobuf_AddDesc_message_2eproto();
  }
} static_descriptor_initializer_message_2eproto_;


// ===================================================================

const ::std::string Message::_default_to_;
const ::std::string Message::_default_from_;
const ::std::string Message::_default_sn_;
const ::std::string Message::_default_data_;
#ifndef _MSC_VER
const int Message::kToFieldNumber;
const int Message::kIdFieldNumber;
const int Message::kTimeFieldNumber;
const int Message::kFromFieldNumber;
const int Message::kTypeFieldNumber;
const int Message::kSnFieldNumber;
const int Message::kDataFieldNumber;
#endif  // !_MSC_VER

Message::Message()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Message::InitAsDefaultInstance() {
}

Message::Message(const Message& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Message::SharedCtor() {
  _cached_size_ = 0;
  to_ = const_cast< ::std::string*>(&_default_to_);
  id_ = GOOGLE_LONGLONG(0);
  time_ = GOOGLE_LONGLONG(0);
  from_ = const_cast< ::std::string*>(&_default_from_);
  type_ = 0;
  sn_ = const_cast< ::std::string*>(&_default_sn_);
  data_ = const_cast< ::std::string*>(&_default_data_);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Message::~Message() {
  SharedDtor();
}

void Message::SharedDtor() {
  if (to_ != &_default_to_) {
    delete to_;
  }
  if (from_ != &_default_from_) {
    delete from_;
  }
  if (sn_ != &_default_sn_) {
    delete sn_;
  }
  if (data_ != &_default_data_) {
    delete data_;
  }
  if (this != default_instance_) {
  }
}

void Message::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Message::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Message_descriptor_;
}

const Message& Message::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_message_2eproto();  return *default_instance_;
}

Message* Message::default_instance_ = NULL;

Message* Message::New() const {
  return new Message;
}

void Message::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (_has_bit(0)) {
      if (to_ != &_default_to_) {
        to_->clear();
      }
    }
    id_ = GOOGLE_LONGLONG(0);
    time_ = GOOGLE_LONGLONG(0);
    if (_has_bit(3)) {
      if (from_ != &_default_from_) {
        from_->clear();
      }
    }
    type_ = 0;
    if (_has_bit(5)) {
      if (sn_ != &_default_sn_) {
        sn_->clear();
      }
    }
    if (_has_bit(6)) {
      if (data_ != &_default_data_) {
        data_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Message::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string to = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_to()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->to().data(), this->to().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_id;
        break;
      }
      
      // optional int64 id = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &id_)));
          _set_bit(1);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_time;
        break;
      }
      
      // optional int64 time = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &time_)));
          _set_bit(2);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_from;
        break;
      }
      
      // optional string from = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_from:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_from()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->from().data(), this->from().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_type;
        break;
      }
      
      // optional int32 type = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_type:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &type_)));
          _set_bit(4);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(50)) goto parse_sn;
        break;
      }
      
      // optional string sn = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_sn:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_sn()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->sn().data(), this->sn().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(58)) goto parse_data;
        break;
      }
      
      // optional bytes data = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_data:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_data()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Message::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string to = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->to().data(), this->to().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->to(), output);
  }
  
  // optional int64 id = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->id(), output);
  }
  
  // optional int64 time = 3;
  if (_has_bit(2)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->time(), output);
  }
  
  // optional string from = 4;
  if (_has_bit(3)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->from().data(), this->from().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->from(), output);
  }
  
  // optional int32 type = 5;
  if (_has_bit(4)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->type(), output);
  }
  
  // optional string sn = 6;
  if (_has_bit(5)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->sn().data(), this->sn().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      6, this->sn(), output);
  }
  
  // optional bytes data = 7;
  if (_has_bit(6)) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      7, this->data(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Message::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional string to = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->to().data(), this->to().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->to(), target);
  }
  
  // optional int64 id = 2;
  if (_has_bit(1)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->id(), target);
  }
  
  // optional int64 time = 3;
  if (_has_bit(2)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->time(), target);
  }
  
  // optional string from = 4;
  if (_has_bit(3)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->from().data(), this->from().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->from(), target);
  }
  
  // optional int32 type = 5;
  if (_has_bit(4)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->type(), target);
  }
  
  // optional string sn = 6;
  if (_has_bit(5)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->sn().data(), this->sn().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->sn(), target);
  }
  
  // optional bytes data = 7;
  if (_has_bit(6)) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        7, this->data(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Message::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string to = 1;
    if (has_to()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->to());
    }
    
    // optional int64 id = 2;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->id());
    }
    
    // optional int64 time = 3;
    if (has_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->time());
    }
    
    // optional string from = 4;
    if (has_from()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->from());
    }
    
    // optional int32 type = 5;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->type());
    }
    
    // optional string sn = 6;
    if (has_sn()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->sn());
    }
    
    // optional bytes data = 7;
    if (has_data()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->data());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Message::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Message* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Message*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Message::MergeFrom(const Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_to(from.to());
    }
    if (from._has_bit(1)) {
      set_id(from.id());
    }
    if (from._has_bit(2)) {
      set_time(from.time());
    }
    if (from._has_bit(3)) {
      set_from(from.from());
    }
    if (from._has_bit(4)) {
      set_type(from.type());
    }
    if (from._has_bit(5)) {
      set_sn(from.sn());
    }
    if (from._has_bit(6)) {
      set_data(from.data());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Message::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Message::CopyFrom(const Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Message::IsInitialized() const {
  
  return true;
}

void Message::Swap(Message* other) {
  if (other != this) {
    std::swap(to_, other->to_);
    std::swap(id_, other->id_);
    std::swap(time_, other->time_);
    std::swap(from_, other->from_);
    std::swap(type_, other->type_);
    std::swap(sn_, other->sn_);
    std::swap(data_, other->data_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Message::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Message_descriptor_;
  metadata.reflection = Message_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace gim

// @@protoc_insertion_point(global_scope)
