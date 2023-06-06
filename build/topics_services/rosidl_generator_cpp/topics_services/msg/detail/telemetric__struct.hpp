// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from topics_services:msg/Telemetric.idl
// generated code does not contain a copyright notice

#ifndef TOPICS_SERVICES__MSG__DETAIL__TELEMETRIC__STRUCT_HPP_
#define TOPICS_SERVICES__MSG__DETAIL__TELEMETRIC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__topics_services__msg__Telemetric __attribute__((deprecated))
#else
# define DEPRECATED__topics_services__msg__Telemetric __declspec(deprecated)
#endif

namespace topics_services
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Telemetric_
{
  using Type = Telemetric_<ContainerAllocator>;

  explicit Telemetric_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temp_fr = 0.0f;
      this->temp_fl = 0.0f;
      this->temp_br = 0.0f;
      this->temp_bl = 0.0f;
      this->temp_z_as = 0.0f;
      this->temp_gripper = 0.0f;
      this->cur_pos_fr = 0ul;
      this->cur_pos_fl = 0ul;
      this->cur_pos_br = 0ul;
      this->cur_pos_bl = 0ul;
      this->cur_pos_z_as = 0ul;
      this->cur_pos_gripper = 0ul;
      this->voltage_fr = 0ul;
      this->voltage_fl = 0ul;
      this->voltage_br = 0ul;
      this->voltage_bl = 0ul;
      this->voltage_z_as = 0ul;
      this->voltage_gripper = 0ul;
      this->load_fr = 0ul;
      this->load_fl = 0ul;
      this->load_br = 0ul;
      this->load_bl = 0ul;
      this->load_z_as = 0ul;
      this->load_gripper = 0ul;
    }
  }

  explicit Telemetric_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temp_fr = 0.0f;
      this->temp_fl = 0.0f;
      this->temp_br = 0.0f;
      this->temp_bl = 0.0f;
      this->temp_z_as = 0.0f;
      this->temp_gripper = 0.0f;
      this->cur_pos_fr = 0ul;
      this->cur_pos_fl = 0ul;
      this->cur_pos_br = 0ul;
      this->cur_pos_bl = 0ul;
      this->cur_pos_z_as = 0ul;
      this->cur_pos_gripper = 0ul;
      this->voltage_fr = 0ul;
      this->voltage_fl = 0ul;
      this->voltage_br = 0ul;
      this->voltage_bl = 0ul;
      this->voltage_z_as = 0ul;
      this->voltage_gripper = 0ul;
      this->load_fr = 0ul;
      this->load_fl = 0ul;
      this->load_br = 0ul;
      this->load_bl = 0ul;
      this->load_z_as = 0ul;
      this->load_gripper = 0ul;
    }
  }

  // field types and members
  using _temp_fr_type =
    float;
  _temp_fr_type temp_fr;
  using _temp_fl_type =
    float;
  _temp_fl_type temp_fl;
  using _temp_br_type =
    float;
  _temp_br_type temp_br;
  using _temp_bl_type =
    float;
  _temp_bl_type temp_bl;
  using _temp_z_as_type =
    float;
  _temp_z_as_type temp_z_as;
  using _temp_gripper_type =
    float;
  _temp_gripper_type temp_gripper;
  using _cur_pos_fr_type =
    uint32_t;
  _cur_pos_fr_type cur_pos_fr;
  using _cur_pos_fl_type =
    uint32_t;
  _cur_pos_fl_type cur_pos_fl;
  using _cur_pos_br_type =
    uint32_t;
  _cur_pos_br_type cur_pos_br;
  using _cur_pos_bl_type =
    uint32_t;
  _cur_pos_bl_type cur_pos_bl;
  using _cur_pos_z_as_type =
    uint32_t;
  _cur_pos_z_as_type cur_pos_z_as;
  using _cur_pos_gripper_type =
    uint32_t;
  _cur_pos_gripper_type cur_pos_gripper;
  using _voltage_fr_type =
    uint32_t;
  _voltage_fr_type voltage_fr;
  using _voltage_fl_type =
    uint32_t;
  _voltage_fl_type voltage_fl;
  using _voltage_br_type =
    uint32_t;
  _voltage_br_type voltage_br;
  using _voltage_bl_type =
    uint32_t;
  _voltage_bl_type voltage_bl;
  using _voltage_z_as_type =
    uint32_t;
  _voltage_z_as_type voltage_z_as;
  using _voltage_gripper_type =
    uint32_t;
  _voltage_gripper_type voltage_gripper;
  using _load_fr_type =
    uint32_t;
  _load_fr_type load_fr;
  using _load_fl_type =
    uint32_t;
  _load_fl_type load_fl;
  using _load_br_type =
    uint32_t;
  _load_br_type load_br;
  using _load_bl_type =
    uint32_t;
  _load_bl_type load_bl;
  using _load_z_as_type =
    uint32_t;
  _load_z_as_type load_z_as;
  using _load_gripper_type =
    uint32_t;
  _load_gripper_type load_gripper;

  // setters for named parameter idiom
  Type & set__temp_fr(
    const float & _arg)
  {
    this->temp_fr = _arg;
    return *this;
  }
  Type & set__temp_fl(
    const float & _arg)
  {
    this->temp_fl = _arg;
    return *this;
  }
  Type & set__temp_br(
    const float & _arg)
  {
    this->temp_br = _arg;
    return *this;
  }
  Type & set__temp_bl(
    const float & _arg)
  {
    this->temp_bl = _arg;
    return *this;
  }
  Type & set__temp_z_as(
    const float & _arg)
  {
    this->temp_z_as = _arg;
    return *this;
  }
  Type & set__temp_gripper(
    const float & _arg)
  {
    this->temp_gripper = _arg;
    return *this;
  }
  Type & set__cur_pos_fr(
    const uint32_t & _arg)
  {
    this->cur_pos_fr = _arg;
    return *this;
  }
  Type & set__cur_pos_fl(
    const uint32_t & _arg)
  {
    this->cur_pos_fl = _arg;
    return *this;
  }
  Type & set__cur_pos_br(
    const uint32_t & _arg)
  {
    this->cur_pos_br = _arg;
    return *this;
  }
  Type & set__cur_pos_bl(
    const uint32_t & _arg)
  {
    this->cur_pos_bl = _arg;
    return *this;
  }
  Type & set__cur_pos_z_as(
    const uint32_t & _arg)
  {
    this->cur_pos_z_as = _arg;
    return *this;
  }
  Type & set__cur_pos_gripper(
    const uint32_t & _arg)
  {
    this->cur_pos_gripper = _arg;
    return *this;
  }
  Type & set__voltage_fr(
    const uint32_t & _arg)
  {
    this->voltage_fr = _arg;
    return *this;
  }
  Type & set__voltage_fl(
    const uint32_t & _arg)
  {
    this->voltage_fl = _arg;
    return *this;
  }
  Type & set__voltage_br(
    const uint32_t & _arg)
  {
    this->voltage_br = _arg;
    return *this;
  }
  Type & set__voltage_bl(
    const uint32_t & _arg)
  {
    this->voltage_bl = _arg;
    return *this;
  }
  Type & set__voltage_z_as(
    const uint32_t & _arg)
  {
    this->voltage_z_as = _arg;
    return *this;
  }
  Type & set__voltage_gripper(
    const uint32_t & _arg)
  {
    this->voltage_gripper = _arg;
    return *this;
  }
  Type & set__load_fr(
    const uint32_t & _arg)
  {
    this->load_fr = _arg;
    return *this;
  }
  Type & set__load_fl(
    const uint32_t & _arg)
  {
    this->load_fl = _arg;
    return *this;
  }
  Type & set__load_br(
    const uint32_t & _arg)
  {
    this->load_br = _arg;
    return *this;
  }
  Type & set__load_bl(
    const uint32_t & _arg)
  {
    this->load_bl = _arg;
    return *this;
  }
  Type & set__load_z_as(
    const uint32_t & _arg)
  {
    this->load_z_as = _arg;
    return *this;
  }
  Type & set__load_gripper(
    const uint32_t & _arg)
  {
    this->load_gripper = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    topics_services::msg::Telemetric_<ContainerAllocator> *;
  using ConstRawPtr =
    const topics_services::msg::Telemetric_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<topics_services::msg::Telemetric_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<topics_services::msg::Telemetric_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      topics_services::msg::Telemetric_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<topics_services::msg::Telemetric_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      topics_services::msg::Telemetric_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<topics_services::msg::Telemetric_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<topics_services::msg::Telemetric_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<topics_services::msg::Telemetric_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__topics_services__msg__Telemetric
    std::shared_ptr<topics_services::msg::Telemetric_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__topics_services__msg__Telemetric
    std::shared_ptr<topics_services::msg::Telemetric_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Telemetric_ & other) const
  {
    if (this->temp_fr != other.temp_fr) {
      return false;
    }
    if (this->temp_fl != other.temp_fl) {
      return false;
    }
    if (this->temp_br != other.temp_br) {
      return false;
    }
    if (this->temp_bl != other.temp_bl) {
      return false;
    }
    if (this->temp_z_as != other.temp_z_as) {
      return false;
    }
    if (this->temp_gripper != other.temp_gripper) {
      return false;
    }
    if (this->cur_pos_fr != other.cur_pos_fr) {
      return false;
    }
    if (this->cur_pos_fl != other.cur_pos_fl) {
      return false;
    }
    if (this->cur_pos_br != other.cur_pos_br) {
      return false;
    }
    if (this->cur_pos_bl != other.cur_pos_bl) {
      return false;
    }
    if (this->cur_pos_z_as != other.cur_pos_z_as) {
      return false;
    }
    if (this->cur_pos_gripper != other.cur_pos_gripper) {
      return false;
    }
    if (this->voltage_fr != other.voltage_fr) {
      return false;
    }
    if (this->voltage_fl != other.voltage_fl) {
      return false;
    }
    if (this->voltage_br != other.voltage_br) {
      return false;
    }
    if (this->voltage_bl != other.voltage_bl) {
      return false;
    }
    if (this->voltage_z_as != other.voltage_z_as) {
      return false;
    }
    if (this->voltage_gripper != other.voltage_gripper) {
      return false;
    }
    if (this->load_fr != other.load_fr) {
      return false;
    }
    if (this->load_fl != other.load_fl) {
      return false;
    }
    if (this->load_br != other.load_br) {
      return false;
    }
    if (this->load_bl != other.load_bl) {
      return false;
    }
    if (this->load_z_as != other.load_z_as) {
      return false;
    }
    if (this->load_gripper != other.load_gripper) {
      return false;
    }
    return true;
  }
  bool operator!=(const Telemetric_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Telemetric_

// alias to use template instance with default allocator
using Telemetric =
  topics_services::msg::Telemetric_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace topics_services

#endif  // TOPICS_SERVICES__MSG__DETAIL__TELEMETRIC__STRUCT_HPP_
