// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from topics_services:msg/RandomData.idl
// generated code does not contain a copyright notice
#include "topics_services/msg/detail/random_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "topics_services/msg/detail/random_data__struct.hpp"

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
  const topics_services::msg::RandomData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: gs1
  cdr << ros_message.gs1;
  // Member: highband
  cdr << ros_message.highband;
  // Member: midband
  cdr << ros_message.midband;
  // Member: lowband
  cdr << ros_message.lowband;
  // Member: weight
  cdr << ros_message.weight;
  // Member: batteryvoltage
  cdr << ros_message.batteryvoltage;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_topics_services
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  topics_services::msg::RandomData & ros_message)
{
  // Member: gs1
  cdr >> ros_message.gs1;

  // Member: highband
  cdr >> ros_message.highband;

  // Member: midband
  cdr >> ros_message.midband;

  // Member: lowband
  cdr >> ros_message.lowband;

  // Member: weight
  cdr >> ros_message.weight;

  // Member: batteryvoltage
  cdr >> ros_message.batteryvoltage;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_topics_services
get_serialized_size(
  const topics_services::msg::RandomData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: gs1
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.gs1.size() + 1);
  // Member: highband
  {
    size_t item_size = sizeof(ros_message.highband);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: midband
  {
    size_t item_size = sizeof(ros_message.midband);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lowband
  {
    size_t item_size = sizeof(ros_message.lowband);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: weight
  {
    size_t item_size = sizeof(ros_message.weight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: batteryvoltage
  {
    size_t item_size = sizeof(ros_message.batteryvoltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_topics_services
max_serialized_size_RandomData(
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


  // Member: gs1
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

  // Member: highband
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: midband
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: lowband
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: weight
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: batteryvoltage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _RandomData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const topics_services::msg::RandomData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RandomData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<topics_services::msg::RandomData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RandomData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const topics_services::msg::RandomData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RandomData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RandomData(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RandomData__callbacks = {
  "topics_services::msg",
  "RandomData",
  _RandomData__cdr_serialize,
  _RandomData__cdr_deserialize,
  _RandomData__get_serialized_size,
  _RandomData__max_serialized_size
};

static rosidl_message_type_support_t _RandomData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RandomData__callbacks,
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
get_message_type_support_handle<topics_services::msg::RandomData>()
{
  return &topics_services::msg::typesupport_fastrtps_cpp::_RandomData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, topics_services, msg, RandomData)() {
  return &topics_services::msg::typesupport_fastrtps_cpp::_RandomData__handle;
}

#ifdef __cplusplus
}
#endif
