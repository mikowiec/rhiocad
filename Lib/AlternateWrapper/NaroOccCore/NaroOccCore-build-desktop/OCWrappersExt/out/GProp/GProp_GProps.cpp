// File generated by CPPExt (CPP file)
//

#include "GProp_GProps.h"
#include "../Converter.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_Mat.h"
#include "../gp/gp_Ax1.h"
#include "GProp_PrincipalProps.h"


using namespace OCNaroWrappers;

OCGProp_GProps::OCGProp_GProps(GProp_GProps* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCGProp_GProps::OCGProp_GProps() 
{
  nativeHandle = new GProp_GProps();
}

OCGProp_GProps::OCGProp_GProps(OCNaroWrappers::OCgp_Pnt^ SystemLocation) 
{
  nativeHandle = new GProp_GProps(*((gp_Pnt*)SystemLocation->Handle));
}

 void OCGProp_GProps::Add(OCNaroWrappers::OCGProp_GProps^ Item, Standard_Real Density)
{
  ((GProp_GProps*)nativeHandle)->Add(*((GProp_GProps*)Item->Handle), Density);
}

 Standard_Real OCGProp_GProps::Mass()
{
  return ((GProp_GProps*)nativeHandle)->Mass();
}

OCgp_Pnt^ OCGProp_GProps::CentreOfMass()
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((GProp_GProps*)nativeHandle)->CentreOfMass();
  return gcnew OCgp_Pnt(tmp);
}

OCgp_Mat^ OCGProp_GProps::MatrixOfInertia()
{
  gp_Mat* tmp = new gp_Mat();
  *tmp = ((GProp_GProps*)nativeHandle)->MatrixOfInertia();
  return gcnew OCgp_Mat(tmp);
}

 void OCGProp_GProps::StaticMoments(Standard_Real& Ix, Standard_Real& Iy, Standard_Real& Iz)
{
  ((GProp_GProps*)nativeHandle)->StaticMoments(Ix, Iy, Iz);
}

 Standard_Real OCGProp_GProps::MomentOfInertia(OCNaroWrappers::OCgp_Ax1^ A)
{
  return ((GProp_GProps*)nativeHandle)->MomentOfInertia(*((gp_Ax1*)A->Handle));
}

OCGProp_PrincipalProps^ OCGProp_GProps::PrincipalProperties()
{
  GProp_PrincipalProps* tmp = new GProp_PrincipalProps();
  *tmp = ((GProp_GProps*)nativeHandle)->PrincipalProperties();
  return gcnew OCGProp_PrincipalProps(tmp);
}

 Standard_Real OCGProp_GProps::RadiusOfGyration(OCNaroWrappers::OCgp_Ax1^ A)
{
  return ((GProp_GProps*)nativeHandle)->RadiusOfGyration(*((gp_Ax1*)A->Handle));
}

