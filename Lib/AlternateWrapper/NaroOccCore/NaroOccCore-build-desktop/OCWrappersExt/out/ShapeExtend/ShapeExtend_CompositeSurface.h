// File generated by CPPExt (Transient)
//
#ifndef _ShapeExtend_CompositeSurface_OCWrappers_HeaderFile
#define _ShapeExtend_CompositeSurface_OCWrappers_HeaderFile

// include the wrapped class
#include <ShapeExtend_CompositeSurface.hxx>
#include "../Converter.h"

#include "../Geom/Geom_Surface.h"

#include "ShapeExtend_Parametrisation.h"
#include "../GeomAbs/GeomAbs_Shape.h"


namespace OCNaroWrappers
{

ref class OCTColGeom_HArray2OfSurface;
ref class OCTColStd_HArray1OfReal;
ref class OCTColStd_Array1OfReal;
ref class OCGeom_Surface;
ref class OCgp_Pnt2d;
ref class OCgp_Trsf2d;
ref class OCgp_Trsf;
ref class OCGeom_Geometry;
ref class OCGeom_Curve;
ref class OCgp_Pnt;
ref class OCgp_Vec;


//! Composite surface is represented by a grid of surfaces <br>
//!          (patches) connected geometrically. Patches may have different <br>
//!          parametrisation ranges, but they should be parametrised in <br>
//!          the same manner so that parameter of each patch (u,v) can be converted <br>
//!          to global parameter on the whole surface (U,V) with help of linear <br>
//!          transformation: <br>
public ref class OCShapeExtend_CompositeSurface : OCGeom_Surface {

protected:
  // dummy constructor;
  OCShapeExtend_CompositeSurface(OCDummy^) : OCGeom_Surface((OCDummy^)nullptr) {};

public:

// constructor from native
OCShapeExtend_CompositeSurface(Handle(ShapeExtend_CompositeSurface)* nativeHandle);

// Methods PUBLIC

//! Empty constructor. <br>
OCShapeExtend_CompositeSurface();

//! Initializes by a grid of surfaces (calls Init()). <br>
OCShapeExtend_CompositeSurface(OCNaroWrappers::OCTColGeom_HArray2OfSurface^ GridSurf, OCShapeExtend_Parametrisation param);

//! Initializes by a grid of surfaces (calls Init()). <br>
OCShapeExtend_CompositeSurface(OCNaroWrappers::OCTColGeom_HArray2OfSurface^ GridSurf, OCNaroWrappers::OCTColStd_Array1OfReal^ UJoints, OCNaroWrappers::OCTColStd_Array1OfReal^ VJoints);

//! Initializes by a grid of surfaces. <br>
//!          All the Surfaces of the grid must have geometrical <br>
//!          connectivity as stated above. <br>
//!          If geometrical connectivity is not satisfied, method <br>
//!          returns False. <br>
//!          However, class is initialized even in that case. <br>
 /*instead*/  System::Boolean Init(OCNaroWrappers::OCTColGeom_HArray2OfSurface^ GridSurf, OCShapeExtend_Parametrisation param) ;

//! Initializes by a grid of surfaces with given global <br>
//!          parametrisation defined by UJoints and VJoints arrays, <br>
//!          each having langth equal to number of patches in corresponding <br>
//!          direction + 1. Global joint values should be sorted in <br>
//!          increasing order. <br>
//!          All the Surfaces of the grid must have geometrical <br>
//!          connectivity as stated above. <br>
//!          If geometrical connectivity is not satisfied, method <br>
//!          returns False. <br>
//!          However, class is initialized even in that case. <br>
 /*instead*/  System::Boolean Init(OCNaroWrappers::OCTColGeom_HArray2OfSurface^ GridSurf, OCNaroWrappers::OCTColStd_Array1OfReal^ UJoints, OCNaroWrappers::OCTColStd_Array1OfReal^ VJoints) ;

//! Returns number of patches in U direction. <br>
 /*instead*/  Standard_Integer NbUPatches() ;

//! Returns number of patches in V direction. <br>
 /*instead*/  Standard_Integer NbVPatches() ;

//! Returns one surface patch <br>
 /*instead*/  OCGeom_Surface^ Patch(Standard_Integer i, Standard_Integer j) ;

//! Returns grid of surfaces <br>
 /*instead*/  OCTColGeom_HArray2OfSurface^ Patches() ;

//! Returns the array of U values corresponding to joint <br>
//!          points between patches as well as to start and end points, <br>
//!          which define global parametrisation of the surface <br>
 /*instead*/  OCTColStd_HArray1OfReal^ UJointValues() ;

//! Returns the array of V values corresponding to joint <br>
//!          points between patches as well as to start and end points, <br>
//!          which define global parametrisation of the surface <br>
 /*instead*/  OCTColStd_HArray1OfReal^ VJointValues() ;

//! Returns i-th joint value in U direction <br>
//!          (1-st is global Umin, (NbUPatches()+1)-th is global Umax <br>
//!          on the composite surface) <br>
 /*instead*/  Standard_Real UJointValue(Standard_Integer i) ;

//! Returns j-th joint value in V direction <br>
//!          (1-st is global Vmin, (NbVPatches()+1)-th is global Vmax <br>
//!          on the composite surface) <br>
 /*instead*/  Standard_Real VJointValue(Standard_Integer j) ;

//! Sets the array of U values corresponding to joint <br>
//!          points, which define global parametrisation of the surface. <br>
//!          Number of values in array should be equal to NbUPatches()+1. <br>
//!          All the values should be sorted in increasing order. <br>
//!          If this is not satisfied, does nothing and returns False. <br>
 /*instead*/  System::Boolean SetUJointValues(OCNaroWrappers::OCTColStd_Array1OfReal^ UJoints) ;

//! Sets the array of V values corresponding to joint <br>
//!          points, which define global parametrisation of the surface <br>
//!          Number of values in array should be equal to NbVPatches()+1. <br>
//!          All the values should be sorted in increasing order. <br>
//!          If this is not satisfied, does nothing and returns False. <br>
 /*instead*/  System::Boolean SetVJointValues(OCNaroWrappers::OCTColStd_Array1OfReal^ VJoints) ;

//! Changes starting value for global U parametrisation (all <br>
//!          other joint values are shifted accordingly) <br>
 /*instead*/  void SetUFirstValue(Standard_Real UFirst) ;

//! Changes starting value for global V parametrisation (all <br>
//!          other joint values are shifted accordingly) <br>
 /*instead*/  void SetVFirstValue(Standard_Real VFirst) ;

//! Returns number of col that contains given (global) parameter <br>
 /*instead*/  Standard_Integer LocateUParameter(Standard_Real U) ;

//! Returns number of row that contains given (global) parameter <br>
 /*instead*/  Standard_Integer LocateVParameter(Standard_Real V) ;

//! Returns number of row and col of surface that contains <br>
//!          given point <br>
 /*instead*/  void LocateUVPoint(OCNaroWrappers::OCgp_Pnt2d^ pnt, Standard_Integer& i, Standard_Integer& j) ;

//! Returns one surface patch that contains given (global) parameters <br>
 /*instead*/  OCGeom_Surface^ Patch(Standard_Real U, Standard_Real V) ;

//! Returns one surface patch that contains given point <br>
 /*instead*/  OCGeom_Surface^ Patch(OCNaroWrappers::OCgp_Pnt2d^ pnt) ;

//! Converts local parameter u on patch i,j to global parameter U <br>
 /*instead*/  Standard_Real ULocalToGlobal(Standard_Integer i, Standard_Integer j, Standard_Real u) ;

//! Converts local parameter v on patch i,j to global parameter V <br>
 /*instead*/  Standard_Real VLocalToGlobal(Standard_Integer i, Standard_Integer j, Standard_Real v) ;

//! Converts local parameters uv on patch i,j to global parameters UV <br>
 /*instead*/  OCgp_Pnt2d^ LocalToGlobal(Standard_Integer i, Standard_Integer j, OCNaroWrappers::OCgp_Pnt2d^ uv) ;

//! Converts global parameter U to local parameter u on patch i,j <br>
 /*instead*/  Standard_Real UGlobalToLocal(Standard_Integer i, Standard_Integer j, Standard_Real U) ;

//! Converts global parameter V to local parameter v on patch i,j <br>
 /*instead*/  Standard_Real VGlobalToLocal(Standard_Integer i, Standard_Integer j, Standard_Real V) ;

//! Converts global parameters UV to local parameters uv on patch i,j <br>
 /*instead*/  OCgp_Pnt2d^ GlobalToLocal(Standard_Integer i, Standard_Integer j, OCNaroWrappers::OCgp_Pnt2d^ UV) ;

//! Computes transformation operator and uFactor descrinbing affine <br>
//!          transformation required to convert global parameters on composite <br>
//!          surface to local parameters on patch (i,j): <br>
//!          uv = ( uFactor, 1. ) X Trsf * UV; <br>
//!          NOTE: Thus Trsf contains shift and scale by V, scale by U is stored in uFact. <br>
//!          Returns True if transformation is not an identity <br>
 /*instead*/  System::Boolean GlobalToLocalTransformation(Standard_Integer i, Standard_Integer j, Standard_Real& uFact, OCNaroWrappers::OCgp_Trsf2d^ Trsf) ;

//! Applies transformation to all the patches <br>
virtual /*instead*/  void Transform(OCNaroWrappers::OCgp_Trsf^ T) ;

//! Returns a copy of the surface <br>
virtual /*instead*/  OCGeom_Geometry^ Copy() ;

//! NOT IMPLEMENTED (does nothing) <br>
virtual /*instead*/  void UReverse() ;

//! Returns U <br>
virtual /*instead*/  Standard_Real UReversedParameter(Standard_Real U) ;

//! NOT IMPLEMENTED (does nothing) <br>
virtual /*instead*/  void VReverse() ;

//! Returns V <br>
virtual /*instead*/  Standard_Real VReversedParameter(Standard_Real V) ;

//! Returns the parametric bounds of grid <br>
virtual /*instead*/  void Bounds(Standard_Real& U1, Standard_Real& U2, Standard_Real& V1, Standard_Real& V2) ;

//! Returns True if grid is closed in U direction <br>
//!          (i.e. connected with Precision::Confusion) <br>
virtual /*instead*/  System::Boolean IsUClosed() ;

//! Returns True if grid is closed in V direction <br>
//!          (i.e. connected with Precision::Confusion) <br>
virtual /*instead*/  System::Boolean IsVClosed() ;

//! Returns False <br>
virtual /*instead*/  System::Boolean IsUPeriodic() ;

//! Returns False <br>
virtual /*instead*/  System::Boolean IsVPeriodic() ;

//! NOT IMPLEMENTED (returns Null curve) <br>
virtual /*instead*/  OCGeom_Curve^ UIso(Standard_Real U) ;

//! NOT IMPLEMENTED (returns Null curve) <br>
virtual /*instead*/  OCGeom_Curve^ VIso(Standard_Real V) ;

//! returns C0 <br>
virtual /*instead*/  OCGeomAbs_Shape Continuity() ;

//! returns True if N <=0 <br>
virtual /*instead*/  System::Boolean IsCNu(Standard_Integer N) ;

//! returns True if N <=0 <br>
virtual /*instead*/  System::Boolean IsCNv(Standard_Integer N) ;

//! Computes the point of parameter U,V on the grid. <br>
virtual /*instead*/  void D0(Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P) ;

//! Computes the point P and the first derivatives in the <br>
//!          directions U and V at this point. <br>
virtual /*instead*/  void D1(Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ D1U, OCNaroWrappers::OCgp_Vec^ D1V) ;

//! Computes the point P, the first and the second derivatives in <br>
//!          the directions U and V at this point. <br>
virtual /*instead*/  void D2(Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ D1U, OCNaroWrappers::OCgp_Vec^ D1V, OCNaroWrappers::OCgp_Vec^ D2U, OCNaroWrappers::OCgp_Vec^ D2V, OCNaroWrappers::OCgp_Vec^ D2UV) ;

//! Computes the point P, the first,the second and the third <br>
//!          derivatives in the directions U and V at this point. <br>
virtual /*instead*/  void D3(Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ D1U, OCNaroWrappers::OCgp_Vec^ D1V, OCNaroWrappers::OCgp_Vec^ D2U, OCNaroWrappers::OCgp_Vec^ D2V, OCNaroWrappers::OCgp_Vec^ D2UV, OCNaroWrappers::OCgp_Vec^ D3U, OCNaroWrappers::OCgp_Vec^ D3V, OCNaroWrappers::OCgp_Vec^ D3UUV, OCNaroWrappers::OCgp_Vec^ D3UVV) ;

//! Computes the derivative of order Nu in the direction U and Nv <br>
//!          in the direction V at the point P(U, V). <br>
virtual /*instead*/  OCgp_Vec^ DN(Standard_Real U, Standard_Real V, Standard_Integer Nu, Standard_Integer Nv) ;

//! Computes the point of parameter pnt on the grid. <br>
 /*instead*/  OCgp_Pnt^ Value(OCNaroWrappers::OCgp_Pnt2d^ pnt) ;

//! Computes Joint values according to parameter <br>
 /*instead*/  void ComputeJointValues(OCShapeExtend_Parametrisation param) ;

//! Checks geometrical connectivity of the patches, including <br>
//!          closedness (sets fields muUClosed and myVClosed) <br>
 /*instead*/  System::Boolean CheckConnectivity(Standard_Real prec) ;

~OCShapeExtend_CompositeSurface()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif