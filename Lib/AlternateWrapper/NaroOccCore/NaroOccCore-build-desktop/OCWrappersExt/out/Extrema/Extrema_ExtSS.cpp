// File generated by CPPExt (CPP file)
//

#include "Extrema_ExtSS.h"
#include "../Converter.h"
#include "../Adaptor3d/Adaptor3d_Surface.h"
#include "Extrema_POnSurf.h"


using namespace OCNaroWrappers;

OCExtrema_ExtSS::OCExtrema_ExtSS(Extrema_ExtSS* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCExtrema_ExtSS::OCExtrema_ExtSS() 
{
  nativeHandle = new Extrema_ExtSS();
}

OCExtrema_ExtSS::OCExtrema_ExtSS(OCNaroWrappers::OCAdaptor3d_Surface^ S1, OCNaroWrappers::OCAdaptor3d_Surface^ S2, Standard_Real TolS1, Standard_Real TolS2) 
{
  nativeHandle = new Extrema_ExtSS(*((Adaptor3d_Surface*)S1->Handle), *((Adaptor3d_Surface*)S2->Handle), TolS1, TolS2);
}

OCExtrema_ExtSS::OCExtrema_ExtSS(OCNaroWrappers::OCAdaptor3d_Surface^ S1, OCNaroWrappers::OCAdaptor3d_Surface^ S2, Standard_Real Uinf1, Standard_Real Usup1, Standard_Real Vinf1, Standard_Real Vsup1, Standard_Real Uinf2, Standard_Real Usup2, Standard_Real Vinf2, Standard_Real Vsup2, Standard_Real TolS1, Standard_Real TolS2) 
{
  nativeHandle = new Extrema_ExtSS(*((Adaptor3d_Surface*)S1->Handle), *((Adaptor3d_Surface*)S2->Handle), Uinf1, Usup1, Vinf1, Vsup1, Uinf2, Usup2, Vinf2, Vsup2, TolS1, TolS2);
}

 void OCExtrema_ExtSS::Initialize(OCNaroWrappers::OCAdaptor3d_Surface^ S2, Standard_Real Uinf2, Standard_Real Usup2, Standard_Real Vinf2, Standard_Real Vsup2, Standard_Real TolS1)
{
  ((Extrema_ExtSS*)nativeHandle)->Initialize(*((Adaptor3d_Surface*)S2->Handle), Uinf2, Usup2, Vinf2, Vsup2, TolS1);
}

 void OCExtrema_ExtSS::Perform(OCNaroWrappers::OCAdaptor3d_Surface^ S1, Standard_Real Uinf1, Standard_Real Usup1, Standard_Real Vinf1, Standard_Real Vsup1, Standard_Real TolS1)
{
  ((Extrema_ExtSS*)nativeHandle)->Perform(*((Adaptor3d_Surface*)S1->Handle), Uinf1, Usup1, Vinf1, Vsup1, TolS1);
}

 System::Boolean OCExtrema_ExtSS::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((Extrema_ExtSS*)nativeHandle)->IsDone());
}

 System::Boolean OCExtrema_ExtSS::IsParallel()
{
  return OCConverter::StandardBooleanToBoolean(((Extrema_ExtSS*)nativeHandle)->IsParallel());
}

 Standard_Integer OCExtrema_ExtSS::NbExt()
{
  return ((Extrema_ExtSS*)nativeHandle)->NbExt();
}

 Standard_Real OCExtrema_ExtSS::SquareDistance(Standard_Integer N)
{
  return ((Extrema_ExtSS*)nativeHandle)->SquareDistance(N);
}

 void OCExtrema_ExtSS::Points(Standard_Integer N, OCNaroWrappers::OCExtrema_POnSurf^ P1, OCNaroWrappers::OCExtrema_POnSurf^ P2)
{
  ((Extrema_ExtSS*)nativeHandle)->Points(N, *((Extrema_POnSurf*)P1->Handle), *((Extrema_POnSurf*)P2->Handle));
}


