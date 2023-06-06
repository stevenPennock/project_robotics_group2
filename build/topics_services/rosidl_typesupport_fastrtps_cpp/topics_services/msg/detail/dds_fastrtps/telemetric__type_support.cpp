// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from topics_services:msg/Telemetric.idl
// generated code does not contain a copyright notice
#include "topics_services/msg/detail/telemetric__rosidl_typesupport_fastrtps_cpp.hpp"
#include "topics_services/msg/detail/telemetric__struct.hpp"

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
  const topics_services::msg::Telemetric & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: temp_fr
  cdr << ros_message.temp_fr;
  // Member: temp_fl
  cdr << ros_message.temp_fl;
  // Member: temp_br
  cdr << ros_message.temp_br;
  // Member: temp_bl
  cdr << ros_message.temp_bl;
  // Member: temp_z_as
  cdr << ros_message.temp_z_as;
  // Member: temp_gripper
  cdr << ros_message.temp_gripper;
  // Member: cur_pos_fr
  cdr << ros_message.cur_pos_fr;
  // Member: cur_pos_fl
  cdr << ros_message.cur_pos_fl;
  // Member: cur_pos_br
  cdr << ros_message.cur_pos_br;
  // Member: cur_pos_bl
  cdr << ros_message.cur_pos_bl;
  // Member: cur_pos_z_as
  cdr << ros_message.cur_pos_z_as;
  // Member: cur_pos_gripper
  cdr << ros_message.cur_pos_gripper;
  // Member: voltage_fr
  cdr << ros_message.voltage_fr;
  // Member: voltage_fl
  cdr << ros_message.voltage_fl;
  // Member: voltage_br
  cdr << ros_message.voltage_br;
  // Member: voltage_bl
  cdr << ros_message.voltage_bl;
  // Member: voltage_z_as
  cdr << ros_message.voltage_z_as;
  // Member: voltage_gripper
  cdr << ros_message.voltage_gripper;
  // Member: load_fr
  cdr << ros_message.load_fr;
  // Member: load_fl
  cdr << ros_message.load_fl;
  // Member: load_br
  cdr << ros_message.load_br;
  // Member: load_bl
  cdr << ros_message.load_bl;
  // Member: load_z_as
  cdr << ros_message.load_z_as;
  // Member: load_gripper
  cdr << ros_message.load_gripper;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_topics_services
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  topics_services::msg::Telemetric & ros_message)
{
  // Member: temp_fr
  cdr >> ros_message.temp_fr;

  // Member: temp_fl
  cdr >> ros_message.temp_fl;

  // Member: temp_br
  cdr >> ros_message.temp_br;

  // Member: temp_bl
  cdr >> ros_message.temp_bl;

  // Member: temp_z_as
  cdr >> ros_message.temp_z_as;

  // Member: temp_gripper
  cdr >> ros_message.temp_gripper;

  // Member: cur_pos_fr
  cdr >> ros_message.cur_pos_fr;

  // Member: cur_pos_fl
  cdr >> ros_message.cur_pos_fl;

  // Member: cur_pos_br
  cdr >> ros_message.cur_pos_br;

  // Member: cur_pos_bl
  cdr >> ros_message.cur_pos_bl;

  // Member: cur_pos_z_as
  cdr >> ros_message.cur_pos_z_as;

  // Member: cur_pos_gripper
  cdr >> ros_message.cur_pos_gripper;

  // Member: voltage_fr
  cdr >> ros_message.voltage_fr;

  // Member: voltage_fl
  cdr >> ros_message.voltage_fl;

  // Member: voltage_br
  cdr >> ros_message.voltage_br;

  // Member: voltage_bl
  cdr >> ros_message.voltage_bl;

  // Member: voltage_z_as
  cdr >> ros_message.voltage_z_as;

  // Member: voltage_gripper
  cdr >> ros_message.voltage_gripper;

  // Member: load_fr
  cdr >> ros_message.load_fr;

  // Member: load_fl
  cdr >> ros_message.load_fl;

  // Member: load_br
  cdr >> ros_message.load_br;

  // Member: load_bl
  cdr >> ros_message.load_bl;

  // Member: load_z_as
  cdr >> ros_message.load_z_as;

  // Member: load_gripper
  cdr >> ros_message.load_gripper;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_topics_services
get_serialized_size(
  const topics_services::msg::Telemetric & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: temp_fr
  {
    size_t item_size = sizeof(ros_message.temp_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: temp_fl
  {
    size_t item_size = sizeof(ros_message.temp_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: temp_br
  {
    size_t item_size = sizeof(ros_message.temp_br);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: temp_bl
  {
    size_t item_size = sizeof(ros_message.temp_bl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: temp_z_as
  {
    size_t item_size = sizeof(ros_message.temp_z_as);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: temp_gripper
  {
    size_t item_size = sizeof(ros_message.temp_gripper);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cur_pos_fr
  {
    size_t item_size = sizeof(ros_message.cur_pos_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cur_pos_fl
  {
    size_t item_size = sizeof(ros_message.cur_pos_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cur_pos_br
  {
    size_t item_size = sizeof(ros_message.cur_pos_br);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cur_pos_bl
  {
    size_t item_size = sizeof(ros_message.cur_pos_bl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cur_pos_z_as
  {
    size_t item_size = sizeof(ros_message.cur_pos_z_as);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cur_pos_gripper
  {
    size_t item_size = sizeof(ros_message.cur_pos_gripper);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: voltage_fr
  {
    size_t item_size = sizeof(ros_message.voltage_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: voltage_fl
  {
    size_t item_size = sizeof(ros_message.voltage_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: voltage_br
  {
    size_t item_size = sizeof(ros_message.voltage_br);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: voltage_bl
  {
    size_t item_size = sizeof(ros_message.voltage_bl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: voltage_z_as
  {
    size_t item_size = sizeof(ros_message.voltage_z_as);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: voltage_gripper
  {
    size_t item_size = sizeof(ros_message.voltage_gripper);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: load_fr
  {
    size_t item_size = sizeof(ros_message.load_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: load_fl
  {
    size_t item_size = sizeof(ros_message.load_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: load_br
  {
    size_t item_size = sizeof(ros_message.load_br);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: load_bl
  {
    size_t item_size = sizeof(ros_message.load_bl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: load_z_as
  {
    size_t item_size = sizeof(ros_message.load_z_as);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: load_gripper
  {
    size_t item_size = sizeof(ros_message.load_gripper);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_topics_services
max_serialized_size_Telemetric(
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


  // Member: temp_fr
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: temp_fl
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: temp_br
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: temp_bl
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: temp_z_as
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: temp_gripper
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: cur_pos_fr
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: cur_pos_fl
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: cur_pos_br
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: cur_pos_bl
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: cur_pos_z_as
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: cur_pos_gripper
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: voltage_fr
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: voltage_fl
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: voltage_br
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: voltage_bl
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: voltage_z_as
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: voltage_gripper
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: load_fr
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: load_fl
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: load_br
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: load_bl
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: load_z_as
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: load_gripper
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Telemetric__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const topics_services::msg::Telemetric *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Telemetric__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<topics_services::msg::Telemetric *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Telemetric__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const topics_services::msg::Telemetric *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Telemetric__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Telemetric(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Telemetric__callbacks = {
  "topics_services::msg",
  "Telemetric",
  _Telemetric__cdr_serialize,
  _Telemetric__cdr_deserialize,
  _Telemetric__get_serialized_size,
  _Telemetric__max_serialized_size
};

static rosidl_message_type_support_t _Telemetric__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Telemetric__callbacks,
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
get_message_type_support_handle<topics_services::msg::Telemetric>()
{
  return &topics_services::msg::typesupport_fastrtps_cpp::_Telemetric__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, topics_services, msg, Telemetric)() {
  return &topics_services::msg::typesupport_fastrtps_cpp::_Telemetric__handle;
}

#ifdef __cplusplus
}
#endif
