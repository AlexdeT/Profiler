// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: processInfo.proto

#ifndef PROTOBUF_processInfo_2eproto__INCLUDED
#define PROTOBUF_processInfo_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace ets {
namespace genielog {
namespace appwatcher_3 {
namespace profiling {
namespace core {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_processInfo_2eproto();
void protobuf_AssignDesc_processInfo_2eproto();
void protobuf_ShutdownFile_processInfo_2eproto();

class processInfo;

// ===================================================================

class processInfo : public ::google::protobuf::Message {
 public:
  processInfo();
  virtual ~processInfo();

  processInfo(const processInfo& from);

  inline processInfo& operator=(const processInfo& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const processInfo& default_instance();

  void Swap(processInfo* other);

  // implements Message ----------------------------------------------

  processInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const processInfo& from);
  void MergeFrom(const processInfo& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string name = 1;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 1;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // required uint32 uid = 2;
  inline bool has_uid() const;
  inline void clear_uid();
  static const int kUidFieldNumber = 2;
  inline ::google::protobuf::uint32 uid() const;
  inline void set_uid(::google::protobuf::uint32 value);

  // required uint32 pid = 3;
  inline bool has_pid() const;
  inline void clear_pid();
  static const int kPidFieldNumber = 3;
  inline ::google::protobuf::uint32 pid() const;
  inline void set_pid(::google::protobuf::uint32 value);

  // required float cpuUsage = 4;
  inline bool has_cpuusage() const;
  inline void clear_cpuusage();
  static const int kCpuUsageFieldNumber = 4;
  inline float cpuusage() const;
  inline void set_cpuusage(float value);

  // required uint64 cpuTime = 5;
  inline bool has_cputime() const;
  inline void clear_cputime();
  static const int kCpuTimeFieldNumber = 5;
  inline ::google::protobuf::uint64 cputime() const;
  inline void set_cputime(::google::protobuf::uint64 value);

  // required uint32 priorityLevel = 6;
  inline bool has_prioritylevel() const;
  inline void clear_prioritylevel();
  static const int kPriorityLevelFieldNumber = 6;
  inline ::google::protobuf::uint32 prioritylevel() const;
  inline void set_prioritylevel(::google::protobuf::uint32 value);

  // required uint64 usedUserTime = 7;
  inline bool has_usedusertime() const;
  inline void clear_usedusertime();
  static const int kUsedUserTimeFieldNumber = 7;
  inline ::google::protobuf::uint64 usedusertime() const;
  inline void set_usedusertime(::google::protobuf::uint64 value);

  // required uint64 usedSystemTime = 8;
  inline bool has_usedsystemtime() const;
  inline void clear_usedsystemtime();
  static const int kUsedSystemTimeFieldNumber = 8;
  inline ::google::protobuf::uint64 usedsystemtime() const;
  inline void set_usedsystemtime(::google::protobuf::uint64 value);

  // required uint64 rss = 9;
  inline bool has_rss() const;
  inline void clear_rss();
  static const int kRssFieldNumber = 9;
  inline ::google::protobuf::uint64 rss() const;
  inline void set_rss(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:ets.genielog.appwatcher_3.profiling.core.model.processInfo)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_uid();
  inline void clear_has_uid();
  inline void set_has_pid();
  inline void clear_has_pid();
  inline void set_has_cpuusage();
  inline void clear_has_cpuusage();
  inline void set_has_cputime();
  inline void clear_has_cputime();
  inline void set_has_prioritylevel();
  inline void clear_has_prioritylevel();
  inline void set_has_usedusertime();
  inline void clear_has_usedusertime();
  inline void set_has_usedsystemtime();
  inline void clear_has_usedsystemtime();
  inline void set_has_rss();
  inline void clear_has_rss();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* name_;
  ::google::protobuf::uint32 uid_;
  ::google::protobuf::uint32 pid_;
  float cpuusage_;
  ::google::protobuf::uint32 prioritylevel_;
  ::google::protobuf::uint64 cputime_;
  ::google::protobuf::uint64 usedusertime_;
  ::google::protobuf::uint64 usedsystemtime_;
  ::google::protobuf::uint64 rss_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(9 + 31) / 32];

  friend void  protobuf_AddDesc_processInfo_2eproto();
  friend void protobuf_AssignDesc_processInfo_2eproto();
  friend void protobuf_ShutdownFile_processInfo_2eproto();

