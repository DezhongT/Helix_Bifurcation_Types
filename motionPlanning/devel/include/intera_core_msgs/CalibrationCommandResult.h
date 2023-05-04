// Generated by gencpp from file intera_core_msgs/CalibrationCommandResult.msg
// DO NOT EDIT!


#ifndef INTERA_CORE_MSGS_MESSAGE_CALIBRATIONCOMMANDRESULT_H
#define INTERA_CORE_MSGS_MESSAGE_CALIBRATIONCOMMANDRESULT_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace intera_core_msgs
{
template <class ContainerAllocator>
struct CalibrationCommandResult_
{
  typedef CalibrationCommandResult_<ContainerAllocator> Type;

  CalibrationCommandResult_()
    : result(false)
    , statusId()  {
    }
  CalibrationCommandResult_(const ContainerAllocator& _alloc)
    : result(false)
    , statusId(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _result_type;
  _result_type result;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _statusId_type;
  _statusId_type statusId;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(SUCCESS)
  #undef SUCCESS
#endif
#if defined(_WIN32) && defined(STOPPED)
  #undef STOPPED
#endif
#if defined(_WIN32) && defined(GENERIC_FAILURE)
  #undef GENERIC_FAILURE
#endif
#if defined(_WIN32) && defined(INCOMPLETE)
  #undef INCOMPLETE
#endif
#if defined(_WIN32) && defined(GRIPPER_ON)
  #undef GRIPPER_ON
#endif
#if defined(_WIN32) && defined(TORQUES_EXCEEDED_THRESHOLD)
  #undef TORQUES_EXCEEDED_THRESHOLD
#endif
#if defined(_WIN32) && defined(PLANNER_FAILURE)
  #undef PLANNER_FAILURE
#endif


  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> SUCCESS;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> STOPPED;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> GENERIC_FAILURE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> INCOMPLETE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> GRIPPER_ON;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> TORQUES_EXCEEDED_THRESHOLD;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> PLANNER_FAILURE;

  typedef boost::shared_ptr< ::intera_core_msgs::CalibrationCommandResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::intera_core_msgs::CalibrationCommandResult_<ContainerAllocator> const> ConstPtr;

}; // struct CalibrationCommandResult_

typedef ::intera_core_msgs::CalibrationCommandResult_<std::allocator<void> > CalibrationCommandResult;

typedef boost::shared_ptr< ::intera_core_msgs::CalibrationCommandResult > CalibrationCommandResultPtr;
typedef boost::shared_ptr< ::intera_core_msgs::CalibrationCommandResult const> CalibrationCommandResultConstPtr;

// constants requiring out of line definition

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      CalibrationCommandResult_<ContainerAllocator>::SUCCESS =
        
          "Success"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      CalibrationCommandResult_<ContainerAllocator>::STOPPED =
        
          "Stopped"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      CalibrationCommandResult_<ContainerAllocator>::GENERIC_FAILURE =
        
          "calibrationFailure"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      CalibrationCommandResult_<ContainerAllocator>::INCOMPLETE =
        
          "incomplete"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      CalibrationCommandResult_<ContainerAllocator>::GRIPPER_ON =
        
          "cannotCalibrateWithGripper"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      CalibrationCommandResult_<ContainerAllocator>::TORQUES_EXCEEDED_THRESHOLD =
        
          "torquesExceededThreshold"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      CalibrationCommandResult_<ContainerAllocator>::PLANNER_FAILURE =
        
          "plannerFailure"
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::intera_core_msgs::CalibrationCommandResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::intera_core_msgs::CalibrationCommandResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::intera_core_msgs::CalibrationCommandResult_<ContainerAllocator1> & lhs, const ::intera_core_msgs::CalibrationCommandResult_<ContainerAllocator2> & rhs)
{
  return lhs.result == rhs.result &&
    lhs.statusId == rhs.statusId;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::intera_core_msgs::CalibrationCommandResult_<ContainerAllocator1> & lhs, const ::intera_core_msgs::CalibrationCommandResult_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace intera_core_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::intera_core_msgs::CalibrationCommandResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::intera_core_msgs::CalibrationCommandResult_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_core_msgs::CalibrationCommandResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_core_msgs::CalibrationCommandResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_core_msgs::CalibrationCommandResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_core_msgs::CalibrationCommandResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::intera_core_msgs::CalibrationCommandResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "42762277c2f2777e046b77cebb5b2b55";
  }

  static const char* value(const ::intera_core_msgs::CalibrationCommandResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x42762277c2f2777eULL;
  static const uint64_t static_value2 = 0x046b77cebb5b2b55ULL;
};

template<class ContainerAllocator>
struct DataType< ::intera_core_msgs::CalibrationCommandResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "intera_core_msgs/CalibrationCommandResult";
  }

  static const char* value(const ::intera_core_msgs::CalibrationCommandResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::intera_core_msgs::CalibrationCommandResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# result\n"
"bool result\n"
"string statusId\n"
"# possible values for statusId are:\n"
"string SUCCESS=Success\n"
"string STOPPED=Stopped\n"
"string GENERIC_FAILURE=calibrationFailure\n"
"string INCOMPLETE=incomplete\n"
"string GRIPPER_ON=cannotCalibrateWithGripper\n"
"string TORQUES_EXCEEDED_THRESHOLD=torquesExceededThreshold\n"
"string PLANNER_FAILURE=plannerFailure\n"
"\n"
"\n"
;
  }

  static const char* value(const ::intera_core_msgs::CalibrationCommandResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::intera_core_msgs::CalibrationCommandResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
      stream.next(m.statusId);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CalibrationCommandResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::intera_core_msgs::CalibrationCommandResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::intera_core_msgs::CalibrationCommandResult_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.result);
    s << indent << "statusId: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.statusId);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INTERA_CORE_MSGS_MESSAGE_CALIBRATIONCOMMANDRESULT_H
