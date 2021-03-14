// Generated by gencpp from file autoware_msgs/geometric_rectangle.msg
// DO NOT EDIT!


#ifndef AUTOWARE_MSGS_MESSAGE_GEOMETRIC_RECTANGLE_H
#define AUTOWARE_MSGS_MESSAGE_GEOMETRIC_RECTANGLE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace autoware_msgs
{
template <class ContainerAllocator>
struct geometric_rectangle_
{
  typedef geometric_rectangle_<ContainerAllocator> Type;

  geometric_rectangle_()
    : wl(0.0)
    , wr(0.0)
    , lf(0.0)
    , lb(0.0)  {
    }
  geometric_rectangle_(const ContainerAllocator& _alloc)
    : wl(0.0)
    , wr(0.0)
    , lf(0.0)
    , lb(0.0)  {
  (void)_alloc;
    }



   typedef float _wl_type;
  _wl_type wl;

   typedef float _wr_type;
  _wr_type wr;

   typedef float _lf_type;
  _lf_type lf;

   typedef float _lb_type;
  _lb_type lb;





  typedef boost::shared_ptr< ::autoware_msgs::geometric_rectangle_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autoware_msgs::geometric_rectangle_<ContainerAllocator> const> ConstPtr;

}; // struct geometric_rectangle_

typedef ::autoware_msgs::geometric_rectangle_<std::allocator<void> > geometric_rectangle;

typedef boost::shared_ptr< ::autoware_msgs::geometric_rectangle > geometric_rectanglePtr;
typedef boost::shared_ptr< ::autoware_msgs::geometric_rectangle const> geometric_rectangleConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autoware_msgs::geometric_rectangle_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autoware_msgs::geometric_rectangle_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::autoware_msgs::geometric_rectangle_<ContainerAllocator1> & lhs, const ::autoware_msgs::geometric_rectangle_<ContainerAllocator2> & rhs)
{
  return lhs.wl == rhs.wl &&
    lhs.wr == rhs.wr &&
    lhs.lf == rhs.lf &&
    lhs.lb == rhs.lb;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::autoware_msgs::geometric_rectangle_<ContainerAllocator1> & lhs, const ::autoware_msgs::geometric_rectangle_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace autoware_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::autoware_msgs::geometric_rectangle_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autoware_msgs::geometric_rectangle_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_msgs::geometric_rectangle_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_msgs::geometric_rectangle_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_msgs::geometric_rectangle_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_msgs::geometric_rectangle_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autoware_msgs::geometric_rectangle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b41f6cf3f78cac5a789ad3f178ef94dc";
  }

  static const char* value(const ::autoware_msgs::geometric_rectangle_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb41f6cf3f78cac5aULL;
  static const uint64_t static_value2 = 0x789ad3f178ef94dcULL;
};

template<class ContainerAllocator>
struct DataType< ::autoware_msgs::geometric_rectangle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autoware_msgs/geometric_rectangle";
  }

  static const char* value(const ::autoware_msgs::geometric_rectangle_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autoware_msgs::geometric_rectangle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 wl\n"
"float32 wr\n"
"float32 lf\n"
"float32 lb\n"
;
  }

  static const char* value(const ::autoware_msgs::geometric_rectangle_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autoware_msgs::geometric_rectangle_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.wl);
      stream.next(m.wr);
      stream.next(m.lf);
      stream.next(m.lb);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct geometric_rectangle_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autoware_msgs::geometric_rectangle_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autoware_msgs::geometric_rectangle_<ContainerAllocator>& v)
  {
    s << indent << "wl: ";
    Printer<float>::stream(s, indent + "  ", v.wl);
    s << indent << "wr: ";
    Printer<float>::stream(s, indent + "  ", v.wr);
    s << indent << "lf: ";
    Printer<float>::stream(s, indent + "  ", v.lf);
    s << indent << "lb: ";
    Printer<float>::stream(s, indent + "  ", v.lb);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTOWARE_MSGS_MESSAGE_GEOMETRIC_RECTANGLE_H
