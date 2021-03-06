// File generated by CPPExt (CPP file)
//

#include "IntPatch_PrmPrmIntersection.h"
#include "../Converter.h"
#include "../Adaptor3d/Adaptor3d_HSurface.h"
#include "IntPatch_Polyhedron.h"
#include "../Adaptor3d/Adaptor3d_TopolTool.h"
#include "../IntSurf/IntSurf_ListOfPntOn2S.h"
#include "IntPatch_Line.h"
#include "IntPatch_PrmPrmIntersection_T3Bits.h"
#include "../IntSurf/IntSurf_LineOn2S.h"


using namespace OCNaroWrappers;

OCIntPatch_PrmPrmIntersection::OCIntPatch_PrmPrmIntersection(IntPatch_PrmPrmIntersection* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCIntPatch_PrmPrmIntersection::OCIntPatch_PrmPrmIntersection() 
{
  nativeHandle = new IntPatch_PrmPrmIntersection();
}

 void OCIntPatch_PrmPrmIntersection::Perform(OCNaroWrappers::OCAdaptor3d_HSurface^ Caro1, OCNaroWrappers::OCIntPatch_Polyhedron^ Polyhedron1, OCNaroWrappers::OCAdaptor3d_TopolTool^ Domain1, OCNaroWrappers::OCAdaptor3d_HSurface^ Caro2, OCNaroWrappers::OCIntPatch_Polyhedron^ Polyhedron2, OCNaroWrappers::OCAdaptor3d_TopolTool^ Domain2, Standard_Real TolTangency, Standard_Real Epsilon, Standard_Real Deflection, Standard_Real Increment)
{
  ((IntPatch_PrmPrmIntersection*)nativeHandle)->Perform(*((Handle_Adaptor3d_HSurface*)Caro1->Handle), *((IntPatch_Polyhedron*)Polyhedron1->Handle), *((Handle_Adaptor3d_TopolTool*)Domain1->Handle), *((Handle_Adaptor3d_HSurface*)Caro2->Handle), *((IntPatch_Polyhedron*)Polyhedron2->Handle), *((Handle_Adaptor3d_TopolTool*)Domain2->Handle), TolTangency, Epsilon, Deflection, Increment);
}

 void OCIntPatch_PrmPrmIntersection::Perform(OCNaroWrappers::OCAdaptor3d_HSurface^ Caro1, OCNaroWrappers::OCIntPatch_Polyhedron^ Polyhedron1, OCNaroWrappers::OCAdaptor3d_TopolTool^ Domain1, Standard_Real TolTangency, Standard_Real Epsilon, Standard_Real Deflection, Standard_Real Increment)
{
  ((IntPatch_PrmPrmIntersection*)nativeHandle)->Perform(*((Handle_Adaptor3d_HSurface*)Caro1->Handle), *((IntPatch_Polyhedron*)Polyhedron1->Handle), *((Handle_Adaptor3d_TopolTool*)Domain1->Handle), TolTangency, Epsilon, Deflection, Increment);
}

 void OCIntPatch_PrmPrmIntersection::Perform(OCNaroWrappers::OCAdaptor3d_HSurface^ Caro1, OCNaroWrappers::OCAdaptor3d_TopolTool^ Domain1, OCNaroWrappers::OCAdaptor3d_HSurface^ Caro2, OCNaroWrappers::OCAdaptor3d_TopolTool^ Domain2, Standard_Real TolTangency, Standard_Real Epsilon, Standard_Real Deflection, Standard_Real Increment, System::Boolean ClearFlag)
{
  ((IntPatch_PrmPrmIntersection*)nativeHandle)->Perform(*((Handle_Adaptor3d_HSurface*)Caro1->Handle), *((Handle_Adaptor3d_TopolTool*)Domain1->Handle), *((Handle_Adaptor3d_HSurface*)Caro2->Handle), *((Handle_Adaptor3d_TopolTool*)Domain2->Handle), TolTangency, Epsilon, Deflection, Increment, OCConverter::BooleanToStandardBoolean(ClearFlag));
}

 void OCIntPatch_PrmPrmIntersection::Perform(OCNaroWrappers::OCAdaptor3d_HSurface^ Caro1, OCNaroWrappers::OCAdaptor3d_TopolTool^ Domain1, OCNaroWrappers::OCAdaptor3d_HSurface^ Caro2, OCNaroWrappers::OCAdaptor3d_TopolTool^ Domain2, Standard_Real TolTangency, Standard_Real Epsilon, Standard_Real Deflection, Standard_Real Increment, OCNaroWrappers::OCIntSurf_ListOfPntOn2S^ ListOfPnts, System::Boolean RestrictLine)
{
  ((IntPatch_PrmPrmIntersection*)nativeHandle)->Perform(*((Handle_Adaptor3d_HSurface*)Caro1->Handle), *((Handle_Adaptor3d_TopolTool*)Domain1->Handle), *((Handle_Adaptor3d_HSurface*)Caro2->Handle), *((Handle_Adaptor3d_TopolTool*)Domain2->Handle), TolTangency, Epsilon, Deflection, Increment, *((IntSurf_ListOfPntOn2S*)ListOfPnts->Handle), OCConverter::BooleanToStandardBoolean(RestrictLine));
}

 void OCIntPatch_PrmPrmIntersection::Perform(OCNaroWrappers::OCAdaptor3d_HSurface^ Caro1, OCNaroWrappers::OCAdaptor3d_TopolTool^ Domain1, OCNaroWrappers::OCAdaptor3d_HSurface^ Caro2, OCNaroWrappers::OCAdaptor3d_TopolTool^ Domain2, Standard_Real U1, Standard_Real V1, Standard_Real U2, Standard_Real V2, Standard_Real TolTangency, Standard_Real Epsilon, Standard_Real Deflection, Standard_Real Increment)
{
  ((IntPatch_PrmPrmIntersection*)nativeHandle)->Perform(*((Handle_Adaptor3d_HSurface*)Caro1->Handle), *((Handle_Adaptor3d_TopolTool*)Domain1->Handle), *((Handle_Adaptor3d_HSurface*)Caro2->Handle), *((Handle_Adaptor3d_TopolTool*)Domain2->Handle), U1, V1, U2, V2, TolTangency, Epsilon, Deflection, Increment);
}

 void OCIntPatch_PrmPrmIntersection::Perform(OCNaroWrappers::OCAdaptor3d_HSurface^ Caro1, OCNaroWrappers::OCAdaptor3d_TopolTool^ Domain1, Standard_Real TolTangency, Standard_Real Epsilon, Standard_Real Deflection, Standard_Real Increment)
{
  ((IntPatch_PrmPrmIntersection*)nativeHandle)->Perform(*((Handle_Adaptor3d_HSurface*)Caro1->Handle), *((Handle_Adaptor3d_TopolTool*)Domain1->Handle), TolTangency, Epsilon, Deflection, Increment);
}

 void OCIntPatch_PrmPrmIntersection::Perform(OCNaroWrappers::OCAdaptor3d_HSurface^ Caro1, OCNaroWrappers::OCAdaptor3d_TopolTool^ Domain1, OCNaroWrappers::OCAdaptor3d_HSurface^ Caro2, OCNaroWrappers::OCIntPatch_Polyhedron^ Polyhedron2, OCNaroWrappers::OCAdaptor3d_TopolTool^ Domain2, Standard_Real TolTangency, Standard_Real Epsilon, Standard_Real Deflection, Standard_Real Increment)
{
  ((IntPatch_PrmPrmIntersection*)nativeHandle)->Perform(*((Handle_Adaptor3d_HSurface*)Caro1->Handle), *((Handle_Adaptor3d_TopolTool*)Domain1->Handle), *((Handle_Adaptor3d_HSurface*)Caro2->Handle), *((IntPatch_Polyhedron*)Polyhedron2->Handle), *((Handle_Adaptor3d_TopolTool*)Domain2->Handle), TolTangency, Epsilon, Deflection, Increment);
}

 void OCIntPatch_PrmPrmIntersection::Perform(OCNaroWrappers::OCAdaptor3d_HSurface^ Caro1, OCNaroWrappers::OCIntPatch_Polyhedron^ Polyhedron1, OCNaroWrappers::OCAdaptor3d_TopolTool^ Domain1, OCNaroWrappers::OCAdaptor3d_HSurface^ Caro2, OCNaroWrappers::OCAdaptor3d_TopolTool^ Domain2, Standard_Real TolTangency, Standard_Real Epsilon, Standard_Real Deflection, Standard_Real Increment)
{
  ((IntPatch_PrmPrmIntersection*)nativeHandle)->Perform(*((Handle_Adaptor3d_HSurface*)Caro1->Handle), *((IntPatch_Polyhedron*)Polyhedron1->Handle), *((Handle_Adaptor3d_TopolTool*)Domain1->Handle), *((Handle_Adaptor3d_HSurface*)Caro2->Handle), *((Handle_Adaptor3d_TopolTool*)Domain2->Handle), TolTangency, Epsilon, Deflection, Increment);
}

 System::Boolean OCIntPatch_PrmPrmIntersection::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((IntPatch_PrmPrmIntersection*)nativeHandle)->IsDone());
}

 System::Boolean OCIntPatch_PrmPrmIntersection::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean(((IntPatch_PrmPrmIntersection*)nativeHandle)->IsEmpty());
}

 Standard_Integer OCIntPatch_PrmPrmIntersection::NbLines()
{
  return ((IntPatch_PrmPrmIntersection*)nativeHandle)->NbLines();
}

