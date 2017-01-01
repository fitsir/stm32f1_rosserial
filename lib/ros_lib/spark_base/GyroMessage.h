#ifndef _ROS_spark_base_GyroMessage_h
#define _ROS_spark_base_GyroMessage_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace spark_base
{

  class GyroMessage : public ros::Msg
  {
    public:
      typedef float _acvx_type;
      _acvx_type acvx;
      typedef float _acvy_type;
      _acvy_type acvy;
      typedef float _acvz_type;
      _acvz_type acvz;
      typedef float _anvx_type;
      _anvx_type anvx;
      typedef float _anvy_type;
      _anvy_type anvy;
      typedef float _anvz_type;
      _anvz_type anvz;
      typedef float _roll_type;
      _roll_type roll;
      typedef float _pitch_type;
      _pitch_type pitch;
      typedef float _yaw_type;
      _yaw_type yaw;
      typedef float _bx_type;
      _bx_type bx;
      typedef float _by_type;
      _by_type by;
      typedef float _bz_type;
      _bz_type bz;

    GyroMessage():
      acvx(0),
      acvy(0),
      acvz(0),
      anvx(0),
      anvy(0),
      anvz(0),
      roll(0),
      pitch(0),
      yaw(0),
      bx(0),
      by(0),
      bz(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_acvx;
      u_acvx.real = this->acvx;
      *(outbuffer + offset + 0) = (u_acvx.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_acvx.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_acvx.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_acvx.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->acvx);
      union {
        float real;
        uint32_t base;
      } u_acvy;
      u_acvy.real = this->acvy;
      *(outbuffer + offset + 0) = (u_acvy.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_acvy.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_acvy.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_acvy.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->acvy);
      union {
        float real;
        uint32_t base;
      } u_acvz;
      u_acvz.real = this->acvz;
      *(outbuffer + offset + 0) = (u_acvz.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_acvz.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_acvz.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_acvz.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->acvz);
      union {
        float real;
        uint32_t base;
      } u_anvx;
      u_anvx.real = this->anvx;
      *(outbuffer + offset + 0) = (u_anvx.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_anvx.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_anvx.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_anvx.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->anvx);
      union {
        float real;
        uint32_t base;
      } u_anvy;
      u_anvy.real = this->anvy;
      *(outbuffer + offset + 0) = (u_anvy.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_anvy.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_anvy.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_anvy.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->anvy);
      union {
        float real;
        uint32_t base;
      } u_anvz;
      u_anvz.real = this->anvz;
      *(outbuffer + offset + 0) = (u_anvz.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_anvz.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_anvz.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_anvz.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->anvz);
      union {
        float real;
        uint32_t base;
      } u_roll;
      u_roll.real = this->roll;
      *(outbuffer + offset + 0) = (u_roll.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_roll.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_roll.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_roll.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->roll);
      union {
        float real;
        uint32_t base;
      } u_pitch;
      u_pitch.real = this->pitch;
      *(outbuffer + offset + 0) = (u_pitch.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pitch.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pitch.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pitch.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pitch);
      union {
        float real;
        uint32_t base;
      } u_yaw;
      u_yaw.real = this->yaw;
      *(outbuffer + offset + 0) = (u_yaw.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_yaw.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_yaw.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_yaw.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->yaw);
      union {
        float real;
        uint32_t base;
      } u_bx;
      u_bx.real = this->bx;
      *(outbuffer + offset + 0) = (u_bx.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_bx.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_bx.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_bx.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->bx);
      union {
        float real;
        uint32_t base;
      } u_by;
      u_by.real = this->by;
      *(outbuffer + offset + 0) = (u_by.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_by.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_by.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_by.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->by);
      union {
        float real;
        uint32_t base;
      } u_bz;
      u_bz.real = this->bz;
      *(outbuffer + offset + 0) = (u_bz.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_bz.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_bz.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_bz.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->bz);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_acvx;
      u_acvx.base = 0;
      u_acvx.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_acvx.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_acvx.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_acvx.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->acvx = u_acvx.real;
      offset += sizeof(this->acvx);
      union {
        float real;
        uint32_t base;
      } u_acvy;
      u_acvy.base = 0;
      u_acvy.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_acvy.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_acvy.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_acvy.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->acvy = u_acvy.real;
      offset += sizeof(this->acvy);
      union {
        float real;
        uint32_t base;
      } u_acvz;
      u_acvz.base = 0;
      u_acvz.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_acvz.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_acvz.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_acvz.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->acvz = u_acvz.real;
      offset += sizeof(this->acvz);
      union {
        float real;
        uint32_t base;
      } u_anvx;
      u_anvx.base = 0;
      u_anvx.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_anvx.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_anvx.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_anvx.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->anvx = u_anvx.real;
      offset += sizeof(this->anvx);
      union {
        float real;
        uint32_t base;
      } u_anvy;
      u_anvy.base = 0;
      u_anvy.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_anvy.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_anvy.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_anvy.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->anvy = u_anvy.real;
      offset += sizeof(this->anvy);
      union {
        float real;
        uint32_t base;
      } u_anvz;
      u_anvz.base = 0;
      u_anvz.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_anvz.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_anvz.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_anvz.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->anvz = u_anvz.real;
      offset += sizeof(this->anvz);
      union {
        float real;
        uint32_t base;
      } u_roll;
      u_roll.base = 0;
      u_roll.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_roll.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_roll.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_roll.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->roll = u_roll.real;
      offset += sizeof(this->roll);
      union {
        float real;
        uint32_t base;
      } u_pitch;
      u_pitch.base = 0;
      u_pitch.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pitch.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pitch.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pitch.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->pitch = u_pitch.real;
      offset += sizeof(this->pitch);
      union {
        float real;
        uint32_t base;
      } u_yaw;
      u_yaw.base = 0;
      u_yaw.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_yaw.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_yaw.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_yaw.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->yaw = u_yaw.real;
      offset += sizeof(this->yaw);
      union {
        float real;
        uint32_t base;
      } u_bx;
      u_bx.base = 0;
      u_bx.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_bx.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_bx.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_bx.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->bx = u_bx.real;
      offset += sizeof(this->bx);
      union {
        float real;
        uint32_t base;
      } u_by;
      u_by.base = 0;
      u_by.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_by.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_by.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_by.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->by = u_by.real;
      offset += sizeof(this->by);
      union {
        float real;
        uint32_t base;
      } u_bz;
      u_bz.base = 0;
      u_bz.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_bz.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_bz.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_bz.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->bz = u_bz.real;
      offset += sizeof(this->bz);
     return offset;
    }

    const char * getType(){ return "spark_base/GyroMessage"; };
    const char * getMD5(){ return "3bc41d895c9f0f7df678a987f8d8ab7a"; };

  };

}
#endif