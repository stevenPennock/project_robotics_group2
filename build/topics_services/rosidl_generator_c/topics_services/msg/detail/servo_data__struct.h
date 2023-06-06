// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from topics_services:msg/ServoData.idl
// generated code does not contain a copyright notice

#ifndef TOPICS_SERVICES__MSG__DETAIL__SERVO_DATA__STRUCT_H_
#define TOPICS_SERVICES__MSG__DETAIL__SERVO_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ServoData in the package topics_services.
typedef struct topics_services__msg__ServoData
{
  uint32_t max_torque1;
  uint32_t max_torque2;
  uint32_t max_torque3;
  uint32_t max_torque4;
  uint32_t max_torque5;
  uint32_t max_torque6;
  uint32_t set_pos1;
  uint32_t set_pos2;
  uint32_t set_pos3;
  uint32_t set_pos4;
  uint32_t set_pos5;
  uint32_t set_pos6;
  uint32_t set_speed1;
  uint32_t set_speed2;
  uint32_t set_speed3;
  uint32_t set_speed4;
  uint32_t set_speed5;
  uint32_t set_speed6;
} topics_services__msg__ServoData;

// Struct for a sequence of topics_services__msg__ServoData.
typedef struct topics_services__msg__ServoData__Sequence
{
  topics_services__msg__ServoData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} topics_services__msg__ServoData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TOPICS_SERVICES__MSG__DETAIL__SERVO_DATA__STRUCT_H_
