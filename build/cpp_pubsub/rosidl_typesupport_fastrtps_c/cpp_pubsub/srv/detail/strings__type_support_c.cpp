// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cpp_pubsub:srv/Strings.idl
// generated code does not contain a copyright notice
#include "cpp_pubsub/srv/detail/strings__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cpp_pubsub/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cpp_pubsub/srv/detail/strings__struct.h"
#include "cpp_pubsub/srv/detail/strings__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // a
#include "rosidl_runtime_c/string_functions.h"  // a

// forward declare type support functions


using _Strings_Request__ros_msg_type = cpp_pubsub__srv__Strings_Request;

static bool _Strings_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Strings_Request__ros_msg_type * ros_message = static_cast<const _Strings_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: a
  {
    const rosidl_runtime_c__String * str = &ros_message->a;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _Strings_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Strings_Request__ros_msg_type * ros_message = static_cast<_Strings_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: a
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->a.data) {
      rosidl_runtime_c__String__init(&ros_message->a);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->a,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'a'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cpp_pubsub
size_t get_serialized_size_cpp_pubsub__srv__Strings_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Strings_Request__ros_msg_type * ros_message = static_cast<const _Strings_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name a
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->a.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _Strings_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cpp_pubsub__srv__Strings_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cpp_pubsub
size_t max_serialized_size_cpp_pubsub__srv__Strings_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: a
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Strings_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_cpp_pubsub__srv__Strings_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Strings_Request = {
  "cpp_pubsub::srv",
  "Strings_Request",
  _Strings_Request__cdr_serialize,
  _Strings_Request__cdr_deserialize,
  _Strings_Request__get_serialized_size,
  _Strings_Request__max_serialized_size
};

static rosidl_message_type_support_t _Strings_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Strings_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cpp_pubsub, srv, Strings_Request)() {
  return &_Strings_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "cpp_pubsub/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "cpp_pubsub/srv/detail/strings__struct.h"
// already included above
// #include "cpp_pubsub/srv/detail/strings__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rosidl_runtime_c/string.h"  // str
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // str

// forward declare type support functions


using _Strings_Response__ros_msg_type = cpp_pubsub__srv__Strings_Response;

static bool _Strings_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Strings_Response__ros_msg_type * ros_message = static_cast<const _Strings_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: str
  {
    const rosidl_runtime_c__String * str = &ros_message->str;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _Strings_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Strings_Response__ros_msg_type * ros_message = static_cast<_Strings_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: str
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->str.data) {
      rosidl_runtime_c__String__init(&ros_message->str);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->str,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'str'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cpp_pubsub
size_t get_serialized_size_cpp_pubsub__srv__Strings_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Strings_Response__ros_msg_type * ros_message = static_cast<const _Strings_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name str
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->str.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _Strings_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cpp_pubsub__srv__Strings_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cpp_pubsub
size_t max_serialized_size_cpp_pubsub__srv__Strings_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: str
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Strings_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_cpp_pubsub__srv__Strings_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Strings_Response = {
  "cpp_pubsub::srv",
  "Strings_Response",
  _Strings_Response__cdr_serialize,
  _Strings_Response__cdr_deserialize,
  _Strings_Response__get_serialized_size,
  _Strings_Response__max_serialized_size
};

static rosidl_message_type_support_t _Strings_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Strings_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cpp_pubsub, srv, Strings_Response)() {
  return &_Strings_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "cpp_pubsub/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cpp_pubsub/srv/strings.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Strings__callbacks = {
  "cpp_pubsub::srv",
  "Strings",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cpp_pubsub, srv, Strings_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cpp_pubsub, srv, Strings_Response)(),
};

static rosidl_service_type_support_t Strings__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Strings__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cpp_pubsub, srv, Strings)() {
  return &Strings__handle;
}

#if defined(__cplusplus)
}
#endif
