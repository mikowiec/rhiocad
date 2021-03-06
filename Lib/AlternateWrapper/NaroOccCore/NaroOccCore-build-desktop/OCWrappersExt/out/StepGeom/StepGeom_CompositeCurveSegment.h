// File generated by CPPExt (Transient)
//
#ifndef _StepGeom_CompositeCurveSegment_OCWrappers_HeaderFile
#define _StepGeom_CompositeCurveSegment_OCWrappers_HeaderFile

// include the wrapped class
#include <StepGeom_CompositeCurveSegment.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "StepGeom_TransitionCode.h"
#include "StepGeom_Curve.h"


namespace OCNaroWrappers
{

ref class OCStepGeom_Curve;



public ref class OCStepGeom_CompositeCurveSegment : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepGeom_CompositeCurveSegment(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepGeom_CompositeCurveSegment(Handle(StepGeom_CompositeCurveSegment)* nativeHandle);

// Methods PUBLIC

//! Returns a CompositeCurveSegment <br>
OCStepGeom_CompositeCurveSegment();


virtual /*instead*/  void Init(OCStepGeom_TransitionCode aTransition, System::Boolean aSameSense, OCNaroWrappers::OCStepGeom_Curve^ aParentCurve) ;


 /*instead*/  void SetTransition(OCStepGeom_TransitionCode aTransition) ;


 /*instead*/  OCStepGeom_TransitionCode Transition() ;


 /*instead*/  void SetSameSense(System::Boolean aSameSense) ;


 /*instead*/  System::Boolean SameSense() ;


 /*instead*/  void SetParentCurve(OCNaroWrappers::OCStepGeom_Curve^ aParentCurve) ;


 /*instead*/  OCStepGeom_Curve^ ParentCurve() ;

~OCStepGeom_CompositeCurveSegment()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
