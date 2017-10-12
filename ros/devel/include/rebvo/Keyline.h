// Generated by gencpp from file rebvo/Keyline.msg
// DO NOT EDIT!


#ifndef REBVO_MESSAGE_KEYLINE_H
#define REBVO_MESSAGE_KEYLINE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rebvo
{
template <class ContainerAllocator>
struct Keyline_
{
  typedef Keyline_<ContainerAllocator> Type;

  Keyline_()
    : KlGrad()
    , KlImgPos()
    , invDepth(0.0)
    , invDepthS(0.0)
    , KlFocPos()
    , KlMatchID(0)
    , ConsMatch(0)
    , KlPrevMatchID(0)
    , KlNextMatchID(0)  {
      KlGrad.assign(0.0);

      KlImgPos.assign(0.0);

      KlFocPos.assign(0.0);
  }
  Keyline_(const ContainerAllocator& _alloc)
    : KlGrad()
    , KlImgPos()
    , invDepth(0.0)
    , invDepthS(0.0)
    , KlFocPos()
    , KlMatchID(0)
    , ConsMatch(0)
    , KlPrevMatchID(0)
    , KlNextMatchID(0)  {
  (void)_alloc;
      KlGrad.assign(0.0);

      KlImgPos.assign(0.0);

      KlFocPos.assign(0.0);
  }



   typedef boost::array<float, 2>  _KlGrad_type;
  _KlGrad_type KlGrad;

   typedef boost::array<float, 2>  _KlImgPos_type;
  _KlImgPos_type KlImgPos;

   typedef double _invDepth_type;
  _invDepth_type invDepth;

   typedef double _invDepthS_type;
  _invDepthS_type invDepthS;

   typedef boost::array<float, 2>  _KlFocPos_type;
  _KlFocPos_type KlFocPos;

   typedef int32_t _KlMatchID_type;
  _KlMatchID_type KlMatchID;

   typedef int32_t _ConsMatch_type;
  _ConsMatch_type ConsMatch;

   typedef int16_t _KlPrevMatchID_type;
  _KlPrevMatchID_type KlPrevMatchID;

   typedef int16_t _KlNextMatchID_type;
  _KlNextMatchID_type KlNextMatchID;




  typedef boost::shared_ptr< ::rebvo::Keyline_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rebvo::Keyline_<ContainerAllocator> const> ConstPtr;

}; // struct Keyline_

typedef ::rebvo::Keyline_<std::allocator<void> > Keyline;

typedef boost::shared_ptr< ::rebvo::Keyline > KeylinePtr;
typedef boost::shared_ptr< ::rebvo::Keyline const> KeylineConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rebvo::Keyline_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rebvo::Keyline_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rebvo

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'rebvo': ['/home/juan/git/rebvo/ros/src/rebvo_ros/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rebvo::Keyline_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rebvo::Keyline_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rebvo::Keyline_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rebvo::Keyline_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rebvo::Keyline_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rebvo::Keyline_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rebvo::Keyline_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1ae0c73cd497f30da6aa8e3479b24957";
  }

  static const char* value(const ::rebvo::Keyline_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1ae0c73cd497f30dULL;
  static const uint64_t static_value2 = 0xa6aa8e3479b24957ULL;
};

template<class ContainerAllocator>
struct DataType< ::rebvo::Keyline_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rebvo/Keyline";
  }

  static const char* value(const ::rebvo::Keyline_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rebvo::Keyline_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32[2] KlGrad		#KeyLine's gradient vector [x,y]\n\
\n\
float32[2] KlImgPos		#KeyLine's image position [x,y]\n\
\n\
float64 invDepth		#Estimated Inverse Depth\n\
float64 invDepthS		#Estimated Inverse Depth Uncertainty\n\
\n\
float32[2] KlFocPos		#KL position in focal point centred coordinates (plane at focal length zf) [x,y]\n\
\n\
int32 KlMatchID			#Id of the matching keyline\n\
\n\
int32 ConsMatch			#number of consecutive matches\n\
\n\
int16 KlPrevMatchID		#Id of previous consecutive KeyLine\n\
int16 KlNextMatchID		#Id of next consecutive KeyLine\n\
";
  }

  static const char* value(const ::rebvo::Keyline_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rebvo::Keyline_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.KlGrad);
      stream.next(m.KlImgPos);
      stream.next(m.invDepth);
      stream.next(m.invDepthS);
      stream.next(m.KlFocPos);
      stream.next(m.KlMatchID);
      stream.next(m.ConsMatch);
      stream.next(m.KlPrevMatchID);
      stream.next(m.KlNextMatchID);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Keyline_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rebvo::Keyline_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rebvo::Keyline_<ContainerAllocator>& v)
  {
    s << indent << "KlGrad[]" << std::endl;
    for (size_t i = 0; i < v.KlGrad.size(); ++i)
    {
      s << indent << "  KlGrad[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.KlGrad[i]);
    }
    s << indent << "KlImgPos[]" << std::endl;
    for (size_t i = 0; i < v.KlImgPos.size(); ++i)
    {
      s << indent << "  KlImgPos[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.KlImgPos[i]);
    }
    s << indent << "invDepth: ";
    Printer<double>::stream(s, indent + "  ", v.invDepth);
    s << indent << "invDepthS: ";
    Printer<double>::stream(s, indent + "  ", v.invDepthS);
    s << indent << "KlFocPos[]" << std::endl;
    for (size_t i = 0; i < v.KlFocPos.size(); ++i)
    {
      s << indent << "  KlFocPos[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.KlFocPos[i]);
    }
    s << indent << "KlMatchID: ";
    Printer<int32_t>::stream(s, indent + "  ", v.KlMatchID);
    s << indent << "ConsMatch: ";
    Printer<int32_t>::stream(s, indent + "  ", v.ConsMatch);
    s << indent << "KlPrevMatchID: ";
    Printer<int16_t>::stream(s, indent + "  ", v.KlPrevMatchID);
    s << indent << "KlNextMatchID: ";
    Printer<int16_t>::stream(s, indent + "  ", v.KlNextMatchID);
  }
};

} // namespace message_operations
} // namespace ros

#endif // REBVO_MESSAGE_KEYLINE_H
