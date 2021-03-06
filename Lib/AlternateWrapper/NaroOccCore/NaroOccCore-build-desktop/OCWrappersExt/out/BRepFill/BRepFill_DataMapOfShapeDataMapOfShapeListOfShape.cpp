// File generated by CPPExt (CPP file)
//

#include "BRepFill_DataMapOfShapeDataMapOfShapeListOfShape.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TopTools/TopTools_DataMapOfShapeListOfShape.h"
#include "../TopTools/TopTools_ShapeMapHasher.h"
#include "BRepFill_DataMapNodeOfDataMapOfShapeDataMapOfShapeListOfShape.h"
#include "BRepFill_DataMapIteratorOfDataMapOfShapeDataMapOfShapeListOfShape.h"


using namespace OCNaroWrappers;

OCBRepFill_DataMapOfShapeDataMapOfShapeListOfShape::OCBRepFill_DataMapOfShapeDataMapOfShapeListOfShape(BRepFill_DataMapOfShapeDataMapOfShapeListOfShape* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepFill_DataMapOfShapeDataMapOfShapeListOfShape::OCBRepFill_DataMapOfShapeDataMapOfShapeListOfShape(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new BRepFill_DataMapOfShapeDataMapOfShapeListOfShape(NbBuckets);
}

OCBRepFill_DataMapOfShapeDataMapOfShapeListOfShape^ OCBRepFill_DataMapOfShapeDataMapOfShapeListOfShape::Assign(OCNaroWrappers::OCBRepFill_DataMapOfShapeDataMapOfShapeListOfShape^ Other)
{
  BRepFill_DataMapOfShapeDataMapOfShapeListOfShape* tmp = new BRepFill_DataMapOfShapeDataMapOfShapeListOfShape(0);
  *tmp = ((BRepFill_DataMapOfShapeDataMapOfShapeListOfShape*)nativeHandle)->Assign(*((BRepFill_DataMapOfShapeDataMapOfShapeListOfShape*)Other->Handle));
  return gcnew OCBRepFill_DataMapOfShapeDataMapOfShapeListOfShape(tmp);
}

 void OCBRepFill_DataMapOfShapeDataMapOfShapeListOfShape::ReSize(Standard_Integer NbBuckets)
{
  ((BRepFill_DataMapOfShapeDataMapOfShapeListOfShape*)nativeHandle)->ReSize(NbBuckets);
}

 System::Boolean OCBRepFill_DataMapOfShapeDataMapOfShapeListOfShape::Bind(OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCTopTools_DataMapOfShapeListOfShape^ I)
{
  return OCConverter::StandardBooleanToBoolean(((BRepFill_DataMapOfShapeDataMapOfShapeListOfShape*)nativeHandle)->Bind(*((TopoDS_Shape*)K->Handle), *((TopTools_DataMapOfShapeListOfShape*)I->Handle)));
}

 System::Boolean OCBRepFill_DataMapOfShapeDataMapOfShapeListOfShape::IsBound(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return OCConverter::StandardBooleanToBoolean(((BRepFill_DataMapOfShapeDataMapOfShapeListOfShape*)nativeHandle)->IsBound(*((TopoDS_Shape*)K->Handle)));
}

 System::Boolean OCBRepFill_DataMapOfShapeDataMapOfShapeListOfShape::UnBind(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return OCConverter::StandardBooleanToBoolean(((BRepFill_DataMapOfShapeDataMapOfShapeListOfShape*)nativeHandle)->UnBind(*((TopoDS_Shape*)K->Handle)));
}

OCTopTools_DataMapOfShapeListOfShape^ OCBRepFill_DataMapOfShapeDataMapOfShapeListOfShape::Find(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  TopTools_DataMapOfShapeListOfShape* tmp = new TopTools_DataMapOfShapeListOfShape(0);
  *tmp = ((BRepFill_DataMapOfShapeDataMapOfShapeListOfShape*)nativeHandle)->Find(*((TopoDS_Shape*)K->Handle));
  return gcnew OCTopTools_DataMapOfShapeListOfShape(tmp);
}

OCTopTools_DataMapOfShapeListOfShape^ OCBRepFill_DataMapOfShapeDataMapOfShapeListOfShape::ChangeFind(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  TopTools_DataMapOfShapeListOfShape* tmp = new TopTools_DataMapOfShapeListOfShape(0);
  *tmp = ((BRepFill_DataMapOfShapeDataMapOfShapeListOfShape*)nativeHandle)->ChangeFind(*((TopoDS_Shape*)K->Handle));
  return gcnew OCTopTools_DataMapOfShapeListOfShape(tmp);
}

 Standard_Address OCBRepFill_DataMapOfShapeDataMapOfShapeListOfShape::Find1(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return ((BRepFill_DataMapOfShapeDataMapOfShapeListOfShape*)nativeHandle)->Find1(*((TopoDS_Shape*)K->Handle));
}

 Standard_Address OCBRepFill_DataMapOfShapeDataMapOfShapeListOfShape::ChangeFind1(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return ((BRepFill_DataMapOfShapeDataMapOfShapeListOfShape*)nativeHandle)->ChangeFind1(*((TopoDS_Shape*)K->Handle));
}


