# generated from rosidl_generator_py/resource/_idl.py.em
# with input from topics_services:msg/ServoData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ServoData(type):
    """Metaclass of message 'ServoData'."""

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
            module = import_type_support('topics_services')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'topics_services.msg.ServoData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__servo_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__servo_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__servo_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__servo_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__servo_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ServoData(metaclass=Metaclass_ServoData):
    """Message class 'ServoData'."""

    __slots__ = [
        '_max_torque1',
        '_max_torque2',
        '_max_torque3',
        '_max_torque4',
        '_max_torque5',
        '_max_torque6',
        '_set_pos1',
        '_set_pos2',
        '_set_pos3',
        '_set_pos4',
        '_set_pos5',
        '_set_pos6',
        '_set_speed1',
        '_set_speed2',
        '_set_speed3',
        '_set_speed4',
        '_set_speed5',
        '_set_speed6',
    ]

    _fields_and_field_types = {
        'max_torque1': 'uint32',
        'max_torque2': 'uint32',
        'max_torque3': 'uint32',
        'max_torque4': 'uint32',
        'max_torque5': 'uint32',
        'max_torque6': 'uint32',
        'set_pos1': 'uint32',
        'set_pos2': 'uint32',
        'set_pos3': 'uint32',
        'set_pos4': 'uint32',
        'set_pos5': 'uint32',
        'set_pos6': 'uint32',
        'set_speed1': 'uint32',
        'set_speed2': 'uint32',
        'set_speed3': 'uint32',
        'set_speed4': 'uint32',
        'set_speed5': 'uint32',
        'set_speed6': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.max_torque1 = kwargs.get('max_torque1', int())
        self.max_torque2 = kwargs.get('max_torque2', int())
        self.max_torque3 = kwargs.get('max_torque3', int())
        self.max_torque4 = kwargs.get('max_torque4', int())
        self.max_torque5 = kwargs.get('max_torque5', int())
        self.max_torque6 = kwargs.get('max_torque6', int())
        self.set_pos1 = kwargs.get('set_pos1', int())
        self.set_pos2 = kwargs.get('set_pos2', int())
        self.set_pos3 = kwargs.get('set_pos3', int())
        self.set_pos4 = kwargs.get('set_pos4', int())
        self.set_pos5 = kwargs.get('set_pos5', int())
        self.set_pos6 = kwargs.get('set_pos6', int())
        self.set_speed1 = kwargs.get('set_speed1', int())
        self.set_speed2 = kwargs.get('set_speed2', int())
        self.set_speed3 = kwargs.get('set_speed3', int())
        self.set_speed4 = kwargs.get('set_speed4', int())
        self.set_speed5 = kwargs.get('set_speed5', int())
        self.set_speed6 = kwargs.get('set_speed6', int())

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
        if self.max_torque1 != other.max_torque1:
            return False
        if self.max_torque2 != other.max_torque2:
            return False
        if self.max_torque3 != other.max_torque3:
            return False
        if self.max_torque4 != other.max_torque4:
            return False
        if self.max_torque5 != other.max_torque5:
            return False
        if self.max_torque6 != other.max_torque6:
            return False
        if self.set_pos1 != other.set_pos1:
            return False
        if self.set_pos2 != other.set_pos2:
            return False
        if self.set_pos3 != other.set_pos3:
            return False
        if self.set_pos4 != other.set_pos4:
            return False
        if self.set_pos5 != other.set_pos5:
            return False
        if self.set_pos6 != other.set_pos6:
            return False
        if self.set_speed1 != other.set_speed1:
            return False
        if self.set_speed2 != other.set_speed2:
            return False
        if self.set_speed3 != other.set_speed3:
            return False
        if self.set_speed4 != other.set_speed4:
            return False
        if self.set_speed5 != other.set_speed5:
            return False
        if self.set_speed6 != other.set_speed6:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def max_torque1(self):
        """Message field 'max_torque1'."""
        return self._max_torque1

    @max_torque1.setter
    def max_torque1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'max_torque1' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'max_torque1' field must be an unsigned integer in [0, 4294967295]"
        self._max_torque1 = value

    @builtins.property
    def max_torque2(self):
        """Message field 'max_torque2'."""
        return self._max_torque2

    @max_torque2.setter
    def max_torque2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'max_torque2' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'max_torque2' field must be an unsigned integer in [0, 4294967295]"
        self._max_torque2 = value

    @builtins.property
    def max_torque3(self):
        """Message field 'max_torque3'."""
        return self._max_torque3

    @max_torque3.setter
    def max_torque3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'max_torque3' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'max_torque3' field must be an unsigned integer in [0, 4294967295]"
        self._max_torque3 = value

    @builtins.property
    def max_torque4(self):
        """Message field 'max_torque4'."""
        return self._max_torque4

    @max_torque4.setter
    def max_torque4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'max_torque4' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'max_torque4' field must be an unsigned integer in [0, 4294967295]"
        self._max_torque4 = value

    @builtins.property
    def max_torque5(self):
        """Message field 'max_torque5'."""
        return self._max_torque5

    @max_torque5.setter
    def max_torque5(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'max_torque5' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'max_torque5' field must be an unsigned integer in [0, 4294967295]"
        self._max_torque5 = value

    @builtins.property
    def max_torque6(self):
        """Message field 'max_torque6'."""
        return self._max_torque6

    @max_torque6.setter
    def max_torque6(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'max_torque6' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'max_torque6' field must be an unsigned integer in [0, 4294967295]"
        self._max_torque6 = value

    @builtins.property
    def set_pos1(self):
        """Message field 'set_pos1'."""
        return self._set_pos1

    @set_pos1.setter
    def set_pos1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'set_pos1' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'set_pos1' field must be an unsigned integer in [0, 4294967295]"
        self._set_pos1 = value

    @builtins.property
    def set_pos2(self):
        """Message field 'set_pos2'."""
        return self._set_pos2

    @set_pos2.setter
    def set_pos2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'set_pos2' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'set_pos2' field must be an unsigned integer in [0, 4294967295]"
        self._set_pos2 = value

    @builtins.property
    def set_pos3(self):
        """Message field 'set_pos3'."""
        return self._set_pos3

    @set_pos3.setter
    def set_pos3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'set_pos3' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'set_pos3' field must be an unsigned integer in [0, 4294967295]"
        self._set_pos3 = value

    @builtins.property
    def set_pos4(self):
        """Message field 'set_pos4'."""
        return self._set_pos4

    @set_pos4.setter
    def set_pos4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'set_pos4' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'set_pos4' field must be an unsigned integer in [0, 4294967295]"
        self._set_pos4 = value

    @builtins.property
    def set_pos5(self):
        """Message field 'set_pos5'."""
        return self._set_pos5

    @set_pos5.setter
    def set_pos5(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'set_pos5' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'set_pos5' field must be an unsigned integer in [0, 4294967295]"
        self._set_pos5 = value

    @builtins.property
    def set_pos6(self):
        """Message field 'set_pos6'."""
        return self._set_pos6

    @set_pos6.setter
    def set_pos6(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'set_pos6' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'set_pos6' field must be an unsigned integer in [0, 4294967295]"
        self._set_pos6 = value

    @builtins.property
    def set_speed1(self):
        """Message field 'set_speed1'."""
        return self._set_speed1

    @set_speed1.setter
    def set_speed1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'set_speed1' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'set_speed1' field must be an unsigned integer in [0, 4294967295]"
        self._set_speed1 = value

    @builtins.property
    def set_speed2(self):
        """Message field 'set_speed2'."""
        return self._set_speed2

    @set_speed2.setter
    def set_speed2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'set_speed2' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'set_speed2' field must be an unsigned integer in [0, 4294967295]"
        self._set_speed2 = value

    @builtins.property
    def set_speed3(self):
        """Message field 'set_speed3'."""
        return self._set_speed3

    @set_speed3.setter
    def set_speed3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'set_speed3' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'set_speed3' field must be an unsigned integer in [0, 4294967295]"
        self._set_speed3 = value

    @builtins.property
    def set_speed4(self):
        """Message field 'set_speed4'."""
        return self._set_speed4

    @set_speed4.setter
    def set_speed4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'set_speed4' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'set_speed4' field must be an unsigned integer in [0, 4294967295]"
        self._set_speed4 = value

    @builtins.property
    def set_speed5(self):
        """Message field 'set_speed5'."""
        return self._set_speed5

    @set_speed5.setter
    def set_speed5(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'set_speed5' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'set_speed5' field must be an unsigned integer in [0, 4294967295]"
        self._set_speed5 = value

    @builtins.property
    def set_speed6(self):
        """Message field 'set_speed6'."""
        return self._set_speed6

    @set_speed6.setter
    def set_speed6(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'set_speed6' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'set_speed6' field must be an unsigned integer in [0, 4294967295]"
        self._set_speed6 = value
