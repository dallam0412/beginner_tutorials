// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cpp_pubsub:srv/Strings.idl
// generated code does not contain a copyright notice
#include "cpp_pubsub/srv/detail/strings__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `a`
#include "rosidl_runtime_c/string_functions.h"

bool
cpp_pubsub__srv__Strings_Request__init(cpp_pubsub__srv__Strings_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  if (!rosidl_runtime_c__String__init(&msg->a)) {
    cpp_pubsub__srv__Strings_Request__fini(msg);
    return false;
  }
  return true;
}

void
cpp_pubsub__srv__Strings_Request__fini(cpp_pubsub__srv__Strings_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  rosidl_runtime_c__String__fini(&msg->a);
}

bool
cpp_pubsub__srv__Strings_Request__are_equal(const cpp_pubsub__srv__Strings_Request * lhs, const cpp_pubsub__srv__Strings_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // a
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->a), &(rhs->a)))
  {
    return false;
  }
  return true;
}

bool
cpp_pubsub__srv__Strings_Request__copy(
  const cpp_pubsub__srv__Strings_Request * input,
  cpp_pubsub__srv__Strings_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // a
  if (!rosidl_runtime_c__String__copy(
      &(input->a), &(output->a)))
  {
    return false;
  }
  return true;
}

cpp_pubsub__srv__Strings_Request *
cpp_pubsub__srv__Strings_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_pubsub__srv__Strings_Request * msg = (cpp_pubsub__srv__Strings_Request *)allocator.allocate(sizeof(cpp_pubsub__srv__Strings_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cpp_pubsub__srv__Strings_Request));
  bool success = cpp_pubsub__srv__Strings_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cpp_pubsub__srv__Strings_Request__destroy(cpp_pubsub__srv__Strings_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cpp_pubsub__srv__Strings_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cpp_pubsub__srv__Strings_Request__Sequence__init(cpp_pubsub__srv__Strings_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_pubsub__srv__Strings_Request * data = NULL;

  if (size) {
    data = (cpp_pubsub__srv__Strings_Request *)allocator.zero_allocate(size, sizeof(cpp_pubsub__srv__Strings_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cpp_pubsub__srv__Strings_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cpp_pubsub__srv__Strings_Request__fini(&data[i - 1]);
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
cpp_pubsub__srv__Strings_Request__Sequence__fini(cpp_pubsub__srv__Strings_Request__Sequence * array)
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
      cpp_pubsub__srv__Strings_Request__fini(&array->data[i]);
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

cpp_pubsub__srv__Strings_Request__Sequence *
cpp_pubsub__srv__Strings_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_pubsub__srv__Strings_Request__Sequence * array = (cpp_pubsub__srv__Strings_Request__Sequence *)allocator.allocate(sizeof(cpp_pubsub__srv__Strings_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cpp_pubsub__srv__Strings_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cpp_pubsub__srv__Strings_Request__Sequence__destroy(cpp_pubsub__srv__Strings_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cpp_pubsub__srv__Strings_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cpp_pubsub__srv__Strings_Request__Sequence__are_equal(const cpp_pubsub__srv__Strings_Request__Sequence * lhs, const cpp_pubsub__srv__Strings_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cpp_pubsub__srv__Strings_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cpp_pubsub__srv__Strings_Request__Sequence__copy(
  const cpp_pubsub__srv__Strings_Request__Sequence * input,
  cpp_pubsub__srv__Strings_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cpp_pubsub__srv__Strings_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cpp_pubsub__srv__Strings_Request * data =
      (cpp_pubsub__srv__Strings_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cpp_pubsub__srv__Strings_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cpp_pubsub__srv__Strings_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cpp_pubsub__srv__Strings_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `str`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
cpp_pubsub__srv__Strings_Response__init(cpp_pubsub__srv__Strings_Response * msg)
{
  if (!msg) {
    return false;
  }
  // str
  if (!rosidl_runtime_c__String__init(&msg->str)) {
    cpp_pubsub__srv__Strings_Response__fini(msg);
    return false;
  }
  return true;
}

void
cpp_pubsub__srv__Strings_Response__fini(cpp_pubsub__srv__Strings_Response * msg)
{
  if (!msg) {
    return;
  }
  // str
  rosidl_runtime_c__String__fini(&msg->str);
}

bool
cpp_pubsub__srv__Strings_Response__are_equal(const cpp_pubsub__srv__Strings_Response * lhs, const cpp_pubsub__srv__Strings_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // str
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->str), &(rhs->str)))
  {
    return false;
  }
  return true;
}

bool
cpp_pubsub__srv__Strings_Response__copy(
  const cpp_pubsub__srv__Strings_Response * input,
  cpp_pubsub__srv__Strings_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // str
  if (!rosidl_runtime_c__String__copy(
      &(input->str), &(output->str)))
  {
    return false;
  }
  return true;
}

cpp_pubsub__srv__Strings_Response *
cpp_pubsub__srv__Strings_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_pubsub__srv__Strings_Response * msg = (cpp_pubsub__srv__Strings_Response *)allocator.allocate(sizeof(cpp_pubsub__srv__Strings_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cpp_pubsub__srv__Strings_Response));
  bool success = cpp_pubsub__srv__Strings_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cpp_pubsub__srv__Strings_Response__destroy(cpp_pubsub__srv__Strings_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cpp_pubsub__srv__Strings_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cpp_pubsub__srv__Strings_Response__Sequence__init(cpp_pubsub__srv__Strings_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_pubsub__srv__Strings_Response * data = NULL;

  if (size) {
    data = (cpp_pubsub__srv__Strings_Response *)allocator.zero_allocate(size, sizeof(cpp_pubsub__srv__Strings_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cpp_pubsub__srv__Strings_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cpp_pubsub__srv__Strings_Response__fini(&data[i - 1]);
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
cpp_pubsub__srv__Strings_Response__Sequence__fini(cpp_pubsub__srv__Strings_Response__Sequence * array)
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
      cpp_pubsub__srv__Strings_Response__fini(&array->data[i]);
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

cpp_pubsub__srv__Strings_Response__Sequence *
cpp_pubsub__srv__Strings_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_pubsub__srv__Strings_Response__Sequence * array = (cpp_pubsub__srv__Strings_Response__Sequence *)allocator.allocate(sizeof(cpp_pubsub__srv__Strings_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cpp_pubsub__srv__Strings_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cpp_pubsub__srv__Strings_Response__Sequence__destroy(cpp_pubsub__srv__Strings_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cpp_pubsub__srv__Strings_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cpp_pubsub__srv__Strings_Response__Sequence__are_equal(const cpp_pubsub__srv__Strings_Response__Sequence * lhs, const cpp_pubsub__srv__Strings_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cpp_pubsub__srv__Strings_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cpp_pubsub__srv__Strings_Response__Sequence__copy(
  const cpp_pubsub__srv__Strings_Response__Sequence * input,
  cpp_pubsub__srv__Strings_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cpp_pubsub__srv__Strings_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cpp_pubsub__srv__Strings_Response * data =
      (cpp_pubsub__srv__Strings_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cpp_pubsub__srv__Strings_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cpp_pubsub__srv__Strings_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cpp_pubsub__srv__Strings_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
