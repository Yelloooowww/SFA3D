// Generated by gencpp from file autoware_msgs/ConfigDecisionMaker.msg
// DO NOT EDIT!


#ifndef AUTOWARE_MSGS_MESSAGE_CONFIGDECISIONMAKER_H
#define AUTOWARE_MSGS_MESSAGE_CONFIGDECISIONMAKER_H


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
struct ConfigDecisionMaker_
{
  typedef ConfigDecisionMaker_<ContainerAllocator> Type;

  ConfigDecisionMaker_()
    : header()
    , enable_force_state_change(false)
    , enable_display_marker(false)
    , convergence_threshold(0.0)
    , convergence_count(0)
    , target_waypoint(0)
    , stopline_target_waypoint(0)
    , stopline_target_ratio(0.0)
    , shift_width(0.0)
    , crawl_velocity(0.0)
    , detection_area_rate(0.0)
    , baselink_tf()
    , detection_area_x1(0.0)
    , detection_area_x2(0.0)
    , detection_area_y1(0.0)
    , detection_area_y2(0.0)  {
    }
  ConfigDecisionMaker_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , enable_force_state_change(false)
    , enable_display_marker(false)
    , convergence_threshold(0.0)
    , convergence_count(0)
    , target_waypoint(0)
    , stopline_target_waypoint(0)
    , stopline_target_ratio(0.0)
    , shift_width(0.0)
    , crawl_velocity(0.0)
    , detection_area_rate(0.0)
    , baselink_tf(_alloc)
    , detection_area_x1(0.0)
    , detection_area_x2(0.0)
    , detection_area_y1(0.0)
    , detection_area_y2(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _enable_force_state_change_type;
  _enable_force_state_change_type enable_force_state_change;

   typedef uint8_t _enable_display_marker_type;
  _enable_display_marker_type enable_display_marker;

   typedef double _convergence_threshold_type;
  _convergence_threshold_type convergence_threshold;

   typedef uint32_t _convergence_count_type;
  _convergence_count_type convergence_count;

   typedef uint32_t _target_waypoint_type;
  _target_waypoint_type target_waypoint;

   typedef uint32_t _stopline_target_waypoint_type;
  _stopline_target_waypoint_type stopline_target_waypoint;

   typedef double _stopline_target_ratio_type;
  _stopline_target_ratio_type stopline_target_ratio;

   typedef double _shift_width_type;
  _shift_width_type shift_width;

   typedef double _crawl_velocity_type;
  _crawl_velocity_type crawl_velocity;

   typedef double _detection_area_rate_type;
  _detection_area_rate_type detection_area_rate;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _baselink_tf_type;
  _baselink_tf_type baselink_tf;

   typedef double _detection_area_x1_type;
  _detection_area_x1_type detection_area_x1;

   typedef double _detection_area_x2_type;
  _detection_area_x2_type detection_area_x2;

   typedef double _detection_area_y1_type;
  _detection_area_y1_type detection_area_y1;

   typedef double _detection_area_y2_type;
  _detection_area_y2_type detection_area_y2;





  typedef boost::shared_ptr< ::autoware_msgs::ConfigDecisionMaker_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autoware_msgs::ConfigDecisionMaker_<ContainerAllocator> const> ConstPtr;

}; // struct ConfigDecisionMaker_

typedef ::autoware_msgs::ConfigDecisionMaker_<std::allocator<void> > ConfigDecisionMaker;

typedef boost::shared_ptr< ::autoware_msgs::ConfigDecisionMaker > ConfigDecisionMakerPtr;
typedef boost::shared_ptr< ::autoware_msgs::ConfigDecisionMaker const> ConfigDecisionMakerConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autoware_msgs::ConfigDecisionMaker_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autoware_msgs::ConfigDecisionMaker_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::autoware_msgs::ConfigDecisionMaker_<ContainerAllocator1> & lhs, const ::autoware_msgs::ConfigDecisionMaker_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.enable_force_state_change == rhs.enable_force_state_change &&
    lhs.enable_display_marker == rhs.enable_display_marker &&
    lhs.convergence_threshold == rhs.convergence_threshold &&
    lhs.convergence_count == rhs.convergence_count &&
    lhs.target_waypoint == rhs.target_waypoint &&
    lhs.stopline_target_waypoint == rhs.stopline_target_waypoint &&
    lhs.stopline_target_ratio == rhs.stopline_target_ratio &&
    lhs.shift_width == rhs.shift_width &&
    lhs.crawl_velocity == rhs.crawl_velocity &&
    lhs.detection_area_rate == rhs.detection_area_rate &&
    lhs.baselink_tf == rhs.baselink_tf &&
    lhs.detection_area_x1 == rhs.detection_area_x1 &&
    lhs.detection_area_x2 == rhs.detection_area_x2 &&
    lhs.detection_area_y1 == rhs.detection_area_y1 &&
    lhs.detection_area_y2 == rhs.detection_area_y2;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::autoware_msgs::ConfigDecisionMaker_<ContainerAllocator1> & lhs, const ::autoware_msgs::ConfigDecisionMaker_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace autoware_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::autoware_msgs::ConfigDecisionMaker_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autoware_msgs::ConfigDecisionMaker_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_msgs::ConfigDecisionMaker_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_msgs::ConfigDecisionMaker_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_msgs::ConfigDecisionMaker_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_msgs::ConfigDecisionMaker_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autoware_msgs::ConfigDecisionMaker_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fe838f93691743bfb359111aef81dd4d";
  }

  static const char* value(const ::autoware_msgs::ConfigDecisionMaker_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfe838f93691743bfULL;
  static const uint64_t static_value2 = 0xb359111aef81dd4dULL;
};

