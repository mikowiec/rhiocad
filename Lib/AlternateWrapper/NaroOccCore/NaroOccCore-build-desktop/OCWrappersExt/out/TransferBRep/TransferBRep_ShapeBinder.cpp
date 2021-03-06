// File generated by CPPExt (CPP file)
//

#include "TransferBRep_ShapeBinder.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TopoDS/TopoDS_Vertex.h"
#include "../TopoDS/TopoDS_Edge.h"
#include "../TopoDS/TopoDS_Wire.h"
#include "../TopoDS/TopoDS_Face.h"
#include "../TopoDS/TopoDS_Shell.h"
#include "../TopoDS/TopoDS_Solid.h"
#include "../TopoDS/TopoDS_CompSolid.h"
#include "../TopoDS/TopoDS_Compound.h"


using namespace OCNaroWrappers;

OCTransferBRep_ShapeBinder::OCTransferBRep_ShapeBinder(Handle(TransferBRep_ShapeBinder)* nativeHandle) : OCTransferBRep_BinderOfShape((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TransferBRep_ShapeBinder(*nativeHandle);
}

OCTransferBRep_ShapeBinder::OCTransferBRep_ShapeBinder() : OCTransferBRep_BinderOfShape((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TransferBRep_ShapeBinder(new TransferBRep_ShapeBinder());
}

OCTransferBRep_ShapeBinder::OCTransferBRep_ShapeBinder(OCNaroWrappers::OCTopoDS_Shape^ res) : OCTransferBRep_BinderOfShape((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TransferBRep_ShapeBinder(new TransferBRep_ShapeBinder(*((TopoDS_Shape*)res->Handle)));
}

 OCTopAbs_ShapeEnum OCTransferBRep_ShapeBinder::ShapeType()
{
  return (OCTopAbs_ShapeEnum)((*((Handle_TransferBRep_ShapeBinder*)nativeHandle))->ShapeType());
}

OCTopoDS_Vertex^ OCTransferBRep_ShapeBinder::Vertex()
{
  TopoDS_Vertex* tmp = new TopoDS_Vertex();
  *tmp = (*((Handle_TransferBRep_ShapeBinder*)nativeHandle))->Vertex();
  return gcnew OCTopoDS_Vertex(tmp);
}

OCTopoDS_Edge^ OCTransferBRep_ShapeBinder::Edge()
{
  TopoDS_Edge* tmp = new TopoDS_Edge();
  *tmp = (*((Handle_TransferBRep_ShapeBinder*)nativeHandle))->Edge();
  return gcnew OCTopoDS_Edge(tmp);
}

OCTopoDS_Wire^ OCTransferBRep_ShapeBinder::Wire()
{
  TopoDS_Wire* tmp = new TopoDS_Wire();
  *tmp = (*((Handle_TransferBRep_ShapeBinder*)nativeHandle))->Wire();
  return gcnew OCTopoDS_Wire(tmp);
}

OCTopoDS_Face^ OCTransferBRep_ShapeBinder::Face()
{
  TopoDS_Face* tmp = new TopoDS_Face();
  *tmp = (*((Handle_TransferBRep_ShapeBinder*)nativeHandle))->Face();
  return gcnew OCTopoDS_Face(tmp);
}

OCTopoDS_Shell^ OCTransferBRep_ShapeBinder::Shell()
{
  TopoDS_Shell* tmp = new TopoDS_Shell();
  *tmp = (*((Handle_TransferBRep_ShapeBinder*)nativeHandle))->Shell();
  return gcnew OCTopoDS_Shell(tmp);
}

OCTopoDS_Solid^ OCTransferBRep_ShapeBinder::Solid()
{
  TopoDS_Solid* tmp = new TopoDS_Solid();
  *tmp = (*((Handle_TransferBRep_ShapeBinder*)nativeHandle))->Solid();
  return gcnew OCTopoDS_Solid(tmp);
}

OCTopoDS_CompSolid^ OCTransferBRep_ShapeBinder::CompSolid()
{
  TopoDS_CompSolid* tmp = new TopoDS_CompSolid();
  *tmp = (*((Handle_TransferBRep_ShapeBinder*)nativeHandle))->CompSolid();
  return gcnew OCTopoDS_CompSolid(tmp);
}

OCTopoDS_Compound^ OCTransferBRep_ShapeBinder::Compound()
{
  TopoDS_Compound* tmp = new TopoDS_Compound();
  *tmp = (*((Handle_TransferBRep_ShapeBinder*)nativeHandle))->Compound();
  return gcnew OCTopoDS_Compound(tmp);
}


