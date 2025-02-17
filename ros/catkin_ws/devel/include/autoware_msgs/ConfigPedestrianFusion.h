// Generated by gencpp from file autoware_msgs/ConfigPedestrianFusion.msg
// DO NOT EDIT!


#ifndef AUTOWARE_MSGS_MESSAGE_CONFIGPEDESTRIANFUSION_H
#define AUTOWARE_MSGS_MESSAGE_CONFIGPEDESTRIANFUSION_H


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
struct ConfigPedestrianFusion_
{
  typedef ConfigPedestrianFusion_<ContainerAllocator> Type;

  ConfigPedestrianFusion_()
    : header()
    , min_low_height(0.0)
    , max_low_height(0.0)
    , max_height(0.0)
    , min_points(0)
    , dispersion(0.0)  {
    }
  ConfigPedestrianFusion_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , min_low_height(0.0)
    , max_low_height(0.0)
    , max_height(0.0)
    , min_points(0)
    , dispersion(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _min_low_height_type;
  _min_low_height_type min_low_height;

   typedef float _max_low_height_type;
  _max_low_height_type max_low_height;

   typedef float _max_height_type;
  _max_height_type max_height;

   typedef int32_t _min_points_type;
  _min_points_type min_points;

   typedef float _dispersion_type;
  _dispersion_type dispersion;





  typedef boost::shared_ptr< ::autoware_msgs::ConfigPedestrianFusion_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autoware_msgs::ConfigPedestrianFusion_<ContainerAllocator> const> ConstPtr;

}; // struct ConfigPedestrianFusion_

typedef ::autoware_msgs::ConfigPedestrianFusion_<std::allocator<void> > ConfigPedestrianFusion;

typedef boost::shared_ptr< ::autoware_msgs::ConfigPedestrianFusion > ConfigPedestrianFusionPtr;
typedef boost::shared_ptr< ::autoware_msgs::ConfigPedestrianFusion const> ConfigPedestrianFusionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autoware_msgs::ConfigPedestrianFusion_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autoware_msgs::ConfigPedestrianFusion_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::autoware_msgs::ConfigPedestrianFusion_<ContainerAllocator1> & lhs, const ::autoware_msgs::ConfigPedestrianFusion_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.min_low_height == rhs.min_low_height &&
    lhs.max_low_height == rhs.max_low_height &&
    lhs.max_height == rhs.max_height &&
    lhs.min_points == rhs.min_points &&
    lhs.dispersion == rhs.dispersion;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::autoware_msgs::ConfigPedestrianFusion_<ContainerAllocator1> & lhs, const ::autoware_msgs::ConfigPedestrianFusion_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace autoware_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::autoware_msgs::ConfigPedestrianFusion_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autoware_msgs::ConfigPedestrianFusion_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_msgs::ConfigPedestrianFusion_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_msgs::ConfigPedestrianFusion_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_msgs::ConfigPedestrianFusion_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_msgs::ConfigPedestrianFusion_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autoware_msgs::ConfigPedestrianFusion_<ContainerAllocator> >
{
  static const char* value()
  {
    return "959429b5ed2bcbb4ff76d523d3a8cebd";
  }

  static const char* value(const ::autoware_msgs::ConfigPedestrianFusion_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x959429b5ed2bcbb4ULL;
  static const uint64_t static_value2 = 0xff76d523d3a8cebdULL;
};

template<class ContainerAllocator>
struct DataType< ::autoware_msgs::ConfigPedestrianFusion_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autoware_msgs/ConfigPedestrianFusion";
  }

  static const char* value(const ::autoware_msgs::ConfigPedestrianFusion_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autoware_msgs::ConfigPedestrianFusion_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"float32 min_low_height\n"
"float32 max_low_height\n"
"float32 max_height\n"
"int32 min_points\n"
"float32 dispersion\n"
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

  static const char* value(const ::autoware_msgs::ConfigPedestrianFusion_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autoware_msgs::ConfigPedestrianFusion_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.min_low_height);
      stream.next(m.max_low_height);
      stream.next(m.max_height);
      stream.next(m.min_points);
      stream.next(m.dispersion);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ConfigPedestrianFusion_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autoware_msgs::ConfigPedestrianFusion_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autoware_msgs::ConfigPedestrianFusion_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "min_low_height: ";
    Printer<float>::stream(s, indent + "  ", v.min_low_height);
    s << indent << "max_low_height: ";
    Printer<float>::stream(s, indent + "  ", v.max_low_height);
    s << indent << "max_height: ";
    Printer<float>::stream(s, indent + "  ", v.max_height);
    s << indent << "min_points: ";
    Printer<int32_t>::stream(s, indent + "  ", v.min_points);
    s << indent << "dispersion: ";
    Printer<float>::stream(s, indent + "  ", v.dispersion);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTOWARE_MSGS_MESSAGE_CONFIGPEDESTRIANFUSION_H
