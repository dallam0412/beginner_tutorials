// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cpp_pubsub:srv/Strings.idl
// generated code does not contain a copyright notice

#ifndef CPP_PUBSUB__SRV__DETAIL__STRINGS__BUILDER_HPP_
#define CPP_PUBSUB__SRV__DETAIL__STRINGS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cpp_pubsub/srv/detail/strings__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cpp_pubsub
{

namespace srv
{

namespace builder
{

class Init_Strings_Request_a
{
public:
  Init_Strings_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cpp_pubsub::srv::Strings_Request a(::cpp_pubsub::srv::Strings_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cpp_pubsub::srv::Strings_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cpp_pubsub::srv::Strings_Request>()
{
  return cpp_pubsub::srv::builder::Init_Strings_Request_a();
}

}  // namespace cpp_pubsub


namespace cpp_pubsub
{

namespace srv
{

namespace builder
{

class Init_Strings_Response_str
{
public:
  Init_Strings_Response_str()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cpp_pubsub::srv::Strings_Response str(::cpp_pubsub::srv::Strings_Response::_str_type arg)
  {
    msg_.str = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cpp_pubsub::srv::Strings_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cpp_pubsub::srv::Strings_Response>()
{
  return cpp_pubsub::srv::builder::Init_Strings_Response_str();
}

}  // namespace cpp_pubsub

#endif  // CPP_PUBSUB__SRV__DETAIL__STRINGS__BUILDER_HPP_
