#ifndef _ROS_dynamixel_workbench_msgs_WorkbenchParam_h
#define _ROS_dynamixel_workbench_msgs_WorkbenchParam_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace dynamixel_workbench_msgs
{

  class WorkbenchParam : public ros::Msg
  {
    public:
      typedef const char* _device_name_type;
      _device_name_type device_name;
      typedef uint64_t _baud_rate_type;
      _baud_rate_type baud_rate;
      typedef uint16_t _protocol_version_type;
      _protocol_version_type protocol_version;
      typedef const char* _model_name_type;
      _model_name_type model_name;
      typedef uint16_t _model_id_type;
      _model_id_type model_id;
      typedef uint16_t _model_number_type;
      _model_number_type model_number;

    WorkbenchParam():
      device_name(""),
      baud_rate(0),
      protocol_version(0),
      model_name(""),
      model_id(0),
      model_number(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      uint32_t length_device_name = strlen(this->device_name);
      varToArr(outbuffer + offset, length_device_name);
      offset += 4;
      memcpy(outbuffer + offset, this->device_name, length_device_name);
      offset += length_device_name;
      union {
        uint64_t real;
        uint32_t base;
      } u_baud_rate;
      u_baud_rate.real = this->baud_rate;
      *(outbuffer + offset + 0) = (u_baud_rate.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_baud_rate.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_baud_rate.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_baud_rate.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->baud_rate);
      *(outbuffer + offset + 0) = (this->protocol_version >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->protocol_version >> (8 * 1)) & 0xFF;
      offset += sizeof(this->protocol_version);
      uint32_t length_model_name = strlen(this->model_name);
      varToArr(outbuffer + offset, length_model_name);
      offset += 4;
      memcpy(outbuffer + offset, this->model_name, length_model_name);
      offset += length_model_name;
      *(outbuffer + offset + 0) = (this->model_id >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->model_id >> (8 * 1)) & 0xFF;
      offset += sizeof(this->model_id);
      *(outbuffer + offset + 0) = (this->model_number >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->model_number >> (8 * 1)) & 0xFF;
      offset += sizeof(this->model_number);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      uint32_t length_device_name;
      arrToVar(length_device_name, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_device_name; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_device_name-1]=0;
      this->device_name = (char *)(inbuffer + offset-1);
      offset += length_device_name;
      union {
        uint64_t real;
        uint32_t base;
      } u_baud_rate;
      u_baud_rate.base = 0;
      u_baud_rate.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_baud_rate.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_baud_rate.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_baud_rate.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->baud_rate = u_baud_rate.real;
      offset += sizeof(this->baud_rate);
      this->protocol_version =  ((uint16_t) (*(inbuffer + offset)));
      this->protocol_version |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->protocol_version);
      uint32_t length_model_name;
      arrToVar(length_model_name, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_model_name; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_model_name-1]=0;
      this->model_name = (char *)(inbuffer + offset-1);
      offset += length_model_name;
      this->model_id =  ((uint16_t) (*(inbuffer + offset)));
      this->model_id |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->model_id);
      this->model_number =  ((uint16_t) (*(inbuffer + offset)));
      this->model_number |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->model_number);
     return offset;
    }

    const char * getType(){ return "dynamixel_workbench_msgs/WorkbenchParam"; };
    const char * getMD5(){ return "efa375577ebd4c49a62b4a8cb3563dbe"; };

  };

}
#endif