  void InitAsDefaultInstance();
  static processInfo* default_instance_;
};
// ===================================================================


// ===================================================================

// processInfo

// required string name = 1;
inline bool processInfo::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void processInfo::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void processInfo::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void processInfo::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& processInfo::name() const {
  return *name_;
}
inline void processInfo::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void processInfo::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void processInfo::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* processInfo::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* processInfo::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void processInfo::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required uint32 uid = 2;
inline bool processInfo::has_uid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void processInfo::set_has_uid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void processInfo::clear_has_uid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void processInfo::clear_uid() {
  uid_ = 0u;
  clear_has_uid();
}
inline ::google::protobuf::uint32 processInfo::uid() const {
  return uid_;
}
inline void processInfo::set_uid(::google::protobuf::uint32 value) {
  set_has_uid();
  uid_ = value;
}

// required uint32 pid = 3;
inline bool processInfo::has_pid() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void processInfo::set_has_pid() {
  _has_bits_[0] |= 0x00000004u;
}
inline void processInfo::clear_has_pid() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void processInfo::clear_pid() {
  pid_ = 0u;
  clear_has_pid();
}
inline ::google::protobuf::uint32 processInfo::pid() const {
  return pid_;
}
inline void processInfo::set_pid(::google::protobuf::uint32 value) {
  set_has_pid();
  pid_ = value;
}

// required float cpuUsage = 4;
inline bool processInfo::has_cpuusage() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void processInfo::set_has_cpuusage() {
  _has_bits_[0] |= 0x00000008u;
}
inline void processInfo::clear_has_cpuusage() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void processInfo::clear_cpuusage() {
  cpuusage_ = 0;
  clear_has_cpuusage();
}
inline float processInfo::cpuusage() const {
  return cpuusage_;
}
inline void processInfo::set_cpuusage(float value) {
  set_has_cpuusage();
  cpuusage_ = value;
}

// required uint64 cpuTime = 5;
inline bool processInfo::has_cputime() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void processInfo::set_has_cputime() {
  _has_bits_[0] |= 0x00000010u;
}
inline void processInfo::clear_has_cputime() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void processInfo::clear_cputime() {
  cputime_ = GOOGLE_ULONGLONG(0);
  clear_has_cputime();
}
inline ::google::protobuf::uint64 processInfo::cputime() const {
  return cputime_;
}
inline void processInfo::set_cputime(::google::protobuf::uint64 value) {
  set_has_cputime();
  cputime_ = value;
}

// required uint32 priorityLevel = 6;
inline bool processInfo::has_prioritylevel() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void processInfo::set_has_prioritylevel() {
  _has_bits_[0] |= 0x00000020u;
}
inline void processInfo::clear_has_prioritylevel() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void processInfo::clear_prioritylevel() {
  prioritylevel_ = 0u;
  clear_has_prioritylevel();
}
inline ::google::protobuf::uint32 processInfo::prioritylevel() const {
  return prioritylevel_;
}
inline void processInfo::set_prioritylevel(::google::protobuf::uint32 value) {
  set_has_prioritylevel();
  prioritylevel_ = value;
}

// required uint64 usedUserTime = 7;
inline bool processInfo::has_usedusertime() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void processInfo::set_has_usedusertime() {
  _has_bits_[0] |= 0x00000040u;
}
inline void processInfo::clear_has_usedusertime() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void processInfo::clear_usedusertime() {
  usedusertime_ = GOOGLE_ULONGLONG(0);
  clear_has_usedusertime();
}
inline ::google::protobuf::uint64 processInfo::usedusertime() const {
  return usedusertime_;
}
inline void processInfo::set_usedusertime(::google::protobuf::uint64 value) {
  set_has_usedusertime();
  usedusertime_ = value;
}

// required uint64 usedSystemTime = 8;
inline bool processInfo::has_usedsystemtime() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void processInfo::set_has_usedsystemtime() {
  _has_bits_[0] |= 0x00000080u;
}
inline void processInfo::clear_has_usedsystemtime() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void processInfo::clear_usedsystemtime() {
  usedsystemtime_ = GOOGLE_ULONGLONG(0);
  clear_has_usedsystemtime();
}
inline ::google::protobuf::uint64 processInfo::usedsystemtime() const {
  return usedsystemtime_;
}
inline void processInfo::set_usedsystemtime(::google::protobuf::uint64 value) {
  set_has_usedsystemtime();
  usedsystemtime_ = value;
}

// required uint64 rss = 9;
inline bool processInfo::has_rss() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void processInfo::set_has_rss() {
  _has_bits_[0] |= 0x00000100u;
}
inline void processInfo::clear_has_rss() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void processInfo::clear_rss() {
  rss_ = GOOGLE_ULONGLONG(0);
  clear_has_rss();
}
inline ::google::protobuf::uint64 processInfo::rss() const {
  return rss_;
}
inline void processInfo::set_rss(::google::protobuf::uint64 value) {
  set_has_rss();
  rss_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace core
}  // namespace profiling
}  // namespace appwatcher_3
}  // namespace genielog
}  // namespace ets

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_processInfo_2eproto__INCLUDED
