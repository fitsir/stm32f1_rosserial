#ifndef _ROS_spark_base_SparkBaseIRBumperCliff_h
#define _ROS_spark_base_SparkBaseIRBumperCliff_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace spark_base
{

  class SparkBaseIRBumperCliff : public ros::Msg
  {
    public:
      typedef bool _ir_bumper_left_type;
      _ir_bumper_left_type ir_bumper_left;
      typedef bool _ir_bumper_center_left_type;
      _ir_bumper_center_left_type ir_bumper_center_left;
      typedef bool _ir_bumper_front_type;
      _ir_bumper_front_type ir_bumper_front;
      typedef bool _ir_bumper_center_right_type;
      _ir_bumper_center_right_type ir_bumper_center_right;
      typedef bool _ir_bumper_right_type;
      _ir_bumper_right_type ir_bumper_right;
      typedef bool _bumper_left_type;
      _bumper_left_type bumper_left;
      typedef bool _bumper_right_type;
      _bumper_right_type bumper_right;
      typedef bool _cliff_left_type;
      _cliff_left_type cliff_left;
      typedef bool _cliff_center_left_type;
      _cliff_center_left_type cliff_center_left;
      typedef bool _cliff_center_right_type;
      _cliff_center_right_type cliff_center_right;
      typedef bool _cliff_right_type;
      _cliff_right_type cliff_right;

    SparkBaseIRBumperCliff():
      ir_bumper_left(0),
      ir_bumper_center_left(0),
      ir_bumper_front(0),
      ir_bumper_center_right(0),
      ir_bumper_right(0),
      bumper_left(0),
      bumper_right(0),
      cliff_left(0),
      cliff_center_left(0),
      cliff_center_right(0),
      cliff_right(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_ir_bumper_left;
      u_ir_bumper_left.real = this->ir_bumper_left;
      *(outbuffer + offset + 0) = (u_ir_bumper_left.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->ir_bumper_left);
      union {
        bool real;
        uint8_t base;
      } u_ir_bumper_center_left;
      u_ir_bumper_center_left.real = this->ir_bumper_center_left;
      *(outbuffer + offset + 0) = (u_ir_bumper_center_left.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->ir_bumper_center_left);
      union {
        bool real;
        uint8_t base;
      } u_ir_bumper_front;
      u_ir_bumper_front.real = this->ir_bumper_front;
      *(outbuffer + offset + 0) = (u_ir_bumper_front.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->ir_bumper_front);
      union {
        bool real;
        uint8_t base;
      } u_ir_bumper_center_right;
      u_ir_bumper_center_right.real = this->ir_bumper_center_right;
      *(outbuffer + offset + 0) = (u_ir_bumper_center_right.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->ir_bumper_center_right);
      union {
        bool real;
        uint8_t base;
      } u_ir_bumper_right;
      u_ir_bumper_right.real = this->ir_bumper_right;
      *(outbuffer + offset + 0) = (u_ir_bumper_right.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->ir_bumper_right);
      union {
        bool real;
        uint8_t base;
      } u_bumper_left;
      u_bumper_left.real = this->bumper_left;
      *(outbuffer + offset + 0) = (u_bumper_left.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->bumper_left);
      union {
        bool real;
        uint8_t base;
      } u_bumper_right;
      u_bumper_right.real = this->bumper_right;
      *(outbuffer + offset + 0) = (u_bumper_right.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->bumper_right);
      union {
        bool real;
        uint8_t base;
      } u_cliff_left;
      u_cliff_left.real = this->cliff_left;
      *(outbuffer + offset + 0) = (u_cliff_left.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->cliff_left);
      union {
        bool real;
        uint8_t base;
      } u_cliff_center_left;
      u_cliff_center_left.real = this->cliff_center_left;
      *(outbuffer + offset + 0) = (u_cliff_center_left.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->cliff_center_left);
      union {
        bool real;
        uint8_t base;
      } u_cliff_center_right;
      u_cliff_center_right.real = this->cliff_center_right;
      *(outbuffer + offset + 0) = (u_cliff_center_right.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->cliff_center_right);
      union {
        bool real;
        uint8_t base;
      } u_cliff_right;
      u_cliff_right.real = this->cliff_right;
      *(outbuffer + offset + 0) = (u_cliff_right.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->cliff_right);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_ir_bumper_left;
      u_ir_bumper_left.base = 0;
      u_ir_bumper_left.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->ir_bumper_left = u_ir_bumper_left.real;
      offset += sizeof(this->ir_bumper_left);
      union {
        bool real;
        uint8_t base;
      } u_ir_bumper_center_left;
      u_ir_bumper_center_left.base = 0;
      u_ir_bumper_center_left.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->ir_bumper_center_left = u_ir_bumper_center_left.real;
      offset += sizeof(this->ir_bumper_center_left);
      union {
        bool real;
        uint8_t base;
      } u_ir_bumper_front;
      u_ir_bumper_front.base = 0;
      u_ir_bumper_front.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->ir_bumper_front = u_ir_bumper_front.real;
      offset += sizeof(this->ir_bumper_front);
      union {
        bool real;
        uint8_t base;
      } u_ir_bumper_center_right;
      u_ir_bumper_center_right.base = 0;
      u_ir_bumper_center_right.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->ir_bumper_center_right = u_ir_bumper_center_right.real;
      offset += sizeof(this->ir_bumper_center_right);
      union {
        bool real;
        uint8_t base;
      } u_ir_bumper_right;
      u_ir_bumper_right.base = 0;
      u_ir_bumper_right.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->ir_bumper_right = u_ir_bumper_right.real;
      offset += sizeof(this->ir_bumper_right);
      union {
        bool real;
        uint8_t base;
      } u_bumper_left;
      u_bumper_left.base = 0;
      u_bumper_left.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->bumper_left = u_bumper_left.real;
      offset += sizeof(this->bumper_left);
      union {
        bool real;
        uint8_t base;
      } u_bumper_right;
      u_bumper_right.base = 0;
      u_bumper_right.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->bumper_right = u_bumper_right.real;
      offset += sizeof(this->bumper_right);
      union {
        bool real;
        uint8_t base;
      } u_cliff_left;
      u_cliff_left.base = 0;
      u_cliff_left.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->cliff_left = u_cliff_left.real;
      offset += sizeof(this->cliff_left);
      union {
        bool real;
        uint8_t base;
      } u_cliff_center_left;
      u_cliff_center_left.base = 0;
      u_cliff_center_left.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->cliff_center_left = u_cliff_center_left.real;
      offset += sizeof(this->cliff_center_left);
      union {
        bool real;
        uint8_t base;
      } u_cliff_center_right;
      u_cliff_center_right.base = 0;
      u_cliff_center_right.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->cliff_center_right = u_cliff_center_right.real;
      offset += sizeof(this->cliff_center_right);
      union {
        bool real;
        uint8_t base;
      } u_cliff_right;
      u_cliff_right.base = 0;
      u_cliff_right.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->cliff_right = u_cliff_right.real;
      offset += sizeof(this->cliff_right);
     return offset;
    }

    const char * getType(){ return "spark_base/SparkBaseIRBumperCliff"; };
    const char * getMD5(){ return "512ec0d3087553033c02ba3f05c90bf1"; };

  };

}
#endif