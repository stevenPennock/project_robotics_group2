# generated from rosidl_generator_py/resource/_idl.py.em
# with input from topics_services:msg/Telemetric.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Telemetric(type):
    """Metaclass of message 'Telemetric'."""

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
                'topics_services.msg.Telemetric')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__telemetric
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__telemetric
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__telemetric
            cls._TYPE_SUPPORT = module.type_support_msg__msg__telemetric
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__telemetric

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Telemetric(metaclass=Metaclass_Telemetric):
    """Message class 'Telemetric'."""

    __slots__ = [
        '_temp_fr',
        '_temp_fl',
        '_temp_br',
        '_temp_bl',
        '_temp_z_as',
        '_temp_gripper',
        '_cur_pos_fr',
        '_cur_pos_fl',
        '_cur_pos_br',
        '_cur_pos_bl',
        '_cur_pos_z_as',
        '_cur_pos_gripper',
        '_voltage_fr',
        '_voltage_fl',
        '_voltage_br',
        '_voltage_bl',
        '_voltage_z_as',
        '_voltage_gripper',
        '_load_fr',
        '_load_fl',
        '_load_br',
        '_load_bl',
        '_load_z_as',
        '_load_gripper',
    ]

    _fields_and_field_types = {
        'temp_fr': 'float',
        'temp_fl': 'float',
        'temp_br': 'float',
        'temp_bl': 'float',
        'temp_z_as': 'float',
        'temp_gripper': 'float',
        'cur_pos_fr': 'uint32',
        'cur_pos_fl': 'uint32',
        'cur_pos_br': 'uint32',
        'cur_pos_bl': 'uint32',
        'cur_pos_z_as': 'uint32',
        'cur_pos_gripper': 'uint32',
        'voltage_fr': 'uint32',
        'voltage_fl': 'uint32',
        'voltage_br': 'uint32',
        'voltage_bl': 'uint32',
        'voltage_z_as': 'uint32',
        'voltage_gripper': 'uint32',
        'load_fr': 'uint32',
        'load_fl': 'uint32',
        'load_br': 'uint32',
        'load_bl': 'uint32',
        'load_z_as': 'uint32',
        'load_gripper': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        self.temp_fr = kwargs.get('temp_fr', float())
        self.temp_fl = kwargs.get('temp_fl', float())
        self.temp_br = kwargs.get('temp_br', float())
        self.temp_bl = kwargs.get('temp_bl', float())
        self.temp_z_as = kwargs.get('temp_z_as', float())
        self.temp_gripper = kwargs.get('temp_gripper', float())
        self.cur_pos_fr = kwargs.get('cur_pos_fr', int())
        self.cur_pos_fl = kwargs.get('cur_pos_fl', int())
        self.cur_pos_br = kwargs.get('cur_pos_br', int())
        self.cur_pos_bl = kwargs.get('cur_pos_bl', int())
        self.cur_pos_z_as = kwargs.get('cur_pos_z_as', int())
        self.cur_pos_gripper = kwargs.get('cur_pos_gripper', int())
        self.voltage_fr = kwargs.get('voltage_fr', int())
        self.voltage_fl = kwargs.get('voltage_fl', int())
        self.voltage_br = kwargs.get('voltage_br', int())
        self.voltage_bl = kwargs.get('voltage_bl', int())
        self.voltage_z_as = kwargs.get('voltage_z_as', int())
        self.voltage_gripper = kwargs.get('voltage_gripper', int())
        self.load_fr = kwargs.get('load_fr', int())
        self.load_fl = kwargs.get('load_fl', int())
        self.load_br = kwargs.get('load_br', int())
        self.load_bl = kwargs.get('load_bl', int())
        self.load_z_as = kwargs.get('load_z_as', int())
        self.load_gripper = kwargs.get('load_gripper', int())

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
        if self.temp_fr != other.temp_fr:
            return False
        if self.temp_fl != other.temp_fl:
            return False
        if self.temp_br != other.temp_br:
            return False
        if self.temp_bl != other.temp_bl:
            return False
        if self.temp_z_as != other.temp_z_as:
            return False
        if self.temp_gripper != other.temp_gripper:
            return False
        if self.cur_pos_fr != other.cur_pos_fr:
            return False
        if self.cur_pos_fl != other.cur_pos_fl:
            return False
        if self.cur_pos_br != other.cur_pos_br:
            return False
        if self.cur_pos_bl != other.cur_pos_bl:
            return False
        if self.cur_pos_z_as != other.cur_pos_z_as:
            return False
        if self.cur_pos_gripper != other.cur_pos_gripper:
            return False
        if self.voltage_fr != other.voltage_fr:
            return False
        if self.voltage_fl != other.voltage_fl:
            return False
        if self.voltage_br != other.voltage_br:
            return False
        if self.voltage_bl != other.voltage_bl:
            return False
        if self.voltage_z_as != other.voltage_z_as:
            return False
        if self.voltage_gripper != other.voltage_gripper:
            return False
        if self.load_fr != other.load_fr:
            return False
        if self.load_fl != other.load_fl:
            return False
        if self.load_br != other.load_br:
            return False
        if self.load_bl != other.load_bl:
            return False
        if self.load_z_as != other.load_z_as:
            return False
        if self.load_gripper != other.load_gripper:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def temp_fr(self):
        """Message field 'temp_fr'."""
        return self._temp_fr

    @temp_fr.setter
    def temp_fr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temp_fr' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'temp_fr' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._temp_fr = value

    @builtins.property
    def temp_fl(self):
        """Message field 'temp_fl'."""
        return self._temp_fl

    @temp_fl.setter
    def temp_fl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temp_fl' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'temp_fl' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._temp_fl = value

    @builtins.property
    def temp_br(self):
        """Message field 'temp_br'."""
        return self._temp_br

    @temp_br.setter
    def temp_br(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temp_br' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'temp_br' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._temp_br = value

    @builtins.property
    def temp_bl(self):
        """Message field 'temp_bl'."""
        return self._temp_bl

    @temp_bl.setter
    def temp_bl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temp_bl' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'temp_bl' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._temp_bl = value

    @builtins.property
    def temp_z_as(self):
        """Message field 'temp_z_as'."""
        return self._temp_z_as

    @temp_z_as.setter
    def temp_z_as(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temp_z_as' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'temp_z_as' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._temp_z_as = value

    @builtins.property
    def temp_gripper(self):
        """Message field 'temp_gripper'."""
        return self._temp_gripper

    @temp_gripper.setter
    def temp_gripper(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temp_gripper' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'temp_gripper' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._temp_gripper = value

    @builtins.property
    def cur_pos_fr(self):
        """Message field 'cur_pos_fr'."""
        return self._cur_pos_fr

    @cur_pos_fr.setter
    def cur_pos_fr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cur_pos_fr' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'cur_pos_fr' field must be an unsigned integer in [0, 4294967295]"
        self._cur_pos_fr = value

    @builtins.property
    def cur_pos_fl(self):
        """Message field 'cur_pos_fl'."""
        return self._cur_pos_fl

    @cur_pos_fl.setter
    def cur_pos_fl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cur_pos_fl' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'cur_pos_fl' field must be an unsigned integer in [0, 4294967295]"
        self._cur_pos_fl = value

    @builtins.property
    def cur_pos_br(self):
        """Message field 'cur_pos_br'."""
        return self._cur_pos_br

    @cur_pos_br.setter
    def cur_pos_br(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cur_pos_br' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'cur_pos_br' field must be an unsigned integer in [0, 4294967295]"
        self._cur_pos_br = value

    @builtins.property
    def cur_pos_bl(self):
        """Message field 'cur_pos_bl'."""
        return self._cur_pos_bl

    @cur_pos_bl.setter
    def cur_pos_bl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cur_pos_bl' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'cur_pos_bl' field must be an unsigned integer in [0, 4294967295]"
        self._cur_pos_bl = value

    @builtins.property
    def cur_pos_z_as(self):
        """Message field 'cur_pos_z_as'."""
        return self._cur_pos_z_as

    @cur_pos_z_as.setter
    def cur_pos_z_as(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cur_pos_z_as' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'cur_pos_z_as' field must be an unsigned integer in [0, 4294967295]"
        self._cur_pos_z_as = value

    @builtins.property
    def cur_pos_gripper(self):
        """Message field 'cur_pos_gripper'."""
        return self._cur_pos_gripper

    @cur_pos_gripper.setter
    def cur_pos_gripper(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cur_pos_gripper' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'cur_pos_gripper' field must be an unsigned integer in [0, 4294967295]"
        self._cur_pos_gripper = value

    @builtins.property
    def voltage_fr(self):
        """Message field 'voltage_fr'."""
        return self._voltage_fr

    @voltage_fr.setter
    def voltage_fr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'voltage_fr' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'voltage_fr' field must be an unsigned integer in [0, 4294967295]"
        self._voltage_fr = value

    @builtins.property
    def voltage_fl(self):
        """Message field 'voltage_fl'."""
        return self._voltage_fl

    @voltage_fl.setter
    def voltage_fl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'voltage_fl' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'voltage_fl' field must be an unsigned integer in [0, 4294967295]"
        self._voltage_fl = value

    @builtins.property
    def voltage_br(self):
        """Message field 'voltage_br'."""
        return self._voltage_br

    @voltage_br.setter
    def voltage_br(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'voltage_br' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'voltage_br' field must be an unsigned integer in [0, 4294967295]"
        self._voltage_br = value

    @builtins.property
    def voltage_bl(self):
        """Message field 'voltage_bl'."""
        return self._voltage_bl

    @voltage_bl.setter
    def voltage_bl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'voltage_bl' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'voltage_bl' field must be an unsigned integer in [0, 4294967295]"
        self._voltage_bl = value

    @builtins.property
    def voltage_z_as(self):
        """Message field 'voltage_z_as'."""
        return self._voltage_z_as

    @voltage_z_as.setter
    def voltage_z_as(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'voltage_z_as' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'voltage_z_as' field must be an unsigned integer in [0, 4294967295]"
        self._voltage_z_as = value

    @builtins.property
    def voltage_gripper(self):
        """Message field 'voltage_gripper'."""
        return self._voltage_gripper

    @voltage_gripper.setter
    def voltage_gripper(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'voltage_gripper' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'voltage_gripper' field must be an unsigned integer in [0, 4294967295]"
        self._voltage_gripper = value

    @builtins.property
    def load_fr(self):
        """Message field 'load_fr'."""
        return self._load_fr

    @load_fr.setter
    def load_fr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'load_fr' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'load_fr' field must be an unsigned integer in [0, 4294967295]"
        self._load_fr = value

    @builtins.property
    def load_fl(self):
        """Message field 'load_fl'."""
        return self._load_fl

    @load_fl.setter
    def load_fl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'load_fl' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'load_fl' field must be an unsigned integer in [0, 4294967295]"
        self._load_fl = value

    @builtins.property
    def load_br(self):
        """Message field 'load_br'."""
        return self._load_br

    @load_br.setter
    def load_br(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'load_br' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'load_br' field must be an unsigned integer in [0, 4294967295]"
        self._load_br = value

    @builtins.property
    def load_bl(self):
        """Message field 'load_bl'."""
        return self._load_bl

    @load_bl.setter
    def load_bl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'load_bl' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'load_bl' field must be an unsigned integer in [0, 4294967295]"
        self._load_bl = value

    @builtins.property
    def load_z_as(self):
        """Message field 'load_z_as'."""
        return self._load_z_as

    @load_z_as.setter
    def load_z_as(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'load_z_as' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'load_z_as' field must be an unsigned integer in [0, 4294967295]"
        self._load_z_as = value

    @builtins.property
    def load_gripper(self):
        """Message field 'load_gripper'."""
        return self._load_gripper

    @load_gripper.setter
    def load_gripper(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'load_gripper' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'load_gripper' field must be an unsigned integer in [0, 4294967295]"
        self._load_gripper = value
