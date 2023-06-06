// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from topics_services:msg/Telemetric.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "topics_services/msg/detail/telemetric__struct.h"
#include "topics_services/msg/detail/telemetric__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool topics_services__msg__telemetric__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("topics_services.msg._telemetric.Telemetric", full_classname_dest, 42) == 0);
  }
  topics_services__msg__Telemetric * ros_message = _ros_message;
  {  // temp_fr
    PyObject * field = PyObject_GetAttrString(_pymsg, "temp_fr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temp_fr = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // temp_fl
    PyObject * field = PyObject_GetAttrString(_pymsg, "temp_fl");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temp_fl = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // temp_br
    PyObject * field = PyObject_GetAttrString(_pymsg, "temp_br");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temp_br = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // temp_bl
    PyObject * field = PyObject_GetAttrString(_pymsg, "temp_bl");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temp_bl = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // temp_z_as
    PyObject * field = PyObject_GetAttrString(_pymsg, "temp_z_as");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temp_z_as = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // temp_gripper
    PyObject * field = PyObject_GetAttrString(_pymsg, "temp_gripper");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temp_gripper = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cur_pos_fr
    PyObject * field = PyObject_GetAttrString(_pymsg, "cur_pos_fr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cur_pos_fr = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cur_pos_fl
    PyObject * field = PyObject_GetAttrString(_pymsg, "cur_pos_fl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cur_pos_fl = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cur_pos_br
    PyObject * field = PyObject_GetAttrString(_pymsg, "cur_pos_br");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cur_pos_br = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cur_pos_bl
    PyObject * field = PyObject_GetAttrString(_pymsg, "cur_pos_bl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cur_pos_bl = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cur_pos_z_as
    PyObject * field = PyObject_GetAttrString(_pymsg, "cur_pos_z_as");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cur_pos_z_as = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cur_pos_gripper
    PyObject * field = PyObject_GetAttrString(_pymsg, "cur_pos_gripper");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cur_pos_gripper = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // voltage_fr
    PyObject * field = PyObject_GetAttrString(_pymsg, "voltage_fr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->voltage_fr = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // voltage_fl
    PyObject * field = PyObject_GetAttrString(_pymsg, "voltage_fl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->voltage_fl = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // voltage_br
    PyObject * field = PyObject_GetAttrString(_pymsg, "voltage_br");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->voltage_br = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // voltage_bl
    PyObject * field = PyObject_GetAttrString(_pymsg, "voltage_bl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->voltage_bl = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // voltage_z_as
    PyObject * field = PyObject_GetAttrString(_pymsg, "voltage_z_as");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->voltage_z_as = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // voltage_gripper
    PyObject * field = PyObject_GetAttrString(_pymsg, "voltage_gripper");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->voltage_gripper = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // load_fr
    PyObject * field = PyObject_GetAttrString(_pymsg, "load_fr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->load_fr = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // load_fl
    PyObject * field = PyObject_GetAttrString(_pymsg, "load_fl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->load_fl = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // load_br
    PyObject * field = PyObject_GetAttrString(_pymsg, "load_br");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->load_br = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // load_bl
    PyObject * field = PyObject_GetAttrString(_pymsg, "load_bl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->load_bl = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // load_z_as
    PyObject * field = PyObject_GetAttrString(_pymsg, "load_z_as");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->load_z_as = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // load_gripper
    PyObject * field = PyObject_GetAttrString(_pymsg, "load_gripper");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->load_gripper = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * topics_services__msg__telemetric__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Telemetric */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("topics_services.msg._telemetric");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Telemetric");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  topics_services__msg__Telemetric * ros_message = (topics_services__msg__Telemetric *)raw_ros_message;
  {  // temp_fr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temp_fr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temp_fr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temp_fl
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temp_fl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temp_fl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temp_br
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temp_br);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temp_br", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temp_bl
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temp_bl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temp_bl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temp_z_as
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temp_z_as);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temp_z_as", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temp_gripper
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temp_gripper);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temp_gripper", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cur_pos_fr
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cur_pos_fr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cur_pos_fr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cur_pos_fl
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cur_pos_fl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cur_pos_fl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cur_pos_br
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cur_pos_br);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cur_pos_br", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cur_pos_bl
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cur_pos_bl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cur_pos_bl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cur_pos_z_as
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cur_pos_z_as);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cur_pos_z_as", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cur_pos_gripper
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cur_pos_gripper);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cur_pos_gripper", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // voltage_fr
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->voltage_fr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "voltage_fr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // voltage_fl
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->voltage_fl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "voltage_fl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // voltage_br
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->voltage_br);
    {
      int rc = PyObject_SetAttrString(_pymessage, "voltage_br", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // voltage_bl
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->voltage_bl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "voltage_bl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // voltage_z_as
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->voltage_z_as);
    {
      int rc = PyObject_SetAttrString(_pymessage, "voltage_z_as", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // voltage_gripper
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->voltage_gripper);
    {
      int rc = PyObject_SetAttrString(_pymessage, "voltage_gripper", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // load_fr
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->load_fr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "load_fr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // load_fl
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->load_fl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "load_fl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // load_br
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->load_br);
    {
      int rc = PyObject_SetAttrString(_pymessage, "load_br", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // load_bl
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->load_bl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "load_bl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // load_z_as
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->load_z_as);
    {
      int rc = PyObject_SetAttrString(_pymessage, "load_z_as", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // load_gripper
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->load_gripper);
    {
      int rc = PyObject_SetAttrString(_pymessage, "load_gripper", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
