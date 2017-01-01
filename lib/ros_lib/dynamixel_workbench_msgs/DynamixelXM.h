#ifndef _ROS_dynamixel_workbench_msgs_DynamixelXM_h
#define _ROS_dynamixel_workbench_msgs_DynamixelXM_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace dynamixel_workbench_msgs
{

  class DynamixelXM : public ros::Msg
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
      typedef int64_t _drive_mode_type;
      _drive_mode_type drive_mode;
      typedef int64_t _operating_mode_type;
      _operating_mode_type operating_mode;
      typedef int64_t _protocol_version_type;
      _protocol_version_type protocol_version;
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
      typedef int64_t _pwm_limit_type;
      _pwm_limit_type pwm_limit;
      typedef int64_t _current_limit_type;
      _current_limit_type current_limit;
      typedef int64_t _acceleration_limit_type;
      _acceleration_limit_type acceleration_limit;
      typedef int64_t _velocity_limit_type;
      _velocity_limit_type velocity_limit;
      typedef int64_t _max_position_limit_type;
      _max_position_limit_type max_position_limit;
      typedef int64_t _min_position_limit_type;
      _min_position_limit_type min_position_limit;
      typedef int64_t _shutdown_type;
      _shutdown_type shutdown;
      typedef bool _torque_enable_type;
      _torque_enable_type torque_enable;
      typedef bool _led_type;
      _led_type led;
      typedef int64_t _status_return_level_type;
      _status_return_level_type status_return_level;
      typedef int64_t _registered_instruction_type;
      _registered_instruction_type registered_instruction;
      typedef int64_t _hardware_error_status_type;
      _hardware_error_status_type hardware_error_status;
      typedef int64_t _velocity_i_gain_type;
      _velocity_i_gain_type velocity_i_gain;
      typedef int64_t _velocity_p_gain_type;
      _velocity_p_gain_type velocity_p_gain;
      typedef int64_t _position_d_gain_type;
      _position_d_gain_type position_d_gain;
      typedef int64_t _position_i_gain_type;
      _position_i_gain_type position_i_gain;
      typedef int64_t _position_p_gain_type;
      _position_p_gain_type position_p_gain;
      typedef int64_t _feedforward_2nd_gain_type;
      _feedforward_2nd_gain_type feedforward_2nd_gain;
      typedef int64_t _feedforward_1st_gain_type;
      _feedforward_1st_gain_type feedforward_1st_gain;
      typedef int64_t _goal_pwm_type;
      _goal_pwm_type goal_pwm;
      typedef int64_t _goal_current_type;
      _goal_current_type goal_current;
      typedef int64_t _goal_velocity_type;
      _goal_velocity_type goal_velocity;
      typedef int64_t _profile_acceleration_type;
      _profile_acceleration_type profile_acceleration;
      typedef int64_t _profile_velocity_type;
      _profile_velocity_type profile_velocity;
      typedef int64_t _goal_position_type;
      _goal_position_type goal_position;
      typedef int64_t _realtime_tick_type;
      _realtime_tick_type realtime_tick;
      typedef bool _moving_type;
      _moving_type moving;
      typedef int64_t _moving_status_type;
      _moving_status_type moving_status;
      typedef int64_t _present_pwm_type;
      _present_pwm_type present_pwm;
      typedef int64_t _present_current_type;
      _present_current_type present_current;
      typedef int64_t _present_velocity_type;
      _present_velocity_type present_velocity;
      typedef int64_t _present_position_type;
      _present_position_type present_position;
      typedef int64_t _velocity_trajectory_type;
      _velocity_trajectory_type velocity_trajectory;
      typedef int64_t _position_trajectory_type;
      _position_trajectory_type position_trajectory;
      typedef int64_t _present_input_voltage_type;
      _present_input_voltage_type present_input_voltage;
      typedef int64_t _present_temperature_type;
      _present_temperature_type present_temperature;

    DynamixelXM():
      model_number(0),
      version_of_firmware(0),
      id(0),
      baud_rate(0),
      return_delay_time(0),
      drive_mode(0),
      operating_mode(0),
      protocol_version(0),
      homing_offset(0),
      moving_threshold(0),
      max_temperature_limit(0),
      max_voltage_limit(0),
      min_voltage_limit(0),
      pwm_limit(0),
      current_limit(0),
      acceleration_limit(0),
      velocity_limit(0),
      max_position_limit(0),
      min_position_limit(0),
      shutdown(0),
      torque_enable(0),
      led(0),
      status_return_level(0),
      registered_instruction(0),
      hardware_error_status(0),
      velocity_i_gain(0),
      velocity_p_gain(0),
      position_d_gain(0),
      position_i_gain(0),
      position_p_gain(0),
      feedforward_2nd_gain(0),
      feedforward_1st_gain(0),
      goal_pwm(0),
      goal_current(0),
      goal_velocity(0),
      profile_acceleration(0),
      profile_velocity(0),
      goal_position(0),
      realtime_tick(0),
      moving(0),
      moving_status(0),
      present_pwm(0),
      present_current(0),
      present_velocity(0),
      present_position(0),
      velocity_trajectory(0),
      position_trajectory(0),
      present_input_voltage(0),
      present_temperature(0)
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
      } u_drive_mode;
      u_drive_mode.real = this->drive_mode;
      *(outbuffer + offset + 0) = (u_drive_mode.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_drive_mode.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_drive_mode.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_drive_mode.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_drive_mode.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_drive_mode.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_drive_mode.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_drive_mode.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->drive_mode);
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
      } u_protocol_version;
      u_protocol_version.real = this->protocol_version;
      *(outbuffer + offset + 0) = (u_protocol_version.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_protocol_version.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_protocol_version.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_protocol_version.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_protocol_version.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_protocol_version.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_protocol_version.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_protocol_version.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->protocol_version);
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
      } u_pwm_limit;
      u_pwm_limit.real = this->pwm_limit;
      *(outbuffer + offset + 0) = (u_pwm_limit.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pwm_limit.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pwm_limit.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pwm_limit.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pwm_limit.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pwm_limit.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pwm_limit.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pwm_limit.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pwm_limit);
      union {
        int64_t real;
        uint64_t base;
      } u_current_limit;
      u_current_limit.real = this->current_limit;
      *(outbuffer + offset + 0) = (u_current_limit.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_current_limit.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_current_limit.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_current_limit.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_current_limit.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_current_limit.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_current_limit.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_current_limit.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->current_limit);
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
        bool real;
        uint8_t base;
      } u_torque_enable;
      u_torque_enable.real = this->torque_enable;
      *(outbuffer + offset + 0) = (u_torque_enable.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->torque_enable);
      union {
        bool real;
        uint8_t base;
      } u_led;
      u_led.real = this->led;
      *(outbuffer + offset + 0) = (u_led.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->led);
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
      } u_registered_instruction;
      u_registered_instruction.real = this->registered_instruction;
      *(outbuffer + offset + 0) = (u_registered_instruction.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_registered_instruction.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_registered_instruction.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_registered_instruction.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_registered_instruction.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_registered_instruction.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_registered_instruction.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_registered_instruction.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->registered_instruction);
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
      } u_position_d_gain;
      u_position_d_gain.real = this->position_d_gain;
      *(outbuffer + offset + 0) = (u_position_d_gain.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_position_d_gain.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_position_d_gain.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_position_d_gain.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_position_d_gain.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_position_d_gain.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_position_d_gain.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_position_d_gain.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->position_d_gain);
      union {
        int64_t real;
        uint64_t base;
      } u_position_i_gain;
      u_position_i_gain.real = this->position_i_gain;
      *(outbuffer + offset + 0) = (u_position_i_gain.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_position_i_gain.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_position_i_gain.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_position_i_gain.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_position_i_gain.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_position_i_gain.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_position_i_gain.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_position_i_gain.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->position_i_gain);
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
      } u_feedforward_2nd_gain;
      u_feedforward_2nd_gain.real = this->feedforward_2nd_gain;
      *(outbuffer + offset + 0) = (u_feedforward_2nd_gain.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_feedforward_2nd_gain.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_feedforward_2nd_gain.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_feedforward_2nd_gain.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_feedforward_2nd_gain.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_feedforward_2nd_gain.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_feedforward_2nd_gain.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_feedforward_2nd_gain.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->feedforward_2nd_gain);
      union {
        int64_t real;
        uint64_t base;
      } u_feedforward_1st_gain;
      u_feedforward_1st_gain.real = this->feedforward_1st_gain;
      *(outbuffer + offset + 0) = (u_feedforward_1st_gain.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_feedforward_1st_gain.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_feedforward_1st_gain.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_feedforward_1st_gain.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_feedforward_1st_gain.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_feedforward_1st_gain.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_feedforward_1st_gain.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_feedforward_1st_gain.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->feedforward_1st_gain);
      union {
        int64_t real;
        uint64_t base;
      } u_goal_pwm;
      u_goal_pwm.real = this->goal_pwm;
      *(outbuffer + offset + 0) = (u_goal_pwm.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_goal_pwm.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_goal_pwm.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_goal_pwm.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_goal_pwm.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_goal_pwm.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_goal_pwm.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_goal_pwm.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->goal_pwm);
      union {
        int64_t real;
        uint64_t base;
      } u_goal_current;
      u_goal_current.real = this->goal_current;
      *(outbuffer + offset + 0) = (u_goal_current.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_goal_current.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_goal_current.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_goal_current.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_goal_current.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_goal_current.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_goal_current.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_goal_current.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->goal_current);
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
      } u_profile_acceleration;
      u_profile_acceleration.real = this->profile_acceleration;
      *(outbuffer + offset + 0) = (u_profile_acceleration.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_profile_acceleration.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_profile_acceleration.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_profile_acceleration.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_profile_acceleration.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_profile_acceleration.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_profile_acceleration.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_profile_acceleration.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->profile_acceleration);
      union {
        int64_t real;
        uint64_t base;
      } u_profile_velocity;
      u_profile_velocity.real = this->profile_velocity;
      *(outbuffer + offset + 0) = (u_profile_velocity.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_profile_velocity.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_profile_velocity.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_profile_velocity.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_profile_velocity.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_profile_velocity.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_profile_velocity.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_profile_velocity.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->profile_velocity);
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
      } u_realtime_tick;
      u_realtime_tick.real = this->realtime_tick;
      *(outbuffer + offset + 0) = (u_realtime_tick.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_realtime_tick.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_realtime_tick.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_realtime_tick.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_realtime_tick.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_realtime_tick.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_realtime_tick.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_realtime_tick.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->realtime_tick);
      union {
        bool real;
        uint8_t base;
      } u_moving;
      u_moving.real = this->moving;
      *(outbuffer + offset + 0) = (u_moving.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->moving);
      union {
        int64_t real;
        uint64_t base;
      } u_moving_status;
      u_moving_status.real = this->moving_status;
      *(outbuffer + offset + 0) = (u_moving_status.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_moving_status.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_moving_status.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_moving_status.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_moving_status.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_moving_status.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_moving_status.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_moving_status.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->moving_status);
      union {
        int64_t real;
        uint64_t base;
      } u_present_pwm;
      u_present_pwm.real = this->present_pwm;
      *(outbuffer + offset + 0) = (u_present_pwm.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_present_pwm.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_present_pwm.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_present_pwm.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_present_pwm.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_present_pwm.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_present_pwm.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_present_pwm.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->present_pwm);
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
      } u_velocity_trajectory;
      u_velocity_trajectory.real = this->velocity_trajectory;
      *(outbuffer + offset + 0) = (u_velocity_trajectory.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_velocity_trajectory.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_velocity_trajectory.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_velocity_trajectory.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_velocity_trajectory.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_velocity_trajectory.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_velocity_trajectory.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_velocity_trajectory.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->velocity_trajectory);
      union {
        int64_t real;
        uint64_t base;
      } u_position_trajectory;
      u_position_trajectory.real = this->position_trajectory;
      *(outbuffer + offset + 0) = (u_position_trajectory.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_position_trajectory.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_position_trajectory.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_position_trajectory.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_position_trajectory.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_position_trajectory.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_position_trajectory.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_position_trajectory.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->position_trajectory);
      union {
        int64_t real;
        uint64_t base;
      } u_present_input_voltage;
      u_present_input_voltage.real = this->present_input_voltage;
      *(outbuffer + offset + 0) = (u_present_input_voltage.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_present_input_voltage.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_present_input_voltage.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_present_input_voltage.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_present_input_voltage.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_present_input_voltage.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_present_input_voltage.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_present_input_voltage.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->present_input_voltage);
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
      } u_drive_mode;
      u_drive_mode.base = 0;
      u_drive_mode.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_drive_mode.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_drive_mode.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_drive_mode.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_drive_mode.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_drive_mode.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_drive_mode.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_drive_mode.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->drive_mode = u_drive_mode.real;
      offset += sizeof(this->drive_mode);
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
      } u_protocol_version;
      u_protocol_version.base = 0;
      u_protocol_version.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_protocol_version.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_protocol_version.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_protocol_version.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_protocol_version.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_protocol_version.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_protocol_version.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_protocol_version.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->protocol_version = u_protocol_version.real;
      offset += sizeof(this->protocol_version);
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
      } u_pwm_limit;
      u_pwm_limit.base = 0;
      u_pwm_limit.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pwm_limit.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pwm_limit.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pwm_limit.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_pwm_limit.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_pwm_limit.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_pwm_limit.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_pwm_limit.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->pwm_limit = u_pwm_limit.real;
      offset += sizeof(this->pwm_limit);
      union {
        int64_t real;
        uint64_t base;
      } u_current_limit;
      u_current_limit.base = 0;
      u_current_limit.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_current_limit.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_current_limit.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_current_limit.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_current_limit.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_current_limit.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_current_limit.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_current_limit.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->current_limit = u_current_limit.real;
      offset += sizeof(this->current_limit);
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
        bool real;
        uint8_t base;
      } u_torque_enable;
      u_torque_enable.base = 0;
      u_torque_enable.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->torque_enable = u_torque_enable.real;
      offset += sizeof(this->torque_enable);
      union {
        bool real;
        uint8_t base;
      } u_led;
      u_led.base = 0;
      u_led.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->led = u_led.real;
      offset += sizeof(this->led);
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
      } u_registered_instruction;
      u_registered_instruction.base = 0;
      u_registered_instruction.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_registered_instruction.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_registered_instruction.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_registered_instruction.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_registered_instruction.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_registered_instruction.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_registered_instruction.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_registered_instruction.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->registered_instruction = u_registered_instruction.real;
      offset += sizeof(this->registered_instruction);
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
      } u_position_d_gain;
      u_position_d_gain.base = 0;
      u_position_d_gain.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_position_d_gain.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_position_d_gain.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_position_d_gain.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_position_d_gain.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_position_d_gain.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_position_d_gain.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_position_d_gain.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->position_d_gain = u_position_d_gain.real;
      offset += sizeof(this->position_d_gain);
      union {
        int64_t real;
        uint64_t base;
      } u_position_i_gain;
      u_position_i_gain.base = 0;
      u_position_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_position_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_position_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_position_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_position_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_position_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_position_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_position_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->position_i_gain = u_position_i_gain.real;
      offset += sizeof(this->position_i_gain);
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
      } u_feedforward_2nd_gain;
      u_feedforward_2nd_gain.base = 0;
      u_feedforward_2nd_gain.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_feedforward_2nd_gain.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_feedforward_2nd_gain.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_feedforward_2nd_gain.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_feedforward_2nd_gain.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_feedforward_2nd_gain.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_feedforward_2nd_gain.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_feedforward_2nd_gain.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->feedforward_2nd_gain = u_feedforward_2nd_gain.real;
      offset += sizeof(this->feedforward_2nd_gain);
      union {
        int64_t real;
        uint64_t base;
      } u_feedforward_1st_gain;
      u_feedforward_1st_gain.base = 0;
      u_feedforward_1st_gain.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_feedforward_1st_gain.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_feedforward_1st_gain.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_feedforward_1st_gain.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_feedforward_1st_gain.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_feedforward_1st_gain.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_feedforward_1st_gain.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_feedforward_1st_gain.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->feedforward_1st_gain = u_feedforward_1st_gain.real;
      offset += sizeof(this->feedforward_1st_gain);
      union {
        int64_t real;
        uint64_t base;
      } u_goal_pwm;
      u_goal_pwm.base = 0;
      u_goal_pwm.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_goal_pwm.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_goal_pwm.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_goal_pwm.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_goal_pwm.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_goal_pwm.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_goal_pwm.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_goal_pwm.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->goal_pwm = u_goal_pwm.real;
      offset += sizeof(this->goal_pwm);
      union {
        int64_t real;
        uint64_t base;
      } u_goal_current;
      u_goal_current.base = 0;
      u_goal_current.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_goal_current.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_goal_current.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_goal_current.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_goal_current.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_goal_current.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_goal_current.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_goal_current.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->goal_current = u_goal_current.real;
      offset += sizeof(this->goal_current);
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
      } u_profile_acceleration;
      u_profile_acceleration.base = 0;
      u_profile_acceleration.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_profile_acceleration.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_profile_acceleration.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_profile_acceleration.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_profile_acceleration.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_profile_acceleration.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_profile_acceleration.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_profile_acceleration.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->profile_acceleration = u_profile_acceleration.real;
      offset += sizeof(this->profile_acceleration);
      union {
        int64_t real;
        uint64_t base;
      } u_profile_velocity;
      u_profile_velocity.base = 0;
      u_profile_velocity.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_profile_velocity.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_profile_velocity.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_profile_velocity.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_profile_velocity.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_profile_velocity.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_profile_velocity.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_profile_velocity.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->profile_velocity = u_profile_velocity.real;
      offset += sizeof(this->profile_velocity);
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
      } u_realtime_tick;
      u_realtime_tick.base = 0;
      u_realtime_tick.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_realtime_tick.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_realtime_tick.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_realtime_tick.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_realtime_tick.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_realtime_tick.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_realtime_tick.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_realtime_tick.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->realtime_tick = u_realtime_tick.real;
      offset += sizeof(this->realtime_tick);
      union {
        bool real;
        uint8_t base;
      } u_moving;
      u_moving.base = 0;
      u_moving.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->moving = u_moving.real;
      offset += sizeof(this->moving);
      union {
        int64_t real;
        uint64_t base;
      } u_moving_status;
      u_moving_status.base = 0;
      u_moving_status.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_moving_status.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_moving_status.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_moving_status.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_moving_status.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_moving_status.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_moving_status.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_moving_status.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->moving_status = u_moving_status.real;
      offset += sizeof(this->moving_status);
      union {
        int64_t real;
        uint64_t base;
      } u_present_pwm;
      u_present_pwm.base = 0;
      u_present_pwm.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_present_pwm.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_present_pwm.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_present_pwm.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_present_pwm.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_present_pwm.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_present_pwm.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_present_pwm.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->present_pwm = u_present_pwm.real;
      offset += sizeof(this->present_pwm);
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
      } u_velocity_trajectory;
      u_velocity_trajectory.base = 0;
      u_velocity_trajectory.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_velocity_trajectory.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_velocity_trajectory.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_velocity_trajectory.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_velocity_trajectory.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_velocity_trajectory.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_velocity_trajectory.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_velocity_trajectory.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->velocity_trajectory = u_velocity_trajectory.real;
      offset += sizeof(this->velocity_trajectory);
      union {
        int64_t real;
        uint64_t base;
      } u_position_trajectory;
      u_position_trajectory.base = 0;
      u_position_trajectory.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_position_trajectory.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_position_trajectory.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_position_trajectory.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_position_trajectory.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_position_trajectory.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_position_trajectory.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_position_trajectory.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->position_trajectory = u_position_trajectory.real;
      offset += sizeof(this->position_trajectory);
      union {
        int64_t real;
        uint64_t base;
      } u_present_input_voltage;
      u_present_input_voltage.base = 0;
      u_present_input_voltage.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_present_input_voltage.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_present_input_voltage.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_present_input_voltage.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_present_input_voltage.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_present_input_voltage.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_present_input_voltage.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_present_input_voltage.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->present_input_voltage = u_present_input_voltage.real;
      offset += sizeof(this->present_input_voltage);
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
     return offset;
    }

    const char * getType(){ return "dynamixel_workbench_msgs/DynamixelXM"; };
    const char * getMD5(){ return "80a382afbbabb4a0e13cd96a37979ce9"; };

  };

}
#endif