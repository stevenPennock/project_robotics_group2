# generated from rosidl_generator_py/resource/_idl.py.em
# with input from topics_services:msg/RandomData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RandomData(type):
    """Metaclass of message 'RandomData'."""

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
                'topics_services.msg.RandomData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__random_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__random_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__random_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__random_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__random_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RandomData(metaclass=Metaclass_RandomData):
    """Message class 'RandomData'."""

    __slots__ = [
        '_gs1',
        '_highband',
        '_midband',
        '_lowband',
        '_weight',
        '_batteryvoltage',
    ]

    _fields_and_field_types = {
        'gs1': 'string',
        'highband': 'uint32',
        'midband': 'uint32',
        'lowband': 'uint32',
        'weight': 'uint32',
        'batteryvoltage': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
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
        self.gs1 = kwargs.get('gs1', str())
        self.highband = kwargs.get('highband', int())
        self.midband = kwargs.get('midband', int())
        self.lowband = kwargs.get('lowband', int())
        self.weight = kwargs.get('weight', int())
        self.batteryvoltage = kwargs.get('batteryvoltage', int())

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
        if self.gs1 != other.gs1:
            return False
        if self.highband != other.highband:
            return False
        if self.midband != other.midband:
            return False
        if self.lowband != other.lowband:
            return False
        if self.weight != other.weight:
            return False
        if self.batteryvoltage != other.batteryvoltage:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def gs1(self):
        """Message field 'gs1'."""
        return self._gs1

    @gs1.setter
    def gs1(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'gs1' field must be of type 'str'"
        self._gs1 = value

    @builtins.property
    def highband(self):
        """Message field 'highband'."""
        return self._highband

    @highband.setter
    def highband(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'highband' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'highband' field must be an unsigned integer in [0, 4294967295]"
        self._highband = value

    @builtins.property
    def midband(self):
        """Message field 'midband'."""
        return self._midband

    @midband.setter
    def midband(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'midband' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'midband' field must be an unsigned integer in [0, 4294967295]"
        self._midband = value

    @builtins.property
    def lowband(self):
        """Message field 'lowband'."""
        return self._lowband

    @lowband.setter
    def lowband(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lowband' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'lowband' field must be an unsigned integer in [0, 4294967295]"
        self._lowband = value

    @builtins.property
    def weight(self):
        """Message field 'weight'."""
        return self._weight

    @weight.setter
    def weight(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'weight' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'weight' field must be an unsigned integer in [0, 4294967295]"
        self._weight = value

    @builtins.property
    def batteryvoltage(self):
        """Message field 'batteryvoltage'."""
        return self._batteryvoltage

    @batteryvoltage.setter
    def batteryvoltage(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'batteryvoltage' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'batteryvoltage' field must be an unsigned integer in [0, 4294967295]"
        self._batteryvoltage = value
