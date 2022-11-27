// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cpp_pubsub:srv/Strings.idl
// generated code does not contain a copyright notice

#ifndef CPP_PUBSUB__SRV__DETAIL__STRINGS__TRAITS_HPP_
#define CPP_PUBSUB__SRV__DETAIL__STRINGS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cpp_pubsub/srv/detail/strings__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace cpp_pubsub
{

namespace srv
{

inline void to_flow_style_yaml(
  const Strings_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Strings_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Strings_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace cpp_pubsub

namespace rosidl_generator_traits
{

[[deprecated("use cpp_pubsub::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cpp_pubsub::srv::Strings_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  cpp_pubsub::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cpp_pubsub::srv::to_yaml() instead")]]
inline std::string to_yaml(const cpp_pubsub::srv::Strings_Request & msg)
{
  return cpp_pubsub::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cpp_pubsub::srv::Strings_Request>()
{
  return "cpp_pubsub::srv::Strings_Request";
}

template<>
inline const char * name<cpp_pubsub::srv::Strings_Request>()
{
  return "cpp_pubsub/srv/Strings_Request";
}

template<>
struct has_fixed_size<cpp_pubsub::srv::Strings_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cpp_pubsub::srv::Strings_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cpp_pubsub::srv::Strings_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace cpp_pubsub
{

namespace srv
{

inline void to_flow_style_yaml(
  const Strings_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: str
  {
    out << "str: ";
    rosidl_generator_traits::value_to_yaml(msg.str, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Strings_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: str
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "str: ";
    rosidl_generator_traits::value_to_yaml(msg.str, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Strings_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace cpp_pubsub

namespace rosidl_generator_traits
{

[[deprecated("use cpp_pubsub::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cpp_pubsub::srv::Strings_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  cpp_pubsub::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cpp_pubsub::srv::to_yaml() instead")]]
inline std::string to_yaml(const cpp_pubsub::srv::Strings_Response & msg)
{
  return cpp_pubsub::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cpp_pubsub::srv::Strings_Response>()
{
  return "cpp_pubsub::srv::Strings_Response";
}

template<>
inline const char * name<cpp_pubsub::srv::Strings_Response>()
{
  return "cpp_pubsub/srv/Strings_Response";
}

template<>
struct has_fixed_size<cpp_pubsub::srv::Strings_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cpp_pubsub::srv::Strings_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cpp_pubsub::srv::Strings_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cpp_pubsub::srv::Strings>()
{
  return "cpp_pubsub::srv::Strings";
}

template<>
inline const char * name<cpp_pubsub::srv::Strings>()
{
  return "cpp_pubsub/srv/Strings";
}

template<>
struct has_fixed_size<cpp_pubsub::srv::Strings>
  : std::integral_constant<
    bool,
    has_fixed_size<cpp_pubsub::srv::Strings_Request>::value &&
    has_fixed_size<cpp_pubsub::srv::Strings_Response>::value
  >
{
};

template<>
struct has_bounded_size<cpp_pubsub::srv::Strings>
  : std::integral_constant<
    bool,
    has_bounded_size<cpp_pubsub::srv::Strings_Request>::value &&
    has_bounded_size<cpp_pubsub::srv::Strings_Response>::value
  >
{
};

template<>
struct is_service<cpp_pubsub::srv::Strings>
  : std::true_type
{
};

template<>
struct is_service_request<cpp_pubsub::srv::Strings_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cpp_pubsub::srv::Strings_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CPP_PUBSUB__SRV__DETAIL__STRINGS__TRAITS_HPP_