template<class ContainerAllocator>
struct DataType< ::autoware_msgs::ConfigDecisionMaker_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autoware_msgs/ConfigDecisionMaker";
  }

  static const char* value(const ::autoware_msgs::ConfigDecisionMaker_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autoware_msgs::ConfigDecisionMaker_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"bool enable_force_state_change\n"
"bool enable_display_marker\n"
"float64 convergence_threshold\n"
"uint32 convergence_count\n"
"uint32 target_waypoint\n"
"uint32 stopline_target_waypoint\n"
"float64 stopline_target_ratio\n"
"float64 shift_width\n"
"\n"
"float64 crawl_velocity\n"
"float64 detection_area_rate\n"
"\n"
"string baselink_tf\n"
"\n"
"float64 detection_area_x1\n"
"float64 detection_area_x2\n"
"float64 detection_area_y1\n"
"float64 detection_area_y2\n"
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

  static const char* value(const ::autoware_msgs::ConfigDecisionMaker_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autoware_msgs::ConfigDecisionMaker_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.enable_force_state_change);
      stream.next(m.enable_display_marker);
      stream.next(m.convergence_threshold);
      stream.next(m.convergence_count);
      stream.next(m.target_waypoint);
      stream.next(m.stopline_target_waypoint);
      stream.next(m.stopline_target_ratio);
      stream.next(m.shift_width);
      stream.next(m.crawl_velocity);
      stream.next(m.detection_area_rate);
      stream.next(m.baselink_tf);
      stream.next(m.detection_area_x1);
      stream.next(m.detection_area_x2);
      stream.next(m.detection_area_y1);
      stream.next(m.detection_area_y2);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ConfigDecisionMaker_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autoware_msgs::ConfigDecisionMaker_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autoware_msgs::ConfigDecisionMaker_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "enable_force_state_change: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.enable_force_state_change);
    s << indent << "enable_display_marker: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.enable_display_marker);
    s << indent << "convergence_threshold: ";
    Printer<double>::stream(s, indent + "  ", v.convergence_threshold);
    s << indent << "convergence_count: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.convergence_count);
    s << indent << "target_waypoint: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.target_waypoint);
    s << indent << "stopline_target_waypoint: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.stopline_target_waypoint);
    s << indent << "stopline_target_ratio: ";
    Printer<double>::stream(s, indent + "  ", v.stopline_target_ratio);
    s << indent << "shift_width: ";
    Printer<double>::stream(s, indent + "  ", v.shift_width);
    s << indent << "crawl_velocity: ";
    Printer<double>::stream(s, indent + "  ", v.crawl_velocity);
    s << indent << "detection_area_rate: ";
    Printer<double>::stream(s, indent + "  ", v.detection_area_rate);
    s << indent << "baselink_tf: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.baselink_tf);
    s << indent << "detection_area_x1: ";
    Printer<double>::stream(s, indent + "  ", v.detection_area_x1);
    s << indent << "detection_area_x2: ";
    Printer<double>::stream(s, indent + "  ", v.detection_area_x2);
    s << indent << "detection_area_y1: ";
    Printer<double>::stream(s, indent + "  ", v.detection_area_y1);
    s << indent << "detection_area_y2: ";
    Printer<double>::stream(s, indent + "  ", v.detection_area_y2);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTOWARE_MSGS_MESSAGE_CONFIGDECISIONMAKER_H
