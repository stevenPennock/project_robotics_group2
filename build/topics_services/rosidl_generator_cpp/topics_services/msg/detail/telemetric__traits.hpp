// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from topics_services:msg/Telemetric.idl
// generated code does not contain a copyright notice

#ifndef TOPICS_SERVICES__MSG__DETAIL__TELEMETRIC__TRAITS_HPP_
#define TOPICS_SERVICES__MSG__DETAIL__TELEMETRIC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "topics_services/msg/detail/telemetric__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace topics_services
{

namespace msg
{

inline void to_flow_style_yaml(
  const Telemetric & msg,
  std::ostream & out)
{
  out << "{";
  // member: temp_fr
  {
    out << "temp_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.temp_fr, out);
    out << ", ";
  }

  // member: temp_fl
  {
    out << "temp_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.temp_fl, out);
    out << ", ";
  }

  // member: temp_br
  {
    out << "temp_br: ";
    rosidl_generator_traits::value_to_yaml(msg.temp_br, out);
    out << ", ";
  }

  // member: temp_bl
  {
    out << "temp_bl: ";
    rosidl_generator_traits::value_to_yaml(msg.temp_bl, out);
    out << ", ";
  }

  // member: temp_z_as
  {
    out << "temp_z_as: ";
    rosidl_generator_traits::value_to_yaml(msg.temp_z_as, out);
    out << ", ";
  }

  // member: temp_gripper
  {
    out << "temp_gripper: ";
    rosidl_generator_traits::value_to_yaml(msg.temp_gripper, out);
    out << ", ";
  }

  // member: cur_pos_fr
  {
    out << "cur_pos_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_pos_fr, out);
    out << ", ";
  }

  // member: cur_pos_fl
  {
    out << "cur_pos_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_pos_fl, out);
    out << ", ";
  }

  // member: cur_pos_br
  {
    out << "cur_pos_br: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_pos_br, out);
    out << ", ";
  }

  // member: cur_pos_bl
  {
    out << "cur_pos_bl: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_pos_bl, out);
    out << ", ";
  }

  // member: cur_pos_z_as
  {
    out << "cur_pos_z_as: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_pos_z_as, out);
    out << ", ";
  }

  // member: cur_pos_gripper
  {
    out << "cur_pos_gripper: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_pos_gripper, out);
    out << ", ";
  }

  // member: voltage_fr
  {
    out << "voltage_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage_fr, out);
    out << ", ";
  }

  // member: voltage_fl
  {
    out << "voltage_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage_fl, out);
    out << ", ";
  }

  // member: voltage_br
  {
    out << "voltage_br: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage_br, out);
    out << ", ";
  }

  // member: voltage_bl
  {
    out << "voltage_bl: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage_bl, out);
    out << ", ";
  }

  // member: voltage_z_as
  {
    out << "voltage_z_as: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage_z_as, out);
    out << ", ";
  }

  // member: voltage_gripper
  {
    out << "voltage_gripper: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage_gripper, out);
    out << ", ";
  }

  // member: load_fr
  {
    out << "load_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.load_fr, out);
    out << ", ";
  }

  // member: load_fl
  {
    out << "load_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.load_fl, out);
    out << ", ";
  }

  // member: load_br
  {
    out << "load_br: ";
    rosidl_generator_traits::value_to_yaml(msg.load_br, out);
    out << ", ";
  }

  // member: load_bl
  {
    out << "load_bl: ";
    rosidl_generator_traits::value_to_yaml(msg.load_bl, out);
    out << ", ";
  }

  // member: load_z_as
  {
    out << "load_z_as: ";
    rosidl_generator_traits::value_to_yaml(msg.load_z_as, out);
    out << ", ";
  }

  // member: load_gripper
  {
    out << "load_gripper: ";
    rosidl_generator_traits::value_to_yaml(msg.load_gripper, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Telemetric & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: temp_fr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temp_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.temp_fr, out);
    out << "\n";
  }

  // member: temp_fl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temp_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.temp_fl, out);
    out << "\n";
  }

  // member: temp_br
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temp_br: ";
    rosidl_generator_traits::value_to_yaml(msg.temp_br, out);
    out << "\n";
  }

  // member: temp_bl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temp_bl: ";
    rosidl_generator_traits::value_to_yaml(msg.temp_bl, out);
    out << "\n";
  }

  // member: temp_z_as
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temp_z_as: ";
    rosidl_generator_traits::value_to_yaml(msg.temp_z_as, out);
    out << "\n";
  }

  // member: temp_gripper
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temp_gripper: ";
    rosidl_generator_traits::value_to_yaml(msg.temp_gripper, out);
    out << "\n";
  }

  // member: cur_pos_fr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cur_pos_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_pos_fr, out);
    out << "\n";
  }

  // member: cur_pos_fl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cur_pos_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_pos_fl, out);
    out << "\n";
  }

  // member: cur_pos_br
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cur_pos_br: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_pos_br, out);
    out << "\n";
  }

  // member: cur_pos_bl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cur_pos_bl: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_pos_bl, out);
    out << "\n";
  }

  // member: cur_pos_z_as
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cur_pos_z_as: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_pos_z_as, out);
    out << "\n";
  }

  // member: cur_pos_gripper
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cur_pos_gripper: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_pos_gripper, out);
    out << "\n";
  }

  // member: voltage_fr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voltage_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage_fr, out);
    out << "\n";
  }

  // member: voltage_fl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voltage_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage_fl, out);
    out << "\n";
  }

  // member: voltage_br
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voltage_br: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage_br, out);
    out << "\n";
  }

  // member: voltage_bl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voltage_bl: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage_bl, out);
    out << "\n";
  }

  // member: voltage_z_as
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voltage_z_as: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage_z_as, out);
    out << "\n";
  }

  // member: voltage_gripper
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voltage_gripper: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage_gripper, out);
    out << "\n";
  }

  // member: load_fr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "load_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.load_fr, out);
    out << "\n";
  }

  // member: load_fl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "load_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.load_fl, out);
    out << "\n";
  }

  // member: load_br
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "load_br: ";
    rosidl_generator_traits::value_to_yaml(msg.load_br, out);
    out << "\n";
  }

  // member: load_bl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "load_bl: ";
    rosidl_generator_traits::value_to_yaml(msg.load_bl, out);
    out << "\n";
  }

  // member: load_z_as
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "load_z_as: ";
    rosidl_generator_traits::value_to_yaml(msg.load_z_as, out);
    out << "\n";
  }

  // member: load_gripper
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "load_gripper: ";
    rosidl_generator_traits::value_to_yaml(msg.load_gripper, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Telemetric & msg, bool use_flow_style = false)
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
  const topics_services::msg::Telemetric & msg,
  std::ostream & out, size_t indentation = 0)
{
  topics_services::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use topics_services::msg::to_yaml() instead")]]
inline std::string to_yaml(const topics_services::msg::Telemetric & msg)
{
  return topics_services::msg::to_yaml(msg);
}

template<>
inline const char * data_type<topics_services::msg::Telemetric>()
{
  return "topics_services::msg::Telemetric";
}

template<>
inline const char * name<topics_services::msg::Telemetric>()
{
  return "topics_services/msg/Telemetric";
}

template<>
struct has_fixed_size<topics_services::msg::Telemetric>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<topics_services::msg::Telemetric>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<topics_services::msg::Telemetric>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TOPICS_SERVICES__MSG__DETAIL__TELEMETRIC__TRAITS_HPP_
