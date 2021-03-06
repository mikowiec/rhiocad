// File generated by CPPExt (CPP file)
//

#include "Poly_Triangulation.h"
#include "../Converter.h"
#include "../TColgp/TColgp_HArray1OfPnt2d.h"
#include "../TShort/TShort_HArray1OfShortReal.h"
#include "../TColgp/TColgp_Array1OfPnt.h"
#include "Poly_Array1OfTriangle.h"
#include "../TColgp/TColgp_Array1OfPnt2d.h"
#include "../TShort/TShort_Array1OfShortReal.h"


using namespace OCNaroWrappers;

OCPoly_Triangulation::OCPoly_Triangulation(Handle(Poly_Triangulation)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Poly_Triangulation(*nativeHandle);
}

OCPoly_Triangulation::OCPoly_Triangulation(Standard_Integer nbNodes, Standard_Integer nbTriangles, System::Boolean UVNodes) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Poly_Triangulation(new Poly_Triangulation(nbNodes, nbTriangles, OCConverter::BooleanToStandardBoolean(UVNodes)));
}

OCPoly_Triangulation::OCPoly_Triangulation(OCNaroWrappers::OCTColgp_Array1OfPnt^ Nodes, OCNaroWrappers::OCPoly_Array1OfTriangle^ Triangles) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Poly_Triangulation(new Poly_Triangulation(*((TColgp_Array1OfPnt*)Nodes->Handle), *((Poly_Array1OfTriangle*)Triangles->Handle)));
}

OCPoly_Triangulation::OCPoly_Triangulation(OCNaroWrappers::OCTColgp_Array1OfPnt^ Nodes, OCNaroWrappers::OCTColgp_Array1OfPnt2d^ UVNodes, OCNaroWrappers::OCPoly_Array1OfTriangle^ Triangles) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Poly_Triangulation(new Poly_Triangulation(*((TColgp_Array1OfPnt*)Nodes->Handle), *((TColgp_Array1OfPnt2d*)UVNodes->Handle), *((Poly_Array1OfTriangle*)Triangles->Handle)));
}

 Standard_Real OCPoly_Triangulation::Deflection()
{
  return (*((Handle_Poly_Triangulation*)nativeHandle))->Deflection();
}

 void OCPoly_Triangulation::Deflection(Standard_Real D)
{
  (*((Handle_Poly_Triangulation*)nativeHandle))->Deflection(D);
}

 void OCPoly_Triangulation::RemoveUVNodes()
{
  (*((Handle_Poly_Triangulation*)nativeHandle))->RemoveUVNodes();
}

 Standard_Integer OCPoly_Triangulation::NbNodes()
{
  return (*((Handle_Poly_Triangulation*)nativeHandle))->NbNodes();
}

 Standard_Integer OCPoly_Triangulation::NbTriangles()
{
  return (*((Handle_Poly_Triangulation*)nativeHandle))->NbTriangles();
}

 System::Boolean OCPoly_Triangulation::HasUVNodes()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Poly_Triangulation*)nativeHandle))->HasUVNodes());
}

OCTColgp_Array1OfPnt^ OCPoly_Triangulation::Nodes()
{
  TColgp_Array1OfPnt* tmp = new TColgp_Array1OfPnt(0, 0);
  *tmp = (*((Handle_Poly_Triangulation*)nativeHandle))->Nodes();
  return gcnew OCTColgp_Array1OfPnt(tmp);
}

OCTColgp_Array1OfPnt^ OCPoly_Triangulation::ChangeNodes()
{
  TColgp_Array1OfPnt* tmp = new TColgp_Array1OfPnt(0, 0);
  *tmp = (*((Handle_Poly_Triangulation*)nativeHandle))->ChangeNodes();
  return gcnew OCTColgp_Array1OfPnt(tmp);
}

OCTColgp_Array1OfPnt2d^ OCPoly_Triangulation::UVNodes()
{
  TColgp_Array1OfPnt2d* tmp = new TColgp_Array1OfPnt2d(0, 0);
  *tmp = (*((Handle_Poly_Triangulation*)nativeHandle))->UVNodes();
  return gcnew OCTColgp_Array1OfPnt2d(tmp);
}

OCTColgp_Array1OfPnt2d^ OCPoly_Triangulation::ChangeUVNodes()
{
  TColgp_Array1OfPnt2d* tmp = new TColgp_Array1OfPnt2d(0, 0);
  *tmp = (*((Handle_Poly_Triangulation*)nativeHandle))->ChangeUVNodes();
  return gcnew OCTColgp_Array1OfPnt2d(tmp);
}

OCPoly_Array1OfTriangle^ OCPoly_Triangulation::Triangles()
{
  Poly_Array1OfTriangle* tmp = new Poly_Array1OfTriangle(0, 0);
  *tmp = (*((Handle_Poly_Triangulation*)nativeHandle))->Triangles();
  return gcnew OCPoly_Array1OfTriangle(tmp);
}

OCPoly_Array1OfTriangle^ OCPoly_Triangulation::ChangeTriangles()
{
  Poly_Array1OfTriangle* tmp = new Poly_Array1OfTriangle(0, 0);
  *tmp = (*((Handle_Poly_Triangulation*)nativeHandle))->ChangeTriangles();
  return gcnew OCPoly_Array1OfTriangle(tmp);
}

 void OCPoly_Triangulation::SetNormals(OCNaroWrappers::OCTShort_HArray1OfShortReal^ theNormals)
{
  (*((Handle_Poly_Triangulation*)nativeHandle))->SetNormals(*((Handle_TShort_HArray1OfShortReal*)theNormals->Handle));
}

OCTShort_Array1OfShortReal^ OCPoly_Triangulation::Normals()
{
  TShort_Array1OfShortReal* tmp = new TShort_Array1OfShortReal(0, 0);
  *tmp = (*((Handle_Poly_Triangulation*)nativeHandle))->Normals();
  return gcnew OCTShort_Array1OfShortReal(tmp);
}

OCTShort_Array1OfShortReal^ OCPoly_Triangulation::ChangeNormals()
{
  TShort_Array1OfShortReal* tmp = new TShort_Array1OfShortReal(0, 0);
  *tmp = (*((Handle_Poly_Triangulation*)nativeHandle))->ChangeNormals();
  return gcnew OCTShort_Array1OfShortReal(tmp);
}

 System::Boolean OCPoly_Triangulation::HasNormals()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Poly_Triangulation*)nativeHandle))->HasNormals());
}


