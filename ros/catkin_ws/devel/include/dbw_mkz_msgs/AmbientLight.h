// Generated by gencpp from file dbw_mkz_msgs/AmbientLight.msg
// DO NOT EDIT!


#ifndef DBW_MKZ_MSGS_MESSAGE_AMBIENTLIGHT_H
#define DBW_MKZ_MSGS_MESSAGE_AMBIENTLIGHT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dbw_mkz_msgs
{
template <class ContainerAllocator>
struct AmbientLight_
{
  typedef AmbientLight_<ContainerAllocator> Type;

  AmbientLight_()
    : status(0)  {
    }
  AmbientLight_(const ContainerAllocator& _alloc)
    : status(0)  {
  (void)_alloc;
    }



   typedef uint8_t _status_type;
  _status_type status;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(DARK)
  #undef DARK
#endif
#if defined(_WIN32) && defined(LIGHT)
  #undef LIGHT
#endif
#if defined(_WIN32) && defined(TWILIGHT)
  #undef TWILIGHT
#endif
#if defined(_WIN32) && defined(TUNNEL_ON)
  #undef TUNNEL_ON
#endif
#if defined(_WIN32) && defined(TUNNEL_OFF)
  #undef TUNNEL_OFF
#endif
#if defined(_WIN32) && defined(NO_DATA)
  #undef NO_DATA
#endif

  enum {
    DARK = 0u,
    LIGHT = 1u,
    TWILIGHT = 2u,
    TUNNEL_ON = 3u,
    TUNNEL_OFF = 4u,
    NO_DATA = 7u,
  };


  typedef boost::shared_ptr< ::dbw_mkz_msgs::AmbientLight_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dbw_mkz_msgs::AmbientLight_<ContainerAllocator> const> ConstPtr;

}; // struct AmbientLight_

typedef ::dbw_mkz_msgs::AmbientLight_<std::allocator<void> > AmbientLight;

typedef boost::shared_ptr< ::dbw_mkz_msgs::AmbientLight > AmbientLightPtr;
typedef boost::shared_ptr< ::dbw_mkz_msgs::AmbientLight const> AmbientLightConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dbw_mkz_msgs::AmbientLight_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dbw_mkz_msgs::AmbientLight_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dbw_mkz_msgs::AmbientLight_<ContainerAllocator1> & lhs, const ::dbw_mkz_msgs::AmbientLight_<ContainerAllocator2> & rhs)
{
  return lhs.status == rhs.status;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dbw_mkz_msgs::AmbientLight_<ContainerAllocator1> & lhs, const ::dbw_mkz_msgs::AmbientLight_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dbw_mkz_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::dbw_mkz_msgs::AmbientLight_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dbw_mkz_msgs::AmbientLight_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dbw_mkz_msgs::AmbientLight_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dbw_mkz_msgs::AmbientLight_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dbw_mkz_msgs::AmbientLight_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dbw_mkz_msgs::AmbientLight_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dbw_mkz_msgs::AmbientLight_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1ddf5fa71f1f6a75449370898bc9b6ad";
  }

  static const char* value(const ::dbw_mkz_msgs::AmbientLight_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1ddf5fa71f1f6a75ULL;
  static const uint64_t static_value2 = 0x449370898bc9b6adULL;
};

template<class ContainerAllocator>
struct DataType< ::dbw_mkz_msgs::AmbientLight_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dbw_mkz_msgs/AmbientLight";
  }

  static const char* value(const ::dbw_mkz_msgs::AmbientLight_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dbw_mkz_msgs::AmbientLight_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 status\n"
"\n"
"uint8 DARK=0\n"
"uint8 LIGHT=1\n"
"uint8 TWILIGHT=2\n"
"uint8 TUNNEL_ON=3\n"
"uint8 TUNNEL_OFF=4\n"
"uint8 NO_DATA=7\n"
;
  }

  static const char* value(const ::dbw_mkz_msgs::AmbientLight_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dbw_mkz_msgs::AmbientLight_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AmbientLight_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dbw_mkz_msgs::AmbientLight_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dbw_mkz_msgs::AmbientLight_<ContainerAllocator>& v)
  {
    s << indent << "status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DBW_MKZ_MSGS_MESSAGE_AMBIENTLIGHT_H