OCIntPatch_Line^ OCIntPatch_PrmPrmIntersection::Line(Standard_Integer Index)
{
  Handle(IntPatch_Line) tmp = ((IntPatch_PrmPrmIntersection*)nativeHandle)->Line(Index);
  return gcnew OCIntPatch_Line(&tmp);
}

OCIntPatch_Line^ OCIntPatch_PrmPrmIntersection::NewLine(OCNaroWrappers::OCAdaptor3d_HSurface^ Caro1, OCNaroWrappers::OCAdaptor3d_HSurface^ Caro2, Standard_Integer IndexLine, Standard_Integer LowPoint, Standard_Integer HighPoint, Standard_Integer NbPoints)
{
  Handle(IntPatch_Line) tmp = ((IntPatch_PrmPrmIntersection*)nativeHandle)->NewLine(*((Handle_Adaptor3d_HSurface*)Caro1->Handle), *((Handle_Adaptor3d_HSurface*)Caro2->Handle), IndexLine, LowPoint, HighPoint, NbPoints);
  return gcnew OCIntPatch_Line(&tmp);
}

 Standard_Integer OCIntPatch_PrmPrmIntersection::GrilleInteger(Standard_Integer ix, Standard_Integer iy, Standard_Integer iz)
{
  return ((IntPatch_PrmPrmIntersection*)nativeHandle)->GrilleInteger(ix, iy, iz);
}

 void OCIntPatch_PrmPrmIntersection::IntegerGrille(Standard_Integer t, Standard_Integer& ix, Standard_Integer& iy, Standard_Integer& iz)
{
  ((IntPatch_PrmPrmIntersection*)nativeHandle)->IntegerGrille(t, ix, iy, iz);
}

 Standard_Integer OCIntPatch_PrmPrmIntersection::DansGrille(Standard_Integer t)
{
  return ((IntPatch_PrmPrmIntersection*)nativeHandle)->DansGrille(t);
}

 Standard_Integer OCIntPatch_PrmPrmIntersection::NbPointsGrille()
{
  return ((IntPatch_PrmPrmIntersection*)nativeHandle)->NbPointsGrille();
}

 void OCIntPatch_PrmPrmIntersection::RemplitLin(Standard_Integer x1, Standard_Integer y1, Standard_Integer z1, Standard_Integer x2, Standard_Integer y2, Standard_Integer z2, OCNaroWrappers::OCIntPatch_PrmPrmIntersection_T3Bits^ Map)
{
  ((IntPatch_PrmPrmIntersection*)nativeHandle)->RemplitLin(x1, y1, z1, x2, y2, z2, *((IntPatch_PrmPrmIntersection_T3Bits*)Map->Handle));
}

 void OCIntPatch_PrmPrmIntersection::RemplitTri(Standard_Integer x1, Standard_Integer y1, Standard_Integer z1, Standard_Integer x2, Standard_Integer y2, Standard_Integer z2, Standard_Integer x3, Standard_Integer y3, Standard_Integer z3, OCNaroWrappers::OCIntPatch_PrmPrmIntersection_T3Bits^ Map)
{
  ((IntPatch_PrmPrmIntersection*)nativeHandle)->RemplitTri(x1, y1, z1, x2, y2, z2, x3, y3, z3, *((IntPatch_PrmPrmIntersection_T3Bits*)Map->Handle));
}

 void OCIntPatch_PrmPrmIntersection::Remplit(Standard_Integer a, Standard_Integer b, Standard_Integer c, OCNaroWrappers::OCIntPatch_PrmPrmIntersection_T3Bits^ Map)
{
  ((IntPatch_PrmPrmIntersection*)nativeHandle)->Remplit(a, b, c, *((IntPatch_PrmPrmIntersection_T3Bits*)Map->Handle));
}

 Standard_Integer OCIntPatch_PrmPrmIntersection::CodeReject(Standard_Real x1, Standard_Real y1, Standard_Real z1, Standard_Real x2, Standard_Real y2, Standard_Real z2, Standard_Real x3, Standard_Real y3, Standard_Real z3)
{
  return ((IntPatch_PrmPrmIntersection*)nativeHandle)->CodeReject(x1, y1, z1, x2, y2, z2, x3, y3, z3);
}

 void OCIntPatch_PrmPrmIntersection::PointDepart(OCNaroWrappers::OCIntSurf_LineOn2S^ LineOn2S, OCNaroWrappers::OCAdaptor3d_HSurface^ S1, Standard_Integer SU1, Standard_Integer SV1, OCNaroWrappers::OCAdaptor3d_HSurface^ S2, Standard_Integer SU2, Standard_Integer SV2)
{
  ((IntPatch_PrmPrmIntersection*)nativeHandle)->PointDepart(*((Handle_IntSurf_LineOn2S*)LineOn2S->Handle), *((Handle_Adaptor3d_HSurface*)S1->Handle), SU1, SV1, *((Handle_Adaptor3d_HSurface*)S2->Handle), SU2, SV2);
}


