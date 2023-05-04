// Generated by gencpp from file intera_core_msgs/JointCommand.msg
// DO NOT EDIT!


#ifndef INTERA_CORE_MSGS_MESSAGE_JOINTCOMMAND_H
#define INTERA_CORE_MSGS_MESSAGE_JOINTCOMMAND_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace intera_core_msgs
{
template <class ContainerAllocator>
struct JointCommand_
{
  typedef JointCommand_<ContainerAllocator> Type;

  JointCommand_()
    : header()
    , mode(0)
    , names()
    , position()
    , velocity()
    , acceleration()
    , effort()  {
    }
  JointCommand_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , mode(0)
    , names(_alloc)
    , position(_alloc)
    , velocity(_alloc)
    , acceleration(_alloc)
    , effort(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _mode_type;
  _mode_type mode;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> _names_type;
  _names_type names;

   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _position_type;
  _position_type position;

   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _velocity_type;
  _velocity_type velocity;

   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _acceleration_type;
  _acceleration_type acceleration;

   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _effort_type;
  _effort_type effort;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(POSITION_MODE)
  #undef POSITION_MODE
#endif
#if defined(_WIN32) && defined(VELOCITY_MODE)
  #undef VELOCITY_MODE
#endif
#if defined(_WIN32) && defined(TORQUE_MODE)
  #undef TORQUE_MODE
#endif
#if defined(_WIN32) && defined(TRAJECTORY_MODE)
  #undef TRAJECTORY_MODE
#endif

  enum {
    POSITION_MODE = 1,
    VELOCITY_MODE = 2,
    TORQUE_MODE = 3,
    TRAJECTORY_MODE = 4,
  };


  typedef boost::shared_ptr< ::intera_core_msgs::JointCommand_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::intera_core_msgs::JointCommand_<ContainerAllocator> const> ConstPtr;

}; // struct JointCommand_

typedef ::intera_core_msgs::JointCommand_<std::allocator<void> > JointCommand;

typedef boost::shared_ptr< ::intera_core_msgs::JointCommand > JointCommandPtr;
typedef boost::shared_ptr< ::intera_core_msgs::JointCommand const> JointCommandConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::intera_core_msgs::JointCommand_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::intera_core_msgs::JointCommand_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::intera_core_msgs::JointCommand_<ContainerAllocator1> & lhs, const ::intera_core_msgs::JointCommand_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.mode == rhs.mode &&
    lhs.names == rhs.names &&
    lhs.position == rhs.position &&
    lhs.velocity == rhs.velocity &&
    lhs.acceleration == rhs.acceleration &&
    lhs.effort == rhs.effort;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::intera_core_msgs::JointCommand_<ContainerAllocator1> & lhs, const ::intera_core_msgs::JointCommand_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace intera_core_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::intera_core_msgs::JointCommand_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::intera_core_msgs::JointCommand_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_core_msgs::JointCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_core_msgs::JointCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_core_msgs::JointCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_core_msgs::JointCommand_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::intera_core_msgs::JointCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c8c85922d297da6209a089a906207e5d";
  }

  static const char* value(const ::intera_core_msgs::JointCommand_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc8c85922d297da62ULL;
  static const uint64_t static_value2 = 0x09a089a906207e5dULL;
};

template<class ContainerAllocator>
struct DataType< ::intera_core_msgs::JointCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "intera_core_msgs/JointCommand";
  }

  static const char* value(const ::intera_core_msgs::JointCommand_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::intera_core_msgs::JointCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"\n"
"int32 mode             # Mode in which to command arm\n"
"\n"
"string[]  names        # Joint names order for command\n"
"\n"
"# Fields of commands indexed according to the Joint names vector.\n"
"# Command fields required for a desired mode are listed in the comments\n"
"float64[] position     # (radians)       Required for POSITION_MODE and TRAJECTORY_MODE\n"
"float64[] velocity     # (radians/sec)   Required for VELOCITY_MODE and TRAJECTORY_MODE\n"
"float64[] acceleration # (radians/sec^2) Required for                   TRAJECTORY_MODE\n"
"float64[] effort       # (newton-meters) Required for TORQUE_MODE\n"
"\n"
"# Modes available to command arm\n"
"int32 POSITION_MODE=1\n"
"int32 VELOCITY_MODE=2\n"
"int32 TORQUE_MODE=3\n"
"int32 TRAJECTORY_MODE=4\n"
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

  static const char* value(const ::intera_core_msgs::JointCommand_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::intera_core_msgs::JointCommand_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.mode);
      stream.next(m.names);
      stream.next(m.position);
      stream.next(m.velocity);
      stream.next(m.acceleration);
      stream.next(m.effort);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JointCommand_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::intera_core_msgs::JointCommand_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::intera_core_msgs::JointCommand_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "mode: ";
    Printer<int32_t>::stream(s, indent + "  ", v.mode);
    s << indent << "names[]" << std::endl;
    for (size_t i = 0; i < v.names.size(); ++i)
    {
      s << indent << "  names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.names[i]);
    }
    s << indent << "position[]" << std::endl;
    for (size_t i = 0; i < v.position.size(); ++i)
    {
      s << indent << "  position[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.position[i]);
    }
    s << indent << "velocity[]" << std::endl;
    for (size_t i = 0; i < v.velocity.size(); ++i)
    {
      s << indent << "  velocity[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.velocity[i]);
    }
    s << indent << "acceleration[]" << std::endl;
    for (size_t i = 0; i < v.acceleration.size(); ++i)
    {
      s << indent << "  acceleration[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.acceleration[i]);
    }
    s << indent << "effort[]" << std::endl;
    for (size_t i = 0; i < v.effort.size(); ++i)
    {
      s << indent << "  effort[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.effort[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // INTERA_CORE_MSGS_MESSAGE_JOINTCOMMAND_H
