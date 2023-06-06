// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from topics_services:msg/RandomData.idl
// generated code does not contain a copyright notice
#include "topics_services/msg/detail/random_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `gs1`
#include "rosidl_runtime_c/string_functions.h"

bool
topics_services__msg__RandomData__init(topics_services__msg__RandomData * msg)
{
  if (!msg) {
    return false;
  }
  // gs1
  if (!rosidl_runtime_c__String__init(&msg->gs1)) {
    topics_services__msg__RandomData__fini(msg);
    return false;
  }
  // highband
  // midband
  // lowband
  // weight
  // batteryvoltage
  return true;
}

void
topics_services__msg__RandomData__fini(topics_services__msg__RandomData * msg)
{
  if (!msg) {
    return;
  }
  // gs1
  rosidl_runtime_c__String__fini(&msg->gs1);
  // highband
  // midband
  // lowband
  // weight
  // batteryvoltage
}

bool
topics_services__msg__RandomData__are_equal(const topics_services__msg__RandomData * lhs, const topics_services__msg__RandomData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // gs1
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->gs1), &(rhs->gs1)))
  {
    return false;
  }
  // highband
  if (lhs->highband != rhs->highband) {
    return false;
  }
  // midband
  if (lhs->midband != rhs->midband) {
    return false;
  }
  // lowband
  if (lhs->lowband != rhs->lowband) {
    return false;
  }
  // weight
  if (lhs->weight != rhs->weight) {
    return false;
  }
  // batteryvoltage
  if (lhs->batteryvoltage != rhs->batteryvoltage) {
    return false;
  }
  return true;
}

bool
topics_services__msg__RandomData__copy(
  const topics_services__msg__RandomData * input,
  topics_services__msg__RandomData * output)
{
  if (!input || !output) {
    return false;
  }
  // gs1
  if (!rosidl_runtime_c__String__copy(
      &(input->gs1), &(output->gs1)))
  {
    return false;
  }
  // highband
  output->highband = input->highband;
  // midband
  output->midband = input->midband;
  // lowband
  output->lowband = input->lowband;
  // weight
  output->weight = input->weight;
  // batteryvoltage
  output->batteryvoltage = input->batteryvoltage;
  return true;
}

topics_services__msg__RandomData *
topics_services__msg__RandomData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  topics_services__msg__RandomData * msg = (topics_services__msg__RandomData *)allocator.allocate(sizeof(topics_services__msg__RandomData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(topics_services__msg__RandomData));
  bool success = topics_services__msg__RandomData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
topics_services__msg__RandomData__destroy(topics_services__msg__RandomData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    topics_services__msg__RandomData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
topics_services__msg__RandomData__Sequence__init(topics_services__msg__RandomData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  topics_services__msg__RandomData * data = NULL;

  if (size) {
    data = (topics_services__msg__RandomData *)allocator.zero_allocate(size, sizeof(topics_services__msg__RandomData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = topics_services__msg__RandomData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        topics_services__msg__RandomData__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
topics_services__msg__RandomData__Sequence__fini(topics_services__msg__RandomData__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      topics_services__msg__RandomData__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

topics_services__msg__RandomData__Sequence *
topics_services__msg__RandomData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  topics_services__msg__RandomData__Sequence * array = (topics_services__msg__RandomData__Sequence *)allocator.allocate(sizeof(topics_services__msg__RandomData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = topics_services__msg__RandomData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
topics_services__msg__RandomData__Sequence__destroy(topics_services__msg__RandomData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    topics_services__msg__RandomData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
topics_services__msg__RandomData__Sequence__are_equal(const topics_services__msg__RandomData__Sequence * lhs, const topics_services__msg__RandomData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!topics_services__msg__RandomData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
topics_services__msg__RandomData__Sequence__copy(
  const topics_services__msg__RandomData__Sequence * input,
  topics_services__msg__RandomData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(topics_services__msg__RandomData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    topics_services__msg__RandomData * data =
      (topics_services__msg__RandomData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!topics_services__msg__RandomData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          topics_services__msg__RandomData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!topics_services__msg__RandomData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
