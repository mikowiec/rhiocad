// File generated by CPPExt (CPP file)
//

#include "TColGeom_Array1OfBoundedCurve.h"
#include "../Converter.h"
#include "../Geom/Geom_BoundedCurve.h"


using namespace OCNaroWrappers;

OCTColGeom_Array1OfBoundedCurve::OCTColGeom_Array1OfBoundedCurve(TColGeom_Array1OfBoundedCurve* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTColGeom_Array1OfBoundedCurve::OCTColGeom_Array1OfBoundedCurve(Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new TColGeom_Array1OfBoundedCurve(Low, Up);
}

OCTColGeom_Array1OfBoundedCurve::OCTColGeom_Array1OfBoundedCurve(OCNaroWrappers::OCGeom_BoundedCurve^ Item, Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new TColGeom_Array1OfBoundedCurve(*((Handle_Geom_BoundedCurve*)Item->Handle), Low, Up);
}

 void OCTColGeom_Array1OfBoundedCurve::Init(OCNaroWrappers::OCGeom_BoundedCurve^ V)
{
  ((TColGeom_Array1OfBoundedCurve*)nativeHandle)->Init(*((Handle_Geom_BoundedCurve*)V->Handle));
}

 System::Boolean OCTColGeom_Array1OfBoundedCurve::IsAllocated()
{
  return OCConverter::StandardBooleanToBoolean(((TColGeom_Array1OfBoundedCurve*)nativeHandle)->IsAllocated());
}

OCTColGeom_Array1OfBoundedCurve^ OCTColGeom_Array1OfBoundedCurve::Assign(OCNaroWrappers::OCTColGeom_Array1OfBoundedCurve^ Other)
{
  TColGeom_Array1OfBoundedCurve* tmp = new TColGeom_Array1OfBoundedCurve(0, 0);
  *tmp = ((TColGeom_Array1OfBoundedCurve*)nativeHandle)->Assign(*((TColGeom_Array1OfBoundedCurve*)Other->Handle));
  return gcnew OCTColGeom_Array1OfBoundedCurve(tmp);
}

 Standard_Integer OCTColGeom_Array1OfBoundedCurve::Length()
{
  return ((TColGeom_Array1OfBoundedCurve*)nativeHandle)->Length();
}

 Standard_Integer OCTColGeom_Array1OfBoundedCurve::Lower()
{
  return ((TColGeom_Array1OfBoundedCurve*)nativeHandle)->Lower();
}

 Standard_Integer OCTColGeom_Array1OfBoundedCurve::Upper()
{
  return ((TColGeom_Array1OfBoundedCurve*)nativeHandle)->Upper();
}

 void OCTColGeom_Array1OfBoundedCurve::SetValue(Standard_Integer Index, OCNaroWrappers::OCGeom_BoundedCurve^ Value)
{
  ((TColGeom_Array1OfBoundedCurve*)nativeHandle)->SetValue(Index, *((Handle_Geom_BoundedCurve*)Value->Handle));
}

OCGeom_BoundedCurve^ OCTColGeom_Array1OfBoundedCurve::Value(Standard_Integer Index)
{
  Handle(Geom_BoundedCurve) tmp = ((TColGeom_Array1OfBoundedCurve*)nativeHandle)->Value(Index);
  return gcnew OCGeom_BoundedCurve(&tmp);
}

OCGeom_BoundedCurve^ OCTColGeom_Array1OfBoundedCurve::ChangeValue(Standard_Integer Index)
{
  Handle(Geom_BoundedCurve) tmp = ((TColGeom_Array1OfBoundedCurve*)nativeHandle)->ChangeValue(Index);
  return gcnew OCGeom_BoundedCurve(&tmp);
}

