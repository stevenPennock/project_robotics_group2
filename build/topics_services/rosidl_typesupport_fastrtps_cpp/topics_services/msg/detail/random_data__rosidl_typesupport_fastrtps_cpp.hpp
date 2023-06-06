// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from topics_services:msg/RandomData.idl
// generated code does not contain a copyright notice

#ifndef TOPICS_SERVICES__MSG__DETAIL__RANDOM_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define TOPICS_SERVICES__MSG__DETAIL__RANDOM_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "topics_services/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "topics_services/msg/detail/random_data__struct.hpp"

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

#include "fastcdr/Cdr.h"

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
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_topics_services
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  topics_services::msg::RandomData & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_topics_services
get_serialized_size(
  const topics_services::msg::RandomData & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_topics_services
max_serialized_size_RandomData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace topics_services

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_topics_services
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, topics_services, msg, RandomData)();

#ifdef __cplusplus
}
#endif

#endif  // TOPICS_SERVICES__MSG__DETAIL__RANDOM_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
