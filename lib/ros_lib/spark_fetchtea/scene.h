#ifndef _ROS_SERVICE_scene_h
#define _ROS_SERVICE_scene_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace spark_fetchtea
{

static const char SCENE[] = "spark_fetchtea/scene";

  class sceneRequest : public ros::Msg
  {
    public:
      typedef uint8_t _type_type;
      _type_type type;
      typedef const char* _param_type;
      _param_type param;
      enum { END =  0 };
      enum { RUN =  1 };
      enum { PEND =  2 };
      enum { SEARCH =  3 };

    sceneRequest():
      type(0),
      param("")
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->type >> (8 * 0)) & 0xFF;
      offset += sizeof(this->type);
      uint32_t length_param = strlen(this->param);
      varToArr(outbuffer + offset, length_param);
      offset += 4;
      memcpy(outbuffer + offset, this->param, length_param);
      offset += length_param;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      this->type =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->type);
      uint32_t length_param;
      arrToVar(length_param, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_param; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_param-1]=0;
      this->param = (char *)(inbuffer + offset-1);
      offset += length_param;
     return offset;
    }

    const char * getType(){ return SCENE; };
    const char * getMD5(){ return "dfaeb5ba72ab6b13b3a772bb00f8bfaf"; };

  };

  class sceneResponse : public ros::Msg
  {
    public:
      typedef uint8_t _status_type;
      _status_type status;
      enum { SUCCESS =  0 };
      enum { RUNNING =  1 };
      enum { PENDING =  2 };
      enum { FAILURE =  3 };

    sceneResponse():
      status(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->status >> (8 * 0)) & 0xFF;
      offset += sizeof(this->status);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      this->status =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->status);
     return offset;
    }

    const char * getType(){ return SCENE; };
    const char * getMD5(){ return "c807b136c51feed744b4445b9347e65c"; };

  };

  class scene {
    public:
    typedef sceneRequest Request;
    typedef sceneResponse Response;
  };

}
#endif
