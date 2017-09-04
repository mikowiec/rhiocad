// File generated by CPPExt (Transient)
//
#ifndef _IntPatch_TheGLineOfIntersection_OCWrappers_HeaderFile
#define _IntPatch_TheGLineOfIntersection_OCWrappers_HeaderFile

// include the wrapped class
#include <IntPatch_TheGLineOfIntersection.hxx>
#include "../Converter.h"

#include "IntPatch_Line.h"

#include "../gp/gp_Ax2.h"
#include "IntPatch_SequenceOfPointOfIntersection.h"
#include "../IntSurf/IntSurf_TypeTrans.h"
#include "../IntSurf/IntSurf_Situation.h"
#include "../gp/gp_Lin.h"
#include "../gp/gp_Circ.h"
#include "../gp/gp_Elips.h"
#include "../gp/gp_Parab.h"
#include "../gp/gp_Hypr.h"


namespace OCNaroWrappers
{

ref class OCAdaptor3d_HVertex;
ref class OCAdaptor2d_HCurve2d;
ref class OCIntPatch_ThePointOfIntersection;
ref class OCIntPatch_SequenceOfPointOfIntersection;
ref class OCgp_Lin;
ref class OCgp_Circ;
ref class OCgp_Elips;
ref class OCgp_Parab;
ref class OCgp_Hypr;



public ref class OCIntPatch_TheGLineOfIntersection : OCIntPatch_Line {

protected:
  // dummy constructor;
  OCIntPatch_TheGLineOfIntersection(OCDummy^) : OCIntPatch_Line((OCDummy^)nullptr) {};

public:

// constructor from native
OCIntPatch_TheGLineOfIntersection(Handle(IntPatch_TheGLineOfIntersection)* nativeHandle);

// Methods PUBLIC


OCIntPatch_TheGLineOfIntersection(OCNaroWrappers::OCgp_Lin^ L, System::Boolean Tang, OCIntSurf_TypeTrans Trans1, OCIntSurf_TypeTrans Trans2);


OCIntPatch_TheGLineOfIntersection(OCNaroWrappers::OCgp_Lin^ L, System::Boolean Tang, OCIntSurf_Situation Situ1, OCIntSurf_Situation Situ2);


OCIntPatch_TheGLineOfIntersection(OCNaroWrappers::OCgp_Lin^ L, System::Boolean Tang);


OCIntPatch_TheGLineOfIntersection(OCNaroWrappers::OCgp_Circ^ C, System::Boolean Tang, OCIntSurf_TypeTrans Trans1, OCIntSurf_TypeTrans Trans2);


OCIntPatch_TheGLineOfIntersection(OCNaroWrappers::OCgp_Circ^ C, System::Boolean Tang, OCIntSurf_Situation Situ1, OCIntSurf_Situation Situ2);


OCIntPatch_TheGLineOfIntersection(OCNaroWrappers::OCgp_Circ^ C, System::Boolean Tang);


OCIntPatch_TheGLineOfIntersection(OCNaroWrappers::OCgp_Elips^ E, System::Boolean Tang, OCIntSurf_TypeTrans Trans1, OCIntSurf_TypeTrans Trans2);


OCIntPatch_TheGLineOfIntersection(OCNaroWrappers::OCgp_Elips^ E, System::Boolean Tang, OCIntSurf_Situation Situ1, OCIntSurf_Situation Situ2);


OCIntPatch_TheGLineOfIntersection(OCNaroWrappers::OCgp_Elips^ E, System::Boolean Tang);


OCIntPatch_TheGLineOfIntersection(OCNaroWrappers::OCgp_Parab^ P, System::Boolean Tang, OCIntSurf_TypeTrans Trans1, OCIntSurf_TypeTrans Trans2);


OCIntPatch_TheGLineOfIntersection(OCNaroWrappers::OCgp_Parab^ P, System::Boolean Tang, OCIntSurf_Situation Situ1, OCIntSurf_Situation Situ2);


OCIntPatch_TheGLineOfIntersection(OCNaroWrappers::OCgp_Parab^ P, System::Boolean Tang);


OCIntPatch_TheGLineOfIntersection(OCNaroWrappers::OCgp_Hypr^ H, System::Boolean Tang, OCIntSurf_TypeTrans Trans1, OCIntSurf_TypeTrans Trans2);


OCIntPatch_TheGLineOfIntersection(OCNaroWrappers::OCgp_Hypr^ H, System::Boolean Tang, OCIntSurf_Situation Situ1, OCIntSurf_Situation Situ2);


OCIntPatch_TheGLineOfIntersection(OCNaroWrappers::OCgp_Hypr^ H, System::Boolean Tang);


 /*instead*/  void AddVertex(OCNaroWrappers::OCIntPatch_ThePointOfIntersection^ Pnt) ;


 /*instead*/  void Replace(Standard_Integer Index, OCNaroWrappers::OCIntPatch_ThePointOfIntersection^ Pnt) ;


 /*instead*/  void SetFirstPoint(Standard_Integer IndFirst) ;


 /*instead*/  void SetLastPoint(Standard_Integer IndLast) ;


 /*instead*/  OCgp_Lin^ Line() ;


 /*instead*/  OCgp_Circ^ Circle() ;


 /*instead*/  OCgp_Elips^ Ellipse() ;


 /*instead*/  OCgp_Parab^ Parabola() ;


 /*instead*/  OCgp_Hypr^ Hyperbola() ;


 /*instead*/  System::Boolean HasFirstPoint() ;


 /*instead*/  System::Boolean HasLastPoint() ;


 /*instead*/  OCIntPatch_ThePointOfIntersection^ FirstPoint() ;


 /*instead*/  OCIntPatch_ThePointOfIntersection^ LastPoint() ;


 /*instead*/  Standard_Integer NbVertex() ;


 /*instead*/  OCIntPatch_ThePointOfIntersection^ Vertex(Standard_Integer Index) ;


 /*instead*/  void ComputeVertexParameters(Standard_Real Tol) ;

~OCIntPatch_TheGLineOfIntersection()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif