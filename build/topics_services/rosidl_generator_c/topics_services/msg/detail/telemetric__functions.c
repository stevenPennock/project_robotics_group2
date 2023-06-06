// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from topics_services:msg/Telemetric.idl
// generated code does not contain a copyright notice
#include "topics_services/msg/detail/telemetric__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
topics_services__msg__Telemetric__init(topics_services__msg__Telemetric * msg)
{
  if (!msg) {
    return false;
  }
  // temp_fr
  // temp_fl
  // temp_br
  // temp_bl
  // temp_z_as
  // temp_gripper
  // cur_pos_fr
  // cur_pos_fl
  // cur_pos_br
  // cur_pos_bl
  // cur_pos_z_as
  // cur_pos_gripper
  // voltage_fr
  // voltage_fl
  // voltage_br
  // voltage_bl
  // voltage_z_as
  // voltage_gripper
  // load_fr
  // load_fl
  // load_br
  // load_bl
  // load_z_as
  // load_gripper
  return true;
}

void
topics_services__msg__Telemetric__fini(topics_services__msg__Telemetric * msg)
{
  if (!msg) {
    return;
  }
  // temp_fr
  // temp_fl
  // temp_br
  // temp_bl
  // temp_z_as
  // temp_gripper
  // cur_pos_fr
  // cur_pos_fl
  // cur_pos_br
  // cur_pos_bl
  // cur_pos_z_as
  // cur_pos_gripper
  // voltage_fr
  // voltage_fl
  // voltage_br
  // voltage_bl
  // voltage_z_as
  // voltage_gripper
  // load_fr
  // load_fl
  // load_br
  // load_bl
  // load_z_as
  // load_gripper
}

bool
topics_services__msg__Telemetric__are_equal(const topics_services__msg__Telemetric * lhs, const topics_services__msg__Telemetric * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // temp_fr
  if (lhs->temp_fr != rhs->temp_fr) {
    return false;
  }
  // temp_fl
  if (lhs->temp_fl != rhs->temp_fl) {
    return false;
  }
  // temp_br
  if (lhs->temp_br != rhs->temp_br) {
    return false;
  }
  // temp_bl
  if (lhs->temp_bl != rhs->temp_bl) {
    return false;
  }
  // temp_z_as
  if (lhs->temp_z_as != rhs->temp_z_as) {
    return false;
  }
  // temp_gripper
  if (lhs->temp_gripper != rhs->temp_gripper) {
    return false;
  }
  // cur_pos_fr
  if (lhs->cur_pos_fr != rhs->cur_pos_fr) {
    return false;
  }
  // cur_pos_fl
  if (lhs->cur_pos_fl != rhs->cur_pos_fl) {
    return false;
  }
  // cur_pos_br
  if (lhs->cur_pos_br != rhs->cur_pos_br) {
    return false;
  }
  // cur_pos_bl
  if (lhs->cur_pos_bl != rhs->cur_pos_bl) {
    return false;
  }
  // cur_pos_z_as
  if (lhs->cur_pos_z_as != rhs->cur_pos_z_as) {
    return false;
  }
  // cur_pos_gripper
  if (lhs->cur_pos_gripper != rhs->cur_pos_gripper) {
    return false;
  }
  // voltage_fr
  if (lhs->voltage_fr != rhs->voltage_fr) {
    return false;
  }
  // voltage_fl
  if (lhs->voltage_fl != rhs->voltage_fl) {
    return false;
  }
  // voltage_br
  if (lhs->voltage_br != rhs->voltage_br) {
    return false;
  }
  // voltage_bl
  if (lhs->voltage_bl != rhs->voltage_bl) {
    return false;
  }
  // voltage_z_as
  if (lhs->voltage_z_as != rhs->voltage_z_as) {
    return false;
  }
  // voltage_gripper
  if (lhs->voltage_gripper != rhs->voltage_gripper) {
    return false;
  }
  // load_fr
  if (lhs->load_fr != rhs->load_fr) {
    return false;
  }
  // load_fl
  if (lhs->load_fl != rhs->load_fl) {
    return false;
  }
  // load_br
  if (lhs->load_br != rhs->load_br) {
    return false;
  }
  // load_bl
  if (lhs->load_bl != rhs->load_bl) {
    return false;
  }
  // load_z_as
  if (lhs->load_z_as != rhs->load_z_as) {
    return false;
  }
  // load_gripper
  if (lhs->load_gripper != rhs->load_gripper) {
    return false;
  }
  return true;
}

