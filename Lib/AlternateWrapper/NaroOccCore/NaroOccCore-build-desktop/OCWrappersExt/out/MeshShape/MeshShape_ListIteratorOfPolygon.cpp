// File generated by CPPExt (CPP file)
//

#include "MeshShape_ListIteratorOfPolygon.h"
#include "../Converter.h"
#include "MeshShape_Polygon.h"
#include "MeshShape_PolygonPoint.h"
#include "MeshShape_ListNodeOfPolygon.h"


using namespace OCNaroWrappers;

OCMeshShape_ListIteratorOfPolygon::OCMeshShape_ListIteratorOfPolygon(MeshShape_ListIteratorOfPolygon* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCMeshShape_ListIteratorOfPolygon::OCMeshShape_ListIteratorOfPolygon() 
{
  nativeHandle = new MeshShape_ListIteratorOfPolygon();
}

OCMeshShape_ListIteratorOfPolygon::OCMeshShape_ListIteratorOfPolygon(OCNaroWrappers::OCMeshShape_Polygon^ L) 
{
  nativeHandle = new MeshShape_ListIteratorOfPolygon(*((MeshShape_Polygon*)L->Handle));
}

 void OCMeshShape_ListIteratorOfPolygon::Initialize(OCNaroWrappers::OCMeshShape_Polygon^ L)
{
  ((MeshShape_ListIteratorOfPolygon*)nativeHandle)->Initialize(*((MeshShape_Polygon*)L->Handle));
}

 System::Boolean OCMeshShape_ListIteratorOfPolygon::More()
{
  return OCConverter::StandardBooleanToBoolean(((MeshShape_ListIteratorOfPolygon*)nativeHandle)->More());
}

 void OCMeshShape_ListIteratorOfPolygon::Next()
{
  ((MeshShape_ListIteratorOfPolygon*)nativeHandle)->Next();
}

OCMeshShape_PolygonPoint^ OCMeshShape_ListIteratorOfPolygon::Value()
{
  MeshShape_PolygonPoint* tmp = new MeshShape_PolygonPoint();
  *tmp = ((MeshShape_ListIteratorOfPolygon*)nativeHandle)->Value();
  return gcnew OCMeshShape_PolygonPoint(tmp);
}


