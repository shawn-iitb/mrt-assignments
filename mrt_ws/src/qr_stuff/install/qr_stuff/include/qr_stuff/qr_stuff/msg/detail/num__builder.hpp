// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from qr_stuff:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef QR_STUFF__MSG__DETAIL__NUM__BUILDER_HPP_
#define QR_STUFF__MSG__DETAIL__NUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "qr_stuff/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace qr_stuff
{

namespace msg
{

namespace builder
{

class Init_Num_num
{
public:
  Init_Num_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::qr_stuff::msg::Num num(::qr_stuff::msg::Num::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::qr_stuff::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::qr_stuff::msg::Num>()
{
  return qr_stuff::msg::builder::Init_Num_num();
}

}  // namespace qr_stuff

#endif  // QR_STUFF__MSG__DETAIL__NUM__BUILDER_HPP_
