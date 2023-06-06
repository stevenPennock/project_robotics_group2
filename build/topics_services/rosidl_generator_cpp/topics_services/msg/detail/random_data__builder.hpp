// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from topics_services:msg/RandomData.idl
// generated code does not contain a copyright notice

#ifndef TOPICS_SERVICES__MSG__DETAIL__RANDOM_DATA__BUILDER_HPP_
#define TOPICS_SERVICES__MSG__DETAIL__RANDOM_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "topics_services/msg/detail/random_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace topics_services
{

namespace msg
{

namespace builder
{

class Init_RandomData_batteryvoltage
{
public:
  explicit Init_RandomData_batteryvoltage(::topics_services::msg::RandomData & msg)
  : msg_(msg)
  {}
  ::topics_services::msg::RandomData batteryvoltage(::topics_services::msg::RandomData::_batteryvoltage_type arg)
  {
    msg_.batteryvoltage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::topics_services::msg::RandomData msg_;
};

class Init_RandomData_weight
{
public:
  explicit Init_RandomData_weight(::topics_services::msg::RandomData & msg)
  : msg_(msg)
  {}
  Init_RandomData_batteryvoltage weight(::topics_services::msg::RandomData::_weight_type arg)
  {
    msg_.weight = std::move(arg);
    return Init_RandomData_batteryvoltage(msg_);
  }

private:
  ::topics_services::msg::RandomData msg_;
};

class Init_RandomData_lowband
{
public:
  explicit Init_RandomData_lowband(::topics_services::msg::RandomData & msg)
  : msg_(msg)
  {}
  Init_RandomData_weight lowband(::topics_services::msg::RandomData::_lowband_type arg)
  {
    msg_.lowband = std::move(arg);
    return Init_RandomData_weight(msg_);
  }

private:
  ::topics_services::msg::RandomData msg_;
};

class Init_RandomData_midband
{
public:
  explicit Init_RandomData_midband(::topics_services::msg::RandomData & msg)
  : msg_(msg)
  {}
  Init_RandomData_lowband midband(::topics_services::msg::RandomData::_midband_type arg)
  {
    msg_.midband = std::move(arg);
    return Init_RandomData_lowband(msg_);
  }

private:
  ::topics_services::msg::RandomData msg_;
};

class Init_RandomData_highband
{
public:
  explicit Init_RandomData_highband(::topics_services::msg::RandomData & msg)
  : msg_(msg)
  {}
  Init_RandomData_midband highband(::topics_services::msg::RandomData::_highband_type arg)
  {
    msg_.highband = std::move(arg);
    return Init_RandomData_midband(msg_);
  }

private:
  ::topics_services::msg::RandomData msg_;
};

class Init_RandomData_gs1
{
public:
  Init_RandomData_gs1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RandomData_highband gs1(::topics_services::msg::RandomData::_gs1_type arg)
  {
    msg_.gs1 = std::move(arg);
    return Init_RandomData_highband(msg_);
  }

private:
  ::topics_services::msg::RandomData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::topics_services::msg::RandomData>()
{
  return topics_services::msg::builder::Init_RandomData_gs1();
}

}  // namespace topics_services

#endif  // TOPICS_SERVICES__MSG__DETAIL__RANDOM_DATA__BUILDER_HPP_
