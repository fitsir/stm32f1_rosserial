#ifndef _ROS_SERVICE_SetPosition_h
#define _ROS_SERVICE_SetPosition_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace dynamixel_workbench_msgs
{

static const char SETPOSITION[] = "dynamixel_workbench_msgs/SetPosition";

  class SetPositionRequest : public ros::Msg
  {
    public:
      typedef const char* _unit_type;
      _unit_type unit;
      typedef float _pan_pos_type;
      _pan_pos_type pan_pos;
      typedef float _tilt_pos_type;
      _tilt_pos_type tilt_pos;

    SetPositionRequest():
      unit(""),
      pan_pos(0),
      tilt_pos(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      uint32_t length_unit = strlen(this->unit);
      varToArr(outbuffer + offset, length_unit);
      offset += 4;
      memcpy(outbuffer + offset, this->unit, length_unit);
      offset += length_unit;
      offset += serializeAvrFloat64(outbuffer + offset, this->pan_pos);
      offset += serializeAvrFloat64(outbuffer + offset, this->tilt_pos);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      uint32_t length_unit;
      arrToVar(length_unit, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_unit; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_unit-1]=0;
      this->unit = (char *)(inbuffer + offset-1);
      offset += length_unit;
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->pan_pos));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->tilt_pos));
     return offset;
    }

    const char * getType(){ return SETPOSITION; };
    const char * getMD5(){ return "15b741558819cad6d27312f211f07f20"; };

  };

  class SetPositionResponse : public ros::Msg
  {
    public:
      typedef float _pan_pos_type;
      _pan_pos_type pan_pos;
      typedef float _tilt_pos_type;
      _tilt_pos_type tilt_pos;

    SetPositionResponse():
      pan_pos(0),
      tilt_pos(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += serializeAvrFloat64(outbuffer + offset, this->pan_pos);
      offset += serializeAvrFloat64(outbuffer + offset, this->tilt_pos);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->pan_pos));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->tilt_pos));
     return offset;
    }

    const char * getType(){ return SETPOSITION; };
    const char * getMD5(){ return "7a483137dab2723858382225eb74a818"; };

  };

  class SetPosition {
    public:
    typedef SetPositionRequest Request;
    typedef SetPositionResponse Response;
  };

}
#endif
