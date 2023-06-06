// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from topics_services:msg/RandomData.idl
// generated code does not contain a copyright notice

#ifndef TOPICS_SERVICES__MSG__DETAIL__RANDOM_DATA__STRUCT_HPP_
#define TOPICS_SERVICES__MSG__DETAIL__RANDOM_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__topics_services__msg__RandomData __attribute__((deprecated))
#else
# define DEPRECATED__topics_services__msg__RandomData __declspec(deprecated)
#endif

namespace topics_services
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RandomData_
{
  using Type = RandomData_<ContainerAllocator>;

  explicit RandomData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gs1 = "";
      this->highband = 0ul;
      this->midband = 0ul;
      this->lowband = 0ul;
      this->weight = 0ul;
      this->batteryvoltage = 0ul;
    }
  }

  explicit RandomData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : gs1(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gs1 = "";
      this->highband = 0ul;
      this->midband = 0ul;
      this->lowband = 0ul;
      this->weight = 0ul;
      this->batteryvoltage = 0ul;
    }
  }

  // field types and members
  using _gs1_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _gs1_type gs1;
  using _highband_type =
    uint32_t;
  _highband_type highband;
  using _midband_type =
    uint32_t;
  _midband_type midband;
  using _lowband_type =
    uint32_t;
  _lowband_type lowband;
  using _weight_type =
    uint32_t;
  _weight_type weight;
  using _batteryvoltage_type =
    uint32_t;
  _batteryvoltage_type batteryvoltage;

  // setters for named parameter idiom
  Type & set__gs1(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->gs1 = _arg;
    return *this;
  }
  Type & set__highband(
    const uint32_t & _arg)
  {
    this->highband = _arg;
    return *this;
  }
  Type & set__midband(
    const uint32_t & _arg)
  {
    this->midband = _arg;
    return *this;
  }
  Type & set__lowband(
    const uint32_t & _arg)
  {
    this->lowband = _arg;
    return *this;
  }
  Type & set__weight(
    const uint32_t & _arg)
  {
    this->weight = _arg;
    return *this;
  }
  Type & set__batteryvoltage(
    const uint32_t & _arg)
  {
    this->batteryvoltage = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    topics_services::msg::RandomData_<ContainerAllocator> *;
  using ConstRawPtr =
    const topics_services::msg::RandomData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<topics_services::msg::RandomData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<topics_services::msg::RandomData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      topics_services::msg::RandomData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<topics_services::msg::RandomData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      topics_services::msg::RandomData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<topics_services::msg::RandomData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<topics_services::msg::RandomData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<topics_services::msg::RandomData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__topics_services__msg__RandomData
    std::shared_ptr<topics_services::msg::RandomData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__topics_services__msg__RandomData
    std::shared_ptr<topics_services::msg::RandomData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RandomData_ & other) const
  {
    if (this->gs1 != other.gs1) {
      return false;
    }
    if (this->highband != other.highband) {
      return false;
    }
    if (this->midband != other.midband) {
      return false;
    }
    if (this->lowband != other.lowband) {
      return false;
    }
    if (this->weight != other.weight) {
      return false;
    }
    if (this->batteryvoltage != other.batteryvoltage) {
      return false;
    }
    return true;
  }
  bool operator!=(const RandomData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RandomData_

// alias to use template instance with default allocator
using RandomData =
  topics_services::msg::RandomData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace topics_services

#endif  // TOPICS_SERVICES__MSG__DETAIL__RANDOM_DATA__STRUCT_HPP_
