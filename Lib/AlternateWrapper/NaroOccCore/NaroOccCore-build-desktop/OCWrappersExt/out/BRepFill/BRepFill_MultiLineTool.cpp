// File generated by CPPExt (CPP file)
//

#include "BRepFill_MultiLineTool.h"
#include "../Converter.h"
#include "BRepFill_MultiLine.h"
#include "../TColgp/TColgp_Array1OfPnt.h"
#include "../TColgp/TColgp_Array1OfPnt2d.h"
#include "../TColgp/TColgp_Array1OfVec.h"
#include "../TColgp/TColgp_Array1OfVec2d.h"


using namespace OCNaroWrappers;

OCBRepFill_MultiLineTool::OCBRepFill_MultiLineTool(BRepFill_MultiLineTool* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

 Standard_Real OCBRepFill_MultiLineTool::FirstParameter(OCNaroWrappers::OCBRepFill_MultiLine^ ML)
{
  return BRepFill_MultiLineTool::FirstParameter(*((BRepFill_MultiLine*)ML->Handle));
}

 Standard_Real OCBRepFill_MultiLineTool::LastParameter(OCNaroWrappers::OCBRepFill_MultiLine^ ML)
{
  return BRepFill_MultiLineTool::LastParameter(*((BRepFill_MultiLine*)ML->Handle));
}

 Standard_Integer OCBRepFill_MultiLineTool::NbP2d(OCNaroWrappers::OCBRepFill_MultiLine^ ML)
{
  return BRepFill_MultiLineTool::NbP2d(*((BRepFill_MultiLine*)ML->Handle));
}

 Standard_Integer OCBRepFill_MultiLineTool::NbP3d(OCNaroWrappers::OCBRepFill_MultiLine^ ML)
{
  return BRepFill_MultiLineTool::NbP3d(*((BRepFill_MultiLine*)ML->Handle));
}

 void OCBRepFill_MultiLineTool::Value(OCNaroWrappers::OCBRepFill_MultiLine^ ML, Standard_Real U, OCNaroWrappers::OCTColgp_Array1OfPnt^ tabPt)
{
  BRepFill_MultiLineTool::Value(*((BRepFill_MultiLine*)ML->Handle), U, *((TColgp_Array1OfPnt*)tabPt->Handle));
}

 void OCBRepFill_MultiLineTool::Value(OCNaroWrappers::OCBRepFill_MultiLine^ ML, Standard_Real U, OCNaroWrappers::OCTColgp_Array1OfPnt2d^ tabPt2d)
{
  BRepFill_MultiLineTool::Value(*((BRepFill_MultiLine*)ML->Handle), U, *((TColgp_Array1OfPnt2d*)tabPt2d->Handle));
}

 void OCBRepFill_MultiLineTool::Value(OCNaroWrappers::OCBRepFill_MultiLine^ ML, Standard_Real U, OCNaroWrappers::OCTColgp_Array1OfPnt^ tabPt, OCNaroWrappers::OCTColgp_Array1OfPnt2d^ tabPt2d)
{
  BRepFill_MultiLineTool::Value(*((BRepFill_MultiLine*)ML->Handle), U, *((TColgp_Array1OfPnt*)tabPt->Handle), *((TColgp_Array1OfPnt2d*)tabPt2d->Handle));
}

 System::Boolean OCBRepFill_MultiLineTool::D1(OCNaroWrappers::OCBRepFill_MultiLine^ ML, Standard_Real U, OCNaroWrappers::OCTColgp_Array1OfVec^ tabV)
{
  return OCConverter::StandardBooleanToBoolean(BRepFill_MultiLineTool::D1(*((BRepFill_MultiLine*)ML->Handle), U, *((TColgp_Array1OfVec*)tabV->Handle)));
}

 System::Boolean OCBRepFill_MultiLineTool::D1(OCNaroWrappers::OCBRepFill_MultiLine^ ML, Standard_Real U, OCNaroWrappers::OCTColgp_Array1OfVec2d^ tabV2d)
{
  return OCConverter::StandardBooleanToBoolean(BRepFill_MultiLineTool::D1(*((BRepFill_MultiLine*)ML->Handle), U, *((TColgp_Array1OfVec2d*)tabV2d->Handle)));
}

 System::Boolean OCBRepFill_MultiLineTool::D1(OCNaroWrappers::OCBRepFill_MultiLine^ ML, Standard_Real U, OCNaroWrappers::OCTColgp_Array1OfVec^ tabV, OCNaroWrappers::OCTColgp_Array1OfVec2d^ tabV2d)
{
  return OCConverter::StandardBooleanToBoolean(BRepFill_MultiLineTool::D1(*((BRepFill_MultiLine*)ML->Handle), U, *((TColgp_Array1OfVec*)tabV->Handle), *((TColgp_Array1OfVec2d*)tabV2d->Handle)));
}


