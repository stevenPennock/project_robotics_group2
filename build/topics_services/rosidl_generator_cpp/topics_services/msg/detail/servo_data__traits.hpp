// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from topics_services:msg/ServoData.idl
// generated code does not contain a copyright notice

#ifndef TOPICS_SERVICES__MSG__DETAIL__SERVO_DATA__TRAITS_HPP_
#define TOPICS_SERVICES__MSG__DETAIL__SERVO_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "topics_services/msg/detail/servo_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace topics_services
{

namespace msg
{

inline void to_flow_style_yaml(
  const ServoData & msg,
  std::ostream & out)
{
  out << "{";
  // member: max_torque1
  {
    out << "max_torque1: ";
    rosidl_generator_traits::value_to_yaml(msg.max_torque1, out);
    out << ", ";
  }

  // member: max_torque2
  {
    out << "max_torque2: ";
    rosidl_generator_traits::value_to_yaml(msg.max_torque2, out);
    out << ", ";
  }

  // member: max_torque3
  {
    out << "max_torque3: ";
    rosidl_generator_traits::value_to_yaml(msg.max_torque3, out);
    out << ", ";
  }

  // member: max_torque4
  {
    out << "max_torque4: ";
    rosidl_generator_traits::value_to_yaml(msg.max_torque4, out);
    out << ", ";
  }

  // member: max_torque5
  {
    out << "max_torque5: ";
    rosidl_generator_traits::value_to_yaml(msg.max_torque5, out);
    out << ", ";
  }

  // member: max_torque6
  {
    out << "max_torque6: ";
    rosidl_generator_traits::value_to_yaml(msg.max_torque6, out);
    out << ", ";
  }

  // member: set_pos1
  {
    out << "set_pos1: ";
    rosidl_generator_traits::value_to_yaml(msg.set_pos1, out);
    out << ", ";
  }

  // member: set_pos2
  {
    out << "set_pos2: ";
    rosidl_generator_traits::value_to_yaml(msg.set_pos2, out);
    out << ", ";
  }

  // member: set_pos3
  {
    out << "set_pos3: ";
    rosidl_generator_traits::value_to_yaml(msg.set_pos3, out);
    out << ", ";
  }

  // member: set_pos4
  {
    out << "set_pos4: ";
    rosidl_generator_traits::value_to_yaml(msg.set_pos4, out);
    out << ", ";
  }

  // member: set_pos5
  {
    out << "set_pos5: ";
    rosidl_generator_traits::value_to_yaml(msg.set_pos5, out);
    out << ", ";
  }

  // member: set_pos6
  {
    out << "set_pos6: ";
    rosidl_generator_traits::value_to_yaml(msg.set_pos6, out);
    out << ", ";
  }

  // member: set_speed1
  {
    out << "set_speed1: ";
    rosidl_generator_traits::value_to_yaml(msg.set_speed1, out);
    out << ", ";
  }

  // member: set_speed2
  {
    out << "set_speed2: ";
    rosidl_generator_traits::value_to_yaml(msg.set_speed2, out);
    out << ", ";
  }

  // member: set_speed3
  {
    out << "set_speed3: ";
    rosidl_generator_traits::value_to_yaml(msg.set_speed3, out);
    out << ", ";
  }

  // member: set_speed4
  {
    out << "set_speed4: ";
    rosidl_generator_traits::value_to_yaml(msg.set_speed4, out);
    out << ", ";
  }

  // member: set_speed5
  {
    out << "set_speed5: ";
    rosidl_generator_traits::value_to_yaml(msg.set_speed5, out);
    out << ", ";
  }

  // member: set_speed6
  {
    out << "set_speed6: ";
    rosidl_generator_traits::value_to_yaml(msg.set_speed6, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ServoData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: max_torque1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_torque1: ";
    rosidl_generator_traits::value_to_yaml(msg.max_torque1, out);
    out << "\n";
  }

  // member: max_torque2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_torque2: ";
    rosidl_generator_traits::value_to_yaml(msg.max_torque2, out);
    out << "\n";
  }

  // member: max_torque3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_torque3: ";
    rosidl_generator_traits::value_to_yaml(msg.max_torque3, out);
    out << "\n";
  }

  // member: max_torque4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_torque4: ";
    rosidl_generator_traits::value_to_yaml(msg.max_torque4, out);
    out << "\n";
  }

  // member: max_torque5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_torque5: ";
    rosidl_generator_traits::value_to_yaml(msg.max_torque5, out);
    out << "\n";
  }

  // member: max_torque6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_torque6: ";
    rosidl_generator_traits::value_to_yaml(msg.max_torque6, out);
    out << "\n";
  }

  // member: set_pos1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_pos1: ";
    rosidl_generator_traits::value_to_yaml(msg.set_pos1, out);
    out << "\n";
  }

  // member: set_pos2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_pos2: ";
    rosidl_generator_traits::value_to_yaml(msg.set_pos2, out);
    out << "\n";
  }

  // member: set_pos3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_pos3: ";
    rosidl_generator_traits::value_to_yaml(msg.set_pos3, out);
    out << "\n";
  }

  // member: set_pos4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_pos4: ";
    rosidl_generator_traits::value_to_yaml(msg.set_pos4, out);
    out << "\n";
  }

  // member: set_pos5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_pos5: ";
    rosidl_generator_traits::value_to_yaml(msg.set_pos5, out);
    out << "\n";
  }

  // member: set_pos6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_pos6: ";
    rosidl_generator_traits::value_to_yaml(msg.set_pos6, out);
    out << "\n";
  }

  // member: set_speed1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_speed1: ";
    rosidl_generator_traits::value_to_yaml(msg.set_speed1, out);
    out << "\n";
  }

  // member: set_speed2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_speed2: ";
    rosidl_generator_traits::value_to_yaml(msg.set_speed2, out);
    out << "\n";
  }

  // member: set_speed3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_speed3: ";
    rosidl_generator_traits::value_to_yaml(msg.set_speed3, out);
    out << "\n";
  }

  // member: set_speed4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_speed4: ";
    rosidl_generator_traits::value_to_yaml(msg.set_speed4, out);
    out << "\n";
  }

  // member: set_speed5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_speed5: ";
    rosidl_generator_traits::value_to_yaml(msg.set_speed5, out);
    out << "\n";
  }

  // member: set_speed6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_speed6: ";
    rosidl_generator_traits::value_to_yaml(msg.set_speed6, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ServoData & msg, bool use_flow_style = false)
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
  const topics_services::msg::ServoData & msg,
  std::ostream & out, size_t indentation = 0)
{
  topics_services::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use topics_services::msg::to_yaml() instead")]]
inline std::string to_yaml(const topics_services::msg::ServoData & msg)
{
  return topics_services::msg::to_yaml(msg);
}

template<>
inline const char * data_type<topics_services::msg::ServoData>()
{
  return "topics_services::msg::ServoData";
}

template<>
inline const char * name<topics_services::msg::ServoData>()
{
  return "topics_services/msg/ServoData";
}

template<>
struct has_fixed_size<topics_services::msg::ServoData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<topics_services::msg::ServoData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<topics_services::msg::ServoData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TOPICS_SERVICES__MSG__DETAIL__SERVO_DATA__TRAITS_HPP_
