// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from topics_services:msg/ServoData.idl
// generated code does not contain a copyright notice
#include "topics_services/msg/detail/servo_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "topics_services/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "topics_services/msg/detail/servo_data__struct.h"
#include "topics_services/msg/detail/servo_data__functions.h"
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


// forward declare type support functions


using _ServoData__ros_msg_type = topics_services__msg__ServoData;

static bool _ServoData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ServoData__ros_msg_type * ros_message = static_cast<const _ServoData__ros_msg_type *>(untyped_ros_message);
  // Field name: max_torque1
  {
    cdr << ros_message->max_torque1;
  }

  // Field name: max_torque2
  {
    cdr << ros_message->max_torque2;
  }

  // Field name: max_torque3
  {
    cdr << ros_message->max_torque3;
  }

  // Field name: max_torque4
  {
    cdr << ros_message->max_torque4;
  }

  // Field name: max_torque5
  {
    cdr << ros_message->max_torque5;
  }

  // Field name: max_torque6
  {
    cdr << ros_message->max_torque6;
  }

  // Field name: set_pos1
  {
    cdr << ros_message->set_pos1;
  }

  // Field name: set_pos2
  {
    cdr << ros_message->set_pos2;
  }

  // Field name: set_pos3
  {
    cdr << ros_message->set_pos3;
  }

  // Field name: set_pos4
  {
    cdr << ros_message->set_pos4;
  }

  // Field name: set_pos5
  {
    cdr << ros_message->set_pos5;
  }

  // Field name: set_pos6
  {
    cdr << ros_message->set_pos6;
  }

  // Field name: set_speed1
  {
    cdr << ros_message->set_speed1;
  }

  // Field name: set_speed2
  {
    cdr << ros_message->set_speed2;
  }

  // Field name: set_speed3
  {
    cdr << ros_message->set_speed3;
  }

  // Field name: set_speed4
  {
    cdr << ros_message->set_speed4;
  }

  // Field name: set_speed5
  {
    cdr << ros_message->set_speed5;
  }

  // Field name: set_speed6
  {
    cdr << ros_message->set_speed6;
  }

  return true;
}

static bool _ServoData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ServoData__ros_msg_type * ros_message = static_cast<_ServoData__ros_msg_type *>(untyped_ros_message);
  // Field name: max_torque1
  {
    cdr >> ros_message->max_torque1;
  }

  // Field name: max_torque2
  {
    cdr >> ros_message->max_torque2;
  }

  // Field name: max_torque3
  {
    cdr >> ros_message->max_torque3;
  }

  // Field name: max_torque4
  {
    cdr >> ros_message->max_torque4;
  }

  // Field name: max_torque5
  {
    cdr >> ros_message->max_torque5;
  }

  // Field name: max_torque6
  {
    cdr >> ros_message->max_torque6;
  }

  // Field name: set_pos1
  {
    cdr >> ros_message->set_pos1;
  }

  // Field name: set_pos2
  {
    cdr >> ros_message->set_pos2;
  }

  // Field name: set_pos3
  {
    cdr >> ros_message->set_pos3;
  }

  // Field name: set_pos4
  {
    cdr >> ros_message->set_pos4;
  }

  // Field name: set_pos5
  {
    cdr >> ros_message->set_pos5;
  }

  // Field name: set_pos6
  {
    cdr >> ros_message->set_pos6;
  }

  // Field name: set_speed1
  {
    cdr >> ros_message->set_speed1;
  }

  // Field name: set_speed2
  {
    cdr >> ros_message->set_speed2;
  }

  // Field name: set_speed3
  {
    cdr >> ros_message->set_speed3;
  }

  // Field name: set_speed4
  {
    cdr >> ros_message->set_speed4;
  }

  // Field name: set_speed5
  {
    cdr >> ros_message->set_speed5;
  }

  // Field name: set_speed6
  {
    cdr >> ros_message->set_speed6;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_topics_services
size_t get_serialized_size_topics_services__msg__ServoData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ServoData__ros_msg_type * ros_message = static_cast<const _ServoData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name max_torque1
  {
    size_t item_size = sizeof(ros_message->max_torque1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_torque2
  {
    size_t item_size = sizeof(ros_message->max_torque2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_torque3
  {
    size_t item_size = sizeof(ros_message->max_torque3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_torque4
  {
    size_t item_size = sizeof(ros_message->max_torque4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_torque5
  {
    size_t item_size = sizeof(ros_message->max_torque5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_torque6
  {
    size_t item_size = sizeof(ros_message->max_torque6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name set_pos1
  {
    size_t item_size = sizeof(ros_message->set_pos1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name set_pos2
  {
    size_t item_size = sizeof(ros_message->set_pos2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name set_pos3
  {
    size_t item_size = sizeof(ros_message->set_pos3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name set_pos4
  {
    size_t item_size = sizeof(ros_message->set_pos4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name set_pos5
  {
    size_t item_size = sizeof(ros_message->set_pos5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name set_pos6
  {
    size_t item_size = sizeof(ros_message->set_pos6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name set_speed1
  {
    size_t item_size = sizeof(ros_message->set_speed1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name set_speed2
  {
    size_t item_size = sizeof(ros_message->set_speed2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name set_speed3
  {
    size_t item_size = sizeof(ros_message->set_speed3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name set_speed4
  {
    size_t item_size = sizeof(ros_message->set_speed4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name set_speed5
  {
    size_t item_size = sizeof(ros_message->set_speed5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name set_speed6
  {
    size_t item_size = sizeof(ros_message->set_speed6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ServoData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_topics_services__msg__ServoData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_topics_services
size_t max_serialized_size_topics_services__msg__ServoData(
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

  // member: max_torque1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: max_torque2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: max_torque3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: max_torque4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: max_torque5
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: max_torque6
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: set_pos1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: set_pos2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: set_pos3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: set_pos4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: set_pos5
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: set_pos6
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: set_speed1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: set_speed2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: set_speed3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: set_speed4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: set_speed5
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: set_speed6
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ServoData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_topics_services__msg__ServoData(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ServoData = {
  "topics_services::msg",
  "ServoData",
  _ServoData__cdr_serialize,
  _ServoData__cdr_deserialize,
  _ServoData__get_serialized_size,
  _ServoData__max_serialized_size
};

static rosidl_message_type_support_t _ServoData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ServoData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, topics_services, msg, ServoData)() {
  return &_ServoData__type_support;
}

#if defined(__cplusplus)
}
#endif
