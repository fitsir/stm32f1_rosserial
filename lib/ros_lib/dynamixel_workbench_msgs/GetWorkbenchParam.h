#ifndef _ROS_SERVICE_GetWorkbenchParam_h
#define _ROS_SERVICE_GetWorkbenchParam_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "dynamixel_workbench_msgs/WorkbenchParam.h"

namespace dynamixel_workbench_msgs
{

static const char GETWORKBENCHPARAM[] = "dynamixel_workbench_msgs/GetWorkbenchParam";

  class GetWorkbenchParamRequest : public ros::Msg
  {
    public:

    GetWorkbenchParamRequest()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
     return offset;
    }

    const char * getType(){ return GETWORKBENCHPARAM; };
    const char * getMD5(){ return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

  class GetWorkbenchParamResponse : public ros::Msg
  {
    public:
      typedef dynamixel_workbench_msgs::WorkbenchParam _workbench_parameter_type;
      _workbench_parameter_type workbench_parameter;

    GetWorkbenchParamResponse():
      workbench_parameter()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->workbench_parameter.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->workbench_parameter.deserialize(inbuffer + offset);
     return offset;
    }

    const char * getType(){ return GETWORKBENCHPARAM; };
    const char * getMD5(){ return "05c27902b9ce2d738f101ada682a9436"; };

  };

  class GetWorkbenchParam {
    public:
    typedef GetWorkbenchParamRequest Request;
    typedef GetWorkbenchParamResponse Response;
  };

}
#endif
