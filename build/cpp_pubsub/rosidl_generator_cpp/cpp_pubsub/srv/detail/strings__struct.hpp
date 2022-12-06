// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cpp_pubsub:srv/Strings.idl
// generated code does not contain a copyright notice

#ifndef CPP_PUBSUB__SRV__DETAIL__STRINGS__STRUCT_HPP_
#define CPP_PUBSUB__SRV__DETAIL__STRINGS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__cpp_pubsub__srv__Strings_Request __attribute__((deprecated))
#else
# define DEPRECATED__cpp_pubsub__srv__Strings_Request __declspec(deprecated)
#endif

namespace cpp_pubsub
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Strings_Request_
{
  using Type = Strings_Request_<ContainerAllocator>;

  explicit Strings_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = "";
    }
  }

  explicit Strings_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : a(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = "";
    }
  }

  // field types and members
  using _a_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _a_type a;

  // setters for named parameter idiom
  Type & set__a(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->a = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cpp_pubsub::srv::Strings_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const cpp_pubsub::srv::Strings_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cpp_pubsub::srv::Strings_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cpp_pubsub::srv::Strings_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cpp_pubsub::srv::Strings_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cpp_pubsub::srv::Strings_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cpp_pubsub::srv::Strings_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cpp_pubsub::srv::Strings_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cpp_pubsub::srv::Strings_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cpp_pubsub::srv::Strings_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cpp_pubsub__srv__Strings_Request
    std::shared_ptr<cpp_pubsub::srv::Strings_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cpp_pubsub__srv__Strings_Request
    std::shared_ptr<cpp_pubsub::srv::Strings_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Strings_Request_ & other) const
  {
    if (this->a != other.a) {
      return false;
    }
    return true;
  }
  bool operator!=(const Strings_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Strings_Request_

// alias to use template instance with default allocator
using Strings_Request =
  cpp_pubsub::srv::Strings_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cpp_pubsub


#ifndef _WIN32
# define DEPRECATED__cpp_pubsub__srv__Strings_Response __attribute__((deprecated))
#else
# define DEPRECATED__cpp_pubsub__srv__Strings_Response __declspec(deprecated)
#endif

namespace cpp_pubsub
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Strings_Response_
{
  using Type = Strings_Response_<ContainerAllocator>;

  explicit Strings_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->str = "";
    }
  }

  explicit Strings_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : str(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->str = "";
    }
  }

  // field types and members
  using _str_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _str_type str;

  // setters for named parameter idiom
  Type & set__str(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->str = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cpp_pubsub::srv::Strings_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const cpp_pubsub::srv::Strings_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cpp_pubsub::srv::Strings_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cpp_pubsub::srv::Strings_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cpp_pubsub::srv::Strings_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cpp_pubsub::srv::Strings_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cpp_pubsub::srv::Strings_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cpp_pubsub::srv::Strings_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cpp_pubsub::srv::Strings_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cpp_pubsub::srv::Strings_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cpp_pubsub__srv__Strings_Response
    std::shared_ptr<cpp_pubsub::srv::Strings_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cpp_pubsub__srv__Strings_Response
    std::shared_ptr<cpp_pubsub::srv::Strings_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Strings_Response_ & other) const
  {
    if (this->str != other.str) {
      return false;
    }
    return true;
  }
  bool operator!=(const Strings_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Strings_Response_

// alias to use template instance with default allocator
using Strings_Response =
  cpp_pubsub::srv::Strings_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cpp_pubsub

namespace cpp_pubsub
{

namespace srv
{

struct Strings
{
  using Request = cpp_pubsub::srv::Strings_Request;
  using Response = cpp_pubsub::srv::Strings_Response;
};

}  // namespace srv

}  // namespace cpp_pubsub

#endif  // CPP_PUBSUB__SRV__DETAIL__STRINGS__STRUCT_HPP_
