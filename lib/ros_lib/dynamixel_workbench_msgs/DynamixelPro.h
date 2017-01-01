#ifndef _ROS_dynamixel_workbench_msgs_DynamixelPro_h
#define _ROS_dynamixel_workbench_msgs_DynamixelPro_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace dynamixel_workbench_msgs
{

  class DynamixelPro : public ros::Msg
  {
    public:
      typedef int64_t _model_number_type;
      _model_number_type model_number;
      typedef int64_t _version_of_firmware_type;
      _version_of_firmware_type version_of_firmware;
      typedef int8_t _id_type;
      _id_type id;
      typedef int64_t _baud_rate_type;
      _baud_rate_type baud_rate;
      typedef int64_t _return_delay_time_type;
      _return_delay_time_type return_delay_time;
      typedef int64_t _operating_mode_type;
      _operating_mode_type operating_mode;
      typedef int64_t _homing_offset_type;
      _homing_offset_type homing_offset;
      typedef int64_t _moving_threshold_type;
      _moving_threshold_type moving_threshold;
      typedef int64_t _max_temperature_limit_type;
      _max_temperature_limit_type max_temperature_limit;
      typedef int64_t _max_voltage_limit_type;
      _max_voltage_limit_type max_voltage_limit;
      typedef int64_t _min_voltage_limit_type;
      _min_voltage_limit_type min_voltage_limit;
      typedef int64_t _acceleration_limit_type;
      _acceleration_limit_type acceleration_limit;
      typedef int64_t _torque_limit_type;
      _torque_limit_type torque_limit;
      typedef int64_t _velocity_limit_type;
      _velocity_limit_type velocity_limit;
      typedef int64_t _max_position_limit_type;
      _max_position_limit_type max_position_limit;
      typedef int64_t _min_position_limit_type;
      _min_position_limit_type min_position_limit;
      typedef int64_t _external_port_mod_1_type;
      _external_port_mod_1_type external_port_mod_1;
      typedef int64_t _external_port_mod_2_type;
      _external_port_mod_2_type external_port_mod_2;
      typedef int64_t _external_port_mod_3_type;
      _external_port_mod_3_type external_port_mod_3;
      typedef int64_t _external_port_mod_4_type;
      _external_port_mod_4_type external_port_mod_4;
      typedef int64_t _shutdown_type;
      _shutdown_type shutdown;
      typedef int64_t _indirect_address_1_type;
      _indirect_address_1_type indirect_address_1;
      typedef bool _torque_enable_type;
      _torque_enable_type torque_enable;
      typedef int64_t _led_red_type;
      _led_red_type led_red;
      typedef int64_t _led_green_type;
      _led_green_type led_green;
      typedef int64_t _led_blue_type;
      _led_blue_type led_blue;
      typedef int64_t _velocity_i_gain_type;
      _velocity_i_gain_type velocity_i_gain;
      typedef int64_t _velocity_p_gain_type;
      _velocity_p_gain_type velocity_p_gain;
      typedef int64_t _position_p_gain_type;
      _position_p_gain_type position_p_gain;
      typedef int64_t _goal_position_type;
      _goal_position_type goal_position;
      typedef int64_t _goal_velocity_type;
      _goal_velocity_type goal_velocity;
      typedef int64_t _goal_torque_type;
      _goal_torque_type goal_torque;
      typedef int64_t _goal_acceleration_type;
      _goal_acceleration_type goal_acceleration;
      typedef bool _is_moving_type;
      _is_moving_type is_moving;
      typedef int64_t _present_position_type;
      _present_position_type present_position;
      typedef int64_t _present_velocity_type;
      _present_velocity_type present_velocity;
      typedef int64_t _present_current_type;
      _present_current_type present_current;
      typedef int64_t _present_voltage_type;
      _present_voltage_type present_voltage;
      typedef int64_t _present_temperature_type;
      _present_temperature_type present_temperature;
      typedef int64_t _external_port_data_1_type;
      _external_port_data_1_type external_port_data_1;
      typedef int64_t _external_port_data_2_type;
      _external_port_data_2_type external_port_data_2;
      typedef int64_t _external_port_data_3_type;
      _external_port_data_3_type external_port_data_3;
      typedef int64_t _external_port_data_4_type;
      _external_port_data_4_type external_port_data_4;
      typedef int64_t _indirect_data_1_type;
      _indirect_data_1_type indirect_data_1;
      typedef bool _registered_instruction_type;
      _registered_instruction_type registered_instruction;
      typedef int64_t _status_return_level_type;
      _status_return_level_type status_return_level;
      typedef int64_t _hardware_error_status_type;
      _hardware_error_status_type hardware_error_status;

    DynamixelPro():
      model_number(0),
      version_of_firmware(0),
      id(0),
      baud_rate(0),
      return_delay_time(0),
      operating_mode(0),
      homing_offset(0),
      moving_threshold(0),
      max_temperature_limit(0),
      max_voltage_limit(0),
      min_voltage_limit(0),
      acceleration_limit(0),
      torque_limit(0),
      velocity_limit(0),
      max_position_limit(0),
      min_position_limit(0),
      external_port_mod_1(0),
      external_port_mod_2(0),
      external_port_mod_3(0),
      external_port_mod_4(0),
      shutdown(0),
      indirect_address_1(0),
      torque_enable(0),
      led_red(0),
      led_green(0),
      led_blue(0),
      velocity_i_gain(0),
      velocity_p_gain(0),
      position_p_gain(0),
      goal_position(0),
      goal_velocity(0),
      goal_torque(0),
      goal_acceleration(0),
      is_moving(0),
      present_position(0),
      present_velocity(0),
      present_current(0),
      present_voltage(0),
      present_temperature(0),
      external_port_data_1(0),
      external_port_data_2(0),
      external_port_data_3(0),
      external_port_data_4(0),
      indirect_data_1(0),
      registered_instruction(0),
      status_return_level(0),
      hardware_error_status(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        int64_t real;
        uint64_t base;
      } u_model_number;
      u_model_number.real = this->model_number;
      *(outbuffer + offset + 0) = (u_model_number.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_model_number.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_model_number.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_model_number.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_model_number.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_model_number.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_model_number.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_model_number.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->model_number);
      union {
        int64_t real;
        uint64_t base;
      } u_version_of_firmware;
      u_version_of_firmware.real = this->version_of_firmware;
      *(outbuffer + offset + 0) = (u_version_of_firmware.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_version_of_firmware.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_version_of_firmware.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_version_of_firmware.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_version_of_firmware.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_version_of_firmware.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_version_of_firmware.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_version_of_firmware.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->version_of_firmware);
      union {
        int8_t real;
        uint8_t base;
      } u_id;
      u_id.real = this->id;
      *(outbuffer + offset + 0) = (u_id.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->id);
      union {
        int64_t real;
        uint64_t base;
      } u_baud_rate;
      u_baud_rate.real = this->baud_rate;
      *(outbuffer + offset + 0) = (u_baud_rate.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_baud_rate.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_baud_rate.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_baud_rate.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_baud_rate.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_baud_rate.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_baud_rate.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_baud_rate.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->baud_rate);
      union {
        int64_t real;
        uint64_t base;
      } u_return_delay_time;
      u_return_delay_time.real = this->return_delay_time;
      *(outbuffer + offset + 0) = (u_return_delay_time.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_return_delay_time.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_return_delay_time.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_return_delay_time.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_return_delay_time.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_return_delay_time.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_return_delay_time.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_return_delay_time.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->return_delay_time);
      union {
        int64_t real;
        uint64_t base;
      } u_operating_mode;
      u_operating_mode.real = this->operating_mode;
      *(outbuffer + offset + 0) = (u_operating_mode.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_operating_mode.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_operating_mode.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_operating_mode.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_operating_mode.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_operating_mode.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_operating_mode.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_operating_mode.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->operating_mode);
      union {
        int64_t real;
        uint64_t base;
      } u_homing_offset;
      u_homing_offset.real = this->homing_offset;
      *(outbuffer + offset + 0) = (u_homing_offset.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_homing_offset.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_homing_offset.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_homing_offset.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_homing_offset.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_homing_offset.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_homing_offset.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_homing_offset.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->homing_offset);
      union {
        int64_t real;
        uint64_t base;
      } u_moving_threshold;
      u_moving_threshold.real = this->moving_threshold;
      *(outbuffer + offset + 0) = (u_moving_threshold.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_moving_threshold.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_moving_threshold.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_moving_threshold.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_moving_threshold.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_moving_threshold.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_moving_threshold.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_moving_threshold.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->moving_threshold);
      union {
        int64_t real;
        uint64_t base;
      } u_max_temperature_limit;
      u_max_temperature_limit.real = this->max_temperature_limit;
      *(outbuffer + offset + 0) = (u_max_temperature_limit.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_max_temperature_limit.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_max_temperature_limit.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_max_temperature_limit.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_max_temperature_limit.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_max_temperature_limit.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_max_temperature_limit.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_max_temperature_limit.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->max_temperature_limit);
      union {
        int64_t real;
        uint64_t base;
      } u_max_voltage_limit;
      u_max_voltage_limit.real = this->max_voltage_limit;
      *(outbuffer + offset + 0) = (u_max_voltage_limit.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_max_voltage_limit.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_max_voltage_limit.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_max_voltage_limit.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_max_voltage_limit.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_max_voltage_limit.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_max_voltage_limit.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_max_voltage_limit.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->max_voltage_limit);
      union {
        int64_t real;
        uint64_t base;
      } u_min_voltage_limit;
      u_min_voltage_limit.real = this->min_voltage_limit;
      *(outbuffer + offset + 0) = (u_min_voltage_limit.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_min_voltage_limit.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_min_voltage_limit.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_min_voltage_limit.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_min_voltage_limit.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_min_voltage_limit.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_min_voltage_limit.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_min_voltage_limit.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->min_voltage_limit);
      union {
        int64_t real;
        uint64_t base;
      } u_acceleration_limit;
      u_acceleration_limit.real = this->acceleration_limit;
      *(outbuffer + offset + 0) = (u_acceleration_limit.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_acceleration_limit.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_acceleration_limit.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_acceleration_limit.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_acceleration_limit.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_acceleration_limit.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_acceleration_limit.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_acceleration_limit.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->acceleration_limit);
      union {
        int64_t real;
        uint64_t base;
      } u_torque_limit;
      u_torque_limit.real = this->torque_limit;
      *(outbuffer + offset + 0) = (u_torque_limit.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_torque_limit.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_torque_limit.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_torque_limit.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_torque_limit.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_torque_limit.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_torque_limit.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_torque_limit.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->torque_limit);
      union {
        int64_t real;
        uint64_t base;
      } u_velocity_limit;
      u_velocity_limit.real = this->velocity_limit;
      *(outbuffer + offset + 0) = (u_velocity_limit.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_velocity_limit.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_velocity_limit.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_velocity_limit.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_velocity_limit.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_velocity_limit.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_velocity_limit.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_velocity_limit.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->velocity_limit);
      union {
        int64_t real;
        uint64_t base;
      } u_max_position_limit;
      u_max_position_limit.real = this->max_position_limit;
      *(outbuffer + offset + 0) = (u_max_position_limit.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_max_position_limit.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_max_position_limit.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_max_position_limit.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_max_position_limit.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_max_position_limit.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_max_position_limit.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_max_position_limit.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->max_position_limit);
      union {
        int64_t real;
        uint64_t base;
      } u_min_position_limit;
      u_min_position_limit.real = this->min_position_limit;
      *(outbuffer + offset + 0) = (u_min_position_limit.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_min_position_limit.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_min_position_limit.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_min_position_limit.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_min_position_limit.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_min_position_limit.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_min_position_limit.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_min_position_limit.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->min_position_limit);
      union {
        int64_t real;
        uint64_t base;
      } u_external_port_mod_1;
      u_external_port_mod_1.real = this->external_port_mod_1;
      *(outbuffer + offset + 0) = (u_external_port_mod_1.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_external_port_mod_1.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_external_port_mod_1.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_external_port_mod_1.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_external_port_mod_1.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_external_port_mod_1.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_external_port_mod_1.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_external_port_mod_1.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->external_port_mod_1);
      union {
        int64_t real;
        uint64_t base;
      } u_external_port_mod_2;
      u_external_port_mod_2.real = this->external_port_mod_2;
      *(outbuffer + offset + 0) = (u_external_port_mod_2.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_external_port_mod_2.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_external_port_mod_2.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_external_port_mod_2.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_external_port_mod_2.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_external_port_mod_2.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_external_port_mod_2.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_external_port_mod_2.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->external_port_mod_2);
      union {
        int64_t real;
        uint64_t base;
      } u_external_port_mod_3;
      u_external_port_mod_3.real = this->external_port_mod_3;
      *(outbuffer + offset + 0) = (u_external_port_mod_3.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_external_port_mod_3.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_external_port_mod_3.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_external_port_mod_3.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_external_port_mod_3.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_external_port_mod_3.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_external_port_mod_3.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_external_port_mod_3.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->external_port_mod_3);
      union {
        int64_t real;
        uint64_t base;
      } u_external_port_mod_4;
      u_external_port_mod_4.real = this->external_port_mod_4;
      *(outbuffer + offset + 0) = (u_external_port_mod_4.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_external_port_mod_4.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_external_port_mod_4.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_external_port_mod_4.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_external_port_mod_4.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_external_port_mod_4.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_external_port_mod_4.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_external_port_mod_4.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->external_port_mod_4);
      union {
        int64_t real;
        uint64_t base;
      } u_shutdown;
      u_shutdown.real = this->shutdown;
      *(outbuffer + offset + 0) = (u_shutdown.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_shutdown.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_shutdown.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_shutdown.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_shutdown.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_shutdown.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_shutdown.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_shutdown.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->shutdown);
      union {
        int64_t real;
        uint64_t base;
      } u_indirect_address_1;
      u_indirect_address_1.real = this->indirect_address_1;
      *(outbuffer + offset + 0) = (u_indirect_address_1.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_indirect_address_1.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_indirect_address_1.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_indirect_address_1.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_indirect_address_1.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_indirect_address_1.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_indirect_address_1.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_indirect_address_1.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->indirect_address_1);
      union {
        bool real;
        uint8_t base;
      } u_torque_enable;
      u_torque_enable.real = this->torque_enable;
      *(outbuffer + offset + 0) = (u_torque_enable.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->torque_enable);
      union {
        int64_t real;
        uint64_t base;
      } u_led_red;
      u_led_red.real = this->led_red;
      *(outbuffer + offset + 0) = (u_led_red.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_led_red.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_led_red.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_led_red.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_led_red.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_led_red.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_led_red.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_led_red.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->led_red);
      union {
        int64_t real;
        uint64_t base;
      } u_led_green;
      u_led_green.real = this->led_green;
      *(outbuffer + offset + 0) = (u_led_green.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_led_green.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_led_green.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_led_green.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_led_green.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_led_green.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_led_green.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_led_green.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->led_green);
      union {
        int64_t real;
        uint64_t base;
      } u_led_blue;
      u_led_blue.real = this->led_blue;
      *(outbuffer + offset + 0) = (u_led_blue.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_led_blue.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_led_blue.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_led_blue.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_led_blue.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_led_blue.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_led_blue.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_led_blue.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->led_blue);
      union {
        int64_t real;
        uint64_t base;
      } u_velocity_i_gain;
      u_velocity_i_gain.real = this->velocity_i_gain;
      *(outbuffer + offset + 0) = (u_velocity_i_gain.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_velocity_i_gain.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_velocity_i_gain.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_velocity_i_gain.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_velocity_i_gain.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_velocity_i_gain.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_velocity_i_gain.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_velocity_i_gain.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->velocity_i_gain);
      union {
        int64_t real;
        uint64_t base;
      } u_velocity_p_gain;
      u_velocity_p_gain.real = this->velocity_p_gain;
      *(outbuffer + offset + 0) = (u_velocity_p_gain.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_velocity_p_gain.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_velocity_p_gain.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_velocity_p_gain.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_velocity_p_gain.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_velocity_p_gain.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_velocity_p_gain.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_velocity_p_gain.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->velocity_p_gain);
      union {
        int64_t real;
        uint64_t base;
      } u_position_p_gain;
      u_position_p_gain.real = this->position_p_gain;
      *(outbuffer + offset + 0) = (u_position_p_gain.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_position_p_gain.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_position_p_gain.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_position_p_gain.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_position_p_gain.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_position_p_gain.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_position_p_gain.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_position_p_gain.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->position_p_gain);
      union {
        int64_t real;
        uint64_t base;
      } u_goal_position;
      u_goal_position.real = this->goal_position;
      *(outbuffer + offset + 0) = (u_goal_position.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_goal_position.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_goal_position.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_goal_position.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_goal_position.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_goal_position.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_goal_position.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_goal_position.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->goal_position);
      union {
        int64_t real;
        uint64_t base;
      } u_goal_velocity;
      u_goal_velocity.real = this->goal_velocity;
      *(outbuffer + offset + 0) = (u_goal_velocity.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_goal_velocity.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_goal_velocity.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_goal_velocity.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_goal_velocity.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_goal_velocity.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_goal_velocity.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_goal_velocity.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->goal_velocity);
      union {
        int64_t real;
        uint64_t base;
      } u_goal_torque;
      u_goal_torque.real = this->goal_torque;
      *(outbuffer + offset + 0) = (u_goal_torque.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_goal_torque.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_goal_torque.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_goal_torque.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_goal_torque.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_goal_torque.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_goal_torque.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_goal_torque.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->goal_torque);
      union {
        int64_t real;
        uint64_t base;
      } u_goal_acceleration;
      u_goal_acceleration.real = this->goal_acceleration;
      *(outbuffer + offset + 0) = (u_goal_acceleration.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_goal_acceleration.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_goal_acceleration.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_goal_acceleration.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_goal_acceleration.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_goal_acceleration.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_goal_acceleration.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_goal_acceleration.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->goal_acceleration);
      union {
        bool real;
        uint8_t base;
      } u_is_moving;
      u_is_moving.real = this->is_moving;
      *(outbuffer + offset + 0) = (u_is_moving.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->is_moving);
      union {
        int64_t real;
        uint64_t base;
      } u_present_position;
      u_present_position.real = this->present_position;
      *(outbuffer + offset + 0) = (u_present_position.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_present_position.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_present_position.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_present_position.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_present_position.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_present_position.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_present_position.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_present_position.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->present_position);
      union {
        int64_t real;
        uint64_t base;
      } u_present_velocity;
      u_present_velocity.real = this->present_velocity;
      *(outbuffer + offset + 0) = (u_present_velocity.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_present_velocity.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_present_velocity.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_present_velocity.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_present_velocity.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_present_velocity.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_present_velocity.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_present_velocity.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->present_velocity);
      union {
        int64_t real;
        uint64_t base;
      } u_present_current;
      u_present_current.real = this->present_current;
      *(outbuffer + offset + 0) = (u_present_current.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_present_current.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_present_current.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_present_current.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_present_current.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_present_current.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_present_current.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_present_current.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->present_current);
      union {
        int64_t real;
        uint64_t base;
      } u_present_voltage;
      u_present_voltage.real = this->present_voltage;
      *(outbuffer + offset + 0) = (u_present_voltage.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_present_voltage.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_present_voltage.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_present_voltage.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_present_voltage.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_present_voltage.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_present_voltage.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_present_voltage.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->present_voltage);
      union {
        int64_t real;
        uint64_t base;
      } u_present_temperature;
      u_present_temperature.real = this->present_temperature;
      *(outbuffer + offset + 0) = (u_present_temperature.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_present_temperature.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_present_temperature.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_present_temperature.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_present_temperature.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_present_temperature.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_present_temperature.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_present_temperature.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->present_temperature);
      union {
        int64_t real;
        uint64_t base;
      } u_external_port_data_1;
      u_external_port_data_1.real = this->external_port_data_1;
      *(outbuffer + offset + 0) = (u_external_port_data_1.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_external_port_data_1.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_external_port_data_1.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_external_port_data_1.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_external_port_data_1.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_external_port_data_1.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_external_port_data_1.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_external_port_data_1.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->external_port_data_1);
      union {
        int64_t real;
        uint64_t base;
      } u_external_port_data_2;
      u_external_port_data_2.real = this->external_port_data_2;
      *(outbuffer + offset + 0) = (u_external_port_data_2.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_external_port_data_2.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_external_port_data_2.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_external_port_data_2.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_external_port_data_2.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_external_port_data_2.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_external_port_data_2.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_external_port_data_2.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->external_port_data_2);
      union {
        int64_t real;
        uint64_t base;
      } u_external_port_data_3;
      u_external_port_data_3.real = this->external_port_data_3;
      *(outbuffer + offset + 0) = (u_external_port_data_3.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_external_port_data_3.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_external_port_data_3.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_external_port_data_3.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_external_port_data_3.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_external_port_data_3.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_external_port_data_3.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_external_port_data_3.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->external_port_data_3);
      union {
        int64_t real;
        uint64_t base;
      } u_external_port_data_4;
      u_external_port_data_4.real = this->external_port_data_4;
      *(outbuffer + offset + 0) = (u_external_port_data_4.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_external_port_data_4.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_external_port_data_4.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_external_port_data_4.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_external_port_data_4.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_external_port_data_4.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_external_port_data_4.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_external_port_data_4.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->external_port_data_4);
      union {
        int64_t real;
        uint64_t base;
      } u_indirect_data_1;
      u_indirect_data_1.real = this->indirect_data_1;
      *(outbuffer + offset + 0) = (u_indirect_data_1.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_indirect_data_1.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_indirect_data_1.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_indirect_data_1.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_indirect_data_1.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_indirect_data_1.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_indirect_data_1.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_indirect_data_1.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->indirect_data_1);
      union {
        bool real;
        uint8_t base;
      } u_registered_instruction;
      u_registered_instruction.real = this->registered_instruction;
      *(outbuffer + offset + 0) = (u_registered_instruction.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->registered_instruction);
      union {
        int64_t real;
        uint64_t base;
      } u_status_return_level;
      u_status_return_level.real = this->status_return_level;
      *(outbuffer + offset + 0) = (u_status_return_level.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_status_return_level.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_status_return_level.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_status_return_level.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_status_return_level.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_status_return_level.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_status_return_level.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_status_return_level.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->status_return_level);
      union {
        int64_t real;
        uint64_t base;
      } u_hardware_error_status;
      u_hardware_error_status.real = this->hardware_error_status;
      *(outbuffer + offset + 0) = (u_hardware_error_status.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_hardware_error_status.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_hardware_error_status.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_hardware_error_status.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_hardware_error_status.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_hardware_error_status.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_hardware_error_status.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_hardware_error_status.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->hardware_error_status);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        int64_t real;
        uint64_t base;
      } u_model_number;
      u_model_number.base = 0;
      u_model_number.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_model_number.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_model_number.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_model_number.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_model_number.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_model_number.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_model_number.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_model_number.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->model_number = u_model_number.real;
      offset += sizeof(this->model_number);
      union {
        int64_t real;
        uint64_t base;
      } u_version_of_firmware;
      u_version_of_firmware.base = 0;
      u_version_of_firmware.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_version_of_firmware.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_version_of_firmware.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_version_of_firmware.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_version_of_firmware.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_version_of_firmware.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_version_of_firmware.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_version_of_firmware.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->version_of_firmware = u_version_of_firmware.real;
      offset += sizeof(this->version_of_firmware);
      union {
        int8_t real;
        uint8_t base;
      } u_id;
      u_id.base = 0;
      u_id.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->id = u_id.real;
      offset += sizeof(this->id);
      union {
        int64_t real;
        uint64_t base;
      } u_baud_rate;
      u_baud_rate.base = 0;
      u_baud_rate.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_baud_rate.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_baud_rate.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_baud_rate.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_baud_rate.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_baud_rate.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_baud_rate.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_baud_rate.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->baud_rate = u_baud_rate.real;
      offset += sizeof(this->baud_rate);
      union {
        int64_t real;
        uint64_t base;
      } u_return_delay_time;
      u_return_delay_time.base = 0;
      u_return_delay_time.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_return_delay_time.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_return_delay_time.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_return_delay_time.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_return_delay_time.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_return_delay_time.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_return_delay_time.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_return_delay_time.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->return_delay_time = u_return_delay_time.real;
      offset += sizeof(this->return_delay_time);
      union {
        int64_t real;
        uint64_t base;
      } u_operating_mode;
      u_operating_mode.base = 0;
      u_operating_mode.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_operating_mode.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_operating_mode.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_operating_mode.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_operating_mode.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_operating_mode.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_operating_mode.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_operating_mode.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->operating_mode = u_operating_mode.real;
      offset += sizeof(this->operating_mode);
      union {
        int64_t real;
        uint64_t base;
      } u_homing_offset;
      u_homing_offset.base = 0;
      u_homing_offset.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_homing_offset.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_homing_offset.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_homing_offset.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_homing_offset.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_homing_offset.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_homing_offset.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_homing_offset.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->homing_offset = u_homing_offset.real;
      offset += sizeof(this->homing_offset);
      union {
        int64_t real;
        uint64_t base;
      } u_moving_threshold;
      u_moving_threshold.base = 0;
      u_moving_threshold.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_moving_threshold.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_moving_threshold.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_moving_threshold.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_moving_threshold.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_moving_threshold.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_moving_threshold.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_moving_threshold.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->moving_threshold = u_moving_threshold.real;
      offset += sizeof(this->moving_threshold);
      union {
        int64_t real;
        uint64_t base;
      } u_max_temperature_limit;
      u_max_temperature_limit.base = 0;
      u_max_temperature_limit.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_max_temperature_limit.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_max_temperature_limit.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_max_temperature_limit.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_max_temperature_limit.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_max_temperature_limit.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_max_temperature_limit.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_max_temperature_limit.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->max_temperature_limit = u_max_temperature_limit.real;
      offset += sizeof(this->max_temperature_limit);
      union {
        int64_t real;
        uint64_t base;
      } u_max_voltage_limit;
      u_max_voltage_limit.base = 0;
      u_max_voltage_limit.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_max_voltage_limit.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_max_voltage_limit.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_max_voltage_limit.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_max_voltage_limit.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_max_voltage_limit.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_max_voltage_limit.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_max_voltage_limit.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->max_voltage_limit = u_max_voltage_limit.real;
      offset += sizeof(this->max_voltage_limit);
      union {
        int64_t real;
        uint64_t base;
      } u_min_voltage_limit;
      u_min_voltage_limit.base = 0;
      u_min_voltage_limit.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_min_voltage_limit.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_min_voltage_limit.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_min_voltage_limit.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_min_voltage_limit.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_min_voltage_limit.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_min_voltage_limit.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_min_voltage_limit.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->min_voltage_limit = u_min_voltage_limit.real;
      offset += sizeof(this->min_voltage_limit);
      union {
        int64_t real;
        uint64_t base;
      } u_acceleration_limit;
      u_acceleration_limit.base = 0;
      u_acceleration_limit.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_acceleration_limit.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_acceleration_limit.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_acceleration_limit.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_acceleration_limit.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_acceleration_limit.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_acceleration_limit.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_acceleration_limit.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->acceleration_limit = u_acceleration_limit.real;
      offset += sizeof(this->acceleration_limit);
      union {
        int64_t real;
        uint64_t base;
      } u_torque_limit;
      u_torque_limit.base = 0;
      u_torque_limit.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_torque_limit.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_torque_limit.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_torque_limit.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_torque_limit.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_torque_limit.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_torque_limit.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_torque_limit.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->torque_limit = u_torque_limit.real;
      offset += sizeof(this->torque_limit);
      union {
        int64_t real;
        uint64_t base;
      } u_velocity_limit;
      u_velocity_limit.base = 0;
      u_velocity_limit.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_velocity_limit.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_velocity_limit.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_velocity_limit.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_velocity_limit.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_velocity_limit.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_velocity_limit.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_velocity_limit.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->velocity_limit = u_velocity_limit.real;
      offset += sizeof(this->velocity_limit);
      union {
        int64_t real;
        uint64_t base;
      } u_max_position_limit;
      u_max_position_limit.base = 0;
      u_max_position_limit.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_max_position_limit.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_max_position_limit.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_max_position_limit.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_max_position_limit.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_max_position_limit.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_max_position_limit.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_max_position_limit.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->max_position_limit = u_max_position_limit.real;
      offset += sizeof(this->max_position_limit);
      union {
        int64_t real;
        uint64_t base;
      } u_min_position_limit;
      u_min_position_limit.base = 0;
      u_min_position_limit.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_min_position_limit.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_min_position_limit.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_min_position_limit.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_min_position_limit.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_min_position_limit.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_min_position_limit.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_min_position_limit.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->min_position_limit = u_min_position_limit.real;
      offset += sizeof(this->min_position_limit);
      union {
        int64_t real;
        uint64_t base;
      } u_external_port_mod_1;
      u_external_port_mod_1.base = 0;
      u_external_port_mod_1.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_external_port_mod_1.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_external_port_mod_1.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_external_port_mod_1.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_external_port_mod_1.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_external_port_mod_1.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_external_port_mod_1.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_external_port_mod_1.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->external_port_mod_1 = u_external_port_mod_1.real;
      offset += sizeof(this->external_port_mod_1);
      union {
        int64_t real;
        uint64_t base;
      } u_external_port_mod_2;
      u_external_port_mod_2.base = 0;
      u_external_port_mod_2.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_external_port_mod_2.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_external_port_mod_2.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_external_port_mod_2.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_external_port_mod_2.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_external_port_mod_2.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_external_port_mod_2.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_external_port_mod_2.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->external_port_mod_2 = u_external_port_mod_2.real;
      offset += sizeof(this->external_port_mod_2);
      union {
        int64_t real;
        uint64_t base;
      } u_external_port_mod_3;
      u_external_port_mod_3.base = 0;
      u_external_port_mod_3.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_external_port_mod_3.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_external_port_mod_3.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_external_port_mod_3.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_external_port_mod_3.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_external_port_mod_3.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_external_port_mod_3.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_external_port_mod_3.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->external_port_mod_3 = u_external_port_mod_3.real;
      offset += sizeof(this->external_port_mod_3);
      union {
        int64_t real;
        uint64_t base;
      } u_external_port_mod_4;
      u_external_port_mod_4.base = 0;
      u_external_port_mod_4.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_external_port_mod_4.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_external_port_mod_4.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_external_port_mod_4.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_external_port_mod_4.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_external_port_mod_4.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_external_port_mod_4.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_external_port_mod_4.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->external_port_mod_4 = u_external_port_mod_4.real;
      offset += sizeof(this->external_port_mod_4);
      union {
        int64_t real;
        uint64_t base;
      } u_shutdown;
      u_shutdown.base = 0;
      u_shutdown.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_shutdown.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_shutdown.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_shutdown.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_shutdown.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_shutdown.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_shutdown.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_shutdown.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->shutdown = u_shutdown.real;
      offset += sizeof(this->shutdown);
      union {
        int64_t real;
        uint64_t base;
      } u_indirect_address_1;
      u_indirect_address_1.base = 0;
      u_indirect_address_1.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_indirect_address_1.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_indirect_address_1.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_indirect_address_1.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_indirect_address_1.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_indirect_address_1.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_indirect_address_1.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_indirect_address_1.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->indirect_address_1 = u_indirect_address_1.real;
      offset += sizeof(this->indirect_address_1);
      union {
        bool real;
        uint8_t base;
      } u_torque_enable;
      u_torque_enable.base = 0;
      u_torque_enable.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->torque_enable = u_torque_enable.real;
      offset += sizeof(this->torque_enable);
      union {
        int64_t real;
        uint64_t base;
      } u_led_red;
      u_led_red.base = 0;
      u_led_red.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_led_red.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_led_red.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_led_red.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_led_red.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_led_red.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_led_red.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_led_red.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->led_red = u_led_red.real;
      offset += sizeof(this->led_red);
      union {
        int64_t real;
        uint64_t base;
      } u_led_green;
      u_led_green.base = 0;
      u_led_green.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_led_green.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_led_green.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_led_green.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_led_green.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_led_green.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_led_green.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_led_green.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->led_green = u_led_green.real;
      offset += sizeof(this->led_green);
      union {
        int64_t real;
        uint64_t base;
      } u_led_blue;
      u_led_blue.base = 0;
      u_led_blue.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_led_blue.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_led_blue.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_led_blue.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_led_blue.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_led_blue.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_led_blue.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_led_blue.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->led_blue = u_led_blue.real;
      offset += sizeof(this->led_blue);
      union {
        int64_t real;
        uint64_t base;
      } u_velocity_i_gain;
      u_velocity_i_gain.base = 0;
      u_velocity_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_velocity_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_velocity_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_velocity_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_velocity_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_velocity_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_velocity_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_velocity_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->velocity_i_gain = u_velocity_i_gain.real;
      offset += sizeof(this->velocity_i_gain);
      union {
        int64_t real;
        uint64_t base;
      } u_velocity_p_gain;
      u_velocity_p_gain.base = 0;
      u_velocity_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_velocity_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_velocity_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_velocity_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_velocity_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_velocity_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_velocity_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_velocity_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->velocity_p_gain = u_velocity_p_gain.real;
      offset += sizeof(this->velocity_p_gain);
      union {
        int64_t real;
        uint64_t base;
      } u_position_p_gain;
      u_position_p_gain.base = 0;
      u_position_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_position_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_position_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_position_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_position_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_position_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_position_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_position_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->position_p_gain = u_position_p_gain.real;
      offset += sizeof(this->position_p_gain);
      union {
        int64_t real;
        uint64_t base;
      } u_goal_position;
      u_goal_position.base = 0;
      u_goal_position.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_goal_position.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_goal_position.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_goal_position.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_goal_position.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_goal_position.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_goal_position.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_goal_position.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->goal_position = u_goal_position.real;
      offset += sizeof(this->goal_position);
      union {
        int64_t real;
        uint64_t base;
      } u_goal_velocity;
      u_goal_velocity.base = 0;
      u_goal_velocity.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_goal_velocity.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_goal_velocity.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_goal_velocity.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_goal_velocity.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_goal_velocity.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_goal_velocity.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_goal_velocity.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->goal_velocity = u_goal_velocity.real;
      offset += sizeof(this->goal_velocity);
      union {
        int64_t real;
        uint64_t base;
      } u_goal_torque;
      u_goal_torque.base = 0;
      u_goal_torque.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_goal_torque.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_goal_torque.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_goal_torque.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_goal_torque.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_goal_torque.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_goal_torque.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_goal_torque.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->goal_torque = u_goal_torque.real;
      offset += sizeof(this->goal_torque);
      union {
        int64_t real;
        uint64_t base;
      } u_goal_acceleration;
      u_goal_acceleration.base = 0;
      u_goal_acceleration.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_goal_acceleration.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_goal_acceleration.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_goal_acceleration.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_goal_acceleration.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_goal_acceleration.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_goal_acceleration.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_goal_acceleration.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->goal_acceleration = u_goal_acceleration.real;
      offset += sizeof(this->goal_acceleration);
      union {
        bool real;
        uint8_t base;
      } u_is_moving;
      u_is_moving.base = 0;
      u_is_moving.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->is_moving = u_is_moving.real;
      offset += sizeof(this->is_moving);
      union {
        int64_t real;
        uint64_t base;
      } u_present_position;
      u_present_position.base = 0;
      u_present_position.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_present_position.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_present_position.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_present_position.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_present_position.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_present_position.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_present_position.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_present_position.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->present_position = u_present_position.real;
      offset += sizeof(this->present_position);
      union {
        int64_t real;
        uint64_t base;
      } u_present_velocity;
      u_present_velocity.base = 0;
      u_present_velocity.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_present_velocity.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_present_velocity.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_present_velocity.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_present_velocity.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_present_velocity.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_present_velocity.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_present_velocity.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->present_velocity = u_present_velocity.real;
      offset += sizeof(this->present_velocity);
      union {
        int64_t real;
        uint64_t base;
      } u_present_current;
      u_present_current.base = 0;
      u_present_current.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_present_current.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_present_current.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_present_current.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_present_current.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_present_current.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_present_current.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_present_current.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->present_current = u_present_current.real;
      offset += sizeof(this->present_current);
      union {
        int64_t real;
        uint64_t base;
      } u_present_voltage;
      u_present_voltage.base = 0;
      u_present_voltage.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_present_voltage.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_present_voltage.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_present_voltage.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_present_voltage.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_present_voltage.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_present_voltage.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_present_voltage.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->present_voltage = u_present_voltage.real;
      offset += sizeof(this->present_voltage);
      union {
        int64_t real;
        uint64_t base;
      } u_present_temperature;
      u_present_temperature.base = 0;
      u_present_temperature.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_present_temperature.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_present_temperature.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_present_temperature.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_present_temperature.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_present_temperature.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_present_temperature.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_present_temperature.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->present_temperature = u_present_temperature.real;
      offset += sizeof(this->present_temperature);
      union {
        int64_t real;
        uint64_t base;
      } u_external_port_data_1;
      u_external_port_data_1.base = 0;
      u_external_port_data_1.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_external_port_data_1.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_external_port_data_1.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_external_port_data_1.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_external_port_data_1.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_external_port_data_1.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_external_port_data_1.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_external_port_data_1.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->external_port_data_1 = u_external_port_data_1.real;
      offset += sizeof(this->external_port_data_1);
      union {
        int64_t real;
        uint64_t base;
      } u_external_port_data_2;
      u_external_port_data_2.base = 0;
      u_external_port_data_2.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_external_port_data_2.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_external_port_data_2.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_external_port_data_2.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_external_port_data_2.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_external_port_data_2.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_external_port_data_2.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_external_port_data_2.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->external_port_data_2 = u_external_port_data_2.real;
      offset += sizeof(this->external_port_data_2);
      union {
        int64_t real;
        uint64_t base;
      } u_external_port_data_3;
      u_external_port_data_3.base = 0;
      u_external_port_data_3.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_external_port_data_3.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_external_port_data_3.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_external_port_data_3.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_external_port_data_3.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_external_port_data_3.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_external_port_data_3.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_external_port_data_3.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->external_port_data_3 = u_external_port_data_3.real;
      offset += sizeof(this->external_port_data_3);
      union {
        int64_t real;
        uint64_t base;
      } u_external_port_data_4;
      u_external_port_data_4.base = 0;
      u_external_port_data_4.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_external_port_data_4.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_external_port_data_4.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_external_port_data_4.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_external_port_data_4.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_external_port_data_4.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_external_port_data_4.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_external_port_data_4.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->external_port_data_4 = u_external_port_data_4.real;
      offset += sizeof(this->external_port_data_4);
      union {
        int64_t real;
        uint64_t base;
      } u_indirect_data_1;
      u_indirect_data_1.base = 0;
      u_indirect_data_1.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_indirect_data_1.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_indirect_data_1.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_indirect_data_1.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_indirect_data_1.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_indirect_data_1.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_indirect_data_1.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_indirect_data_1.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->indirect_data_1 = u_indirect_data_1.real;
      offset += sizeof(this->indirect_data_1);
      union {
        bool real;
        uint8_t base;
      } u_registered_instruction;
      u_registered_instruction.base = 0;
      u_registered_instruction.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->registered_instruction = u_registered_instruction.real;
      offset += sizeof(this->registered_instruction);
      union {
        int64_t real;
        uint64_t base;
      } u_status_return_level;
      u_status_return_level.base = 0;
      u_status_return_level.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_status_return_level.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_status_return_level.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_status_return_level.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_status_return_level.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_status_return_level.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_status_return_level.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_status_return_level.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->status_return_level = u_status_return_level.real;
      offset += sizeof(this->status_return_level);
      union {
        int64_t real;
        uint64_t base;
      } u_hardware_error_status;
      u_hardware_error_status.base = 0;
      u_hardware_error_status.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_hardware_error_status.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_hardware_error_status.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_hardware_error_status.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_hardware_error_status.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_hardware_error_status.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_hardware_error_status.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_hardware_error_status.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->hardware_error_status = u_hardware_error_status.real;
      offset += sizeof(this->hardware_error_status);
     return offset;
    }

    const char * getType(){ return "dynamixel_workbench_msgs/DynamixelPro"; };
    const char * getMD5(){ return "0397870706bddfb18e2f944c6d5a0ed1"; };

  };

}
#endif