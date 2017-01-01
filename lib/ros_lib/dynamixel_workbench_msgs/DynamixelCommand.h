#ifndef _ROS_dynamixel_workbench_msgs_DynamixelCommand_h
#define _ROS_dynamixel_workbench_msgs_DynamixelCommand_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace dynamixel_workbench_msgs
{

  class DynamixelCommand : public ros::Msg
  {
    public:
      typedef const char* _addr_name_type;
      _addr_name_type addr_name;
      typedef int64_t _value_type;
      _value_type value;

    DynamixelCommand():
      addr_name(""),
      value(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      uint32_t length_addr_name = strlen(this->addr_name);
      varToArr(outbuffer + offset, length_addr_name);
      offset += 4;
      memcpy(outbuffer + offset, this->addr_name, length_addr_name);
      offset += length_addr_name;
      union {
        int64_t real;
        uint64_t base;
      } u_value;
      u_value.real = this->value;
      *(outbuffer + offset + 0) = (u_value.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_value.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_value.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_value.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_value.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_value.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_value.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_value.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->value);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      uint32_t length_addr_name;
      arrToVar(length_addr_name, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_addr_name; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_addr_name-1]=0;
      this->addr_name = (char *)(inbuffer + offset-1);
      offset += length_addr_name;
      union {
        int64_t real;
        uint64_t base;
      } u_value;
      u_value.base = 0;
      u_value.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_value.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_value.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_value.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_value.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_value.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_value.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_value.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->value = u_value.real;
      offset += sizeof(this->value);
     return offset;
    }

    const char * getType(){ return "dynamixel_workbench_msgs/DynamixelCommand"; };
    const char * getMD5(){ return "2b45d9d036dfcc878a9d1ac903d2bbb3"; };

  };

}
#endif