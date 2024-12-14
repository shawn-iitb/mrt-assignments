// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from qr_stuff:msg/Sphere.idl
// generated code does not contain a copyright notice

#ifndef QR_STUFF__MSG__DETAIL__SPHERE__FUNCTIONS_H_
#define QR_STUFF__MSG__DETAIL__SPHERE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "qr_stuff/msg/rosidl_generator_c__visibility_control.h"

#include "qr_stuff/msg/detail/sphere__struct.h"

/// Initialize msg/Sphere message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * qr_stuff__msg__Sphere
 * )) before or use
 * qr_stuff__msg__Sphere__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_qr_stuff
bool
qr_stuff__msg__Sphere__init(qr_stuff__msg__Sphere * msg);

/// Finalize msg/Sphere message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_qr_stuff
void
qr_stuff__msg__Sphere__fini(qr_stuff__msg__Sphere * msg);

/// Create msg/Sphere message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * qr_stuff__msg__Sphere__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_qr_stuff
qr_stuff__msg__Sphere *
qr_stuff__msg__Sphere__create();

/// Destroy msg/Sphere message.
/**
 * It calls
 * qr_stuff__msg__Sphere__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_qr_stuff
void
qr_stuff__msg__Sphere__destroy(qr_stuff__msg__Sphere * msg);

/// Check for msg/Sphere message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_qr_stuff
bool
qr_stuff__msg__Sphere__are_equal(const qr_stuff__msg__Sphere * lhs, const qr_stuff__msg__Sphere * rhs);

/// Copy a msg/Sphere message.
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
ROSIDL_GENERATOR_C_PUBLIC_qr_stuff
bool
qr_stuff__msg__Sphere__copy(
  const qr_stuff__msg__Sphere * input,
  qr_stuff__msg__Sphere * output);

/// Initialize array of msg/Sphere messages.
/**
 * It allocates the memory for the number of elements and calls
 * qr_stuff__msg__Sphere__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_qr_stuff
bool
qr_stuff__msg__Sphere__Sequence__init(qr_stuff__msg__Sphere__Sequence * array, size_t size);

/// Finalize array of msg/Sphere messages.
/**
 * It calls
 * qr_stuff__msg__Sphere__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_qr_stuff
void
qr_stuff__msg__Sphere__Sequence__fini(qr_stuff__msg__Sphere__Sequence * array);

/// Create array of msg/Sphere messages.
/**
 * It allocates the memory for the array and calls
 * qr_stuff__msg__Sphere__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_qr_stuff
qr_stuff__msg__Sphere__Sequence *
qr_stuff__msg__Sphere__Sequence__create(size_t size);

/// Destroy array of msg/Sphere messages.
/**
 * It calls
 * qr_stuff__msg__Sphere__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_qr_stuff
void
qr_stuff__msg__Sphere__Sequence__destroy(qr_stuff__msg__Sphere__Sequence * array);

/// Check for msg/Sphere message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_qr_stuff
bool
qr_stuff__msg__Sphere__Sequence__are_equal(const qr_stuff__msg__Sphere__Sequence * lhs, const qr_stuff__msg__Sphere__Sequence * rhs);

/// Copy an array of msg/Sphere messages.
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
ROSIDL_GENERATOR_C_PUBLIC_qr_stuff
bool
qr_stuff__msg__Sphere__Sequence__copy(
  const qr_stuff__msg__Sphere__Sequence * input,
  qr_stuff__msg__Sphere__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // QR_STUFF__MSG__DETAIL__SPHERE__FUNCTIONS_H_
