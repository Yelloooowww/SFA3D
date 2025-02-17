// Generated by gencpp from file autoware_msgs/traffic_light.msg
// DO NOT EDIT!


#ifndef AUTOWARE_MSGS_MESSAGE_TRAFFIC_LIGHT_H
#define AUTOWARE_MSGS_MESSAGE_TRAFFIC_LIGHT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace autoware_msgs
{
template <class ContainerAllocator>
struct traffic_light_
{
  typedef traffic_light_<ContainerAllocator> Type;

  traffic_light_()
    : header()
    , traffic_light(0)  {
    }
  traffic_light_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , traffic_light(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _traffic_light_type;
  _traffic_light_type traffic_light;





  typedef boost::shared_ptr< ::autoware_msgs::traffic_light_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autoware_msgs::traffic_light_<ContainerAllocator> const> ConstPtr;

}; // struct traffic_light_

typedef ::autoware_msgs::traffic_light_<std::allocator<void> > traffic_light;

typedef boost::shared_ptr< ::autoware_msgs::traffic_light > traffic_lightPtr;
typedef boost::shared_ptr< ::autoware_msgs::traffic_light const> traffic_lightConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autoware_msgs::traffic_light_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autoware_msgs::traffic_light_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::autoware_msgs::traffic_light_<ContainerAllocator1> & lhs, const ::autoware_msgs::traffic_light_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.traffic_light == rhs.traffic_light;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::autoware_msgs::traffic_light_<ContainerAllocator1> & lhs, const ::autoware_msgs::traffic_light_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace autoware_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::autoware_msgs::traffic_light_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autoware_msgs::traffic_light_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_msgs::traffic_light_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_msgs::traffic_light_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_msgs::traffic_light_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_msgs::traffic_light_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autoware_msgs::traffic_light_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a4931ba214a0e37e220dd00b2acca20a";
  }

  static const char* value(const ::autoware_msgs::traffic_light_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa4931ba214a0e37eULL;
  static const uint64_t static_value2 = 0x220dd00b2acca20aULL;
};

template<class ContainerAllocator>
struct DataType< ::autoware_msgs::traffic_light_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autoware_msgs/traffic_light";
  }

  static const char* value(const ::autoware_msgs::traffic_light_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autoware_msgs::traffic_light_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"int32 traffic_light\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::autoware_msgs::traffic_light_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autoware_msgs::traffic_light_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.traffic_light);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct traffic_light_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autoware_msgs::traffic_light_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autoware_msgs::traffic_light_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "traffic_light: ";
    Printer<int32_t>::stream(s, indent + "  ", v.traffic_light);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTOWARE_MSGS_MESSAGE_TRAFFIC_LIGHT_H
