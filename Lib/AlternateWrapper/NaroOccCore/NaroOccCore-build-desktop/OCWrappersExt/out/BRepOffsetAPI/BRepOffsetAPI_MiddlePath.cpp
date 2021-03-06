// File generated by CPPExt (CPP file)
//

#include "BRepOffsetAPI_MiddlePath.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"


using namespace OCNaroWrappers;

OCBRepOffsetAPI_MiddlePath::OCBRepOffsetAPI_MiddlePath(BRepOffsetAPI_MiddlePath* nativeHandle) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepOffsetAPI_MiddlePath::OCBRepOffsetAPI_MiddlePath(OCNaroWrappers::OCTopoDS_Shape^ aShape, OCNaroWrappers::OCTopoDS_Shape^ StartShape, OCNaroWrappers::OCTopoDS_Shape^ EndShape) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepOffsetAPI_MiddlePath(*((TopoDS_Shape*)aShape->Handle), *((TopoDS_Shape*)StartShape->Handle), *((TopoDS_Shape*)EndShape->Handle));
}

 void OCBRepOffsetAPI_MiddlePath::Build()
{
  ((BRepOffsetAPI_MiddlePath*)nativeHandle)->Build();
}


