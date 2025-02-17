// Generated by gencpp from file autoware_msgs/ConfigVoxelGridFilter.msg
// DO NOT EDIT!


#ifndef AUTOWARE_MSGS_MESSAGE_CONFIGVOXELGRIDFILTER_H
#define AUTOWARE_MSGS_MESSAGE_CONFIGVOXELGRIDFILTER_H


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
struct ConfigVoxelGridFilter_
{
  typedef ConfigVoxelGridFilter_<ContainerAllocator> Type;

  ConfigVoxelGridFilter_()
    : voxel_leaf_size(0.0)
    , measurement_range(0.0)  {
    }
  ConfigVoxelGridFilter_(const ContainerAllocator& _alloc)
    : voxel_leaf_size(0.0)
    , measurement_range(0.0)  {
  (void)_alloc;
    }



   typedef float _voxel_leaf_size_type;
  _voxel_leaf_size_type voxel_leaf_size;

   typedef float _measurement_range_type;
  _measurement_range_type measurement_range;





  typedef boost::shared_ptr< ::autoware_msgs::ConfigVoxelGridFilter_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autoware_msgs::ConfigVoxelGridFilter_<ContainerAllocator> const> ConstPtr;

}; // struct ConfigVoxelGridFilter_

typedef ::autoware_msgs::ConfigVoxelGridFilter_<std::allocator<void> > ConfigVoxelGridFilter;

typedef boost::shared_ptr< ::autoware_msgs::ConfigVoxelGridFilter > ConfigVoxelGridFilterPtr;
typedef boost::shared_ptr< ::autoware_msgs::ConfigVoxelGridFilter const> ConfigVoxelGridFilterConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autoware_msgs::ConfigVoxelGridFilter_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autoware_msgs::ConfigVoxelGridFilter_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::autoware_msgs::ConfigVoxelGridFilter_<ContainerAllocator1> & lhs, const ::autoware_msgs::ConfigVoxelGridFilter_<ContainerAllocator2> & rhs)
{
  return lhs.voxel_leaf_size == rhs.voxel_leaf_size &&
    lhs.measurement_range == rhs.measurement_range;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::autoware_msgs::ConfigVoxelGridFilter_<ContainerAllocator1> & lhs, const ::autoware_msgs::ConfigVoxelGridFilter_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace autoware_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::autoware_msgs::ConfigVoxelGridFilter_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autoware_msgs::ConfigVoxelGridFilter_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_msgs::ConfigVoxelGridFilter_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_msgs::ConfigVoxelGridFilter_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_msgs::ConfigVoxelGridFilter_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_msgs::ConfigVoxelGridFilter_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autoware_msgs::ConfigVoxelGridFilter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "66366259bef07d6d7826a63b83ed5b70";
  }

  static const char* value(const ::autoware_msgs::ConfigVoxelGridFilter_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x66366259bef07d6dULL;
  static const uint64_t static_value2 = 0x7826a63b83ed5b70ULL;
};

template<class ContainerAllocator>
struct DataType< ::autoware_msgs::ConfigVoxelGridFilter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autoware_msgs/ConfigVoxelGridFilter";
  }

  static const char* value(const ::autoware_msgs::ConfigVoxelGridFilter_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autoware_msgs::ConfigVoxelGridFilter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 voxel_leaf_size\n"
"float32 measurement_range\n"
;
  }

  static const char* value(const ::autoware_msgs::ConfigVoxelGridFilter_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autoware_msgs::ConfigVoxelGridFilter_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.voxel_leaf_size);
      stream.next(m.measurement_range);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ConfigVoxelGridFilter_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autoware_msgs::ConfigVoxelGridFilter_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autoware_msgs::ConfigVoxelGridFilter_<ContainerAllocator>& v)
  {
    s << indent << "voxel_leaf_size: ";
    Printer<float>::stream(s, indent + "  ", v.voxel_leaf_size);
    s << indent << "measurement_range: ";
    Printer<float>::stream(s, indent + "  ", v.measurement_range);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTOWARE_MSGS_MESSAGE_CONFIGVOXELGRIDFILTER_H
