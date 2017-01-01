#ifndef _ROS_dynamixel_workbench_msgs_DynamixelXL_h
#define _ROS_dynamixel_workbench_msgs_DynamixelXL_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace dynamixel_workbench_msgs
{

  class DynamixelXL : public ros::Msg
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
      typedef int64_t _cw_angle_limit_type;
      _cw_angle_limit_type cw_angle_limit;
      typedef int64_t _ccw_angle_limit_type;
      _ccw_angle_limit_type ccw_angle_limit;
      typedef int64_t _control_mode_type;
      _control_mode_type control_mode;
      typedef int64_t _limit_temperature_type;
      _limit_temperature_type limit_temperature;
      typedef int64_t _down_limit_voltage_type;
      _down_limit_voltage_type down_limit_voltage;
      typedef int64_t _up_limit_voltage_type;
      _up_limit_voltage_type up_limit_voltage;
      typedef int64_t _max_torque_type;
      _max_torque_type max_torque;
      typedef int64_t _return_level_type;
      _return_level_type return_level;
      typedef int64_t _alarm_shutdown_type;
      _alarm_shutdown_type alarm_shutdown;
      typedef bool _torque_enable_type;
      _torque_enable_type torque_enable;
      typedef int64_t _led_type;
      _led_type led;
      typedef int64_t _d_gain_type;
      _d_gain_type d_gain;
      typedef int64_t _i_gain_type;
      _i_gain_type i_gain;
      typedef int64_t _p_gain_type;
      _p_gain_type p_gain;
      typedef int64_t _goal_position_type;
      _goal_position_type goal_position;
      typedef int64_t _goal_velocity_type;
      _goal_velocity_type goal_velocity;
      typedef int64_t _goal_torque_type;
      _goal_torque_type goal_torque;
      typedef int64_t _present_position_type;
      _present_position_type present_position;
      typedef int64_t _present_velocity_type;
      _present_velocity_type present_velocity;
      typedef int64_t _present_load_type;
      _present_load_type present_load;
      typedef int64_t _present_voltage_type;
      _present_voltage_type present_voltage;
      typedef int64_t _present_temperature_type;
      _present_temperature_type present_temperature;
      typedef bool _registered_instruction_type;
      _registered_instruction_type registered_instruction;
      typedef bool _moving_type;
      _moving_type moving;
      typedef int64_t _hardware_error_status_type;
      _hardware_error_status_type hardware_error_status;
      typedef int64_t _punch_type;
      _punch_type punch;

    DynamixelXL():
      model_number(0),
      version_of_firmware(0),
      id(0),
      baud_rate(0),
      return_delay_time(0),
      cw_angle_limit(0),
      ccw_angle_limit(0),
      control_mode(0),
      limit_temperature(0),
      down_limit_voltage(0),
      up_limit_voltage(0),
      max_torque(0),
      return_level(0),
      alarm_shutdown(0),
      torque_enable(0),
      led(0),
      d_gain(0),
      i_gain(0),
      p_gain(0),
      goal_position(0),
      goal_velocity(0),
      goal_torque(0),
      present_position(0),
      present_velocity(0),
      present_load(0),
      present_voltage(0),
      present_temperature(0),
      registered_instruction(0),
      moving(0),
      hardware_error_status(0),
      punch(0)
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
      } u_cw_angle_limit;
      u_cw_angle_limit.real = this->cw_angle_limit;
      *(outbuffer + offset + 0) = (u_cw_angle_limit.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_cw_angle_limit.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_cw_angle_limit.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_cw_angle_limit.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_cw_angle_limit.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_cw_angle_limit.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_cw_angle_limit.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_cw_angle_limit.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->cw_angle_limit);
      union {
        int64_t real;
        uint64_t base;
      } u_ccw_angle_limit;
      u_ccw_angle_limit.real = this->ccw_angle_limit;
      *(outbuffer + offset + 0) = (u_ccw_angle_limit.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_ccw_angle_limit.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_ccw_angle_limit.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_ccw_angle_limit.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_ccw_angle_limit.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_ccw_angle_limit.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_ccw_angle_limit.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_ccw_angle_limit.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->ccw_angle_limit);
      union {
        int64_t real;
        uint64_t base;
      } u_control_mode;
      u_control_mode.real = this->control_mode;
      *(outbuffer + offset + 0) = (u_control_mode.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_control_mode.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_control_mode.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_control_mode.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_control_mode.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_control_mode.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_control_mode.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_control_mode.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->control_mode);
      union {
        int64_t real;
        uint64_t base;
      } u_limit_temperature;
      u_limit_temperature.real = this->limit_temperature;
      *(outbuffer + offset + 0) = (u_limit_temperature.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_limit_temperature.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_limit_temperature.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_limit_temperature.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_limit_temperature.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_limit_temperature.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_limit_temperature.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_limit_temperature.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->limit_temperature);
      union {
        int64_t real;
        uint64_t base;
      } u_down_limit_voltage;
      u_down_limit_voltage.real = this->down_limit_voltage;
      *(outbuffer + offset + 0) = (u_down_limit_voltage.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_down_limit_voltage.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_down_limit_voltage.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_down_limit_voltage.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_down_limit_voltage.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_down_limit_voltage.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_down_limit_voltage.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_down_limit_voltage.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->down_limit_voltage);
      union {
        int64_t real;
        uint64_t base;
      } u_up_limit_voltage;
      u_up_limit_voltage.real = this->up_limit_voltage;
      *(outbuffer + offset + 0) = (u_up_limit_voltage.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_up_limit_voltage.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_up_limit_voltage.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_up_limit_voltage.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_up_limit_voltage.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_up_limit_voltage.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_up_limit_voltage.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_up_limit_voltage.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->up_limit_voltage);
      union {
        int64_t real;
        uint64_t base;
      } u_max_torque;
      u_max_torque.real = this->max_torque;
      *(outbuffer + offset + 0) = (u_max_torque.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_max_torque.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_max_torque.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_max_torque.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_max_torque.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_max_torque.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_max_torque.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_max_torque.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->max_torque);
      union {
        int64_t real;
        uint64_t base;
      } u_return_level;
      u_return_level.real = this->return_level;
      *(outbuffer + offset + 0) = (u_return_level.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_return_level.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_return_level.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_return_level.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_return_level.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_return_level.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_return_level.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_return_level.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->return_level);
      union {
        int64_t real;
        uint64_t base;
      } u_alarm_shutdown;
      u_alarm_shutdown.real = this->alarm_shutdown;
      *(outbuffer + offset + 0) = (u_alarm_shutdown.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_alarm_shutdown.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_alarm_shutdown.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_alarm_shutdown.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_alarm_shutdown.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_alarm_shutdown.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_alarm_shutdown.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_alarm_shutdown.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->alarm_shutdown);
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
      } u_led;
      u_led.real = this->led;
      *(outbuffer + offset + 0) = (u_led.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_led.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_led.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_led.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_led.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_led.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_led.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_led.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->led);
      union {
        int64_t real;
        uint64_t base;
      } u_d_gain;
      u_d_gain.real = this->d_gain;
      *(outbuffer + offset + 0) = (u_d_gain.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_d_gain.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_d_gain.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_d_gain.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_d_gain.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_d_gain.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_d_gain.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_d_gain.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->d_gain);
      union {
        int64_t real;
        uint64_t base;
      } u_i_gain;
      u_i_gain.real = this->i_gain;
      *(outbuffer + offset + 0) = (u_i_gain.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_i_gain.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_i_gain.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_i_gain.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_i_gain.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_i_gain.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_i_gain.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_i_gain.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->i_gain);
      union {
        int64_t real;
        uint64_t base;
      } u_p_gain;
      u_p_gain.real = this->p_gain;
      *(outbuffer + offset + 0) = (u_p_gain.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_p_gain.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_p_gain.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_p_gain.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_p_gain.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_p_gain.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_p_gain.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_p_gain.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->p_gain);
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
      } u_present_load;
      u_present_load.real = this->present_load;
      *(outbuffer + offset + 0) = (u_present_load.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_present_load.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_present_load.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_present_load.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_present_load.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_present_load.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_present_load.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_present_load.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->present_load);
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
        bool real;
        uint8_t base;
      } u_registered_instruction;
      u_registered_instruction.real = this->registered_instruction;
      *(outbuffer + offset + 0) = (u_registered_instruction.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->registered_instruction);
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
      } u_punch;
      u_punch.real = this->punch;
      *(outbuffer + offset + 0) = (u_punch.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_punch.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_punch.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_punch.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_punch.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_punch.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_punch.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_punch.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->punch);
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
      } u_cw_angle_limit;
      u_cw_angle_limit.base = 0;
      u_cw_angle_limit.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_cw_angle_limit.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_cw_angle_limit.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_cw_angle_limit.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_cw_angle_limit.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_cw_angle_limit.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_cw_angle_limit.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_cw_angle_limit.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->cw_angle_limit = u_cw_angle_limit.real;
      offset += sizeof(this->cw_angle_limit);
      union {
        int64_t real;
        uint64_t base;
      } u_ccw_angle_limit;
      u_ccw_angle_limit.base = 0;
      u_ccw_angle_limit.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_ccw_angle_limit.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_ccw_angle_limit.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_ccw_angle_limit.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_ccw_angle_limit.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_ccw_angle_limit.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_ccw_angle_limit.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_ccw_angle_limit.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->ccw_angle_limit = u_ccw_angle_limit.real;
      offset += sizeof(this->ccw_angle_limit);
      union {
        int64_t real;
        uint64_t base;
      } u_control_mode;
      u_control_mode.base = 0;
      u_control_mode.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_control_mode.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_control_mode.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_control_mode.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_control_mode.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_control_mode.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_control_mode.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_control_mode.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->control_mode = u_control_mode.real;
      offset += sizeof(this->control_mode);
      union {
        int64_t real;
        uint64_t base;
      } u_limit_temperature;
      u_limit_temperature.base = 0;
      u_limit_temperature.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_limit_temperature.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_limit_temperature.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_limit_temperature.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_limit_temperature.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_limit_temperature.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_limit_temperature.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_limit_temperature.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->limit_temperature = u_limit_temperature.real;
      offset += sizeof(this->limit_temperature);
      union {
        int64_t real;
        uint64_t base;
      } u_down_limit_voltage;
      u_down_limit_voltage.base = 0;
      u_down_limit_voltage.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_down_limit_voltage.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_down_limit_voltage.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_down_limit_voltage.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_down_limit_voltage.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_down_limit_voltage.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_down_limit_voltage.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_down_limit_voltage.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->down_limit_voltage = u_down_limit_voltage.real;
      offset += sizeof(this->down_limit_voltage);
      union {
        int64_t real;
        uint64_t base;
      } u_up_limit_voltage;
      u_up_limit_voltage.base = 0;
      u_up_limit_voltage.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_up_limit_voltage.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_up_limit_voltage.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_up_limit_voltage.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_up_limit_voltage.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_up_limit_voltage.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_up_limit_voltage.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_up_limit_voltage.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->up_limit_voltage = u_up_limit_voltage.real;
      offset += sizeof(this->up_limit_voltage);
      union {
        int64_t real;
        uint64_t base;
      } u_max_torque;
      u_max_torque.base = 0;
      u_max_torque.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_max_torque.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_max_torque.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_max_torque.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_max_torque.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_max_torque.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_max_torque.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_max_torque.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->max_torque = u_max_torque.real;
      offset += sizeof(this->max_torque);
      union {
        int64_t real;
        uint64_t base;
      } u_return_level;
      u_return_level.base = 0;
      u_return_level.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_return_level.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_return_level.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_return_level.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_return_level.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_return_level.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_return_level.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_return_level.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->return_level = u_return_level.real;
      offset += sizeof(this->return_level);
      union {
        int64_t real;
        uint64_t base;
      } u_alarm_shutdown;
      u_alarm_shutdown.base = 0;
      u_alarm_shutdown.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_alarm_shutdown.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_alarm_shutdown.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_alarm_shutdown.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_alarm_shutdown.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_alarm_shutdown.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_alarm_shutdown.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_alarm_shutdown.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->alarm_shutdown = u_alarm_shutdown.real;
      offset += sizeof(this->alarm_shutdown);
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
      } u_led;
      u_led.base = 0;
      u_led.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_led.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_led.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_led.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_led.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_led.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_led.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_led.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->led = u_led.real;
      offset += sizeof(this->led);
      union {
        int64_t real;
        uint64_t base;
      } u_d_gain;
      u_d_gain.base = 0;
      u_d_gain.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_d_gain.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_d_gain.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_d_gain.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_d_gain.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_d_gain.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_d_gain.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_d_gain.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->d_gain = u_d_gain.real;
      offset += sizeof(this->d_gain);
      union {
        int64_t real;
        uint64_t base;
      } u_i_gain;
      u_i_gain.base = 0;
      u_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->i_gain = u_i_gain.real;
      offset += sizeof(this->i_gain);
      union {
        int64_t real;
        uint64_t base;
      } u_p_gain;
      u_p_gain.base = 0;
      u_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->p_gain = u_p_gain.real;
      offset += sizeof(this->p_gain);
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
      } u_present_load;
      u_present_load.base = 0;
      u_present_load.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_present_load.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_present_load.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_present_load.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_present_load.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_present_load.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_present_load.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_present_load.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->present_load = u_present_load.real;
      offset += sizeof(this->present_load);
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
        bool real;
        uint8_t base;
      } u_registered_instruction;
      u_registered_instruction.base = 0;
      u_registered_instruction.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->registered_instruction = u_registered_instruction.real;
      offset += sizeof(this->registered_instruction);
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
      } u_punch;
      u_punch.base = 0;
      u_punch.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_punch.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_punch.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_punch.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_punch.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_punch.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_punch.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_punch.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->punch = u_punch.real;
      offset += sizeof(this->punch);
     return offset;
    }

    const char * getType(){ return "dynamixel_workbench_msgs/DynamixelXL"; };
    const char * getMD5(){ return "dab3e5c85b84435fdfe6c62de04c44fd"; };

  };

}
#endif