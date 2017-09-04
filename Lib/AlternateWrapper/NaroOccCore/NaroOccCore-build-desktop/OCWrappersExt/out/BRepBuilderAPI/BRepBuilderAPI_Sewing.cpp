// File generated by CPPExt (CPP file)
//

#include "BRepBuilderAPI_Sewing.h"
#include "../Converter.h"
#include "../BRepTools/BRepTools_ReShape.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../Message/Message_ProgressIndicator.h"
#include "../TopoDS/TopoDS_Edge.h"
#include "../TopTools/TopTools_ListOfShape.h"
#include "../TopoDS/TopoDS_Face.h"
#include "../TopTools/TopTools_SequenceOfShape.h"
#include "../TColStd/TColStd_IndexedMapOfInteger.h"
#include "../TColStd/TColStd_SequenceOfInteger.h"
#include "../Geom/Geom_Surface.h"
#include "../TopLoc/TopLoc_Location.h"
#include "../TopTools/TopTools_MapOfShape.h"
#include "../TColStd/TColStd_Array1OfBoolean.h"
#include "../TColStd/TColStd_Array1OfReal.h"
#include "../Geom2d/Geom2d_Curve.h"
#include "../TColgp/TColgp_Array1OfPnt.h"
#include "../Geom/Geom_Curve.h"
#include "../TopTools/TopTools_IndexedMapOfShape.h"
#include "../TColStd/TColStd_SequenceOfReal.h"


using namespace OCNaroWrappers;

OCBRepBuilderAPI_Sewing::OCBRepBuilderAPI_Sewing(Handle(BRepBuilderAPI_Sewing)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_BRepBuilderAPI_Sewing(*nativeHandle);
}

OCBRepBuilderAPI_Sewing::OCBRepBuilderAPI_Sewing(Standard_Real tolerance, System::Boolean option1, System::Boolean option2, System::Boolean option3, System::Boolean option4) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_BRepBuilderAPI_Sewing(new BRepBuilderAPI_Sewing(tolerance, OCConverter::BooleanToStandardBoolean(option1), OCConverter::BooleanToStandardBoolean(option2), OCConverter::BooleanToStandardBoolean(option3), OCConverter::BooleanToStandardBoolean(option4)));
}

 void OCBRepBuilderAPI_Sewing::Init(Standard_Real tolerance, System::Boolean option1, System::Boolean option2, System::Boolean option3, System::Boolean option4)
{
  (*((Handle_BRepBuilderAPI_Sewing*)nativeHandle))->Init(tolerance, OCConverter::BooleanToStandardBoolean(option1), OCConverter::BooleanToStandardBoolean(option2), OCConverter::BooleanToStandardBoolean(option3), OCConverter::BooleanToStandardBoolean(option4));
}

 void OCBRepBuilderAPI_Sewing::Load(OCNaroWrappers::OCTopoDS_Shape^ shape)
{
  (*((Handle_BRepBuilderAPI_Sewing*)nativeHandle))->Load(*((TopoDS_Shape*)shape->Handle));
}

 void OCBRepBuilderAPI_Sewing::Add(OCNaroWrappers::OCTopoDS_Shape^ shape)
{
  (*((Handle_BRepBuilderAPI_Sewing*)nativeHandle))->Add(*((TopoDS_Shape*)shape->Handle));
}

 void OCBRepBuilderAPI_Sewing::Perform(OCNaroWrappers::OCMessage_ProgressIndicator^ thePI)
{
  (*((Handle_BRepBuilderAPI_Sewing*)nativeHandle))->Perform(*((Handle_Message_ProgressIndicator*)thePI->Handle));
}

OCTopoDS_Shape^ OCBRepBuilderAPI_Sewing::SewedShape()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = (*((Handle_BRepBuilderAPI_Sewing*)nativeHandle))->SewedShape();
  return gcnew OCTopoDS_Shape(tmp);
}

 Standard_Integer OCBRepBuilderAPI_Sewing::NbFreeEdges()
{
  return (*((Handle_BRepBuilderAPI_Sewing*)nativeHandle))->NbFreeEdges();
}

OCTopoDS_Edge^ OCBRepBuilderAPI_Sewing::FreeEdge(Standard_Integer index)
{
  TopoDS_Edge* tmp = new TopoDS_Edge();
  *tmp = (*((Handle_BRepBuilderAPI_Sewing*)nativeHandle))->FreeEdge(index);
  return gcnew OCTopoDS_Edge(tmp);
}

 Standard_Integer OCBRepBuilderAPI_Sewing::NbMultipleEdges()
{
  return (*((Handle_BRepBuilderAPI_Sewing*)nativeHandle))->NbMultipleEdges();
}

