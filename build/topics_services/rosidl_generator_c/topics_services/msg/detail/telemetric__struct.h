// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from topics_services:msg/Telemetric.idl
// generated code does not contain a copyright notice

#ifndef TOPICS_SERVICES__MSG__DETAIL__TELEMETRIC__STRUCT_H_
#define TOPICS_SERVICES__MSG__DETAIL__TELEMETRIC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Telemetric in the package topics_services.
typedef struct topics_services__msg__Telemetric
{
  float temp_fr;
  float temp_fl;
  float temp_br;
  float temp_bl;
  float temp_z_as;
  float temp_gripper;
  uint32_t cur_pos_fr;
  uint32_t cur_pos_fl;
  uint32_t cur_pos_br;
  uint32_t cur_pos_bl;
  uint32_t cur_pos_z_as;
  uint32_t cur_pos_gripper;
  uint32_t voltage_fr;
  uint32_t voltage_fl;
  uint32_t voltage_br;
  uint32_t voltage_bl;
  uint32_t voltage_z_as;
  uint32_t voltage_gripper;
  uint32_t load_fr;
  uint32_t load_fl;
  uint32_t load_br;
  uint32_t load_bl;
  uint32_t load_z_as;
  uint32_t load_gripper;
} topics_services__msg__Telemetric;

// Struct for a sequence of topics_services__msg__Telemetric.
typedef struct topics_services__msg__Telemetric__Sequence
{
  topics_services__msg__Telemetric * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} topics_services__msg__Telemetric__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TOPICS_SERVICES__MSG__DETAIL__TELEMETRIC__STRUCT_H_
