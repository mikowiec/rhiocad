// File generated by CPPExt (Transient)
//
#ifndef _StepVisual_ColourRgb_OCWrappers_HeaderFile
#define _StepVisual_ColourRgb_OCWrappers_HeaderFile

// include the wrapped class
#include <StepVisual_ColourRgb.hxx>
#include "../Converter.h"

#include "StepVisual_ColourSpecification.h"



namespace OCNaroWrappers
{

ref class OCTCollection_HAsciiString;



public ref class OCStepVisual_ColourRgb : OCStepVisual_ColourSpecification {

protected:
  // dummy constructor;
  OCStepVisual_ColourRgb(OCDummy^) : OCStepVisual_ColourSpecification((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepVisual_ColourRgb(Handle(StepVisual_ColourRgb)* nativeHandle);

// Methods PUBLIC

//! Returns a ColourRgb <br>
OCStepVisual_ColourRgb();


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName) override;


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, Standard_Real aRed, Standard_Real aGreen, Standard_Real aBlue) ;


 /*instead*/  void SetRed(Standard_Real aRed) ;


 /*instead*/  Standard_Real Red() ;


 /*instead*/  void SetGreen(Standard_Real aGreen) ;


 /*instead*/  Standard_Real Green() ;


 /*instead*/  void SetBlue(Standard_Real aBlue) ;


 /*instead*/  Standard_Real Blue() ;

~OCStepVisual_ColourRgb()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif