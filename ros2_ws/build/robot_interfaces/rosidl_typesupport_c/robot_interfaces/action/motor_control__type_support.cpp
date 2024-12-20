// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from robot_interfaces:action/MotorControl.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "robot_interfaces/action/detail/motor_control__struct.h"
#include "robot_interfaces/action/detail/motor_control__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MotorControl_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MotorControl_Goal_type_support_ids_t;

static const _MotorControl_Goal_type_support_ids_t _MotorControl_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MotorControl_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MotorControl_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MotorControl_Goal_type_support_symbol_names_t _MotorControl_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robot_interfaces, action, MotorControl_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, MotorControl_Goal)),
  }
};

typedef struct _MotorControl_Goal_type_support_data_t
{
  void * data[2];
} _MotorControl_Goal_type_support_data_t;

static _MotorControl_Goal_type_support_data_t _MotorControl_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MotorControl_Goal_message_typesupport_map = {
  2,
  "robot_interfaces",
  &_MotorControl_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_MotorControl_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_MotorControl_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MotorControl_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MotorControl_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace robot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, robot_interfaces, action, MotorControl_Goal)() {
  return &::robot_interfaces::action::rosidl_typesupport_c::MotorControl_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robot_interfaces/action/detail/motor_control__struct.h"
// already included above
// #include "robot_interfaces/action/detail/motor_control__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MotorControl_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MotorControl_Result_type_support_ids_t;

static const _MotorControl_Result_type_support_ids_t _MotorControl_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MotorControl_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MotorControl_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MotorControl_Result_type_support_symbol_names_t _MotorControl_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robot_interfaces, action, MotorControl_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, MotorControl_Result)),
  }
};

typedef struct _MotorControl_Result_type_support_data_t
{
  void * data[2];
} _MotorControl_Result_type_support_data_t;

static _MotorControl_Result_type_support_data_t _MotorControl_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MotorControl_Result_message_typesupport_map = {
  2,
  "robot_interfaces",
  &_MotorControl_Result_message_typesupport_ids.typesupport_identifier[0],
  &_MotorControl_Result_message_typesupport_symbol_names.symbol_name[0],
  &_MotorControl_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MotorControl_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MotorControl_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace robot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, robot_interfaces, action, MotorControl_Result)() {
  return &::robot_interfaces::action::rosidl_typesupport_c::MotorControl_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robot_interfaces/action/detail/motor_control__struct.h"
// already included above
// #include "robot_interfaces/action/detail/motor_control__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MotorControl_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MotorControl_Feedback_type_support_ids_t;

static const _MotorControl_Feedback_type_support_ids_t _MotorControl_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MotorControl_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MotorControl_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MotorControl_Feedback_type_support_symbol_names_t _MotorControl_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robot_interfaces, action, MotorControl_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, MotorControl_Feedback)),
  }
};

typedef struct _MotorControl_Feedback_type_support_data_t
{
  void * data[2];
} _MotorControl_Feedback_type_support_data_t;

static _MotorControl_Feedback_type_support_data_t _MotorControl_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MotorControl_Feedback_message_typesupport_map = {
  2,
  "robot_interfaces",
  &_MotorControl_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_MotorControl_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_MotorControl_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MotorControl_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MotorControl_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace robot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, robot_interfaces, action, MotorControl_Feedback)() {
  return &::robot_interfaces::action::rosidl_typesupport_c::MotorControl_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robot_interfaces/action/detail/motor_control__struct.h"
// already included above
// #include "robot_interfaces/action/detail/motor_control__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MotorControl_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MotorControl_SendGoal_Request_type_support_ids_t;

static const _MotorControl_SendGoal_Request_type_support_ids_t _MotorControl_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MotorControl_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MotorControl_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MotorControl_SendGoal_Request_type_support_symbol_names_t _MotorControl_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robot_interfaces, action, MotorControl_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, MotorControl_SendGoal_Request)),
  }
};

typedef struct _MotorControl_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _MotorControl_SendGoal_Request_type_support_data_t;

static _MotorControl_SendGoal_Request_type_support_data_t _MotorControl_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MotorControl_SendGoal_Request_message_typesupport_map = {
  2,
  "robot_interfaces",
  &_MotorControl_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MotorControl_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MotorControl_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MotorControl_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MotorControl_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace robot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, robot_interfaces, action, MotorControl_SendGoal_Request)() {
  return &::robot_interfaces::action::rosidl_typesupport_c::MotorControl_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robot_interfaces/action/detail/motor_control__struct.h"
// already included above
// #include "robot_interfaces/action/detail/motor_control__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MotorControl_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MotorControl_SendGoal_Response_type_support_ids_t;

static const _MotorControl_SendGoal_Response_type_support_ids_t _MotorControl_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MotorControl_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MotorControl_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MotorControl_SendGoal_Response_type_support_symbol_names_t _MotorControl_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robot_interfaces, action, MotorControl_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, MotorControl_SendGoal_Response)),
  }
};

typedef struct _MotorControl_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _MotorControl_SendGoal_Response_type_support_data_t;

static _MotorControl_SendGoal_Response_type_support_data_t _MotorControl_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MotorControl_SendGoal_Response_message_typesupport_map = {
  2,
  "robot_interfaces",
  &_MotorControl_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MotorControl_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MotorControl_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MotorControl_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MotorControl_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace robot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, robot_interfaces, action, MotorControl_SendGoal_Response)() {
  return &::robot_interfaces::action::rosidl_typesupport_c::MotorControl_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "robot_interfaces/action/detail/motor_control__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MotorControl_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MotorControl_SendGoal_type_support_ids_t;

static const _MotorControl_SendGoal_type_support_ids_t _MotorControl_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MotorControl_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MotorControl_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MotorControl_SendGoal_type_support_symbol_names_t _MotorControl_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robot_interfaces, action, MotorControl_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, MotorControl_SendGoal)),
  }
};

typedef struct _MotorControl_SendGoal_type_support_data_t
{
  void * data[2];
} _MotorControl_SendGoal_type_support_data_t;

static _MotorControl_SendGoal_type_support_data_t _MotorControl_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MotorControl_SendGoal_service_typesupport_map = {
  2,
  "robot_interfaces",
  &_MotorControl_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_MotorControl_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_MotorControl_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MotorControl_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MotorControl_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace robot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, robot_interfaces, action, MotorControl_SendGoal)() {
  return &::robot_interfaces::action::rosidl_typesupport_c::MotorControl_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robot_interfaces/action/detail/motor_control__struct.h"
// already included above
// #include "robot_interfaces/action/detail/motor_control__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MotorControl_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MotorControl_GetResult_Request_type_support_ids_t;

static const _MotorControl_GetResult_Request_type_support_ids_t _MotorControl_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MotorControl_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MotorControl_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MotorControl_GetResult_Request_type_support_symbol_names_t _MotorControl_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robot_interfaces, action, MotorControl_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, MotorControl_GetResult_Request)),
  }
};

typedef struct _MotorControl_GetResult_Request_type_support_data_t
{
  void * data[2];
} _MotorControl_GetResult_Request_type_support_data_t;

static _MotorControl_GetResult_Request_type_support_data_t _MotorControl_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MotorControl_GetResult_Request_message_typesupport_map = {
  2,
  "robot_interfaces",
  &_MotorControl_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MotorControl_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MotorControl_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MotorControl_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MotorControl_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace robot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, robot_interfaces, action, MotorControl_GetResult_Request)() {
  return &::robot_interfaces::action::rosidl_typesupport_c::MotorControl_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robot_interfaces/action/detail/motor_control__struct.h"
// already included above
// #include "robot_interfaces/action/detail/motor_control__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MotorControl_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MotorControl_GetResult_Response_type_support_ids_t;

static const _MotorControl_GetResult_Response_type_support_ids_t _MotorControl_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MotorControl_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MotorControl_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MotorControl_GetResult_Response_type_support_symbol_names_t _MotorControl_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robot_interfaces, action, MotorControl_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, MotorControl_GetResult_Response)),
  }
};

typedef struct _MotorControl_GetResult_Response_type_support_data_t
{
  void * data[2];
} _MotorControl_GetResult_Response_type_support_data_t;

static _MotorControl_GetResult_Response_type_support_data_t _MotorControl_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MotorControl_GetResult_Response_message_typesupport_map = {
  2,
  "robot_interfaces",
  &_MotorControl_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MotorControl_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MotorControl_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MotorControl_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MotorControl_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace robot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, robot_interfaces, action, MotorControl_GetResult_Response)() {
  return &::robot_interfaces::action::rosidl_typesupport_c::MotorControl_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "robot_interfaces/action/detail/motor_control__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MotorControl_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MotorControl_GetResult_type_support_ids_t;

static const _MotorControl_GetResult_type_support_ids_t _MotorControl_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MotorControl_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MotorControl_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MotorControl_GetResult_type_support_symbol_names_t _MotorControl_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robot_interfaces, action, MotorControl_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, MotorControl_GetResult)),
  }
};

typedef struct _MotorControl_GetResult_type_support_data_t
{
  void * data[2];
} _MotorControl_GetResult_type_support_data_t;

static _MotorControl_GetResult_type_support_data_t _MotorControl_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MotorControl_GetResult_service_typesupport_map = {
  2,
  "robot_interfaces",
  &_MotorControl_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_MotorControl_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_MotorControl_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MotorControl_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MotorControl_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace robot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, robot_interfaces, action, MotorControl_GetResult)() {
  return &::robot_interfaces::action::rosidl_typesupport_c::MotorControl_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robot_interfaces/action/detail/motor_control__struct.h"
// already included above
// #include "robot_interfaces/action/detail/motor_control__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MotorControl_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MotorControl_FeedbackMessage_type_support_ids_t;

static const _MotorControl_FeedbackMessage_type_support_ids_t _MotorControl_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MotorControl_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MotorControl_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MotorControl_FeedbackMessage_type_support_symbol_names_t _MotorControl_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robot_interfaces, action, MotorControl_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, MotorControl_FeedbackMessage)),
  }
};

typedef struct _MotorControl_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _MotorControl_FeedbackMessage_type_support_data_t;

static _MotorControl_FeedbackMessage_type_support_data_t _MotorControl_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MotorControl_FeedbackMessage_message_typesupport_map = {
  2,
  "robot_interfaces",
  &_MotorControl_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_MotorControl_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_MotorControl_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MotorControl_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MotorControl_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace robot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, robot_interfaces, action, MotorControl_FeedbackMessage)() {
  return &::robot_interfaces::action::rosidl_typesupport_c::MotorControl_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "robot_interfaces/action/motor_control.h"
// already included above
// #include "robot_interfaces/action/detail/motor_control__type_support.h"

static rosidl_action_type_support_t _robot_interfaces__action__MotorControl__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, robot_interfaces, action, MotorControl)()
{
  // Thread-safe by always writing the same values to the static struct
  _robot_interfaces__action__MotorControl__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, robot_interfaces, action, MotorControl_SendGoal)();
  _robot_interfaces__action__MotorControl__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, robot_interfaces, action, MotorControl_GetResult)();
  _robot_interfaces__action__MotorControl__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _robot_interfaces__action__MotorControl__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, robot_interfaces, action, MotorControl_FeedbackMessage)();
  _robot_interfaces__action__MotorControl__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_robot_interfaces__action__MotorControl__typesupport_c;
}

#ifdef __cplusplus
}
#endif
