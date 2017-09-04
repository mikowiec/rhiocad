// File generated by CPPExt (Transient)
//
#ifndef _StepVisual_HArray1OfPresentationStyleAssignment_OCWrappers_HeaderFile
#define _StepVisual_HArray1OfPresentationStyleAssignment_OCWrappers_HeaderFile

// include the wrapped class
#include <StepVisual_HArray1OfPresentationStyleAssignment.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "StepVisual_Array1OfPresentationStyleAssignment.h"


namespace OCNaroWrappers
{

ref class OCStepVisual_PresentationStyleAssignment;
ref class OCStepVisual_Array1OfPresentationStyleAssignment;



public ref class OCStepVisual_HArray1OfPresentationStyleAssignment : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepVisual_HArray1OfPresentationStyleAssignment(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepVisual_HArray1OfPresentationStyleAssignment(Handle(StepVisual_HArray1OfPresentationStyleAssignment)* nativeHandle);

// Methods PUBLIC


OCStepVisual_HArray1OfPresentationStyleAssignment(Standard_Integer Low, Standard_Integer Up);


OCStepVisual_HArray1OfPresentationStyleAssignment(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCStepVisual_PresentationStyleAssignment^ V);


 /*instead*/  void Init(OCNaroWrappers::OCStepVisual_PresentationStyleAssignment^ V) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCStepVisual_PresentationStyleAssignment^ Value) ;


 /*instead*/  OCStepVisual_PresentationStyleAssignment^ Value(Standard_Integer Index) ;


 /*instead*/  OCStepVisual_PresentationStyleAssignment^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  OCStepVisual_Array1OfPresentationStyleAssignment^ Array1() ;


 /*instead*/  OCStepVisual_Array1OfPresentationStyleAssignment^ ChangeArray1() ;

~OCStepVisual_HArray1OfPresentationStyleAssignment()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif