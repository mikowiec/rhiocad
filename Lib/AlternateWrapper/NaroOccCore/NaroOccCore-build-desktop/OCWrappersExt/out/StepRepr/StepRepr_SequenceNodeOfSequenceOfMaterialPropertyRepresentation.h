// File generated by CPPExt (Transient)
//
#ifndef _StepRepr_SequenceNodeOfSequenceOfMaterialPropertyRepresentation_OCWrappers_HeaderFile
#define _StepRepr_SequenceNodeOfSequenceOfMaterialPropertyRepresentation_OCWrappers_HeaderFile

// include the wrapped class
#include <StepRepr_SequenceNodeOfSequenceOfMaterialPropertyRepresentation.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_SeqNode.h"



namespace OCNaroWrappers
{

ref class OCStepRepr_MaterialPropertyRepresentation;
ref class OCStepRepr_SequenceOfMaterialPropertyRepresentation;



public ref class OCStepRepr_SequenceNodeOfSequenceOfMaterialPropertyRepresentation : OCTCollection_SeqNode {

protected:
  // dummy constructor;
  OCStepRepr_SequenceNodeOfSequenceOfMaterialPropertyRepresentation(OCDummy^) : OCTCollection_SeqNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepRepr_SequenceNodeOfSequenceOfMaterialPropertyRepresentation(Handle(StepRepr_SequenceNodeOfSequenceOfMaterialPropertyRepresentation)* nativeHandle);

// Methods PUBLIC


OCStepRepr_SequenceNodeOfSequenceOfMaterialPropertyRepresentation(OCNaroWrappers::OCStepRepr_MaterialPropertyRepresentation^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  OCStepRepr_MaterialPropertyRepresentation^ Value() ;

~OCStepRepr_SequenceNodeOfSequenceOfMaterialPropertyRepresentation()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
