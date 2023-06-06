// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from topics_services:msg/ServoData.idl
// generated code does not contain a copyright notice
#include "topics_services/msg/detail/servo_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "topics_services/msg/detail/servo_data__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace topics_services
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_topics_services
cdr_serialize(
  const topics_services::msg::ServoData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: max_torque1
  cdr << ros_message.max_torque1;
  // Member: max_torque2
  cdr << ros_message.max_torque2;
  // Member: max_torque3
  cdr << ros_message.max_torque3;
  // Member: max_torque4
  cdr << ros_message.max_torque4;
  // Member: max_torque5
  cdr << ros_message.max_torque5;
  // Member: max_torque6
  cdr << ros_message.max_torque6;
  // Member: set_pos1
  cdr << ros_message.set_pos1;
  // Member: set_pos2
  cdr << ros_message.set_pos2;
  // Member: set_pos3
  cdr << ros_message.set_pos3;
  // Member: set_pos4
  cdr << ros_message.set_pos4;
  // Member: set_pos5
  cdr << ros_message.set_pos5;
  // Member: set_pos6
  cdr << ros_message.set_pos6;
  // Member: set_speed1
  cdr << ros_message.set_speed1;
  // Member: set_speed2
  cdr << ros_message.set_speed2;
  // Member: set_speed3
  cdr << ros_message.set_speed3;
  // Member: set_speed4
  cdr << ros_message.set_speed4;
  // Member: set_speed5
  cdr << ros_message.set_speed5;
  // Member: set_speed6
  cdr << ros_message.set_speed6;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_topics_services
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  topics_services::msg::ServoData & ros_message)
{
  // Member: max_torque1
  cdr >> ros_message.max_torque1;

  // Member: max_torque2
  cdr >> ros_message.max_torque2;

  // Member: max_torque3
  cdr >> ros_message.max_torque3;

  // Member: max_torque4
  cdr >> ros_message.max_torque4;

  // Member: max_torque5
  cdr >> ros_message.max_torque5;

  // Member: max_torque6
  cdr >> ros_message.max_torque6;

  // Member: set_pos1
  cdr >> ros_message.set_pos1;

  // Member: set_pos2
  cdr >> ros_message.set_pos2;

  // Member: set_pos3
  cdr >> ros_message.set_pos3;

  // Member: set_pos4
  cdr >> ros_message.set_pos4;

  // Member: set_pos5
  cdr >> ros_message.set_pos5;

  // Member: set_pos6
  cdr >> ros_message.set_pos6;

  // Member: set_speed1
  cdr >> ros_message.set_speed1;

  // Member: set_speed2
  cdr >> ros_message.set_speed2;

  // Member: set_speed3
  cdr >> ros_message.set_speed3;

  // Member: set_speed4
  cdr >> ros_message.set_speed4;

  // Member: set_speed5
  cdr >> ros_message.set_speed5;

  // Member: set_speed6
  cdr >> ros_message.set_speed6;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_topics_services
get_serialized_size(
  const topics_services::msg::ServoData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: max_torque1
  {
    size_t item_size = sizeof(ros_message.max_torque1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_torque2
  {
    size_t item_size = sizeof(ros_message.max_torque2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_torque3
  {
    size_t item_size = sizeof(ros_message.max_torque3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_torque4
  {
    size_t item_size = sizeof(ros_message.max_torque4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_torque5
  {
    size_t item_size = sizeof(ros_message.max_torque5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_torque6
  {
    size_t item_size = sizeof(ros_message.max_torque6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: set_pos1
  {
    size_t item_size = sizeof(ros_message.set_pos1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: set_pos2
  {
    size_t item_size = sizeof(ros_message.set_pos2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: set_pos3
  {
    size_t item_size = sizeof(ros_message.set_pos3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: set_pos4
  {
    size_t item_size = sizeof(ros_message.set_pos4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: set_pos5
  {
    size_t item_size = sizeof(ros_message.set_pos5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: set_pos6
  {
    size_t item_size = sizeof(ros_message.set_pos6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: set_speed1
  {
    size_t item_size = sizeof(ros_message.set_speed1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: set_speed2
  {
    size_t item_size = sizeof(ros_message.set_speed2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: set_speed3
  {
    size_t item_size = sizeof(ros_message.set_speed3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: set_speed4
  {
    size_t item_size = sizeof(ros_message.set_speed4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: set_speed5
  {
    size_t item_size = sizeof(ros_message.set_speed5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: set_speed6
  {
    size_t item_size = sizeof(ros_message.set_speed6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_topics_services
max_serialized_size_ServoData(
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


  // Member: max_torque1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: max_torque2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: max_torque3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: max_torque4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: max_torque5
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: max_torque6
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: set_pos1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: set_pos2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: set_pos3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: set_pos4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: set_pos5
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: set_pos6
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: set_speed1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: set_speed2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: set_speed3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: set_speed4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: set_speed5
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: set_speed6
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _ServoData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const topics_services::msg::ServoData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ServoData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<topics_services::msg::ServoData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ServoData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const topics_services::msg::ServoData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ServoData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ServoData(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ServoData__callbacks = {
  "topics_services::msg",
  "ServoData",
  _ServoData__cdr_serialize,
  _ServoData__cdr_deserialize,
  _ServoData__get_serialized_size,
  _ServoData__max_serialized_size
};

static rosidl_message_type_support_t _ServoData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ServoData__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace topics_services

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_topics_services
const rosidl_message_type_support_t *
get_message_type_support_handle<topics_services::msg::ServoData>()
{
  return &topics_services::msg::typesupport_fastrtps_cpp::_ServoData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, topics_services, msg, ServoData)() {
  return &topics_services::msg::typesupport_fastrtps_cpp::_ServoData__handle;
}

#ifdef __cplusplus
}
#endif
