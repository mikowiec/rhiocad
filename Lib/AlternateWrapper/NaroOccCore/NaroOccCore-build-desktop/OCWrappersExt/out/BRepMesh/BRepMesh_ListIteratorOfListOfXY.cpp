// File generated by CPPExt (CPP file)
//

#include "BRepMesh_ListIteratorOfListOfXY.h"
#include "../Converter.h"
#include "BRepMesh_ListOfXY.h"
#include "../gp/gp_XY.h"
#include "BRepMesh_ListNodeOfListOfXY.h"


using namespace OCNaroWrappers;

OCBRepMesh_ListIteratorOfListOfXY::OCBRepMesh_ListIteratorOfListOfXY(BRepMesh_ListIteratorOfListOfXY* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBRepMesh_ListIteratorOfListOfXY::OCBRepMesh_ListIteratorOfListOfXY() 
{
  nativeHandle = new BRepMesh_ListIteratorOfListOfXY();
}

OCBRepMesh_ListIteratorOfListOfXY::OCBRepMesh_ListIteratorOfListOfXY(OCNaroWrappers::OCBRepMesh_ListOfXY^ L) 
{
  nativeHandle = new BRepMesh_ListIteratorOfListOfXY(*((BRepMesh_ListOfXY*)L->Handle));
}

 void OCBRepMesh_ListIteratorOfListOfXY::Initialize(OCNaroWrappers::OCBRepMesh_ListOfXY^ L)
{
  ((BRepMesh_ListIteratorOfListOfXY*)nativeHandle)->Initialize(*((BRepMesh_ListOfXY*)L->Handle));
}

 System::Boolean OCBRepMesh_ListIteratorOfListOfXY::More()
{
  return OCConverter::StandardBooleanToBoolean(((BRepMesh_ListIteratorOfListOfXY*)nativeHandle)->More());
}

 void OCBRepMesh_ListIteratorOfListOfXY::Next()
{
  ((BRepMesh_ListIteratorOfListOfXY*)nativeHandle)->Next();
}

OCgp_XY^ OCBRepMesh_ListIteratorOfListOfXY::Value()
{
  gp_XY* tmp = new gp_XY();
  *tmp = ((BRepMesh_ListIteratorOfListOfXY*)nativeHandle)->Value();
  return gcnew OCgp_XY(tmp);
}

