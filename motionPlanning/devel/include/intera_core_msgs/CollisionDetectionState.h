// Generated by gencpp from file intera_core_msgs/CollisionDetectionState.msg
// DO NOT EDIT!


#ifndef INTERA_CORE_MSGS_MESSAGE_COLLISIONDETECTIONSTATE_H
#define INTERA_CORE_MSGS_MESSAGE_COLLISIONDETECTIONSTATE_H


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
struct CollisionDetectionState_
{
  typedef CollisionDetectionState_<ContainerAllocator> Type;

  CollisionDetectionState_()
    : header()
    , collision_state(false)  {
    }
  CollisionDetectionState_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , collision_state(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _collision_state_type;
  _collision_state_type collision_state;





  typedef boost::shared_ptr< ::intera_core_msgs::CollisionDetectionState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::intera_core_msgs::CollisionDetectionState_<ContainerAllocator> const> ConstPtr;

}; // struct CollisionDetectionState_

typedef ::intera_core_msgs::CollisionDetectionState_<std::allocator<void> > CollisionDetectionState;

typedef boost::shared_ptr< ::intera_core_msgs::CollisionDetectionState > CollisionDetectionStatePtr;
typedef boost::shared_ptr< ::intera_core_msgs::CollisionDetectionState const> CollisionDetectionStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::intera_core_msgs::CollisionDetectionState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::intera_core_msgs::CollisionDetectionState_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::intera_core_msgs::CollisionDetectionState_<ContainerAllocator1> & lhs, const ::intera_core_msgs::CollisionDetectionState_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.collision_state == rhs.collision_state;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::intera_core_msgs::CollisionDetectionState_<ContainerAllocator1> & lhs, const ::intera_core_msgs::CollisionDetectionState_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace intera_core_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::intera_core_msgs::CollisionDetectionState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::intera_core_msgs::CollisionDetectionState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_core_msgs::CollisionDetectionState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_core_msgs::CollisionDetectionState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_core_msgs::CollisionDetectionState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_core_msgs::CollisionDetectionState_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::intera_core_msgs::CollisionDetectionState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7bde38c182b4d08fdc0635b116f65d04";
  }

  static const char* value(const ::intera_core_msgs::CollisionDetectionState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7bde38c182b4d08fULL;
  static const uint64_t static_value2 = 0xdc0635b116f65d04ULL;
};

template<class ContainerAllocator>
struct DataType< ::intera_core_msgs::CollisionDetectionState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "intera_core_msgs/CollisionDetectionState";
  }

  static const char* value(const ::intera_core_msgs::CollisionDetectionState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::intera_core_msgs::CollisionDetectionState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"bool collision_state\n"
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

  static const char* value(const ::intera_core_msgs::CollisionDetectionState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::intera_core_msgs::CollisionDetectionState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.collision_state);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CollisionDetectionState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::intera_core_msgs::CollisionDetectionState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::intera_core_msgs::CollisionDetectionState_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "collision_state: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.collision_state);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INTERA_CORE_MSGS_MESSAGE_COLLISIONDETECTIONSTATE_H
