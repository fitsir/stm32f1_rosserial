#ifndef _ROS_SERVICE_SetDirection_h
#define _ROS_SERVICE_SetDirection_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace dynamixel_workbench_msgs
{

static const char SETDIRECTION[] = "dynamixel_workbench_msgs/SetDirection";

  class SetDirectionRequest : public ros::Msg
  {
    public:
      typedef float _right_wheel_velocity_type;
      _right_wheel_velocity_type right_wheel_velocity;
      typedef float _left_wheel_velocity_type;
      _left_wheel_velocity_type left_wheel_velocity;

    SetDirectionRequest():
      right_wheel_velocity(0),
      left_wheel_velocity(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += serializeAvrFloat64(outbuffer + offset, this->right_wheel_velocity);
      offset += serializeAvrFloat64(outbuffer + offset, this->left_wheel_velocity);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->right_wheel_velocity));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->left_wheel_velocity));
     return offset;
    }

    const char * getType(){ return SETDIRECTION; };
    const char * getMD5(){ return "a76d1c1efa9e6865701a315c5e1bf00b"; };

  };

  class SetDirectionResponse : public ros::Msg
  {
    public:
      typedef float _right_wheel_velocity_type;
      _right_wheel_velocity_type right_wheel_velocity;
      typedef float _left_wheel_velocity_type;
      _left_wheel_velocity_type left_wheel_velocity;

    SetDirectionResponse():
      right_wheel_velocity(0),
      left_wheel_velocity(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += serializeAvrFloat64(outbuffer + offset, this->right_wheel_velocity);
      offset += serializeAvrFloat64(outbuffer + offset, this->left_wheel_velocity);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->right_wheel_velocity));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->left_wheel_velocity));
     return offset;
    }

    const char * getType(){ return SETDIRECTION; };
    const char * getMD5(){ return "a76d1c1efa9e6865701a315c5e1bf00b"; };

  };

  class SetDirection {
    public:
    typedef SetDirectionRequest Request;
    typedef SetDirectionResponse Response;
  };

}
#endif
