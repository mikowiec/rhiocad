// File generated by CPPExt (MPV)
//
#ifndef _GeomLProp_SLProps_OCWrappers_HeaderFile
#define _GeomLProp_SLProps_OCWrappers_HeaderFile

// include native header
#include <GeomLProp_SLProps.hxx>
#include "../Converter.h"


#include "../gp/gp_Pnt.h"
#include "../gp/gp_Vec.h"
#include "../gp/gp_Dir.h"
#include "../LProp/LProp_Status.h"


namespace OCNaroWrappers
{

ref class OCGeom_Surface;
ref class OCGeomLProp_SurfaceTool;
ref class OCgp_Pnt;
ref class OCgp_Vec;
ref class OCgp_Dir;



public ref class OCGeomLProp_SLProps  {

protected:
  GeomLProp_SLProps* nativeHandle;
  OCGeomLProp_SLProps(OCDummy^) {};

public:
  property GeomLProp_SLProps* Handle
  {
    GeomLProp_SLProps* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCGeomLProp_SLProps(GeomLProp_SLProps* nativeHandle);

// Methods PUBLIC


OCGeomLProp_SLProps(OCNaroWrappers::OCGeom_Surface^ S, Standard_Real U, Standard_Real V, Standard_Integer N, Standard_Real Resolution);


OCGeomLProp_SLProps(OCNaroWrappers::OCGeom_Surface^ S, Standard_Integer N, Standard_Real Resolution);


OCGeomLProp_SLProps(Standard_Integer N, Standard_Real Resolution);


 /*instead*/  void SetSurface(OCNaroWrappers::OCGeom_Surface^ S) ;


 /*instead*/  void SetParameters(Standard_Real U, Standard_Real V) ;


 /*instead*/  OCgp_Pnt^ Value() ;


 /*instead*/  OCgp_Vec^ D1U() ;


 /*instead*/  OCgp_Vec^ D1V() ;


 /*instead*/  OCgp_Vec^ D2U() ;


 /*instead*/  OCgp_Vec^ D2V() ;


 /*instead*/  OCgp_Vec^ DUV() ;


 /*instead*/  System::Boolean IsTangentUDefined() ;


 /*instead*/  void TangentU(OCNaroWrappers::OCgp_Dir^ D) ;


 /*instead*/  System::Boolean IsTangentVDefined() ;


 /*instead*/  void TangentV(OCNaroWrappers::OCgp_Dir^ D) ;


 /*instead*/  System::Boolean IsNormalDefined() ;


 /*instead*/  OCgp_Dir^ Normal() ;


 /*instead*/  System::Boolean IsCurvatureDefined() ;


 /*instead*/  System::Boolean IsUmbilic() ;


 /*instead*/  Standard_Real MaxCurvature() ;


 /*instead*/  Standard_Real MinCurvature() ;


 /*instead*/  void CurvatureDirections(OCNaroWrappers::OCgp_Dir^ MaxD, OCNaroWrappers::OCgp_Dir^ MinD) ;


 /*instead*/  Standard_Real MeanCurvature() ;


 /*instead*/  Standard_Real GaussianCurvature() ;

~OCGeomLProp_SLProps()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
