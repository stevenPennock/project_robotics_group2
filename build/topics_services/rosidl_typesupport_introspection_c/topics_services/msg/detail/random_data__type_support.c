// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from topics_services:msg/RandomData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "topics_services/msg/detail/random_data__rosidl_typesupport_introspection_c.h"
#include "topics_services/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "topics_services/msg/detail/random_data__functions.h"
#include "topics_services/msg/detail/random_data__struct.h"


// Include directives for member types
// Member `gs1`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void topics_services__msg__RandomData__rosidl_typesupport_introspection_c__RandomData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  topics_services__msg__RandomData__init(message_memory);
}

void topics_services__msg__RandomData__rosidl_typesupport_introspection_c__RandomData_fini_function(void * message_memory)
{
  topics_services__msg__RandomData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember topics_services__msg__RandomData__rosidl_typesupport_introspection_c__RandomData_message_member_array[6] = {
  {
    "gs1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(topics_services__msg__RandomData, gs1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "highband",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(topics_services__msg__RandomData, highband),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "midband",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(topics_services__msg__RandomData, midband),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lowband",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(topics_services__msg__RandomData, lowband),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "weight",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(topics_services__msg__RandomData, weight),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "batteryvoltage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(topics_services__msg__RandomData, batteryvoltage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers topics_services__msg__RandomData__rosidl_typesupport_introspection_c__RandomData_message_members = {
  "topics_services__msg",  // message namespace
  "RandomData",  // message name
  6,  // number of fields
  sizeof(topics_services__msg__RandomData),
  topics_services__msg__RandomData__rosidl_typesupport_introspection_c__RandomData_message_member_array,  // message members
  topics_services__msg__RandomData__rosidl_typesupport_introspection_c__RandomData_init_function,  // function to initialize message memory (memory has to be allocated)
  topics_services__msg__RandomData__rosidl_typesupport_introspection_c__RandomData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t topics_services__msg__RandomData__rosidl_typesupport_introspection_c__RandomData_message_type_support_handle = {
  0,
  &topics_services__msg__RandomData__rosidl_typesupport_introspection_c__RandomData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_topics_services
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, topics_services, msg, RandomData)() {
  if (!topics_services__msg__RandomData__rosidl_typesupport_introspection_c__RandomData_message_type_support_handle.typesupport_identifier) {
    topics_services__msg__RandomData__rosidl_typesupport_introspection_c__RandomData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &topics_services__msg__RandomData__rosidl_typesupport_introspection_c__RandomData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
