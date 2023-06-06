// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from topics_services:msg/RandomData.idl
// generated code does not contain a copyright notice

#ifndef TOPICS_SERVICES__MSG__DETAIL__RANDOM_DATA__STRUCT_H_
#define TOPICS_SERVICES__MSG__DETAIL__RANDOM_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'gs1'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RandomData in the package topics_services.
typedef struct topics_services__msg__RandomData
{
  rosidl_runtime_c__String gs1;
  uint32_t highband;
  uint32_t midband;
  uint32_t lowband;
  uint32_t weight;
  uint32_t batteryvoltage;
} topics_services__msg__RandomData;

// Struct for a sequence of topics_services__msg__RandomData.
typedef struct topics_services__msg__RandomData__Sequence
{
  topics_services__msg__RandomData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} topics_services__msg__RandomData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TOPICS_SERVICES__MSG__DETAIL__RANDOM_DATA__STRUCT_H_
