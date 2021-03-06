// File generated by CPPExt (CPP file)
//

#include "BRepLib.h"
#include "../Converter.h"


using namespace OCNaroWrappers;



 void OCBRepLib::Precision(Standard_Real P)
{
  BRepLib::Precision(P);
}

 Standard_Real OCBRepLib::Precision()
{
  return BRepLib::Precision();
}

 void OCBRepLib::Plane(OCNaroWrappers::OCGeom_Plane^ P)
{
  BRepLib::Plane(*((Handle_Geom_Plane*)P->Handle));
}

OCGeom_Plane^ OCBRepLib::Plane()
{
  Handle(Geom_Plane) tmp = BRepLib::Plane();
  return gcnew OCGeom_Plane(&tmp);
}

 System::Boolean OCBRepLib::CheckSameRange(OCNaroWrappers::OCTopoDS_Edge^ E, Standard_Real Confusion)
{
  return OCConverter::StandardBooleanToBoolean(BRepLib::CheckSameRange(*((TopoDS_Edge*)E->Handle), Confusion));
}

 void OCBRepLib::SameRange(OCNaroWrappers::OCTopoDS_Edge^ E, Standard_Real Tolerance)
{
  BRepLib::SameRange(*((TopoDS_Edge*)E->Handle), Tolerance);
}

 System::Boolean OCBRepLib::BuildCurve3d(OCNaroWrappers::OCTopoDS_Edge^ E, Standard_Real Tolerance, OCGeomAbs_Shape Continuity, Standard_Integer MaxDegree, Standard_Integer MaxSegment)
{
  return OCConverter::StandardBooleanToBoolean(BRepLib::BuildCurve3d(*((TopoDS_Edge*)E->Handle), Tolerance, (GeomAbs_Shape)Continuity, MaxDegree, MaxSegment));
}

 System::Boolean OCBRepLib::BuildCurves3d(OCNaroWrappers::OCTopoDS_Shape^ S, Standard_Real Tolerance, OCGeomAbs_Shape Continuity, Standard_Integer MaxDegree, Standard_Integer MaxSegment)
{
  return OCConverter::StandardBooleanToBoolean(BRepLib::BuildCurves3d(*((TopoDS_Shape*)S->Handle), Tolerance, (GeomAbs_Shape)Continuity, MaxDegree, MaxSegment));
}

 System::Boolean OCBRepLib::BuildCurves3d(OCNaroWrappers::OCTopoDS_Shape^ S)
{
  return OCConverter::StandardBooleanToBoolean(BRepLib::BuildCurves3d(*((TopoDS_Shape*)S->Handle)));
}

 System::Boolean OCBRepLib::UpdateEdgeTol(OCNaroWrappers::OCTopoDS_Edge^ E, Standard_Real MinToleranceRequest, Standard_Real MaxToleranceToCheck)
{
  return OCConverter::StandardBooleanToBoolean(BRepLib::UpdateEdgeTol(*((TopoDS_Edge*)E->Handle), MinToleranceRequest, MaxToleranceToCheck));
}

 System::Boolean OCBRepLib::UpdateEdgeTolerance(OCNaroWrappers::OCTopoDS_Shape^ S, Standard_Real MinToleranceRequest, Standard_Real MaxToleranceToCheck)
{
  return OCConverter::StandardBooleanToBoolean(BRepLib::UpdateEdgeTolerance(*((TopoDS_Shape*)S->Handle), MinToleranceRequest, MaxToleranceToCheck));
}

 void OCBRepLib::SameParameter(OCNaroWrappers::OCTopoDS_Edge^ E, Standard_Real Tolerance)
{
  BRepLib::SameParameter(*((TopoDS_Edge*)E->Handle), Tolerance);
}

 void OCBRepLib::SameParameter(OCNaroWrappers::OCTopoDS_Shape^ S, Standard_Real Tolerance, System::Boolean forced)
{
  BRepLib::SameParameter(*((TopoDS_Shape*)S->Handle), Tolerance, OCConverter::BooleanToStandardBoolean(forced));
}

 void OCBRepLib::UpdateTolerances(OCNaroWrappers::OCTopoDS_Shape^ S, System::Boolean verifyFaceTolerance)
{
  BRepLib::UpdateTolerances(*((TopoDS_Shape*)S->Handle), OCConverter::BooleanToStandardBoolean(verifyFaceTolerance));
}

 System::Boolean OCBRepLib::OrientClosedSolid(OCNaroWrappers::OCTopoDS_Solid^ solid)
{
  return OCConverter::StandardBooleanToBoolean(BRepLib::OrientClosedSolid(*((TopoDS_Solid*)solid->Handle)));
}

 void OCBRepLib::EncodeRegularity(OCNaroWrappers::OCTopoDS_Shape^ S, Standard_Real TolAng)
{
  BRepLib::EncodeRegularity(*((TopoDS_Shape*)S->Handle), TolAng);
}

 void OCBRepLib::EncodeRegularity(OCNaroWrappers::OCTopoDS_Edge^ S, OCNaroWrappers::OCTopoDS_Face^ F1, OCNaroWrappers::OCTopoDS_Face^ F2, Standard_Real TolAng)
{
  BRepLib::EncodeRegularity(*((TopoDS_Edge*)S->Handle), *((TopoDS_Face*)F1->Handle), *((TopoDS_Face*)F2->Handle), TolAng);
}

 void OCBRepLib::SortFaces(OCNaroWrappers::OCTopoDS_Shape^ S, OCNaroWrappers::OCTopTools_ListOfShape^ LF)
{
  BRepLib::SortFaces(*((TopoDS_Shape*)S->Handle), *((TopTools_ListOfShape*)LF->Handle));
}

 void OCBRepLib::ReverseSortFaces(OCNaroWrappers::OCTopoDS_Shape^ S, OCNaroWrappers::OCTopTools_ListOfShape^ LF)
{
  BRepLib::ReverseSortFaces(*((TopoDS_Shape*)S->Handle), *((TopTools_ListOfShape*)LF->Handle));
}


