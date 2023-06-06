// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from topics_services:msg/ServoData.idl
// generated code does not contain a copyright notice

#ifndef TOPICS_SERVICES__MSG__DETAIL__SERVO_DATA__BUILDER_HPP_
#define TOPICS_SERVICES__MSG__DETAIL__SERVO_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "topics_services/msg/detail/servo_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace topics_services
{

namespace msg
{

namespace builder
{

class Init_ServoData_set_speed6
{
public:
  explicit Init_ServoData_set_speed6(::topics_services::msg::ServoData & msg)
  : msg_(msg)
  {}
  ::topics_services::msg::ServoData set_speed6(::topics_services::msg::ServoData::_set_speed6_type arg)
  {
    msg_.set_speed6 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::topics_services::msg::ServoData msg_;
};

class Init_ServoData_set_speed5
{
public:
  explicit Init_ServoData_set_speed5(::topics_services::msg::ServoData & msg)
  : msg_(msg)
  {}
  Init_ServoData_set_speed6 set_speed5(::topics_services::msg::ServoData::_set_speed5_type arg)
  {
    msg_.set_speed5 = std::move(arg);
    return Init_ServoData_set_speed6(msg_);
  }

private:
  ::topics_services::msg::ServoData msg_;
};

class Init_ServoData_set_speed4
{
public:
  explicit Init_ServoData_set_speed4(::topics_services::msg::ServoData & msg)
  : msg_(msg)
  {}
  Init_ServoData_set_speed5 set_speed4(::topics_services::msg::ServoData::_set_speed4_type arg)
  {
    msg_.set_speed4 = std::move(arg);
    return Init_ServoData_set_speed5(msg_);
  }

private:
  ::topics_services::msg::ServoData msg_;
};

class Init_ServoData_set_speed3
{
public:
  explicit Init_ServoData_set_speed3(::topics_services::msg::ServoData & msg)
  : msg_(msg)
  {}
  Init_ServoData_set_speed4 set_speed3(::topics_services::msg::ServoData::_set_speed3_type arg)
  {
    msg_.set_speed3 = std::move(arg);
    return Init_ServoData_set_speed4(msg_);
  }

private:
  ::topics_services::msg::ServoData msg_;
};

class Init_ServoData_set_speed2
{
public:
  explicit Init_ServoData_set_speed2(::topics_services::msg::ServoData & msg)
  : msg_(msg)
  {}
  Init_ServoData_set_speed3 set_speed2(::topics_services::msg::ServoData::_set_speed2_type arg)
  {
    msg_.set_speed2 = std::move(arg);
    return Init_ServoData_set_speed3(msg_);
  }

private:
  ::topics_services::msg::ServoData msg_;
};

class Init_ServoData_set_speed1
{
public:
  explicit Init_ServoData_set_speed1(::topics_services::msg::ServoData & msg)
  : msg_(msg)
  {}
  Init_ServoData_set_speed2 set_speed1(::topics_services::msg::ServoData::_set_speed1_type arg)
  {
    msg_.set_speed1 = std::move(arg);
    return Init_ServoData_set_speed2(msg_);
  }

private:
  ::topics_services::msg::ServoData msg_;
};

class Init_ServoData_set_pos6
{
public:
  explicit Init_ServoData_set_pos6(::topics_services::msg::ServoData & msg)
  : msg_(msg)
  {}
  Init_ServoData_set_speed1 set_pos6(::topics_services::msg::ServoData::_set_pos6_type arg)
  {
    msg_.set_pos6 = std::move(arg);
    return Init_ServoData_set_speed1(msg_);
  }

private:
  ::topics_services::msg::ServoData msg_;
};

class Init_ServoData_set_pos5
{
public:
  explicit Init_ServoData_set_pos5(::topics_services::msg::ServoData & msg)
  : msg_(msg)
  {}
  Init_ServoData_set_pos6 set_pos5(::topics_services::msg::ServoData::_set_pos5_type arg)
  {
    msg_.set_pos5 = std::move(arg);
    return Init_ServoData_set_pos6(msg_);
  }

private:
  ::topics_services::msg::ServoData msg_;
};

class Init_ServoData_set_pos4
{
public:
  explicit Init_ServoData_set_pos4(::topics_services::msg::ServoData & msg)
  : msg_(msg)
  {}
  Init_ServoData_set_pos5 set_pos4(::topics_services::msg::ServoData::_set_pos4_type arg)
  {
    msg_.set_pos4 = std::move(arg);
    return Init_ServoData_set_pos5(msg_);
  }

private:
  ::topics_services::msg::ServoData msg_;
};

class Init_ServoData_set_pos3
{
public:
  explicit Init_ServoData_set_pos3(::topics_services::msg::ServoData & msg)
  : msg_(msg)
  {}
  Init_ServoData_set_pos4 set_pos3(::topics_services::msg::ServoData::_set_pos3_type arg)
  {
    msg_.set_pos3 = std::move(arg);
    return Init_ServoData_set_pos4(msg_);
  }

private:
  ::topics_services::msg::ServoData msg_;
};

class Init_ServoData_set_pos2
{
public:
  explicit Init_ServoData_set_pos2(::topics_services::msg::ServoData & msg)
  : msg_(msg)
  {}
  Init_ServoData_set_pos3 set_pos2(::topics_services::msg::ServoData::_set_pos2_type arg)
  {
    msg_.set_pos2 = std::move(arg);
    return Init_ServoData_set_pos3(msg_);
  }

private:
  ::topics_services::msg::ServoData msg_;
};

class Init_ServoData_set_pos1
{
public:
  explicit Init_ServoData_set_pos1(::topics_services::msg::ServoData & msg)
  : msg_(msg)
  {}
  Init_ServoData_set_pos2 set_pos1(::topics_services::msg::ServoData::_set_pos1_type arg)
  {
    msg_.set_pos1 = std::move(arg);
    return Init_ServoData_set_pos2(msg_);
  }

private:
  ::topics_services::msg::ServoData msg_;
};

class Init_ServoData_max_torque6
{
public:
  explicit Init_ServoData_max_torque6(::topics_services::msg::ServoData & msg)
  : msg_(msg)
  {}
  Init_ServoData_set_pos1 max_torque6(::topics_services::msg::ServoData::_max_torque6_type arg)
  {
    msg_.max_torque6 = std::move(arg);
    return Init_ServoData_set_pos1(msg_);
  }

private:
  ::topics_services::msg::ServoData msg_;
};

class Init_ServoData_max_torque5
{
public:
  explicit Init_ServoData_max_torque5(::topics_services::msg::ServoData & msg)
  : msg_(msg)
  {}
  Init_ServoData_max_torque6 max_torque5(::topics_services::msg::ServoData::_max_torque5_type arg)
  {
    msg_.max_torque5 = std::move(arg);
    return Init_ServoData_max_torque6(msg_);
  }

private:
  ::topics_services::msg::ServoData msg_;
};

class Init_ServoData_max_torque4
{
public:
  explicit Init_ServoData_max_torque4(::topics_services::msg::ServoData & msg)
  : msg_(msg)
  {}
  Init_ServoData_max_torque5 max_torque4(::topics_services::msg::ServoData::_max_torque4_type arg)
  {
    msg_.max_torque4 = std::move(arg);
    return Init_ServoData_max_torque5(msg_);
  }

private:
  ::topics_services::msg::ServoData msg_;
};

class Init_ServoData_max_torque3
{
public:
  explicit Init_ServoData_max_torque3(::topics_services::msg::ServoData & msg)
  : msg_(msg)
  {}
  Init_ServoData_max_torque4 max_torque3(::topics_services::msg::ServoData::_max_torque3_type arg)
  {
    msg_.max_torque3 = std::move(arg);
    return Init_ServoData_max_torque4(msg_);
  }

private:
  ::topics_services::msg::ServoData msg_;
};

class Init_ServoData_max_torque2
{
public:
  explicit Init_ServoData_max_torque2(::topics_services::msg::ServoData & msg)
  : msg_(msg)
  {}
  Init_ServoData_max_torque3 max_torque2(::topics_services::msg::ServoData::_max_torque2_type arg)
  {
    msg_.max_torque2 = std::move(arg);
    return Init_ServoData_max_torque3(msg_);
  }

private:
  ::topics_services::msg::ServoData msg_;
};

class Init_ServoData_max_torque1
{
public:
  Init_ServoData_max_torque1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ServoData_max_torque2 max_torque1(::topics_services::msg::ServoData::_max_torque1_type arg)
  {
    msg_.max_torque1 = std::move(arg);
    return Init_ServoData_max_torque2(msg_);
  }

private:
  ::topics_services::msg::ServoData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::topics_services::msg::ServoData>()
{
  return topics_services::msg::builder::Init_ServoData_max_torque1();
}

}  // namespace topics_services

#endif  // TOPICS_SERVICES__MSG__DETAIL__SERVO_DATA__BUILDER_HPP_
