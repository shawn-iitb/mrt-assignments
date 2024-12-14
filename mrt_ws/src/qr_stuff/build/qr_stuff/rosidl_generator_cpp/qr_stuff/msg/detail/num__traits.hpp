// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from qr_stuff:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef QR_STUFF__MSG__DETAIL__NUM__TRAITS_HPP_
#define QR_STUFF__MSG__DETAIL__NUM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "qr_stuff/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace qr_stuff
{

namespace msg
{

inline void to_flow_style_yaml(
  const Num & msg,
  std::ostream & out)
{
  out << "{";
  // member: num
  {
    out << "num: ";
    rosidl_generator_traits::value_to_yaml(msg.num, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Num & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num: ";
    rosidl_generator_traits::value_to_yaml(msg.num, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Num & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace qr_stuff

namespace rosidl_generator_traits
{

[[deprecated("use qr_stuff::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const qr_stuff::msg::Num & msg,
  std::ostream & out, size_t indentation = 0)
{
  qr_stuff::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use qr_stuff::msg::to_yaml() instead")]]
inline std::string to_yaml(const qr_stuff::msg::Num & msg)
{
  return qr_stuff::msg::to_yaml(msg);
}

template<>
inline const char * data_type<qr_stuff::msg::Num>()
{
  return "qr_stuff::msg::Num";
}

template<>
inline const char * name<qr_stuff::msg::Num>()
{
  return "qr_stuff/msg/Num";
}

template<>
struct has_fixed_size<qr_stuff::msg::Num>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<qr_stuff::msg::Num>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<qr_stuff::msg::Num>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // QR_STUFF__MSG__DETAIL__NUM__TRAITS_HPP_
