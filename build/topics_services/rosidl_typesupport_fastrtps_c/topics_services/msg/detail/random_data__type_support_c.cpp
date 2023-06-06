// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from topics_services:msg/RandomData.idl
// generated code does not contain a copyright notice
#include "topics_services/msg/detail/random_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "topics_services/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "topics_services/msg/detail/random_data__struct.h"
#include "topics_services/msg/detail/random_data__functions.h"
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

#include "rosidl_runtime_c/string.h"  // gs1
#include "rosidl_runtime_c/string_functions.h"  // gs1

// forward declare type support functions


using _RandomData__ros_msg_type = topics_services__msg__RandomData;

static bool _RandomData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RandomData__ros_msg_type * ros_message = static_cast<const _RandomData__ros_msg_type *>(untyped_ros_message);
  // Field name: gs1
  {
    const rosidl_runtime_c__String * str = &ros_message->gs1;
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

  // Field name: highband
  {
    cdr << ros_message->highband;
  }

  // Field name: midband
  {
    cdr << ros_message->midband;
  }

  // Field name: lowband
  {
    cdr << ros_message->lowband;
  }

  // Field name: weight
  {
    cdr << ros_message->weight;
  }

  // Field name: batteryvoltage
  {
    cdr << ros_message->batteryvoltage;
  }

  return true;
}

static bool _RandomData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RandomData__ros_msg_type * ros_message = static_cast<_RandomData__ros_msg_type *>(untyped_ros_message);
  // Field name: gs1
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->gs1.data) {
      rosidl_runtime_c__String__init(&ros_message->gs1);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->gs1,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'gs1'\n");
      return false;
    }
  }

  // Field name: highband
  {
    cdr >> ros_message->highband;
  }

  // Field name: midband
  {
    cdr >> ros_message->midband;
  }

  // Field name: lowband
  {
    cdr >> ros_message->lowband;
  }

  // Field name: weight
  {
    cdr >> ros_message->weight;
  }

  // Field name: batteryvoltage
  {
    cdr >> ros_message->batteryvoltage;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_topics_services
size_t get_serialized_size_topics_services__msg__RandomData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RandomData__ros_msg_type * ros_message = static_cast<const _RandomData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name gs1
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->gs1.size + 1);
  // field.name highband
  {
    size_t item_size = sizeof(ros_message->highband);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name midband
  {
    size_t item_size = sizeof(ros_message->midband);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lowband
  {
    size_t item_size = sizeof(ros_message->lowband);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name weight
  {
    size_t item_size = sizeof(ros_message->weight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name batteryvoltage
  {
    size_t item_size = sizeof(ros_message->batteryvoltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RandomData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_topics_services__msg__RandomData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_topics_services
size_t max_serialized_size_topics_services__msg__RandomData(
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

  // member: gs1
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
  // member: highband
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: midband
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lowband
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: weight
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: batteryvoltage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _RandomData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_topics_services__msg__RandomData(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RandomData = {
  "topics_services::msg",
  "RandomData",
  _RandomData__cdr_serialize,
  _RandomData__cdr_deserialize,
  _RandomData__get_serialized_size,
  _RandomData__max_serialized_size
};

static rosidl_message_type_support_t _RandomData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RandomData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, topics_services, msg, RandomData)() {
  return &_RandomData__type_support;
}

#if defined(__cplusplus)
}
#endif
