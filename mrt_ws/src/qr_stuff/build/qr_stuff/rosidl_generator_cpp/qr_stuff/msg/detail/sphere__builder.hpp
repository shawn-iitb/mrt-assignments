// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from qr_stuff:msg/Sphere.idl
// generated code does not contain a copyright notice

#ifndef QR_STUFF__MSG__DETAIL__SPHERE__BUILDER_HPP_
#define QR_STUFF__MSG__DETAIL__SPHERE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "qr_stuff/msg/detail/sphere__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace qr_stuff
{

namespace msg
{

namespace builder
{

class Init_Sphere_radius
{
public:
  explicit Init_Sphere_radius(::qr_stuff::msg::Sphere & msg)
  : msg_(msg)
  {}
  ::qr_stuff::msg::Sphere radius(::qr_stuff::msg::Sphere::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::qr_stuff::msg::Sphere msg_;
};

class Init_Sphere_center
{
public:
  Init_Sphere_center()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sphere_radius center(::qr_stuff::msg::Sphere::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_Sphere_radius(msg_);
  }

private:
  ::qr_stuff::msg::Sphere msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::qr_stuff::msg::Sphere>()
{
  return qr_stuff::msg::builder::Init_Sphere_center();
}

}  // namespace qr_stuff

#endif  // QR_STUFF__MSG__DETAIL__SPHERE__BUILDER_HPP_
