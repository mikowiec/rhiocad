// File generated by CPPExt (CPP file)
//

#include "IntRes2d_IntersectionSegment.h"
#include "../Converter.h"
#include "IntRes2d_IntersectionPoint.h"


using namespace OCNaroWrappers;

OCIntRes2d_IntersectionSegment::OCIntRes2d_IntersectionSegment(IntRes2d_IntersectionSegment* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCIntRes2d_IntersectionSegment::OCIntRes2d_IntersectionSegment() 
{
  nativeHandle = new IntRes2d_IntersectionSegment();
}

OCIntRes2d_IntersectionSegment::OCIntRes2d_IntersectionSegment(OCNaroWrappers::OCIntRes2d_IntersectionPoint^ P1, OCNaroWrappers::OCIntRes2d_IntersectionPoint^ P2, System::Boolean Oppos, System::Boolean ReverseFlag) 
{
  nativeHandle = new IntRes2d_IntersectionSegment(*((IntRes2d_IntersectionPoint*)P1->Handle), *((IntRes2d_IntersectionPoint*)P2->Handle), OCConverter::BooleanToStandardBoolean(Oppos), OCConverter::BooleanToStandardBoolean(ReverseFlag));
}

OCIntRes2d_IntersectionSegment::OCIntRes2d_IntersectionSegment(OCNaroWrappers::OCIntRes2d_IntersectionPoint^ P, System::Boolean First, System::Boolean Oppos, System::Boolean ReverseFlag) 
{
  nativeHandle = new IntRes2d_IntersectionSegment(*((IntRes2d_IntersectionPoint*)P->Handle), OCConverter::BooleanToStandardBoolean(First), OCConverter::BooleanToStandardBoolean(Oppos), OCConverter::BooleanToStandardBoolean(ReverseFlag));
}

OCIntRes2d_IntersectionSegment::OCIntRes2d_IntersectionSegment(System::Boolean Oppos) 
{
  nativeHandle = new IntRes2d_IntersectionSegment(OCConverter::BooleanToStandardBoolean(Oppos));
}

 System::Boolean OCIntRes2d_IntersectionSegment::IsOpposite()
{
  return OCConverter::StandardBooleanToBoolean(((IntRes2d_IntersectionSegment*)nativeHandle)->IsOpposite());
}

 System::Boolean OCIntRes2d_IntersectionSegment::HasFirstPoint()
{
  return OCConverter::StandardBooleanToBoolean(((IntRes2d_IntersectionSegment*)nativeHandle)->HasFirstPoint());
}

OCIntRes2d_IntersectionPoint^ OCIntRes2d_IntersectionSegment::FirstPoint()
{
  IntRes2d_IntersectionPoint* tmp = new IntRes2d_IntersectionPoint();
  *tmp = ((IntRes2d_IntersectionSegment*)nativeHandle)->FirstPoint();
  return gcnew OCIntRes2d_IntersectionPoint(tmp);
}

 System::Boolean OCIntRes2d_IntersectionSegment::HasLastPoint()
{
  return OCConverter::StandardBooleanToBoolean(((IntRes2d_IntersectionSegment*)nativeHandle)->HasLastPoint());
}

OCIntRes2d_IntersectionPoint^ OCIntRes2d_IntersectionSegment::LastPoint()
{
  IntRes2d_IntersectionPoint* tmp = new IntRes2d_IntersectionPoint();
  *tmp = ((IntRes2d_IntersectionSegment*)nativeHandle)->LastPoint();
  return gcnew OCIntRes2d_IntersectionPoint(tmp);
}

