// File generated by CPPExt (Transient)
//
#ifndef _StepVisual_HArray1OfTextOrCharacter_OCWrappers_HeaderFile
#define _StepVisual_HArray1OfTextOrCharacter_OCWrappers_HeaderFile

// include the wrapped class
#include <StepVisual_HArray1OfTextOrCharacter.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "StepVisual_Array1OfTextOrCharacter.h"


namespace OCNaroWrappers
{

ref class OCStepVisual_TextOrCharacter;
ref class OCStepVisual_Array1OfTextOrCharacter;



public ref class OCStepVisual_HArray1OfTextOrCharacter : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepVisual_HArray1OfTextOrCharacter(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepVisual_HArray1OfTextOrCharacter(Handle(StepVisual_HArray1OfTextOrCharacter)* nativeHandle);

// Methods PUBLIC


OCStepVisual_HArray1OfTextOrCharacter(Standard_Integer Low, Standard_Integer Up);


OCStepVisual_HArray1OfTextOrCharacter(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCStepVisual_TextOrCharacter^ V);


 /*instead*/  void Init(OCNaroWrappers::OCStepVisual_TextOrCharacter^ V) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCStepVisual_TextOrCharacter^ Value) ;


 /*instead*/  OCStepVisual_TextOrCharacter^ Value(Standard_Integer Index) ;


 /*instead*/  OCStepVisual_TextOrCharacter^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  OCStepVisual_Array1OfTextOrCharacter^ Array1() ;


 /*instead*/  OCStepVisual_Array1OfTextOrCharacter^ ChangeArray1() ;

~OCStepVisual_HArray1OfTextOrCharacter()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
