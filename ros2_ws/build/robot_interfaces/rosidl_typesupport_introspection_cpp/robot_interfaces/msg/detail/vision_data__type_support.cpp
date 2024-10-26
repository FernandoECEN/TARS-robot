// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robot_interfaces:msg/VisionData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robot_interfaces/msg/detail/vision_data__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robot_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void VisionData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robot_interfaces::msg::VisionData(_init);
}

void VisionData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robot_interfaces::msg::VisionData *>(message_memory);
  typed_message->~VisionData();
}

size_t size_function__VisionData__ai_detect_array(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__VisionData__ai_detect_array(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__VisionData__ai_detect_array(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__VisionData__ai_detect_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__VisionData__ai_detect_array(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__VisionData__ai_detect_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__VisionData__ai_detect_array(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__VisionData__ai_detect_array(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__VisionData__distance_array(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__VisionData__distance_array(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__VisionData__distance_array(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__VisionData__distance_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__VisionData__distance_array(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__VisionData__distance_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__VisionData__distance_array(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__VisionData__distance_array(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember VisionData_message_member_array[2] = {
  {
    "ai_detect_array",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces::msg::VisionData, ai_detect_array),  // bytes offset in struct
    nullptr,  // default value
    size_function__VisionData__ai_detect_array,  // size() function pointer
    get_const_function__VisionData__ai_detect_array,  // get_const(index) function pointer
    get_function__VisionData__ai_detect_array,  // get(index) function pointer
    fetch_function__VisionData__ai_detect_array,  // fetch(index, &value) function pointer
    assign_function__VisionData__ai_detect_array,  // assign(index, value) function pointer
    resize_function__VisionData__ai_detect_array  // resize(index) function pointer
  },
  {
    "distance_array",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces::msg::VisionData, distance_array),  // bytes offset in struct
    nullptr,  // default value
    size_function__VisionData__distance_array,  // size() function pointer
    get_const_function__VisionData__distance_array,  // get_const(index) function pointer
    get_function__VisionData__distance_array,  // get(index) function pointer
    fetch_function__VisionData__distance_array,  // fetch(index, &value) function pointer
    assign_function__VisionData__distance_array,  // assign(index, value) function pointer
    resize_function__VisionData__distance_array  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers VisionData_message_members = {
  "robot_interfaces::msg",  // message namespace
  "VisionData",  // message name
  2,  // number of fields
  sizeof(robot_interfaces::msg::VisionData),
  VisionData_message_member_array,  // message members
  VisionData_init_function,  // function to initialize message memory (memory has to be allocated)
  VisionData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t VisionData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &VisionData_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace robot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_interfaces::msg::VisionData>()
{
  return &::robot_interfaces::msg::rosidl_typesupport_introspection_cpp::VisionData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_interfaces, msg, VisionData)() {
  return &::robot_interfaces::msg::rosidl_typesupport_introspection_cpp::VisionData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