OCTopoDS_Edge^ OCBRepBuilderAPI_Sewing::MultipleEdge(Standard_Integer index)
{
  TopoDS_Edge* tmp = new TopoDS_Edge();
  *tmp = (*((Handle_BRepBuilderAPI_Sewing*)nativeHandle))->MultipleEdge(index);
  return gcnew OCTopoDS_Edge(tmp);
}

 Standard_Integer OCBRepBuilderAPI_Sewing::NbContigousEdges()
{
  return (*((Handle_BRepBuilderAPI_Sewing*)nativeHandle))->NbContigousEdges();
}

OCTopoDS_Edge^ OCBRepBuilderAPI_Sewing::ContigousEdge(Standard_Integer index)
{
  TopoDS_Edge* tmp = new TopoDS_Edge();
  *tmp = (*((Handle_BRepBuilderAPI_Sewing*)nativeHandle))->ContigousEdge(index);
  return gcnew OCTopoDS_Edge(tmp);
}

OCTopTools_ListOfShape^ OCBRepBuilderAPI_Sewing::ContigousEdgeCouple(Standard_Integer index)
{
  TopTools_ListOfShape* tmp = new TopTools_ListOfShape();
  *tmp = (*((Handle_BRepBuilderAPI_Sewing*)nativeHandle))->ContigousEdgeCouple(index);
  return gcnew OCTopTools_ListOfShape(tmp);
}

 System::Boolean OCBRepBuilderAPI_Sewing::IsSectionBound(OCNaroWrappers::OCTopoDS_Edge^ section)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_BRepBuilderAPI_Sewing*)nativeHandle))->IsSectionBound(*((TopoDS_Edge*)section->Handle)));
}

OCTopoDS_Edge^ OCBRepBuilderAPI_Sewing::SectionToBoundary(OCNaroWrappers::OCTopoDS_Edge^ section)
{
  TopoDS_Edge* tmp = new TopoDS_Edge();
  *tmp = (*((Handle_BRepBuilderAPI_Sewing*)nativeHandle))->SectionToBoundary(*((TopoDS_Edge*)section->Handle));
  return gcnew OCTopoDS_Edge(tmp);
}

 Standard_Integer OCBRepBuilderAPI_Sewing::NbDegeneratedShapes()
{
  return (*((Handle_BRepBuilderAPI_Sewing*)nativeHandle))->NbDegeneratedShapes();
}

OCTopoDS_Shape^ OCBRepBuilderAPI_Sewing::DegeneratedShape(Standard_Integer index)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = (*((Handle_BRepBuilderAPI_Sewing*)nativeHandle))->DegeneratedShape(index);
  return gcnew OCTopoDS_Shape(tmp);
}

 System::Boolean OCBRepBuilderAPI_Sewing::IsDegenerated(OCNaroWrappers::OCTopoDS_Shape^ shape)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_BRepBuilderAPI_Sewing*)nativeHandle))->IsDegenerated(*((TopoDS_Shape*)shape->Handle)));
}

 System::Boolean OCBRepBuilderAPI_Sewing::IsModified(OCNaroWrappers::OCTopoDS_Shape^ shape)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_BRepBuilderAPI_Sewing*)nativeHandle))->IsModified(*((TopoDS_Shape*)shape->Handle)));
}

OCTopoDS_Shape^ OCBRepBuilderAPI_Sewing::Modified(OCNaroWrappers::OCTopoDS_Shape^ shape)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = (*((Handle_BRepBuilderAPI_Sewing*)nativeHandle))->Modified(*((TopoDS_Shape*)shape->Handle));
  return gcnew OCTopoDS_Shape(tmp);
}

 System::Boolean OCBRepBuilderAPI_Sewing::IsModifiedSubShape(OCNaroWrappers::OCTopoDS_Shape^ shape)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_BRepBuilderAPI_Sewing*)nativeHandle))->IsModifiedSubShape(*((TopoDS_Shape*)shape->Handle)));
}

OCTopoDS_Shape^ OCBRepBuilderAPI_Sewing::ModifiedSubShape(OCNaroWrappers::OCTopoDS_Shape^ shape)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = (*((Handle_BRepBuilderAPI_Sewing*)nativeHandle))->ModifiedSubShape(*((TopoDS_Shape*)shape->Handle));
  return gcnew OCTopoDS_Shape(tmp);
}

 void OCBRepBuilderAPI_Sewing::Dump()
{
  (*((Handle_BRepBuilderAPI_Sewing*)nativeHandle))->Dump();
}

 Standard_Integer OCBRepBuilderAPI_Sewing::NbDeletedFaces()
{
  return (*((Handle_BRepBuilderAPI_Sewing*)nativeHandle))->NbDeletedFaces();
}

OCTopoDS_Face^ OCBRepBuilderAPI_Sewing::DeletedFace(Standard_Integer index)
{
  TopoDS_Face* tmp = new TopoDS_Face();
  *tmp = (*((Handle_BRepBuilderAPI_Sewing*)nativeHandle))->DeletedFace(index);
  return gcnew OCTopoDS_Face(tmp);
}

OCTopoDS_Face^ OCBRepBuilderAPI_Sewing::WhichFace(OCNaroWrappers::OCTopoDS_Edge^ theEdg, Standard_Integer index)
{
  TopoDS_Face* tmp = new TopoDS_Face();
  *tmp = (*((Handle_BRepBuilderAPI_Sewing*)nativeHandle))->WhichFace(*((TopoDS_Edge*)theEdg->Handle), index);
  return gcnew OCTopoDS_Face(tmp);
}

 System::Boolean OCBRepBuilderAPI_Sewing::SameParameterMode()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_BRepBuilderAPI_Sewing*)nativeHandle))->SameParameterMode());
}

 void OCBRepBuilderAPI_Sewing::SetSameParameterMode(System::Boolean SameParameterMode)
{
  (*((Handle_BRepBuilderAPI_Sewing*)nativeHandle))->SetSameParameterMode(OCConverter::BooleanToStandardBoolean(SameParameterMode));
}

 Standard_Real OCBRepBuilderAPI_Sewing::Tolerance()
{
  return (*((Handle_BRepBuilderAPI_Sewing*)nativeHandle))->Tolerance();
}

 void OCBRepBuilderAPI_Sewing::SetTolerance(Standard_Real theToler)
{
  (*((Handle_BRepBuilderAPI_Sewing*)nativeHandle))->SetTolerance(theToler);
}

 Standard_Real OCBRepBuilderAPI_Sewing::MinTolerance()
{
  return (*((Handle_BRepBuilderAPI_Sewing*)nativeHandle))->MinTolerance();
}

 void OCBRepBuilderAPI_Sewing::SetMinTolerance(Standard_Real theMinToler)
{
  (*((Handle_BRepBuilderAPI_Sewing*)nativeHandle))->SetMinTolerance(theMinToler);
}

 Standard_Real OCBRepBuilderAPI_Sewing::MaxTolerance()
{
  return (*((Handle_BRepBuilderAPI_Sewing*)nativeHandle))->MaxTolerance();
}

 void OCBRepBuilderAPI_Sewing::SetMaxTolerance(Standard_Real theMaxToler)
{
  (*((Handle_BRepBuilderAPI_Sewing*)nativeHandle))->SetMaxTolerance(theMaxToler);
}

 System::Boolean OCBRepBuilderAPI_Sewing::FaceMode()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_BRepBuilderAPI_Sewing*)nativeHandle))->FaceMode());
}

 void OCBRepBuilderAPI_Sewing::SetFaceMode(System::Boolean theFaceMode)
{
  (*((Handle_BRepBuilderAPI_Sewing*)nativeHandle))->SetFaceMode(OCConverter::BooleanToStandardBoolean(theFaceMode));
}

 System::Boolean OCBRepBuilderAPI_Sewing::FloatingEdgesMode()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_BRepBuilderAPI_Sewing*)nativeHandle))->FloatingEdgesMode());
}

 void OCBRepBuilderAPI_Sewing::SetFloatingEdgesMode(System::Boolean theFloatingEdgesMode)
{
  (*((Handle_BRepBuilderAPI_Sewing*)nativeHandle))->SetFloatingEdgesMode(OCConverter::BooleanToStandardBoolean(theFloatingEdgesMode));
}

 System::Boolean OCBRepBuilderAPI_Sewing::LocalTolerancesMode()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_BRepBuilderAPI_Sewing*)nativeHandle))->LocalTolerancesMode());
}

 void OCBRepBuilderAPI_Sewing::SetLocalTolerancesMode(System::Boolean theLocalTolerancesMode)
{
  (*((Handle_BRepBuilderAPI_Sewing*)nativeHandle))->SetLocalTolerancesMode(OCConverter::BooleanToStandardBoolean(theLocalTolerancesMode));
}

 void OCBRepBuilderAPI_Sewing::SetNonManifoldMode(System::Boolean theNonManifoldMode)
{
  (*((Handle_BRepBuilderAPI_Sewing*)nativeHandle))->SetNonManifoldMode(OCConverter::BooleanToStandardBoolean(theNonManifoldMode));
}

 System::Boolean OCBRepBuilderAPI_Sewing::NonManifoldMode()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_BRepBuilderAPI_Sewing*)nativeHandle))->NonManifoldMode());
}

