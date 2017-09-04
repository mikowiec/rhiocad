// File generated by CPPExt (CPP file)
//

#include "BRepTools_Quilt.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Edge.h"
#include "../TopoDS/TopoDS_Vertex.h"
#include "../TopoDS/TopoDS_Shape.h"


using namespace OCNaroWrappers;

OCBRepTools_Quilt::OCBRepTools_Quilt(BRepTools_Quilt* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBRepTools_Quilt::OCBRepTools_Quilt() 
{
  nativeHandle = new BRepTools_Quilt();
}

 void OCBRepTools_Quilt::Bind(OCNaroWrappers::OCTopoDS_Edge^ Eold, OCNaroWrappers::OCTopoDS_Edge^ Enew)
{
  ((BRepTools_Quilt*)nativeHandle)->Bind(*((TopoDS_Edge*)Eold->Handle), *((TopoDS_Edge*)Enew->Handle));
}

 void OCBRepTools_Quilt::Bind(OCNaroWrappers::OCTopoDS_Vertex^ Vold, OCNaroWrappers::OCTopoDS_Vertex^ Vnew)
{
  ((BRepTools_Quilt*)nativeHandle)->Bind(*((TopoDS_Vertex*)Vold->Handle), *((TopoDS_Vertex*)Vnew->Handle));
}

 void OCBRepTools_Quilt::Add(OCNaroWrappers::OCTopoDS_Shape^ S)
{
  ((BRepTools_Quilt*)nativeHandle)->Add(*((TopoDS_Shape*)S->Handle));
}

 System::Boolean OCBRepTools_Quilt::IsCopied(OCNaroWrappers::OCTopoDS_Shape^ S)
{
  return OCConverter::StandardBooleanToBoolean(((BRepTools_Quilt*)nativeHandle)->IsCopied(*((TopoDS_Shape*)S->Handle)));
}

OCTopoDS_Shape^ OCBRepTools_Quilt::Copy(OCNaroWrappers::OCTopoDS_Shape^ S)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepTools_Quilt*)nativeHandle)->Copy(*((TopoDS_Shape*)S->Handle));
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopoDS_Shape^ OCBRepTools_Quilt::Shells()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepTools_Quilt*)nativeHandle)->Shells();
  return gcnew OCTopoDS_Shape(tmp);
}

