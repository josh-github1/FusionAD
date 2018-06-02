// Generated by gencpp from file piksi_rtk_msgs/Dops.msg
// DO NOT EDIT!


#ifndef PIKSI_RTK_MSGS_MESSAGE_DOPS_H
#define PIKSI_RTK_MSGS_MESSAGE_DOPS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace piksi_rtk_msgs
{
template <class ContainerAllocator>
struct Dops_
{
  typedef Dops_<ContainerAllocator> Type;

  Dops_()
    : header()
    , tow(0)
    , gdop(0)
    , pdop(0)
    , tdop(0)
    , hdop(0)
    , vdop(0)  {
    }
  Dops_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , tow(0)
    , gdop(0)
    , pdop(0)
    , tdop(0)
    , hdop(0)
    , vdop(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint32_t _tow_type;
  _tow_type tow;

   typedef uint16_t _gdop_type;
  _gdop_type gdop;

   typedef uint16_t _pdop_type;
  _pdop_type pdop;

   typedef uint16_t _tdop_type;
  _tdop_type tdop;

   typedef uint16_t _hdop_type;
  _hdop_type hdop;

   typedef uint16_t _vdop_type;
  _vdop_type vdop;





  typedef boost::shared_ptr< ::piksi_rtk_msgs::Dops_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::piksi_rtk_msgs::Dops_<ContainerAllocator> const> ConstPtr;

}; // struct Dops_

typedef ::piksi_rtk_msgs::Dops_<std::allocator<void> > Dops;

typedef boost::shared_ptr< ::piksi_rtk_msgs::Dops > DopsPtr;
typedef boost::shared_ptr< ::piksi_rtk_msgs::Dops const> DopsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::piksi_rtk_msgs::Dops_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::piksi_rtk_msgs::Dops_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace piksi_rtk_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'piksi_rtk_msgs': ['/home/mensonli/FusionAD/src/utility/ethz_piksi_ros/piksi_rtk_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::piksi_rtk_msgs::Dops_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::piksi_rtk_msgs::Dops_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::piksi_rtk_msgs::Dops_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::piksi_rtk_msgs::Dops_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::piksi_rtk_msgs::Dops_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::piksi_rtk_msgs::Dops_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::piksi_rtk_msgs::Dops_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5abef1c1cdd65cbee762c17ce2b5bdcb";
  }

  static const char* value(const ::piksi_rtk_msgs::Dops_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5abef1c1cdd65cbeULL;
  static const uint64_t static_value2 = 0xe762c17ce2b5bdcbULL;
};

template<class ContainerAllocator>
struct DataType< ::piksi_rtk_msgs::Dops_<ContainerAllocator> >
{
  static const char* value()
  {
    return "piksi_rtk_msgs/Dops";
  }

  static const char* value(const ::piksi_rtk_msgs::Dops_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::piksi_rtk_msgs::Dops_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This dilution of precision (DOP) message describes the effect of navigation satellite geometry on positional\n\
# measurement precision.\n\
\n\
Header header\n\
\n\
uint32 tow  # GPS Time of Week [ms].\n\
uint16 gdop # Geometric Dilution of Precision.\n\
uint16 pdop # Position Dilution of Precision.\n\
uint16 tdop # Time Dilution of Precision.\n\
uint16 hdop # Horizontal Dilution of Precision.\n\
uint16 vdop # Vertical Dilution of Precision.\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::piksi_rtk_msgs::Dops_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::piksi_rtk_msgs::Dops_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.tow);
      stream.next(m.gdop);
      stream.next(m.pdop);
      stream.next(m.tdop);
      stream.next(m.hdop);
      stream.next(m.vdop);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Dops_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::piksi_rtk_msgs::Dops_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::piksi_rtk_msgs::Dops_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "tow: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.tow);
    s << indent << "gdop: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.gdop);
    s << indent << "pdop: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.pdop);
    s << indent << "tdop: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.tdop);
    s << indent << "hdop: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.hdop);
    s << indent << "vdop: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.vdop);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PIKSI_RTK_MSGS_MESSAGE_DOPS_H