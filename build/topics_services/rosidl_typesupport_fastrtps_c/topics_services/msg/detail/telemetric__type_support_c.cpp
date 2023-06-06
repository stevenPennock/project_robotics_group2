// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from topics_services:msg/Telemetric.idl
// generated code does not contain a copyright notice
#include "topics_services/msg/detail/telemetric__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "topics_services/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "topics_services/msg/detail/telemetric__struct.h"
#include "topics_services/msg/detail/telemetric__functions.h"
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


using _Telemetric__ros_msg_type = topics_services__msg__Telemetric;

static bool _Telemetric__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Telemetric__ros_msg_type * ros_message = static_cast<const _Telemetric__ros_msg_type *>(untyped_ros_message);
  // Field name: temp_fr
  {
    cdr << ros_message->temp_fr;
  }

  // Field name: temp_fl
  {
    cdr << ros_message->temp_fl;
  }

  // Field name: temp_br
  {
    cdr << ros_message->temp_br;
  }

  // Field name: temp_bl
  {
    cdr << ros_message->temp_bl;
  }

  // Field name: temp_z_as
  {
    cdr << ros_message->temp_z_as;
  }

  // Field name: temp_gripper
  {
    cdr << ros_message->temp_gripper;
  }

  // Field name: cur_pos_fr
  {
    cdr << ros_message->cur_pos_fr;
  }

  // Field name: cur_pos_fl
  {
    cdr << ros_message->cur_pos_fl;
  }

  // Field name: cur_pos_br
  {
    cdr << ros_message->cur_pos_br;
  }

  // Field name: cur_pos_bl
  {
    cdr << ros_message->cur_pos_bl;
  }

  // Field name: cur_pos_z_as
  {
    cdr << ros_message->cur_pos_z_as;
  }

  // Field name: cur_pos_gripper
  {
    cdr << ros_message->cur_pos_gripper;
  }

  // Field name: voltage_fr
  {
    cdr << ros_message->voltage_fr;
  }

  // Field name: voltage_fl
  {
    cdr << ros_message->voltage_fl;
  }

  // Field name: voltage_br
  {
    cdr << ros_message->voltage_br;
  }

  // Field name: voltage_bl
  {
    cdr << ros_message->voltage_bl;
  }

  // Field name: voltage_z_as
  {
    cdr << ros_message->voltage_z_as;
  }

  // Field name: voltage_gripper
  {
    cdr << ros_message->voltage_gripper;
  }

  // Field name: load_fr
  {
    cdr << ros_message->load_fr;
  }

  // Field name: load_fl
  {
    cdr << ros_message->load_fl;
  }

  // Field name: load_br
  {
    cdr << ros_message->load_br;
  }

  // Field name: load_bl
  {
    cdr << ros_message->load_bl;
  }

  // Field name: load_z_as
  {
    cdr << ros_message->load_z_as;
  }

  // Field name: load_gripper
  {
    cdr << ros_message->load_gripper;
  }

  return true;
}

