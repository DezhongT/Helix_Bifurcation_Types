// Generated by gencpp from file intera_motion_msgs/InterpolatedPath.msg
// DO NOT EDIT!


#ifndef INTERA_MOTION_MSGS_MESSAGE_INTERPOLATEDPATH_H
#define INTERA_MOTION_MSGS_MESSAGE_INTERPOLATEDPATH_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <intera_motion_msgs/WaypointSimple.h>

namespace intera_motion_msgs
{
template <class ContainerAllocator>
struct InterpolatedPath_
{
  typedef InterpolatedPath_<ContainerAllocator> Type;

  InterpolatedPath_()
    : header()
    , label()
    , joint_names()
    , interpolated_path()  {
    }
  InterpolatedPath_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , label(_alloc)
    , joint_names(_alloc)
    , interpolated_path(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _label_type;
  _label_type label;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> _joint_names_type;
  _joint_names_type joint_names;

   typedef std::vector< ::intera_motion_msgs::WaypointSimple_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::intera_motion_msgs::WaypointSimple_<ContainerAllocator> >> _interpolated_path_type;
  _interpolated_path_type interpolated_path;





  typedef boost::shared_ptr< ::intera_motion_msgs::InterpolatedPath_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::intera_motion_msgs::InterpolatedPath_<ContainerAllocator> const> ConstPtr;

}; // struct InterpolatedPath_

typedef ::intera_motion_msgs::InterpolatedPath_<std::allocator<void> > InterpolatedPath;

typedef boost::shared_ptr< ::intera_motion_msgs::InterpolatedPath > InterpolatedPathPtr;
typedef boost::shared_ptr< ::intera_motion_msgs::InterpolatedPath const> InterpolatedPathConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::intera_motion_msgs::InterpolatedPath_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::intera_motion_msgs::InterpolatedPath_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::intera_motion_msgs::InterpolatedPath_<ContainerAllocator1> & lhs, const ::intera_motion_msgs::InterpolatedPath_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.label == rhs.label &&
    lhs.joint_names == rhs.joint_names &&
    lhs.interpolated_path == rhs.interpolated_path;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::intera_motion_msgs::InterpolatedPath_<ContainerAllocator1> & lhs, const ::intera_motion_msgs::InterpolatedPath_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace intera_motion_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::intera_motion_msgs::InterpolatedPath_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::intera_motion_msgs::InterpolatedPath_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_motion_msgs::InterpolatedPath_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_motion_msgs::InterpolatedPath_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_motion_msgs::InterpolatedPath_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_motion_msgs::InterpolatedPath_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::intera_motion_msgs::InterpolatedPath_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4e078bdc2ed88b86420f5b19cbd78219";
  }

  static const char* value(const ::intera_motion_msgs::InterpolatedPath_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4e078bdc2ed88b86ULL;
  static const uint64_t static_value2 = 0x420f5b19cbd78219ULL;
};

template<class ContainerAllocator>
struct DataType< ::intera_motion_msgs::InterpolatedPath_<ContainerAllocator> >
{
  static const char* value()
  {
    return "intera_motion_msgs/InterpolatedPath";
  }

  static const char* value(const ::intera_motion_msgs::InterpolatedPath_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::intera_motion_msgs::InterpolatedPath_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Inpteroplation of a path generated by the motion controller\n"
"\n"
"std_msgs/Header header\n"
"\n"
"# optional label\n"
"string label\n"
"\n"
"# Array of joint names that correspond to the waypoint joint_positions\n"
"string[] joint_names\n"
"\n"
"# Array of waypoints interpolated from the generated path\n"
"WaypointSimple[] interpolated_path\n"
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
"MSG: intera_motion_msgs/WaypointSimple\n"
"# Representation of a waypoint returned during path interpolation\n"
"# Does not include extra options\n"
"\n"
"# Desired joint positions\n"
"float64[] joint_positions\n"
"\n"
"# Name of the endpoint that is currently active\n"
"string active_endpoint\n"
"\n"
"# Cartesian pose\n"
"geometry_msgs/Pose pose\n"
"\n"
"int32 segment_index\n"
"float64 time\n"
"\n"
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
;
  }

  static const char* value(const ::intera_motion_msgs::InterpolatedPath_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::intera_motion_msgs::InterpolatedPath_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.label);
      stream.next(m.joint_names);
      stream.next(m.interpolated_path);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct InterpolatedPath_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::intera_motion_msgs::InterpolatedPath_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::intera_motion_msgs::InterpolatedPath_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "label: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.label);
    s << indent << "joint_names[]" << std::endl;
    for (size_t i = 0; i < v.joint_names.size(); ++i)
    {
      s << indent << "  joint_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.joint_names[i]);
    }
    s << indent << "interpolated_path[]" << std::endl;
    for (size_t i = 0; i < v.interpolated_path.size(); ++i)
    {
      s << indent << "  interpolated_path[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::intera_motion_msgs::WaypointSimple_<ContainerAllocator> >::stream(s, indent + "    ", v.interpolated_path[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // INTERA_MOTION_MSGS_MESSAGE_INTERPOLATEDPATH_H
