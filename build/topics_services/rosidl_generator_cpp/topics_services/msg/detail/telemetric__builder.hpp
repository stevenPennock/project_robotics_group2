// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from topics_services:msg/Telemetric.idl
// generated code does not contain a copyright notice

#ifndef TOPICS_SERVICES__MSG__DETAIL__TELEMETRIC__BUILDER_HPP_
#define TOPICS_SERVICES__MSG__DETAIL__TELEMETRIC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "topics_services/msg/detail/telemetric__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace topics_services
{

namespace msg
{

namespace builder
{

class Init_Telemetric_load_gripper
{
public:
  explicit Init_Telemetric_load_gripper(::topics_services::msg::Telemetric & msg)
  : msg_(msg)
  {}
  ::topics_services::msg::Telemetric load_gripper(::topics_services::msg::Telemetric::_load_gripper_type arg)
  {
    msg_.load_gripper = std::move(arg);
    return std::move(msg_);
  }

private:
  ::topics_services::msg::Telemetric msg_;
};

class Init_Telemetric_load_z_as
{
public:
  explicit Init_Telemetric_load_z_as(::topics_services::msg::Telemetric & msg)
  : msg_(msg)
  {}
  Init_Telemetric_load_gripper load_z_as(::topics_services::msg::Telemetric::_load_z_as_type arg)
  {
    msg_.load_z_as = std::move(arg);
    return Init_Telemetric_load_gripper(msg_);
  }

private:
  ::topics_services::msg::Telemetric msg_;
};

class Init_Telemetric_load_bl
{
public:
  explicit Init_Telemetric_load_bl(::topics_services::msg::Telemetric & msg)
  : msg_(msg)
  {}
  Init_Telemetric_load_z_as load_bl(::topics_services::msg::Telemetric::_load_bl_type arg)
  {
    msg_.load_bl = std::move(arg);
    return Init_Telemetric_load_z_as(msg_);
  }

private:
  ::topics_services::msg::Telemetric msg_;
};

class Init_Telemetric_load_br
{
public:
  explicit Init_Telemetric_load_br(::topics_services::msg::Telemetric & msg)
  : msg_(msg)
  {}
  Init_Telemetric_load_bl load_br(::topics_services::msg::Telemetric::_load_br_type arg)
  {
    msg_.load_br = std::move(arg);
    return Init_Telemetric_load_bl(msg_);
  }

private:
  ::topics_services::msg::Telemetric msg_;
};

class Init_Telemetric_load_fl
{
public:
  explicit Init_Telemetric_load_fl(::topics_services::msg::Telemetric & msg)
  : msg_(msg)
  {}
  Init_Telemetric_load_br load_fl(::topics_services::msg::Telemetric::_load_fl_type arg)
  {
    msg_.load_fl = std::move(arg);
    return Init_Telemetric_load_br(msg_);
  }

private:
  ::topics_services::msg::Telemetric msg_;
};

class Init_Telemetric_load_fr
{
public:
  explicit Init_Telemetric_load_fr(::topics_services::msg::Telemetric & msg)
  : msg_(msg)
  {}
  Init_Telemetric_load_fl load_fr(::topics_services::msg::Telemetric::_load_fr_type arg)
  {
    msg_.load_fr = std::move(arg);
    return Init_Telemetric_load_fl(msg_);
  }

private:
  ::topics_services::msg::Telemetric msg_;
};

class Init_Telemetric_voltage_gripper
{
public:
  explicit Init_Telemetric_voltage_gripper(::topics_services::msg::Telemetric & msg)
  : msg_(msg)
  {}
  Init_Telemetric_load_fr voltage_gripper(::topics_services::msg::Telemetric::_voltage_gripper_type arg)
  {
    msg_.voltage_gripper = std::move(arg);
    return Init_Telemetric_load_fr(msg_);
  }

private:
  ::topics_services::msg::Telemetric msg_;
};

class Init_Telemetric_voltage_z_as
{
public:
  explicit Init_Telemetric_voltage_z_as(::topics_services::msg::Telemetric & msg)
  : msg_(msg)
  {}
  Init_Telemetric_voltage_gripper voltage_z_as(::topics_services::msg::Telemetric::_voltage_z_as_type arg)
  {
    msg_.voltage_z_as = std::move(arg);
    return Init_Telemetric_voltage_gripper(msg_);
  }

private:
  ::topics_services::msg::Telemetric msg_;
};

class Init_Telemetric_voltage_bl
{
public:
  explicit Init_Telemetric_voltage_bl(::topics_services::msg::Telemetric & msg)
  : msg_(msg)
  {}
  Init_Telemetric_voltage_z_as voltage_bl(::topics_services::msg::Telemetric::_voltage_bl_type arg)
  {
    msg_.voltage_bl = std::move(arg);
    return Init_Telemetric_voltage_z_as(msg_);
  }

private:
  ::topics_services::msg::Telemetric msg_;
};

class Init_Telemetric_voltage_br
{
public:
  explicit Init_Telemetric_voltage_br(::topics_services::msg::Telemetric & msg)
  : msg_(msg)
  {}
  Init_Telemetric_voltage_bl voltage_br(::topics_services::msg::Telemetric::_voltage_br_type arg)
  {
    msg_.voltage_br = std::move(arg);
    return Init_Telemetric_voltage_bl(msg_);
  }

private:
  ::topics_services::msg::Telemetric msg_;
};

class Init_Telemetric_voltage_fl
{
public:
  explicit Init_Telemetric_voltage_fl(::topics_services::msg::Telemetric & msg)
  : msg_(msg)
  {}
  Init_Telemetric_voltage_br voltage_fl(::topics_services::msg::Telemetric::_voltage_fl_type arg)
  {
    msg_.voltage_fl = std::move(arg);
    return Init_Telemetric_voltage_br(msg_);
  }

private:
  ::topics_services::msg::Telemetric msg_;
};

class Init_Telemetric_voltage_fr
{
public:
  explicit Init_Telemetric_voltage_fr(::topics_services::msg::Telemetric & msg)
  : msg_(msg)
  {}
  Init_Telemetric_voltage_fl voltage_fr(::topics_services::msg::Telemetric::_voltage_fr_type arg)
  {
    msg_.voltage_fr = std::move(arg);
    return Init_Telemetric_voltage_fl(msg_);
  }

private:
  ::topics_services::msg::Telemetric msg_;
};

class Init_Telemetric_cur_pos_gripper
{
public:
  explicit Init_Telemetric_cur_pos_gripper(::topics_services::msg::Telemetric & msg)
  : msg_(msg)
  {}
  Init_Telemetric_voltage_fr cur_pos_gripper(::topics_services::msg::Telemetric::_cur_pos_gripper_type arg)
  {
    msg_.cur_pos_gripper = std::move(arg);
    return Init_Telemetric_voltage_fr(msg_);
  }

private:
  ::topics_services::msg::Telemetric msg_;
};

class Init_Telemetric_cur_pos_z_as
{
public:
  explicit Init_Telemetric_cur_pos_z_as(::topics_services::msg::Telemetric & msg)
  : msg_(msg)
  {}
  Init_Telemetric_cur_pos_gripper cur_pos_z_as(::topics_services::msg::Telemetric::_cur_pos_z_as_type arg)
  {
    msg_.cur_pos_z_as = std::move(arg);
    return Init_Telemetric_cur_pos_gripper(msg_);
  }

private:
  ::topics_services::msg::Telemetric msg_;
};

class Init_Telemetric_cur_pos_bl
{
public:
  explicit Init_Telemetric_cur_pos_bl(::topics_services::msg::Telemetric & msg)
  : msg_(msg)
  {}
  Init_Telemetric_cur_pos_z_as cur_pos_bl(::topics_services::msg::Telemetric::_cur_pos_bl_type arg)
  {
    msg_.cur_pos_bl = std::move(arg);
    return Init_Telemetric_cur_pos_z_as(msg_);
  }

private:
  ::topics_services::msg::Telemetric msg_;
};

class Init_Telemetric_cur_pos_br
{
public:
  explicit Init_Telemetric_cur_pos_br(::topics_services::msg::Telemetric & msg)
  : msg_(msg)
  {}
  Init_Telemetric_cur_pos_bl cur_pos_br(::topics_services::msg::Telemetric::_cur_pos_br_type arg)
  {
    msg_.cur_pos_br = std::move(arg);
    return Init_Telemetric_cur_pos_bl(msg_);
  }

private:
  ::topics_services::msg::Telemetric msg_;
};

class Init_Telemetric_cur_pos_fl
{
public:
  explicit Init_Telemetric_cur_pos_fl(::topics_services::msg::Telemetric & msg)
  : msg_(msg)
  {}
  Init_Telemetric_cur_pos_br cur_pos_fl(::topics_services::msg::Telemetric::_cur_pos_fl_type arg)
  {
    msg_.cur_pos_fl = std::move(arg);
    return Init_Telemetric_cur_pos_br(msg_);
  }

private:
  ::topics_services::msg::Telemetric msg_;
};

class Init_Telemetric_cur_pos_fr
{
public:
  explicit Init_Telemetric_cur_pos_fr(::topics_services::msg::Telemetric & msg)
  : msg_(msg)
  {}
  Init_Telemetric_cur_pos_fl cur_pos_fr(::topics_services::msg::Telemetric::_cur_pos_fr_type arg)
  {
    msg_.cur_pos_fr = std::move(arg);
    return Init_Telemetric_cur_pos_fl(msg_);
  }

private:
  ::topics_services::msg::Telemetric msg_;
};

class Init_Telemetric_temp_gripper
{
public:
  explicit Init_Telemetric_temp_gripper(::topics_services::msg::Telemetric & msg)
  : msg_(msg)
  {}
  Init_Telemetric_cur_pos_fr temp_gripper(::topics_services::msg::Telemetric::_temp_gripper_type arg)
  {
    msg_.temp_gripper = std::move(arg);
    return Init_Telemetric_cur_pos_fr(msg_);
  }

private:
  ::topics_services::msg::Telemetric msg_;
};

class Init_Telemetric_temp_z_as
{
public:
  explicit Init_Telemetric_temp_z_as(::topics_services::msg::Telemetric & msg)
  : msg_(msg)
  {}
  Init_Telemetric_temp_gripper temp_z_as(::topics_services::msg::Telemetric::_temp_z_as_type arg)
  {
    msg_.temp_z_as = std::move(arg);
    return Init_Telemetric_temp_gripper(msg_);
  }

private:
  ::topics_services::msg::Telemetric msg_;
};

class Init_Telemetric_temp_bl
{
public:
  explicit Init_Telemetric_temp_bl(::topics_services::msg::Telemetric & msg)
  : msg_(msg)
  {}
  Init_Telemetric_temp_z_as temp_bl(::topics_services::msg::Telemetric::_temp_bl_type arg)
  {
    msg_.temp_bl = std::move(arg);
    return Init_Telemetric_temp_z_as(msg_);
  }

private:
  ::topics_services::msg::Telemetric msg_;
};

class Init_Telemetric_temp_br
{
public:
  explicit Init_Telemetric_temp_br(::topics_services::msg::Telemetric & msg)
  : msg_(msg)
  {}
  Init_Telemetric_temp_bl temp_br(::topics_services::msg::Telemetric::_temp_br_type arg)
  {
    msg_.temp_br = std::move(arg);
    return Init_Telemetric_temp_bl(msg_);
  }

private:
  ::topics_services::msg::Telemetric msg_;
};

class Init_Telemetric_temp_fl
{
public:
  explicit Init_Telemetric_temp_fl(::topics_services::msg::Telemetric & msg)
  : msg_(msg)
  {}
  Init_Telemetric_temp_br temp_fl(::topics_services::msg::Telemetric::_temp_fl_type arg)
  {
    msg_.temp_fl = std::move(arg);
    return Init_Telemetric_temp_br(msg_);
  }

private:
  ::topics_services::msg::Telemetric msg_;
};

class Init_Telemetric_temp_fr
{
public:
  Init_Telemetric_temp_fr()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Telemetric_temp_fl temp_fr(::topics_services::msg::Telemetric::_temp_fr_type arg)
  {
    msg_.temp_fr = std::move(arg);
    return Init_Telemetric_temp_fl(msg_);
  }

private:
  ::topics_services::msg::Telemetric msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::topics_services::msg::Telemetric>()
{
  return topics_services::msg::builder::Init_Telemetric_temp_fr();
}

}  // namespace topics_services

#endif  // TOPICS_SERVICES__MSG__DETAIL__TELEMETRIC__BUILDER_HPP_
