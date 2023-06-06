// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from topics_services:msg/ServoData.idl
// generated code does not contain a copyright notice

#ifndef TOPICS_SERVICES__MSG__DETAIL__SERVO_DATA__STRUCT_HPP_
#define TOPICS_SERVICES__MSG__DETAIL__SERVO_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__topics_services__msg__ServoData __attribute__((deprecated))
#else
# define DEPRECATED__topics_services__msg__ServoData __declspec(deprecated)
#endif

namespace topics_services
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ServoData_
{
  using Type = ServoData_<ContainerAllocator>;

  explicit ServoData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_torque1 = 0ul;
      this->max_torque2 = 0ul;
      this->max_torque3 = 0ul;
      this->max_torque4 = 0ul;
      this->max_torque5 = 0ul;
      this->max_torque6 = 0ul;
      this->set_pos1 = 0ul;
      this->set_pos2 = 0ul;
      this->set_pos3 = 0ul;
      this->set_pos4 = 0ul;
      this->set_pos5 = 0ul;
      this->set_pos6 = 0ul;
      this->set_speed1 = 0ul;
      this->set_speed2 = 0ul;
      this->set_speed3 = 0ul;
      this->set_speed4 = 0ul;
      this->set_speed5 = 0ul;
      this->set_speed6 = 0ul;
    }
  }

  explicit ServoData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_torque1 = 0ul;
      this->max_torque2 = 0ul;
      this->max_torque3 = 0ul;
      this->max_torque4 = 0ul;
      this->max_torque5 = 0ul;
      this->max_torque6 = 0ul;
      this->set_pos1 = 0ul;
      this->set_pos2 = 0ul;
      this->set_pos3 = 0ul;
      this->set_pos4 = 0ul;
      this->set_pos5 = 0ul;
      this->set_pos6 = 0ul;
      this->set_speed1 = 0ul;
      this->set_speed2 = 0ul;
      this->set_speed3 = 0ul;
      this->set_speed4 = 0ul;
      this->set_speed5 = 0ul;
      this->set_speed6 = 0ul;
    }
  }

  // field types and members
  using _max_torque1_type =
    uint32_t;
  _max_torque1_type max_torque1;
  using _max_torque2_type =
    uint32_t;
  _max_torque2_type max_torque2;
  using _max_torque3_type =
    uint32_t;
  _max_torque3_type max_torque3;
  using _max_torque4_type =
    uint32_t;
  _max_torque4_type max_torque4;
  using _max_torque5_type =
    uint32_t;
  _max_torque5_type max_torque5;
  using _max_torque6_type =
    uint32_t;
  _max_torque6_type max_torque6;
  using _set_pos1_type =
    uint32_t;
  _set_pos1_type set_pos1;
  using _set_pos2_type =
    uint32_t;
  _set_pos2_type set_pos2;
  using _set_pos3_type =
    uint32_t;
  _set_pos3_type set_pos3;
  using _set_pos4_type =
    uint32_t;
  _set_pos4_type set_pos4;
  using _set_pos5_type =
    uint32_t;
  _set_pos5_type set_pos5;
  using _set_pos6_type =
    uint32_t;
  _set_pos6_type set_pos6;
  using _set_speed1_type =
    uint32_t;
  _set_speed1_type set_speed1;
  using _set_speed2_type =
    uint32_t;
  _set_speed2_type set_speed2;
  using _set_speed3_type =
    uint32_t;
  _set_speed3_type set_speed3;
  using _set_speed4_type =
    uint32_t;
  _set_speed4_type set_speed4;
  using _set_speed5_type =
    uint32_t;
  _set_speed5_type set_speed5;
  using _set_speed6_type =
    uint32_t;
  _set_speed6_type set_speed6;

  // setters for named parameter idiom
  Type & set__max_torque1(
    const uint32_t & _arg)
  {
    this->max_torque1 = _arg;
    return *this;
  }
  Type & set__max_torque2(
    const uint32_t & _arg)
  {
    this->max_torque2 = _arg;
    return *this;
  }
  Type & set__max_torque3(
    const uint32_t & _arg)
  {
    this->max_torque3 = _arg;
    return *this;
  }
  Type & set__max_torque4(
    const uint32_t & _arg)
  {
    this->max_torque4 = _arg;
    return *this;
  }
  Type & set__max_torque5(
    const uint32_t & _arg)
  {
    this->max_torque5 = _arg;
    return *this;
  }
  Type & set__max_torque6(
    const uint32_t & _arg)
  {
    this->max_torque6 = _arg;
    return *this;
  }
  Type & set__set_pos1(
    const uint32_t & _arg)
  {
    this->set_pos1 = _arg;
    return *this;
  }
  Type & set__set_pos2(
    const uint32_t & _arg)
  {
    this->set_pos2 = _arg;
    return *this;
  }
  Type & set__set_pos3(
    const uint32_t & _arg)
  {
    this->set_pos3 = _arg;
    return *this;
  }
  Type & set__set_pos4(
    const uint32_t & _arg)
  {
    this->set_pos4 = _arg;
    return *this;
  }
  Type & set__set_pos5(
    const uint32_t & _arg)
  {
    this->set_pos5 = _arg;
    return *this;
  }
  Type & set__set_pos6(
    const uint32_t & _arg)
  {
    this->set_pos6 = _arg;
    return *this;
  }
  Type & set__set_speed1(
    const uint32_t & _arg)
  {
    this->set_speed1 = _arg;
    return *this;
  }
  Type & set__set_speed2(
    const uint32_t & _arg)
  {
    this->set_speed2 = _arg;
    return *this;
  }
  Type & set__set_speed3(
    const uint32_t & _arg)
  {
    this->set_speed3 = _arg;
    return *this;
  }
  Type & set__set_speed4(
    const uint32_t & _arg)
  {
    this->set_speed4 = _arg;
    return *this;
  }
  Type & set__set_speed5(
    const uint32_t & _arg)
  {
    this->set_speed5 = _arg;
    return *this;
  }
  Type & set__set_speed6(
    const uint32_t & _arg)
  {
    this->set_speed6 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    topics_services::msg::ServoData_<ContainerAllocator> *;
  using ConstRawPtr =
    const topics_services::msg::ServoData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<topics_services::msg::ServoData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<topics_services::msg::ServoData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      topics_services::msg::ServoData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<topics_services::msg::ServoData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      topics_services::msg::ServoData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<topics_services::msg::ServoData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<topics_services::msg::ServoData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<topics_services::msg::ServoData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__topics_services__msg__ServoData
    std::shared_ptr<topics_services::msg::ServoData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__topics_services__msg__ServoData
    std::shared_ptr<topics_services::msg::ServoData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServoData_ & other) const
  {
    if (this->max_torque1 != other.max_torque1) {
      return false;
    }
    if (this->max_torque2 != other.max_torque2) {
      return false;
    }
    if (this->max_torque3 != other.max_torque3) {
      return false;
    }
    if (this->max_torque4 != other.max_torque4) {
      return false;
    }
    if (this->max_torque5 != other.max_torque5) {
      return false;
    }
    if (this->max_torque6 != other.max_torque6) {
      return false;
    }
    if (this->set_pos1 != other.set_pos1) {
      return false;
    }
    if (this->set_pos2 != other.set_pos2) {
      return false;
    }
    if (this->set_pos3 != other.set_pos3) {
      return false;
    }
    if (this->set_pos4 != other.set_pos4) {
      return false;
    }
    if (this->set_pos5 != other.set_pos5) {
      return false;
    }
    if (this->set_pos6 != other.set_pos6) {
      return false;
    }
    if (this->set_speed1 != other.set_speed1) {
      return false;
    }
    if (this->set_speed2 != other.set_speed2) {
      return false;
    }
    if (this->set_speed3 != other.set_speed3) {
      return false;
    }
    if (this->set_speed4 != other.set_speed4) {
      return false;
    }
    if (this->set_speed5 != other.set_speed5) {
      return false;
    }
    if (this->set_speed6 != other.set_speed6) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServoData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServoData_

// alias to use template instance with default allocator
using ServoData =
  topics_services::msg::ServoData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace topics_services

#endif  // TOPICS_SERVICES__MSG__DETAIL__SERVO_DATA__STRUCT_HPP_
