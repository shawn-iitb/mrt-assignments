// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from qr_stuff:msg/Sphere.idl
// generated code does not contain a copyright notice

#ifndef QR_STUFF__MSG__DETAIL__SPHERE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define QR_STUFF__MSG__DETAIL__SPHERE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "qr_stuff/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "qr_stuff/msg/detail/sphere__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace qr_stuff
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_qr_stuff
cdr_serialize(
  const qr_stuff::msg::Sphere & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_qr_stuff
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  qr_stuff::msg::Sphere & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_qr_stuff
get_serialized_size(
  const qr_stuff::msg::Sphere & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_qr_stuff
max_serialized_size_Sphere(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace qr_stuff

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_qr_stuff
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, qr_stuff, msg, Sphere)();

#ifdef __cplusplus
}
#endif

#endif  // QR_STUFF__MSG__DETAIL__SPHERE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