static bool _Telemetric__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Telemetric__ros_msg_type * ros_message = static_cast<_Telemetric__ros_msg_type *>(untyped_ros_message);
  // Field name: temp_fr
  {
    cdr >> ros_message->temp_fr;
  }

  // Field name: temp_fl
  {
    cdr >> ros_message->temp_fl;
  }

  // Field name: temp_br
  {
    cdr >> ros_message->temp_br;
  }

  // Field name: temp_bl
  {
    cdr >> ros_message->temp_bl;
  }

  // Field name: temp_z_as
  {
    cdr >> ros_message->temp_z_as;
  }

  // Field name: temp_gripper
  {
    cdr >> ros_message->temp_gripper;
  }

  // Field name: cur_pos_fr
  {
    cdr >> ros_message->cur_pos_fr;
  }

  // Field name: cur_pos_fl
  {
    cdr >> ros_message->cur_pos_fl;
  }

  // Field name: cur_pos_br
  {
    cdr >> ros_message->cur_pos_br;
  }

  // Field name: cur_pos_bl
  {
    cdr >> ros_message->cur_pos_bl;
  }

  // Field name: cur_pos_z_as
  {
    cdr >> ros_message->cur_pos_z_as;
  }

  // Field name: cur_pos_gripper
  {
    cdr >> ros_message->cur_pos_gripper;
  }

  // Field name: voltage_fr
  {
    cdr >> ros_message->voltage_fr;
  }

  // Field name: voltage_fl
  {
    cdr >> ros_message->voltage_fl;
  }

  // Field name: voltage_br
  {
    cdr >> ros_message->voltage_br;
  }

  // Field name: voltage_bl
  {
    cdr >> ros_message->voltage_bl;
  }

  // Field name: voltage_z_as
  {
    cdr >> ros_message->voltage_z_as;
  }

  // Field name: voltage_gripper
  {
    cdr >> ros_message->voltage_gripper;
  }

  // Field name: load_fr
  {
    cdr >> ros_message->load_fr;
  }

  // Field name: load_fl
  {
    cdr >> ros_message->load_fl;
  }

  // Field name: load_br
  {
    cdr >> ros_message->load_br;
  }

  // Field name: load_bl
  {
    cdr >> ros_message->load_bl;
  }

  // Field name: load_z_as
  {
    cdr >> ros_message->load_z_as;
  }

  // Field name: load_gripper
  {
    cdr >> ros_message->load_gripper;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_topics_services
size_t get_serialized_size_topics_services__msg__Telemetric(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Telemetric__ros_msg_type * ros_message = static_cast<const _Telemetric__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name temp_fr
  {
    size_t item_size = sizeof(ros_message->temp_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temp_fl
  {
    size_t item_size = sizeof(ros_message->temp_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temp_br
  {
    size_t item_size = sizeof(ros_message->temp_br);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temp_bl
  {
    size_t item_size = sizeof(ros_message->temp_bl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temp_z_as
  {
    size_t item_size = sizeof(ros_message->temp_z_as);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temp_gripper
  {
    size_t item_size = sizeof(ros_message->temp_gripper);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cur_pos_fr
  {
    size_t item_size = sizeof(ros_message->cur_pos_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cur_pos_fl
  {
    size_t item_size = sizeof(ros_message->cur_pos_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cur_pos_br
  {
    size_t item_size = sizeof(ros_message->cur_pos_br);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cur_pos_bl
  {
    size_t item_size = sizeof(ros_message->cur_pos_bl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cur_pos_z_as
  {
    size_t item_size = sizeof(ros_message->cur_pos_z_as);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cur_pos_gripper
  {
    size_t item_size = sizeof(ros_message->cur_pos_gripper);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name voltage_fr
  {
    size_t item_size = sizeof(ros_message->voltage_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name voltage_fl
  {
    size_t item_size = sizeof(ros_message->voltage_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name voltage_br
  {
    size_t item_size = sizeof(ros_message->voltage_br);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name voltage_bl
  {
    size_t item_size = sizeof(ros_message->voltage_bl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name voltage_z_as
  {
    size_t item_size = sizeof(ros_message->voltage_z_as);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name voltage_gripper
  {
    size_t item_size = sizeof(ros_message->voltage_gripper);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name load_fr
  {
    size_t item_size = sizeof(ros_message->load_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name load_fl
  {
    size_t item_size = sizeof(ros_message->load_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name load_br
  {
    size_t item_size = sizeof(ros_message->load_br);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name load_bl
  {
    size_t item_size = sizeof(ros_message->load_bl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name load_z_as
  {
    size_t item_size = sizeof(ros_message->load_z_as);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name load_gripper
  {
    size_t item_size = sizeof(ros_message->load_gripper);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Telemetric__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_topics_services__msg__Telemetric(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_topics_services
size_t max_serialized_size_topics_services__msg__Telemetric(
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

  // member: temp_fr
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: temp_fl
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: temp_br
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: temp_bl
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: temp_z_as
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: temp_gripper
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cur_pos_fr
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cur_pos_fl
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cur_pos_br
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cur_pos_bl
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cur_pos_z_as
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cur_pos_gripper
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: voltage_fr
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: voltage_fl
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: voltage_br
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: voltage_bl
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: voltage_z_as
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: voltage_gripper
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: load_fr
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: load_fl
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: load_br
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: load_bl
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: load_z_as
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: load_gripper
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Telemetric__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_topics_services__msg__Telemetric(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Telemetric = {
  "topics_services::msg",
  "Telemetric",
  _Telemetric__cdr_serialize,
  _Telemetric__cdr_deserialize,
  _Telemetric__get_serialized_size,
  _Telemetric__max_serialized_size
};

static rosidl_message_type_support_t _Telemetric__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Telemetric,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, topics_services, msg, Telemetric)() {
  return &_Telemetric__type_support;
}

#if defined(__cplusplus)
}
#endif
