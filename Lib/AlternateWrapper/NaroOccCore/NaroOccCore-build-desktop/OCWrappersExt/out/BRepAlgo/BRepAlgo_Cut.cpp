// File generated by CPPExt (CPP file)
//

#include "BRepAlgo_Cut.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"


using namespace OCNaroWrappers;

OCBRepAlgo_Cut::OCBRepAlgo_Cut(BRepAlgo_Cut* nativeHandle) : OCBRepAlgo_BooleanOperation((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepAlgo_Cut::OCBRepAlgo_Cut(OCNaroWrappers::OCTopoDS_Shape^ S1, OCNaroWrappers::OCTopoDS_Shape^ S2) : OCBRepAlgo_BooleanOperation((OCDummy^)nullptr)

{
  nativeHandle = new BRepAlgo_Cut(*((TopoDS_Shape*)S1->Handle), *((TopoDS_Shape*)S2->Handle));
}

