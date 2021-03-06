// File generated by CPPExt (CPP file)
//

#include "Bisector_Bisec.h"
#include "../Converter.h"
#include "../Geom2d/Geom2d_TrimmedCurve.h"
#include "../Geom2d/Geom2d_Curve.h"
#include "../gp/gp_Pnt2d.h"
#include "../gp/gp_Vec2d.h"
#include "../Geom2d/Geom2d_Point.h"


using namespace OCNaroWrappers;

OCBisector_Bisec::OCBisector_Bisec(Bisector_Bisec* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBisector_Bisec::OCBisector_Bisec() 
{
  nativeHandle = new Bisector_Bisec();
}

 void OCBisector_Bisec::Perform(OCNaroWrappers::OCGeom2d_Curve^ Cu1, OCNaroWrappers::OCGeom2d_Curve^ Cu2, OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCgp_Vec2d^ V1, OCNaroWrappers::OCgp_Vec2d^ V2, Standard_Real Sense, Standard_Real Tolerance, System::Boolean oncurve)
{
  ((Bisector_Bisec*)nativeHandle)->Perform(*((Handle_Geom2d_Curve*)Cu1->Handle), *((Handle_Geom2d_Curve*)Cu2->Handle), *((gp_Pnt2d*)P->Handle), *((gp_Vec2d*)V1->Handle), *((gp_Vec2d*)V2->Handle), Sense, Tolerance, OCConverter::BooleanToStandardBoolean(oncurve));
}

 void OCBisector_Bisec::Perform(OCNaroWrappers::OCGeom2d_Curve^ Cu, OCNaroWrappers::OCGeom2d_Point^ Pnt, OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCgp_Vec2d^ V1, OCNaroWrappers::OCgp_Vec2d^ V2, Standard_Real Sense, Standard_Real Tolerance, System::Boolean oncurve)
{
  ((Bisector_Bisec*)nativeHandle)->Perform(*((Handle_Geom2d_Curve*)Cu->Handle), *((Handle_Geom2d_Point*)Pnt->Handle), *((gp_Pnt2d*)P->Handle), *((gp_Vec2d*)V1->Handle), *((gp_Vec2d*)V2->Handle), Sense, Tolerance, OCConverter::BooleanToStandardBoolean(oncurve));
}

 void OCBisector_Bisec::Perform(OCNaroWrappers::OCGeom2d_Point^ Pnt, OCNaroWrappers::OCGeom2d_Curve^ Cu, OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCgp_Vec2d^ V1, OCNaroWrappers::OCgp_Vec2d^ V2, Standard_Real Sense, Standard_Real Tolerance, System::Boolean oncurve)
{
  ((Bisector_Bisec*)nativeHandle)->Perform(*((Handle_Geom2d_Point*)Pnt->Handle), *((Handle_Geom2d_Curve*)Cu->Handle), *((gp_Pnt2d*)P->Handle), *((gp_Vec2d*)V1->Handle), *((gp_Vec2d*)V2->Handle), Sense, Tolerance, OCConverter::BooleanToStandardBoolean(oncurve));
}

 void OCBisector_Bisec::Perform(OCNaroWrappers::OCGeom2d_Point^ Pnt1, OCNaroWrappers::OCGeom2d_Point^ Pnt2, OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCgp_Vec2d^ V1, OCNaroWrappers::OCgp_Vec2d^ V2, Standard_Real Sense, Standard_Real Tolerance, System::Boolean oncurve)
{
  ((Bisector_Bisec*)nativeHandle)->Perform(*((Handle_Geom2d_Point*)Pnt1->Handle), *((Handle_Geom2d_Point*)Pnt2->Handle), *((gp_Pnt2d*)P->Handle), *((gp_Vec2d*)V1->Handle), *((gp_Vec2d*)V2->Handle), Sense, Tolerance, OCConverter::BooleanToStandardBoolean(oncurve));
}

OCGeom2d_TrimmedCurve^ OCBisector_Bisec::Value()
{
  Handle(Geom2d_TrimmedCurve) tmp = ((Bisector_Bisec*)nativeHandle)->Value();
  return gcnew OCGeom2d_TrimmedCurve(&tmp);
}

OCGeom2d_TrimmedCurve^ OCBisector_Bisec::ChangeValue()
{
  Handle(Geom2d_TrimmedCurve) tmp = ((Bisector_Bisec*)nativeHandle)->ChangeValue();
  return gcnew OCGeom2d_TrimmedCurve(&tmp);
}


