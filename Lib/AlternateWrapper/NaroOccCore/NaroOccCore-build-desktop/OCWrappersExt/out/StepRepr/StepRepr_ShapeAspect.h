// File generated by CPPExt (Transient)
//
#ifndef _StepRepr_ShapeAspect_OCWrappers_HeaderFile
#define _StepRepr_ShapeAspect_OCWrappers_HeaderFile

// include the wrapped class
#include <StepRepr_ShapeAspect.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "../StepData/StepData_Logical.h"


namespace OCNaroWrappers
{

ref class OCTCollection_HAsciiString;
ref class OCStepRepr_ProductDefinitionShape;



public ref class OCStepRepr_ShapeAspect : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepRepr_ShapeAspect(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepRepr_ShapeAspect(Handle(StepRepr_ShapeAspect)* nativeHandle);

// Methods PUBLIC

//! Returns a ShapeAspect <br>
OCStepRepr_ShapeAspect();


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCTCollection_HAsciiString^ aDescription, OCNaroWrappers::OCStepRepr_ProductDefinitionShape^ aOfShape, OCStepData_Logical aProductDefinitional) ;


 /*instead*/  void SetName(OCNaroWrappers::OCTCollection_HAsciiString^ aName) ;


 /*instead*/  OCTCollection_HAsciiString^ Name() ;


 /*instead*/  void SetDescription(OCNaroWrappers::OCTCollection_HAsciiString^ aDescription) ;


 /*instead*/  OCTCollection_HAsciiString^ Description() ;


 /*instead*/  void SetOfShape(OCNaroWrappers::OCStepRepr_ProductDefinitionShape^ aOfShape) ;


 /*instead*/  OCStepRepr_ProductDefinitionShape^ OfShape() ;


 /*instead*/  void SetProductDefinitional(OCStepData_Logical aProductDefinitional) ;


 /*instead*/  OCStepData_Logical ProductDefinitional() ;

~OCStepRepr_ShapeAspect()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
