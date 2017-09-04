// File generated by CPPExt (MPV)
//
#ifndef _StepShape_CsgSolid_OCWrappers_HeaderFile
#define _StepShape_CsgSolid_OCWrappers_HeaderFile

// include native header
#include <StepShape_CsgSolid.hxx>
#include "../Converter.h"

#include "StepShape_SolidModel.h"

#include "StepShape_CsgSelect.h"
#include "StepShape_SolidModel.h"


namespace OCNaroWrappers
{

ref class OCTCollection_HAsciiString;
ref class OCStepShape_CsgSelect;



public ref class OCStepShape_CsgSolid  : public OCStepShape_SolidModel {

protected:
  // dummy constructor;
  OCStepShape_CsgSolid(OCDummy^) : OCStepShape_SolidModel((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepShape_CsgSolid(StepShape_CsgSolid* nativeHandle);

// Methods PUBLIC

//! Returns a CsgSolid <br>
OCStepShape_CsgSolid();


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName) ;


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepShape_CsgSelect^ aTreeRootExpression) ;


 /*instead*/  void SetTreeRootExpression(OCNaroWrappers::OCStepShape_CsgSelect^ aTreeRootExpression) ;


 /*instead*/  OCStepShape_CsgSelect^ TreeRootExpression() ;

~OCStepShape_CsgSolid()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif