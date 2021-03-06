// File generated by CPPExt (CPP file)
//

#include "GeomAPI_Interpolate.h"
#include "../Converter.h"
#include "../TColgp/TColgp_HArray1OfPnt.h"
#include "../Geom/Geom_BSplineCurve.h"
#include "../TColgp/TColgp_HArray1OfVec.h"
#include "../TColStd/TColStd_HArray1OfBoolean.h"
#include "../TColStd/TColStd_HArray1OfReal.h"
#include "../gp/gp_Vec.h"
#include "../TColgp/TColgp_Array1OfVec.h"


using namespace OCNaroWrappers;

OCGeomAPI_Interpolate::OCGeomAPI_Interpolate(GeomAPI_Interpolate* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCGeomAPI_Interpolate::OCGeomAPI_Interpolate(OCNaroWrappers::OCTColgp_HArray1OfPnt^ Points, System::Boolean PeriodicFlag, Standard_Real Tolerance) 
{
  nativeHandle = new GeomAPI_Interpolate(*((Handle_TColgp_HArray1OfPnt*)Points->Handle), OCConverter::BooleanToStandardBoolean(PeriodicFlag), Tolerance);
}

OCGeomAPI_Interpolate::OCGeomAPI_Interpolate(OCNaroWrappers::OCTColgp_HArray1OfPnt^ Points, OCNaroWrappers::OCTColStd_HArray1OfReal^ Parameters, System::Boolean PeriodicFlag, Standard_Real Tolerance) 
{
  nativeHandle = new GeomAPI_Interpolate(*((Handle_TColgp_HArray1OfPnt*)Points->Handle), *((Handle_TColStd_HArray1OfReal*)Parameters->Handle), OCConverter::BooleanToStandardBoolean(PeriodicFlag), Tolerance);
}

 void OCGeomAPI_Interpolate::Load(OCNaroWrappers::OCgp_Vec^ InitialTangent, OCNaroWrappers::OCgp_Vec^ FinalTangent, System::Boolean Scale)
{
  ((GeomAPI_Interpolate*)nativeHandle)->Load(*((gp_Vec*)InitialTangent->Handle), *((gp_Vec*)FinalTangent->Handle), OCConverter::BooleanToStandardBoolean(Scale));
}

 void OCGeomAPI_Interpolate::Load(OCNaroWrappers::OCTColgp_Array1OfVec^ Tangents, OCNaroWrappers::OCTColStd_HArray1OfBoolean^ TangentFlags, System::Boolean Scale)
{
  ((GeomAPI_Interpolate*)nativeHandle)->Load(*((TColgp_Array1OfVec*)Tangents->Handle), *((Handle_TColStd_HArray1OfBoolean*)TangentFlags->Handle), OCConverter::BooleanToStandardBoolean(Scale));
}

 void OCGeomAPI_Interpolate::ClearTangents()
{
  ((GeomAPI_Interpolate*)nativeHandle)->ClearTangents();
}

 void OCGeomAPI_Interpolate::Perform()
{
  ((GeomAPI_Interpolate*)nativeHandle)->Perform();
}

OCGeom_BSplineCurve^ OCGeomAPI_Interpolate::Curve()
{
  Handle(Geom_BSplineCurve) tmp = ((GeomAPI_Interpolate*)nativeHandle)->Curve();
  return gcnew OCGeom_BSplineCurve(&tmp);
}

 System::Boolean OCGeomAPI_Interpolate::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((GeomAPI_Interpolate*)nativeHandle)->IsDone());
}


