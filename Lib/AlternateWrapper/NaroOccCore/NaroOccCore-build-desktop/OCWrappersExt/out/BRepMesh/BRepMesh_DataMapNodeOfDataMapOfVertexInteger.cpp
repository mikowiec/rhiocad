// File generated by CPPExt (CPP file)
//

#include "BRepMesh_DataMapNodeOfDataMapOfVertexInteger.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Vertex.h"
#include "../TopTools/TopTools_ShapeMapHasher.h"
#include "BRepMesh_DataMapOfVertexInteger.h"
#include "BRepMesh_DataMapIteratorOfDataMapOfVertexInteger.h"


using namespace OCNaroWrappers;

OCBRepMesh_DataMapNodeOfDataMapOfVertexInteger::OCBRepMesh_DataMapNodeOfDataMapOfVertexInteger(Handle(BRepMesh_DataMapNodeOfDataMapOfVertexInteger)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_BRepMesh_DataMapNodeOfDataMapOfVertexInteger(*nativeHandle);
}

OCBRepMesh_DataMapNodeOfDataMapOfVertexInteger::OCBRepMesh_DataMapNodeOfDataMapOfVertexInteger(OCNaroWrappers::OCTopoDS_Vertex^ K, Standard_Integer I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_BRepMesh_DataMapNodeOfDataMapOfVertexInteger(new BRepMesh_DataMapNodeOfDataMapOfVertexInteger(*((TopoDS_Vertex*)K->Handle), I, n));
}

OCTopoDS_Vertex^ OCBRepMesh_DataMapNodeOfDataMapOfVertexInteger::Key()
{
  TopoDS_Vertex* tmp = new TopoDS_Vertex();
  *tmp = (*((Handle_BRepMesh_DataMapNodeOfDataMapOfVertexInteger*)nativeHandle))->Key();
  return gcnew OCTopoDS_Vertex(tmp);
}

 Standard_Integer OCBRepMesh_DataMapNodeOfDataMapOfVertexInteger::Value()
{
  return (*((Handle_BRepMesh_DataMapNodeOfDataMapOfVertexInteger*)nativeHandle))->Value();
}

