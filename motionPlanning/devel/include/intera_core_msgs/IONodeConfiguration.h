// Generated by gencpp from file intera_core_msgs/IONodeConfiguration.msg
// DO NOT EDIT!


#ifndef INTERA_CORE_MSGS_MESSAGE_IONODECONFIGURATION_H
#define INTERA_CORE_MSGS_MESSAGE_IONODECONFIGURATION_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <intera_core_msgs/IOComponentConfiguration.h>
#include <intera_core_msgs/IOComponentConfiguration.h>
#include <intera_core_msgs/IOComponentConfiguration.h>

namespace intera_core_msgs
{
template <class ContainerAllocator>
struct IONodeConfiguration_
{
  typedef IONodeConfiguration_<ContainerAllocator> Type;

  IONodeConfiguration_()
    : time()
    , node()
    , devices()
    , plugins()  {
    }
  IONodeConfiguration_(const ContainerAllocator& _alloc)
    : time()
    , node(_alloc)
    , devices(_alloc)
    , plugins(_alloc)  {
  (void)_alloc;
    }



   typedef ros::Time _time_type;
  _time_type time;

   typedef  ::intera_core_msgs::IOComponentConfiguration_<ContainerAllocator>  _node_type;
  _node_type node;

   typedef std::vector< ::intera_core_msgs::IOComponentConfiguration_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::intera_core_msgs::IOComponentConfiguration_<ContainerAllocator> >> _devices_type;
  _devices_type devices;

   typedef std::vector< ::intera_core_msgs::IOComponentConfiguration_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::intera_core_msgs::IOComponentConfiguration_<ContainerAllocator> >> _plugins_type;
  _plugins_type plugins;





  typedef boost::shared_ptr< ::intera_core_msgs::IONodeConfiguration_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::intera_core_msgs::IONodeConfiguration_<ContainerAllocator> const> ConstPtr;

}; // struct IONodeConfiguration_

typedef ::intera_core_msgs::IONodeConfiguration_<std::allocator<void> > IONodeConfiguration;

typedef boost::shared_ptr< ::intera_core_msgs::IONodeConfiguration > IONodeConfigurationPtr;
typedef boost::shared_ptr< ::intera_core_msgs::IONodeConfiguration const> IONodeConfigurationConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::intera_core_msgs::IONodeConfiguration_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::intera_core_msgs::IONodeConfiguration_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::intera_core_msgs::IONodeConfiguration_<ContainerAllocator1> & lhs, const ::intera_core_msgs::IONodeConfiguration_<ContainerAllocator2> & rhs)
{
  return lhs.time == rhs.time &&
    lhs.node == rhs.node &&
    lhs.devices == rhs.devices &&
    lhs.plugins == rhs.plugins;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::intera_core_msgs::IONodeConfiguration_<ContainerAllocator1> & lhs, const ::intera_core_msgs::IONodeConfiguration_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace intera_core_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::intera_core_msgs::IONodeConfiguration_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::intera_core_msgs::IONodeConfiguration_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_core_msgs::IONodeConfiguration_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_core_msgs::IONodeConfiguration_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_core_msgs::IONodeConfiguration_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_core_msgs::IONodeConfiguration_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::intera_core_msgs::IONodeConfiguration_<ContainerAllocator> >
{
  static const char* value()
  {
    return "66800b32dbb52df00e2454d58668ac33";
  }

  static const char* value(const ::intera_core_msgs::IONodeConfiguration_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x66800b32dbb52df0ULL;
  static const uint64_t static_value2 = 0x0e2454d58668ac33ULL;
};

template<class ContainerAllocator>
struct DataType< ::intera_core_msgs::IONodeConfiguration_<ContainerAllocator> >
{
  static const char* value()
  {
    return "intera_core_msgs/IONodeConfiguration";
  }

  static const char* value(const ::intera_core_msgs::IONodeConfiguration_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::intera_core_msgs::IONodeConfiguration_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# IO Node Configuration\n"
"time time                           # configuration command timestamp\n"
"IOComponentConfiguration node       # IO Node configuration\n"
"IOComponentConfiguration[] devices  # configuration of IO Devices in this node\n"
"IOComponentConfiguration[] plugins  # configuration of IO Device Plugins in this node\n"
"\n"
"================================================================================\n"
"MSG: intera_core_msgs/IOComponentConfiguration\n"
"## IO Component configuration data\n"
"string name                           # component name\n"
"string config                         # component configuration JSON\n"
;
  }

  static const char* value(const ::intera_core_msgs::IONodeConfiguration_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::intera_core_msgs::IONodeConfiguration_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.time);
      stream.next(m.node);
      stream.next(m.devices);
      stream.next(m.plugins);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct IONodeConfiguration_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::intera_core_msgs::IONodeConfiguration_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::intera_core_msgs::IONodeConfiguration_<ContainerAllocator>& v)
  {
    s << indent << "time: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.time);
    s << indent << "node: ";
    s << std::endl;
    Printer< ::intera_core_msgs::IOComponentConfiguration_<ContainerAllocator> >::stream(s, indent + "  ", v.node);
    s << indent << "devices[]" << std::endl;
    for (size_t i = 0; i < v.devices.size(); ++i)
    {
      s << indent << "  devices[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::intera_core_msgs::IOComponentConfiguration_<ContainerAllocator> >::stream(s, indent + "    ", v.devices[i]);
    }
    s << indent << "plugins[]" << std::endl;
    for (size_t i = 0; i < v.plugins.size(); ++i)
    {
      s << indent << "  plugins[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::intera_core_msgs::IOComponentConfiguration_<ContainerAllocator> >::stream(s, indent + "    ", v.plugins[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // INTERA_CORE_MSGS_MESSAGE_IONODECONFIGURATION_H
