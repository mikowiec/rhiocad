// File generated by CPPExt (MPV)
//
#ifndef _LProp3d_CLProps_OCWrappers_HeaderFile
#define _LProp3d_CLProps_OCWrappers_HeaderFile

// include native header
#include <LProp3d_CLProps.hxx>
#include "../Converter.h"


#include "../gp/gp_Pnt.h"
#include "../gp/gp_Vec.h"
#include "../gp/gp_Dir.h"
#include "../LProp/LProp_Status.h"


namespace OCNaroWrappers
{

ref class OCAdaptor3d_HCurve;
ref class OCgp_Vec;
ref class OCgp_Pnt;
ref class OCgp_Dir;
ref class OCLProp3d_CurveTool;



public ref class OCLProp3d_CLProps  {

protected:
  LProp3d_CLProps* nativeHandle;
  OCLProp3d_CLProps(OCDummy^) {};

public:
  property LProp3d_CLProps* Handle
  {
    LProp3d_CLProps* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCLProp3d_CLProps(LProp3d_CLProps* nativeHandle);

// Methods PUBLIC


OCLProp3d_CLProps(OCNaroWrappers::OCAdaptor3d_HCurve^ C, Standard_Integer N, Standard_Real Resolution);


OCLProp3d_CLProps(OCNaroWrappers::OCAdaptor3d_HCurve^ C, Standard_Real U, Standard_Integer N, Standard_Real Resolution);


OCLProp3d_CLProps(Standard_Integer N, Standard_Real Resolution);


 /*instead*/  void SetParameter(Standard_Real U) ;


 /*instead*/  void SetCurve(OCNaroWrappers::OCAdaptor3d_HCurve^ C) ;


 /*instead*/  OCgp_Pnt^ Value() ;


 /*instead*/  OCgp_Vec^ D1() ;


 /*instead*/  OCgp_Vec^ D2() ;


 /*instead*/  OCgp_Vec^ D3() ;


 /*instead*/  System::Boolean IsTangentDefined() ;


 /*instead*/  void Tangent(OCNaroWrappers::OCgp_Dir^ D) ;


 /*instead*/  Standard_Real Curvature() ;


 /*instead*/  void Normal(OCNaroWrappers::OCgp_Dir^ N) ;


 /*instead*/  void CentreOfCurvature(OCNaroWrappers::OCgp_Pnt^ P) ;

~OCLProp3d_CLProps()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif