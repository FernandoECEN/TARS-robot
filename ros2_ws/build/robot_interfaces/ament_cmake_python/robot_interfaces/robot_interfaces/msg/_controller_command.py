# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robot_interfaces:msg/ControllerCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ControllerCommand(type):
    """Metaclass of message 'ControllerCommand'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robot_interfaces.msg.ControllerCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__controller_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__controller_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__controller_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__controller_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__controller_command

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ControllerCommand(metaclass=Metaclass_ControllerCommand):
    """Message class 'ControllerCommand'."""

    __slots__ = [
        '_motor_id',
        '_motor_direction',
        '_motor_speed',
    ]

    _fields_and_field_types = {
        'motor_id': 'int32',
        'motor_direction': 'int32',
        'motor_speed': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.motor_id = kwargs.get('motor_id', int())
        self.motor_direction = kwargs.get('motor_direction', int())
        self.motor_speed = kwargs.get('motor_speed', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.motor_id != other.motor_id:
            return False
        if self.motor_direction != other.motor_direction:
            return False
        if self.motor_speed != other.motor_speed:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def motor_id(self):
        """Message field 'motor_id'."""
        return self._motor_id

    @motor_id.setter
    def motor_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'motor_id' field must be an integer in [-2147483648, 2147483647]"
        self._motor_id = value

    @builtins.property
    def motor_direction(self):
        """Message field 'motor_direction'."""
        return self._motor_direction

    @motor_direction.setter
    def motor_direction(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor_direction' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'motor_direction' field must be an integer in [-2147483648, 2147483647]"
        self._motor_direction = value

    @builtins.property
    def motor_speed(self):
        """Message field 'motor_speed'."""
        return self._motor_speed

    @motor_speed.setter
    def motor_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor_speed' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'motor_speed' field must be an integer in [-2147483648, 2147483647]"
        self._motor_speed = value
