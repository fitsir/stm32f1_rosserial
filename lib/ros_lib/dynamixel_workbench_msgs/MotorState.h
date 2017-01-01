#ifndef _ROS_dynamixel_workbench_msgs_MotorState_h
#define _ROS_dynamixel_workbench_msgs_MotorState_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace dynamixel_workbench_msgs
{

  class MotorState : public ros::Msg
  {
    public:
      typedef const char* _motor_model_type;
      _motor_model_type motor_model;
      typedef int64_t _id_type;
      _id_type id;
      typedef int64_t _torque_enable_type;
      _torque_enable_type torque_enable;
      typedef int64_t _max_position_limit_type;
      _max_position_limit_type max_position_limit;
      typedef int64_t _min_position_limit_type;
      _min_position_limit_type min_position_limit;
      typedef int64_t _ccw_angle_limit_type;
      _ccw_angle_limit_type ccw_angle_limit;
      typedef int64_t _cw_angle_limit_type;
      _cw_angle_limit_type cw_angle_limit;
      typedef int64_t _goal_position_type;
      _goal_position_type goal_position;
      typedef int64_t _goal_velocity_type;
      _goal_velocity_type goal_velocity;
      typedef int64_t _goal_current_type;
      _goal_current_type goal_current;
      typedef int64_t _moving_speed_type;
      _moving_speed_type moving_speed;
      typedef int64_t _goal_acceleration_type;
      _goal_acceleration_type goal_acceleration;
      typedef int64_t _profile_velocity_type;
      _profile_velocity_type profile_velocity;
      typedef int64_t _profile_acceleration_type;
      _profile_acceleration_type profile_acceleration;
      typedef int64_t _present_position_type;
      _present_position_type present_position;
      typedef int64_t _present_velocity_type;
      _present_velocity_type present_velocity;
      typedef int64_t _present_current_type;
      _present_current_type present_current;
      typedef int64_t _moving_type;
      _moving_type moving;

    MotorState():
      motor_model(""),
      id(0),
      torque_enable(0),
      max_position_limit(0),
      min_position_limit(0),
      ccw_angle_limit(0),
      cw_angle_limit(0),
      goal_position(0),
      goal_velocity(0),
      goal_current(0),
      moving_speed(0),
      goal_acceleration(0),
      profile_velocity(0),
      profile_acceleration(0),
      present_position(0),
      present_velocity(0),
      present_current(0),
      moving(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      uint32_t length_motor_model = strlen(this->motor_model);
      varToArr(outbuffer + offset, length_motor_model);
      offset += 4;
      memcpy(outbuffer + offset, this->motor_model, length_motor_model);
      offset += length_motor_model;
      union {
        int64_t real;
        uint64_t base;
      } u_id;
      u_id.real = this->id;
      *(outbuffer + offset + 0) = (u_id.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_id.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_id.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_id.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_id.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_id.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_id.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_id.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->id);
      union {
        int64_t real;
        uint64_t base;
      } u_torque_enable;
      u_torque_enable.real = this->torque_enable;
      *(outbuffer + offset + 0) = (u_torque_enable.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_torque_enable.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_torque_enable.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_torque_enable.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_torque_enable.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_torque_enable.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_torque_enable.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_torque_enable.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->torque_enable);
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
      } u_moving_speed;
      u_moving_speed.real = this->moving_speed;
      *(outbuffer + offset + 0) = (u_moving_speed.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_moving_speed.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_moving_speed.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_moving_speed.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_moving_speed.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_moving_speed.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_moving_speed.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_moving_speed.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->moving_speed);
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
      } u_moving;
      u_moving.real = this->moving;
      *(outbuffer + offset + 0) = (u_moving.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_moving.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_moving.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_moving.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_moving.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_moving.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_moving.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_moving.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->moving);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      uint32_t length_motor_model;
      arrToVar(length_motor_model, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_motor_model; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_motor_model-1]=0;
      this->motor_model = (char *)(inbuffer + offset-1);
      offset += length_motor_model;
      union {
        int64_t real;
        uint64_t base;
      } u_id;
      u_id.base = 0;
      u_id.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_id.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_id.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_id.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_id.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_id.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_id.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_id.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->id = u_id.real;
      offset += sizeof(this->id);
      union {
        int64_t real;
        uint64_t base;
      } u_torque_enable;
      u_torque_enable.base = 0;
      u_torque_enable.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_torque_enable.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_torque_enable.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_torque_enable.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_torque_enable.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_torque_enable.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_torque_enable.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_torque_enable.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->torque_enable = u_torque_enable.real;
      offset += sizeof(this->torque_enable);
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
      } u_moving_speed;
      u_moving_speed.base = 0;
      u_moving_speed.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_moving_speed.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_moving_speed.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_moving_speed.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_moving_speed.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_moving_speed.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_moving_speed.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_moving_speed.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->moving_speed = u_moving_speed.real;
      offset += sizeof(this->moving_speed);
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
      } u_moving;
      u_moving.base = 0;
      u_moving.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_moving.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_moving.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_moving.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_moving.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_moving.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_moving.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_moving.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->moving = u_moving.real;
      offset += sizeof(this->moving);
     return offset;
    }

    const char * getType(){ return "dynamixel_workbench_msgs/MotorState"; };
    const char * getMD5(){ return "0711dcad28e6606a0354ecd9e57f2db8"; };

  };

}
#endif