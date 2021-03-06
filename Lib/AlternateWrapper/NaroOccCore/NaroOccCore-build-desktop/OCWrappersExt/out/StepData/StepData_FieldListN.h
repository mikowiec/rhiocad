// File generated by CPPExt (MPV)
//
#ifndef _StepData_FieldListN_OCWrappers_HeaderFile
#define _StepData_FieldListN_OCWrappers_HeaderFile

// include native header
#include <StepData_FieldListN.hxx>
#include "../Converter.h"

#include "StepData_FieldList.h"

#include "StepData_Array1OfField.h"
#include "StepData_FieldList.h"


namespace OCNaroWrappers
{

ref class OCStepData_Field;


//! Describes a list of fields, in a general way <br>
//!           This basic class is for a null size list <br>
//!           Subclasses are for 1, N (fixed) or Dynamic sizes <br>
public ref class OCStepData_FieldListN  : public OCStepData_FieldList {

protected:
  // dummy constructor;
  OCStepData_FieldListN(OCDummy^) : OCStepData_FieldList((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepData_FieldListN(StepData_FieldListN* nativeHandle);

// Methods PUBLIC

//! Creates a FieldListN of <nb> Fields <br>
OCStepData_FieldListN(Standard_Integer nb);

//! Returns the count of fields. Here, returns starting <nb> <br>
virtual /*instead*/  Standard_Integer NbFields() override;

//! Returns the field n0 <num> between 1 and NbFields (read only) <br>
virtual /*instead*/  OCStepData_Field^ Field(Standard_Integer num) override;

//! Returns the field n0 <num> between 1 and NbFields, in order to <br>
//!           modify its content <br>
virtual /*instead*/  OCStepData_Field^ CField(Standard_Integer num) override;


virtual /*instead*/  void Destroy() ;

~OCStepData_FieldListN()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
