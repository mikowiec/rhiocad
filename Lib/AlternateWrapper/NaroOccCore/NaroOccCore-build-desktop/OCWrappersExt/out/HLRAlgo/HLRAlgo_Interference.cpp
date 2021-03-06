// File generated by CPPExt (CPP file)
//

#include "HLRAlgo_Interference.h"
#include "../Converter.h"
#include "HLRAlgo_Intersection.h"
#include "HLRAlgo_Coincidence.h"


using namespace OCNaroWrappers;

OCHLRAlgo_Interference::OCHLRAlgo_Interference(HLRAlgo_Interference* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCHLRAlgo_Interference::OCHLRAlgo_Interference() 
{
  nativeHandle = new HLRAlgo_Interference();
}

OCHLRAlgo_Interference::OCHLRAlgo_Interference(OCNaroWrappers::OCHLRAlgo_Intersection^ Inters, OCNaroWrappers::OCHLRAlgo_Coincidence^ Bound, OCTopAbs_Orientation Orient, OCTopAbs_Orientation Trans, OCTopAbs_Orientation BTrans) 
{
  nativeHandle = new HLRAlgo_Interference(*((HLRAlgo_Intersection*)Inters->Handle), *((HLRAlgo_Coincidence*)Bound->Handle), (TopAbs_Orientation)Orient, (TopAbs_Orientation)Trans, (TopAbs_Orientation)BTrans);
}

 void OCHLRAlgo_Interference::Intersection(OCNaroWrappers::OCHLRAlgo_Intersection^ I)
{
  ((HLRAlgo_Interference*)nativeHandle)->Intersection(*((HLRAlgo_Intersection*)I->Handle));
}

 void OCHLRAlgo_Interference::Boundary(OCNaroWrappers::OCHLRAlgo_Coincidence^ B)
{
  ((HLRAlgo_Interference*)nativeHandle)->Boundary(*((HLRAlgo_Coincidence*)B->Handle));
}

 void OCHLRAlgo_Interference::Orientation(OCTopAbs_Orientation O)
{
  ((HLRAlgo_Interference*)nativeHandle)->Orientation((TopAbs_Orientation)O);
}

 void OCHLRAlgo_Interference::Transition(OCTopAbs_Orientation Tr)
{
  ((HLRAlgo_Interference*)nativeHandle)->Transition((TopAbs_Orientation)Tr);
}

 void OCHLRAlgo_Interference::BoundaryTransition(OCTopAbs_Orientation BTr)
{
  ((HLRAlgo_Interference*)nativeHandle)->BoundaryTransition((TopAbs_Orientation)BTr);
}

OCHLRAlgo_Intersection^ OCHLRAlgo_Interference::Intersection()
{
  HLRAlgo_Intersection* tmp = new HLRAlgo_Intersection();
  *tmp = ((HLRAlgo_Interference*)nativeHandle)->Intersection();
  return gcnew OCHLRAlgo_Intersection(tmp);
}

OCHLRAlgo_Intersection^ OCHLRAlgo_Interference::ChangeIntersection()
{
  HLRAlgo_Intersection* tmp = new HLRAlgo_Intersection();
  *tmp = ((HLRAlgo_Interference*)nativeHandle)->ChangeIntersection();
  return gcnew OCHLRAlgo_Intersection(tmp);
}

OCHLRAlgo_Coincidence^ OCHLRAlgo_Interference::Boundary()
{
  HLRAlgo_Coincidence* tmp = new HLRAlgo_Coincidence();
  *tmp = ((HLRAlgo_Interference*)nativeHandle)->Boundary();
  return gcnew OCHLRAlgo_Coincidence(tmp);
}

OCHLRAlgo_Coincidence^ OCHLRAlgo_Interference::ChangeBoundary()
{
  HLRAlgo_Coincidence* tmp = new HLRAlgo_Coincidence();
  *tmp = ((HLRAlgo_Interference*)nativeHandle)->ChangeBoundary();
  return gcnew OCHLRAlgo_Coincidence(tmp);
}

 OCTopAbs_Orientation OCHLRAlgo_Interference::Orientation()
{
  return (OCTopAbs_Orientation)(((HLRAlgo_Interference*)nativeHandle)->Orientation());
}

 OCTopAbs_Orientation OCHLRAlgo_Interference::Transition()
{
  return (OCTopAbs_Orientation)(((HLRAlgo_Interference*)nativeHandle)->Transition());
}

 OCTopAbs_Orientation OCHLRAlgo_Interference::BoundaryTransition()
{
  return (OCTopAbs_Orientation)(((HLRAlgo_Interference*)nativeHandle)->BoundaryTransition());
}


