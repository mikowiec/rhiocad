// File generated by CPPExt (Transient)
//
#ifndef _StepVisual_PresentationLayerUsage_OCWrappers_HeaderFile
#define _StepVisual_PresentationLayerUsage_OCWrappers_HeaderFile

// include the wrapped class
#include <StepVisual_PresentationLayerUsage.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{

ref class OCStepVisual_PresentationLayerAssignment;
ref class OCStepVisual_PresentationRepresentation;


//! Added from StepVisual Rev2 to Rev4 <br>
public ref class OCStepVisual_PresentationLayerUsage : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepVisual_PresentationLayerUsage(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepVisual_PresentationLayerUsage(Handle(StepVisual_PresentationLayerUsage)* nativeHandle);

// Methods PUBLIC


OCStepVisual_PresentationLayerUsage();


 /*instead*/  void Init(OCNaroWrappers::OCStepVisual_PresentationLayerAssignment^ aAssignment, OCNaroWrappers::OCStepVisual_PresentationRepresentation^ aPresentation) ;


 /*instead*/  void SetAssignment(OCNaroWrappers::OCStepVisual_PresentationLayerAssignment^ aAssignment) ;


 /*instead*/  OCStepVisual_PresentationLayerAssignment^ Assignment() ;


 /*instead*/  void SetPresentation(OCNaroWrappers::OCStepVisual_PresentationRepresentation^ aPresentation) ;


 /*instead*/  OCStepVisual_PresentationRepresentation^ Presentation() ;

~OCStepVisual_PresentationLayerUsage()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif