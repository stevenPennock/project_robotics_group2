// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from topics_services:msg/ServoData.idl
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
#include "topics_services/msg/detail/servo_data__struct.h"
#include "topics_services/msg/detail/servo_data__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool topics_services__msg__servo_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[42];
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
    assert(strncmp("topics_services.msg._servo_data.ServoData", full_classname_dest, 41) == 0);
  }
  topics_services__msg__ServoData * ros_message = _ros_message;
  {  // max_torque1
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_torque1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->max_torque1 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // max_torque2
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_torque2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->max_torque2 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // max_torque3
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_torque3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->max_torque3 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // max_torque4
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_torque4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->max_torque4 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // max_torque5
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_torque5");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->max_torque5 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // max_torque6
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_torque6");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->max_torque6 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // set_pos1
    PyObject * field = PyObject_GetAttrString(_pymsg, "set_pos1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->set_pos1 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // set_pos2
    PyObject * field = PyObject_GetAttrString(_pymsg, "set_pos2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->set_pos2 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // set_pos3
    PyObject * field = PyObject_GetAttrString(_pymsg, "set_pos3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->set_pos3 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // set_pos4
    PyObject * field = PyObject_GetAttrString(_pymsg, "set_pos4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->set_pos4 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // set_pos5
    PyObject * field = PyObject_GetAttrString(_pymsg, "set_pos5");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->set_pos5 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // set_pos6
    PyObject * field = PyObject_GetAttrString(_pymsg, "set_pos6");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->set_pos6 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // set_speed1
    PyObject * field = PyObject_GetAttrString(_pymsg, "set_speed1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->set_speed1 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // set_speed2
    PyObject * field = PyObject_GetAttrString(_pymsg, "set_speed2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->set_speed2 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // set_speed3
    PyObject * field = PyObject_GetAttrString(_pymsg, "set_speed3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->set_speed3 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // set_speed4
    PyObject * field = PyObject_GetAttrString(_pymsg, "set_speed4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->set_speed4 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // set_speed5
    PyObject * field = PyObject_GetAttrString(_pymsg, "set_speed5");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->set_speed5 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // set_speed6
    PyObject * field = PyObject_GetAttrString(_pymsg, "set_speed6");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->set_speed6 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * topics_services__msg__servo_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ServoData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("topics_services.msg._servo_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ServoData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  topics_services__msg__ServoData * ros_message = (topics_services__msg__ServoData *)raw_ros_message;
  {  // max_torque1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->max_torque1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_torque1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_torque2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->max_torque2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_torque2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_torque3
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->max_torque3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_torque3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_torque4
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->max_torque4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_torque4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_torque5
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->max_torque5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_torque5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_torque6
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->max_torque6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_torque6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // set_pos1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->set_pos1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "set_pos1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // set_pos2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->set_pos2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "set_pos2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // set_pos3
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->set_pos3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "set_pos3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // set_pos4
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->set_pos4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "set_pos4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // set_pos5
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->set_pos5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "set_pos5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // set_pos6
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->set_pos6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "set_pos6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // set_speed1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->set_speed1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "set_speed1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // set_speed2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->set_speed2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "set_speed2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // set_speed3
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->set_speed3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "set_speed3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // set_speed4
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->set_speed4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "set_speed4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // set_speed5
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->set_speed5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "set_speed5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // set_speed6
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->set_speed6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "set_speed6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
