// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from topics_services:msg/RandomData.idl
// generated code does not contain a copyright notice

#ifndef TOPICS_SERVICES__MSG__DETAIL__RANDOM_DATA__TRAITS_HPP_
#define TOPICS_SERVICES__MSG__DETAIL__RANDOM_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "topics_services/msg/detail/random_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace topics_services
{

namespace msg
{

inline void to_flow_style_yaml(
  const RandomData & msg,
  std::ostream & out)
{
  out << "{";
  // member: gs1
  {
    out << "gs1: ";
    rosidl_generator_traits::value_to_yaml(msg.gs1, out);
    out << ", ";
  }

  // member: highband
  {
    out << "highband: ";
    rosidl_generator_traits::value_to_yaml(msg.highband, out);
    out << ", ";
  }

  // member: midband
  {
    out << "midband: ";
    rosidl_generator_traits::value_to_yaml(msg.midband, out);
    out << ", ";
  }

  // member: lowband
  {
    out << "lowband: ";
    rosidl_generator_traits::value_to_yaml(msg.lowband, out);
    out << ", ";
  }

  // member: weight
  {
    out << "weight: ";
    rosidl_generator_traits::value_to_yaml(msg.weight, out);
    out << ", ";
  }

  // member: batteryvoltage
  {
    out << "batteryvoltage: ";
    rosidl_generator_traits::value_to_yaml(msg.batteryvoltage, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RandomData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: gs1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gs1: ";
    rosidl_generator_traits::value_to_yaml(msg.gs1, out);
    out << "\n";
  }

  // member: highband
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "highband: ";
    rosidl_generator_traits::value_to_yaml(msg.highband, out);
    out << "\n";
  }

  // member: midband
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "midband: ";
    rosidl_generator_traits::value_to_yaml(msg.midband, out);
    out << "\n";
  }

  // member: lowband
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lowband: ";
    rosidl_generator_traits::value_to_yaml(msg.lowband, out);
    out << "\n";
  }

  // member: weight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "weight: ";
    rosidl_generator_traits::value_to_yaml(msg.weight, out);
    out << "\n";
  }

  // member: batteryvoltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "batteryvoltage: ";
    rosidl_generator_traits::value_to_yaml(msg.batteryvoltage, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RandomData & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace topics_services

namespace rosidl_generator_traits
{

[[deprecated("use topics_services::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const topics_services::msg::RandomData & msg,
  std::ostream & out, size_t indentation = 0)
{
  topics_services::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use topics_services::msg::to_yaml() instead")]]
inline std::string to_yaml(const topics_services::msg::RandomData & msg)
{
  return topics_services::msg::to_yaml(msg);
}

template<>
inline const char * data_type<topics_services::msg::RandomData>()
{
  return "topics_services::msg::RandomData";
}

template<>
inline const char * name<topics_services::msg::RandomData>()
{
  return "topics_services/msg/RandomData";
}

template<>
struct has_fixed_size<topics_services::msg::RandomData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<topics_services::msg::RandomData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<topics_services::msg::RandomData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TOPICS_SERVICES__MSG__DETAIL__RANDOM_DATA__TRAITS_HPP_
