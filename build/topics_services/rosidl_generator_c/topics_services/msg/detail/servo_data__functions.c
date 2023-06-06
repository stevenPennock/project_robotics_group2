// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from topics_services:msg/ServoData.idl
// generated code does not contain a copyright notice
#include "topics_services/msg/detail/servo_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
topics_services__msg__ServoData__init(topics_services__msg__ServoData * msg)
{
  if (!msg) {
    return false;
  }
  // max_torque1
  // max_torque2
  // max_torque3
  // max_torque4
  // max_torque5
  // max_torque6
  // set_pos1
  // set_pos2
  // set_pos3
  // set_pos4
  // set_pos5
  // set_pos6
  // set_speed1
  // set_speed2
  // set_speed3
  // set_speed4
  // set_speed5
  // set_speed6
  return true;
}

void
topics_services__msg__ServoData__fini(topics_services__msg__ServoData * msg)
{
  if (!msg) {
    return;
  }
  // max_torque1
  // max_torque2
  // max_torque3
  // max_torque4
  // max_torque5
  // max_torque6
  // set_pos1
  // set_pos2
  // set_pos3
  // set_pos4
  // set_pos5
  // set_pos6
  // set_speed1
  // set_speed2
  // set_speed3
  // set_speed4
  // set_speed5
  // set_speed6
}

bool
topics_services__msg__ServoData__are_equal(const topics_services__msg__ServoData * lhs, const topics_services__msg__ServoData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // max_torque1
  if (lhs->max_torque1 != rhs->max_torque1) {
    return false;
  }
  // max_torque2
  if (lhs->max_torque2 != rhs->max_torque2) {
    return false;
  }
  // max_torque3
  if (lhs->max_torque3 != rhs->max_torque3) {
    return false;
  }
  // max_torque4
  if (lhs->max_torque4 != rhs->max_torque4) {
    return false;
  }
  // max_torque5
  if (lhs->max_torque5 != rhs->max_torque5) {
    return false;
  }
  // max_torque6
  if (lhs->max_torque6 != rhs->max_torque6) {
    return false;
  }
  // set_pos1
  if (lhs->set_pos1 != rhs->set_pos1) {
    return false;
  }
  // set_pos2
  if (lhs->set_pos2 != rhs->set_pos2) {
    return false;
  }
  // set_pos3
  if (lhs->set_pos3 != rhs->set_pos3) {
    return false;
  }
  // set_pos4
  if (lhs->set_pos4 != rhs->set_pos4) {
    return false;
  }
  // set_pos5
  if (lhs->set_pos5 != rhs->set_pos5) {
    return false;
  }
  // set_pos6
  if (lhs->set_pos6 != rhs->set_pos6) {
    return false;
  }
  // set_speed1
  if (lhs->set_speed1 != rhs->set_speed1) {
    return false;
  }
  // set_speed2
  if (lhs->set_speed2 != rhs->set_speed2) {
    return false;
  }
  // set_speed3
  if (lhs->set_speed3 != rhs->set_speed3) {
    return false;
  }
  // set_speed4
  if (lhs->set_speed4 != rhs->set_speed4) {
    return false;
  }
  // set_speed5
  if (lhs->set_speed5 != rhs->set_speed5) {
    return false;
  }
  // set_speed6
  if (lhs->set_speed6 != rhs->set_speed6) {
    return false;
  }
  return true;
}

bool
topics_services__msg__ServoData__copy(
  const topics_services__msg__ServoData * input,
  topics_services__msg__ServoData * output)
{
  if (!input || !output) {
    return false;
  }
  // max_torque1
  output->max_torque1 = input->max_torque1;
  // max_torque2
  output->max_torque2 = input->max_torque2;
  // max_torque3
  output->max_torque3 = input->max_torque3;
  // max_torque4
  output->max_torque4 = input->max_torque4;
  // max_torque5
  output->max_torque5 = input->max_torque5;
  // max_torque6
  output->max_torque6 = input->max_torque6;
  // set_pos1
  output->set_pos1 = input->set_pos1;
  // set_pos2
  output->set_pos2 = input->set_pos2;
  // set_pos3
  output->set_pos3 = input->set_pos3;
  // set_pos4
  output->set_pos4 = input->set_pos4;
  // set_pos5
  output->set_pos5 = input->set_pos5;
  // set_pos6
  output->set_pos6 = input->set_pos6;
  // set_speed1
  output->set_speed1 = input->set_speed1;
  // set_speed2
  output->set_speed2 = input->set_speed2;
  // set_speed3
  output->set_speed3 = input->set_speed3;
  // set_speed4
  output->set_speed4 = input->set_speed4;
  // set_speed5
  output->set_speed5 = input->set_speed5;
  // set_speed6
  output->set_speed6 = input->set_speed6;
  return true;
}

topics_services__msg__ServoData *
topics_services__msg__ServoData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  topics_services__msg__ServoData * msg = (topics_services__msg__ServoData *)allocator.allocate(sizeof(topics_services__msg__ServoData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(topics_services__msg__ServoData));
  bool success = topics_services__msg__ServoData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
topics_services__msg__ServoData__destroy(topics_services__msg__ServoData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    topics_services__msg__ServoData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
topics_services__msg__ServoData__Sequence__init(topics_services__msg__ServoData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  topics_services__msg__ServoData * data = NULL;

  if (size) {
    data = (topics_services__msg__ServoData *)allocator.zero_allocate(size, sizeof(topics_services__msg__ServoData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = topics_services__msg__ServoData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        topics_services__msg__ServoData__fini(&data[i - 1]);
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
topics_services__msg__ServoData__Sequence__fini(topics_services__msg__ServoData__Sequence * array)
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
      topics_services__msg__ServoData__fini(&array->data[i]);
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

topics_services__msg__ServoData__Sequence *
topics_services__msg__ServoData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  topics_services__msg__ServoData__Sequence * array = (topics_services__msg__ServoData__Sequence *)allocator.allocate(sizeof(topics_services__msg__ServoData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = topics_services__msg__ServoData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
topics_services__msg__ServoData__Sequence__destroy(topics_services__msg__ServoData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    topics_services__msg__ServoData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
topics_services__msg__ServoData__Sequence__are_equal(const topics_services__msg__ServoData__Sequence * lhs, const topics_services__msg__ServoData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!topics_services__msg__ServoData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
topics_services__msg__ServoData__Sequence__copy(
  const topics_services__msg__ServoData__Sequence * input,
  topics_services__msg__ServoData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(topics_services__msg__ServoData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    topics_services__msg__ServoData * data =
      (topics_services__msg__ServoData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!topics_services__msg__ServoData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          topics_services__msg__ServoData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!topics_services__msg__ServoData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