bool
topics_services__msg__Telemetric__copy(
  const topics_services__msg__Telemetric * input,
  topics_services__msg__Telemetric * output)
{
  if (!input || !output) {
    return false;
  }
  // temp_fr
  output->temp_fr = input->temp_fr;
  // temp_fl
  output->temp_fl = input->temp_fl;
  // temp_br
  output->temp_br = input->temp_br;
  // temp_bl
  output->temp_bl = input->temp_bl;
  // temp_z_as
  output->temp_z_as = input->temp_z_as;
  // temp_gripper
  output->temp_gripper = input->temp_gripper;
  // cur_pos_fr
  output->cur_pos_fr = input->cur_pos_fr;
  // cur_pos_fl
  output->cur_pos_fl = input->cur_pos_fl;
  // cur_pos_br
  output->cur_pos_br = input->cur_pos_br;
  // cur_pos_bl
  output->cur_pos_bl = input->cur_pos_bl;
  // cur_pos_z_as
  output->cur_pos_z_as = input->cur_pos_z_as;
  // cur_pos_gripper
  output->cur_pos_gripper = input->cur_pos_gripper;
  // voltage_fr
  output->voltage_fr = input->voltage_fr;
  // voltage_fl
  output->voltage_fl = input->voltage_fl;
  // voltage_br
  output->voltage_br = input->voltage_br;
  // voltage_bl
  output->voltage_bl = input->voltage_bl;
  // voltage_z_as
  output->voltage_z_as = input->voltage_z_as;
  // voltage_gripper
  output->voltage_gripper = input->voltage_gripper;
  // load_fr
  output->load_fr = input->load_fr;
  // load_fl
  output->load_fl = input->load_fl;
  // load_br
  output->load_br = input->load_br;
  // load_bl
  output->load_bl = input->load_bl;
  // load_z_as
  output->load_z_as = input->load_z_as;
  // load_gripper
  output->load_gripper = input->load_gripper;
  return true;
}

topics_services__msg__Telemetric *
topics_services__msg__Telemetric__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  topics_services__msg__Telemetric * msg = (topics_services__msg__Telemetric *)allocator.allocate(sizeof(topics_services__msg__Telemetric), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(topics_services__msg__Telemetric));
  bool success = topics_services__msg__Telemetric__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
topics_services__msg__Telemetric__destroy(topics_services__msg__Telemetric * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    topics_services__msg__Telemetric__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
topics_services__msg__Telemetric__Sequence__init(topics_services__msg__Telemetric__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  topics_services__msg__Telemetric * data = NULL;

  if (size) {
    data = (topics_services__msg__Telemetric *)allocator.zero_allocate(size, sizeof(topics_services__msg__Telemetric), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = topics_services__msg__Telemetric__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        topics_services__msg__Telemetric__fini(&data[i - 1]);
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
topics_services__msg__Telemetric__Sequence__fini(topics_services__msg__Telemetric__Sequence * array)
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
      topics_services__msg__Telemetric__fini(&array->data[i]);
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

topics_services__msg__Telemetric__Sequence *
topics_services__msg__Telemetric__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  topics_services__msg__Telemetric__Sequence * array = (topics_services__msg__Telemetric__Sequence *)allocator.allocate(sizeof(topics_services__msg__Telemetric__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = topics_services__msg__Telemetric__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
topics_services__msg__Telemetric__Sequence__destroy(topics_services__msg__Telemetric__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    topics_services__msg__Telemetric__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
topics_services__msg__Telemetric__Sequence__are_equal(const topics_services__msg__Telemetric__Sequence * lhs, const topics_services__msg__Telemetric__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!topics_services__msg__Telemetric__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
topics_services__msg__Telemetric__Sequence__copy(
  const topics_services__msg__Telemetric__Sequence * input,
  topics_services__msg__Telemetric__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(topics_services__msg__Telemetric);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    topics_services__msg__Telemetric * data =
      (topics_services__msg__Telemetric *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!topics_services__msg__Telemetric__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          topics_services__msg__Telemetric__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!topics_services__msg__Telemetric__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
