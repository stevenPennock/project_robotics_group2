// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from topics_services:msg/Telemetric.idl
// generated code does not contain a copyright notice

#ifndef TOPICS_SERVICES__MSG__DETAIL__TELEMETRIC__FUNCTIONS_H_
#define TOPICS_SERVICES__MSG__DETAIL__TELEMETRIC__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "topics_services/msg/rosidl_generator_c__visibility_control.h"

#include "topics_services/msg/detail/telemetric__struct.h"

/// Initialize msg/Telemetric message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * topics_services__msg__Telemetric
 * )) before or use
 * topics_services__msg__Telemetric__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_topics_services
bool
topics_services__msg__Telemetric__init(topics_services__msg__Telemetric * msg);

/// Finalize msg/Telemetric message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_topics_services
void
topics_services__msg__Telemetric__fini(topics_services__msg__Telemetric * msg);

/// Create msg/Telemetric message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * topics_services__msg__Telemetric__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_topics_services
topics_services__msg__Telemetric *
topics_services__msg__Telemetric__create();

/// Destroy msg/Telemetric message.
/**
 * It calls
 * topics_services__msg__Telemetric__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_topics_services
void
topics_services__msg__Telemetric__destroy(topics_services__msg__Telemetric * msg);

/// Check for msg/Telemetric message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_topics_services
bool
topics_services__msg__Telemetric__are_equal(const topics_services__msg__Telemetric * lhs, const topics_services__msg__Telemetric * rhs);

/// Copy a msg/Telemetric message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_topics_services
bool
topics_services__msg__Telemetric__copy(
  const topics_services__msg__Telemetric * input,
  topics_services__msg__Telemetric * output);

/// Initialize array of msg/Telemetric messages.
/**
 * It allocates the memory for the number of elements and calls
 * topics_services__msg__Telemetric__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_topics_services
bool
topics_services__msg__Telemetric__Sequence__init(topics_services__msg__Telemetric__Sequence * array, size_t size);

/// Finalize array of msg/Telemetric messages.
/**
 * It calls
 * topics_services__msg__Telemetric__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_topics_services
void
topics_services__msg__Telemetric__Sequence__fini(topics_services__msg__Telemetric__Sequence * array);

/// Create array of msg/Telemetric messages.
/**
 * It allocates the memory for the array and calls
 * topics_services__msg__Telemetric__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_topics_services
topics_services__msg__Telemetric__Sequence *
topics_services__msg__Telemetric__Sequence__create(size_t size);

/// Destroy array of msg/Telemetric messages.
/**
 * It calls
 * topics_services__msg__Telemetric__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_topics_services
void
topics_services__msg__Telemetric__Sequence__destroy(topics_services__msg__Telemetric__Sequence * array);

/// Check for msg/Telemetric message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_topics_services
bool
topics_services__msg__Telemetric__Sequence__are_equal(const topics_services__msg__Telemetric__Sequence * lhs, const topics_services__msg__Telemetric__Sequence * rhs);

/// Copy an array of msg/Telemetric messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_topics_services
bool
topics_services__msg__Telemetric__Sequence__copy(
  const topics_services__msg__Telemetric__Sequence * input,
  topics_services__msg__Telemetric__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TOPICS_SERVICES__MSG__DETAIL__TELEMETRIC__FUNCTIONS_H_
