// File generated by CPPExt (Transient)
//
#ifndef _StepBasic_SecurityClassification_OCWrappers_HeaderFile
#define _StepBasic_SecurityClassification_OCWrappers_HeaderFile

// include the wrapped class
#include <StepBasic_SecurityClassification.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{

ref class OCTCollection_HAsciiString;
ref class OCStepBasic_SecurityClassificationLevel;



public ref class OCStepBasic_SecurityClassification : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepBasic_SecurityClassification(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepBasic_SecurityClassification(Handle(StepBasic_SecurityClassification)* nativeHandle);

// Methods PUBLIC

//! Returns a SecurityClassification <br>
OCStepBasic_SecurityClassification();


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCTCollection_HAsciiString^ aPurpose, OCNaroWrappers::OCStepBasic_SecurityClassificationLevel^ aSecurityLevel) ;


 /*instead*/  void SetName(OCNaroWrappers::OCTCollection_HAsciiString^ aName) ;


 /*instead*/  OCTCollection_HAsciiString^ Name() ;


 /*instead*/  void SetPurpose(OCNaroWrappers::OCTCollection_HAsciiString^ aPurpose) ;


 /*instead*/  OCTCollection_HAsciiString^ Purpose() ;


 /*instead*/  void SetSecurityLevel(OCNaroWrappers::OCStepBasic_SecurityClassificationLevel^ aSecurityLevel) ;


 /*instead*/  OCStepBasic_SecurityClassificationLevel^ SecurityLevel() ;

~OCStepBasic_SecurityClassification()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif