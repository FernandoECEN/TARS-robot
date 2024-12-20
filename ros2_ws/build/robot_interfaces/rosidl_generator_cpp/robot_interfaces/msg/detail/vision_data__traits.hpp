// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_interfaces:msg/VisionData.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__VISION_DATA__TRAITS_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__VISION_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_interfaces/msg/detail/vision_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const VisionData & msg,
  std::ostream & out)
{
  out << "{";
  // member: ai_detect_array
  {
    if (msg.ai_detect_array.size() == 0) {
      out << "ai_detect_array: []";
    } else {
      out << "ai_detect_array: [";
      size_t pending_items = msg.ai_detect_array.size();
      for (auto item : msg.ai_detect_array) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: distance_array
  {
    if (msg.distance_array.size() == 0) {
      out << "distance_array: []";
    } else {
      out << "distance_array: [";
      size_t pending_items = msg.distance_array.size();
      for (auto item : msg.distance_array) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VisionData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ai_detect_array
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ai_detect_array.size() == 0) {
      out << "ai_detect_array: []\n";
    } else {
      out << "ai_detect_array:\n";
      for (auto item : msg.ai_detect_array) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: distance_array
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.distance_array.size() == 0) {
      out << "distance_array: []\n";
    } else {
      out << "distance_array:\n";
      for (auto item : msg.distance_array) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VisionData & msg, bool use_flow_style = false)
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

}  // namespace robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robot_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_interfaces::msg::VisionData & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const robot_interfaces::msg::VisionData & msg)
{
  return robot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robot_interfaces::msg::VisionData>()
{
  return "robot_interfaces::msg::VisionData";
}

template<>
inline const char * name<robot_interfaces::msg::VisionData>()
{
  return "robot_interfaces/msg/VisionData";
}

template<>
struct has_fixed_size<robot_interfaces::msg::VisionData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_interfaces::msg::VisionData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_interfaces::msg::VisionData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_INTERFACES__MSG__DETAIL__VISION_DATA__TRAITS_HPP_
