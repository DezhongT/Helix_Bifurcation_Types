// Generated by gencpp from file intera_core_msgs/EndpointState.msg
// DO NOT EDIT!


#ifndef INTERA_CORE_MSGS_MESSAGE_ENDPOINTSTATE_H
#define INTERA_CORE_MSGS_MESSAGE_ENDPOINTSTATE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Pose.h>
#include <geometry_msgs/Twist.h>
#include <geometry_msgs/Wrench.h>

namespace intera_core_msgs
{
template <class ContainerAllocator>
struct EndpointState_
{
  typedef EndpointState_<ContainerAllocator> Type;

  EndpointState_()
    : header()
    , pose()
    , twist()
    , wrench()
    , valid(false)  {
    }
  EndpointState_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , pose(_alloc)
    , twist(_alloc)
    , wrench(_alloc)
    , valid(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pose_type;
  _pose_type pose;

   typedef  ::geometry_msgs::Twist_<ContainerAllocator>  _twist_type;
  _twist_type twist;

   typedef  ::geometry_msgs::Wrench_<ContainerAllocator>  _wrench_type;
  _wrench_type wrench;

   typedef uint8_t _valid_type;
  _valid_type valid;





  typedef boost::shared_ptr< ::intera_core_msgs::EndpointState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::intera_core_msgs::EndpointState_<ContainerAllocator> const> ConstPtr;

}; // struct EndpointState_

typedef ::intera_core_msgs::EndpointState_<std::allocator<void> > EndpointState;

typedef boost::shared_ptr< ::intera_core_msgs::EndpointState > EndpointStatePtr;
typedef boost::shared_ptr< ::intera_core_msgs::EndpointState const> EndpointStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::intera_core_msgs::EndpointState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::intera_core_msgs::EndpointState_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::intera_core_msgs::EndpointState_<ContainerAllocator1> & lhs, const ::intera_core_msgs::EndpointState_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.pose == rhs.pose &&
    lhs.twist == rhs.twist &&
    lhs.wrench == rhs.wrench &&
    lhs.valid == rhs.valid;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::intera_core_msgs::EndpointState_<ContainerAllocator1> & lhs, const ::intera_core_msgs::EndpointState_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace intera_core_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::intera_core_msgs::EndpointState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::intera_core_msgs::EndpointState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_core_msgs::EndpointState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_core_msgs::EndpointState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_core_msgs::EndpointState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_core_msgs::EndpointState_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::intera_core_msgs::EndpointState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ec04f0f9bc02b3e335181c07d68c2c98";
  }

  static const char* value(const ::intera_core_msgs::EndpointState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xec04f0f9bc02b3e3ULL;
  static const uint64_t static_value2 = 0x35181c07d68c2c98ULL;
};

template<class ContainerAllocator>
struct DataType< ::intera_core_msgs::EndpointState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "intera_core_msgs/EndpointState";
  }

  static const char* value(const ::intera_core_msgs::EndpointState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::intera_core_msgs::EndpointState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header               header\n"
"geometry_msgs/Pose   pose\n"
"geometry_msgs/Twist  twist\n"
"geometry_msgs/Wrench wrench\n"
"bool                 valid\n"
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
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Twist\n"
"# This expresses velocity in free space broken into its linear and angular parts.\n"
"Vector3  linear\n"
"Vector3  angular\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"================================================================================\n"
"MSG: geometry_msgs/Wrench\n"
"# This represents force in free space, separated into\n"
"# its linear and angular parts.\n"
"Vector3  force\n"
"Vector3  torque\n"
;
  }

  static const char* value(const ::intera_core_msgs::EndpointState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::intera_core_msgs::EndpointState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.pose);
      stream.next(m.twist);
      stream.next(m.wrench);
      stream.next(m.valid);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EndpointState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::intera_core_msgs::EndpointState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::intera_core_msgs::EndpointState_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
    s << indent << "twist: ";
    s << std::endl;
    Printer< ::geometry_msgs::Twist_<ContainerAllocator> >::stream(s, indent + "  ", v.twist);
    s << indent << "wrench: ";
    s << std::endl;
    Printer< ::geometry_msgs::Wrench_<ContainerAllocator> >::stream(s, indent + "  ", v.wrench);
    s << indent << "valid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.valid);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INTERA_CORE_MSGS_MESSAGE_ENDPOINTSTATE_H
