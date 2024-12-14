// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from qr_stuff:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef QR_STUFF__MSG__DETAIL__NUM__STRUCT_H_
#define QR_STUFF__MSG__DETAIL__NUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Num in the package qr_stuff.
typedef struct qr_stuff__msg__Num
{
  int64_t num;
} qr_stuff__msg__Num;

// Struct for a sequence of qr_stuff__msg__Num.
typedef struct qr_stuff__msg__Num__Sequence
{
  qr_stuff__msg__Num * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} qr_stuff__msg__Num__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // QR_STUFF__MSG__DETAIL__NUM__STRUCT_H_
