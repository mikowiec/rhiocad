// File generated by CPPExt (CPP file)
//

#include "BRepFill_DraftLaw.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Wire.h"
#include "../GeomFill/GeomFill_LocationDraft.h"


using namespace OCNaroWrappers;

OCBRepFill_DraftLaw::OCBRepFill_DraftLaw(Handle(BRepFill_DraftLaw)* nativeHandle) : OCBRepFill_Edge3DLaw((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_BRepFill_DraftLaw(*nativeHandle);
}

OCBRepFill_DraftLaw::OCBRepFill_DraftLaw(OCNaroWrappers::OCTopoDS_Wire^ Path, OCNaroWrappers::OCGeomFill_LocationDraft^ Law) : OCBRepFill_Edge3DLaw((OCDummy^)nullptr)

{
  nativeHandle = new Handle_BRepFill_DraftLaw(new BRepFill_DraftLaw(*((TopoDS_Wire*)Path->Handle), *((Handle_GeomFill_LocationDraft*)Law->Handle)));
}

 void OCBRepFill_DraftLaw::CleanLaw(Standard_Real TolAngular)
{
  (*((Handle_BRepFill_DraftLaw*)nativeHandle))->CleanLaw(TolAngular);
}


