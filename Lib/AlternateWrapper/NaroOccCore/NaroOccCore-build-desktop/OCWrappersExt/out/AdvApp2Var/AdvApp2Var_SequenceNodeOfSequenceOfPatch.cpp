// File generated by CPPExt (CPP file)
//

#include "AdvApp2Var_SequenceNodeOfSequenceOfPatch.h"
#include "../Converter.h"
#include "AdvApp2Var_Patch.h"
#include "AdvApp2Var_SequenceOfPatch.h"


using namespace OCNaroWrappers;

OCAdvApp2Var_SequenceNodeOfSequenceOfPatch::OCAdvApp2Var_SequenceNodeOfSequenceOfPatch(Handle(AdvApp2Var_SequenceNodeOfSequenceOfPatch)* nativeHandle) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_AdvApp2Var_SequenceNodeOfSequenceOfPatch(*nativeHandle);
}

OCAdvApp2Var_SequenceNodeOfSequenceOfPatch::OCAdvApp2Var_SequenceNodeOfSequenceOfPatch(OCNaroWrappers::OCAdvApp2Var_Patch^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_AdvApp2Var_SequenceNodeOfSequenceOfPatch(new AdvApp2Var_SequenceNodeOfSequenceOfPatch(*((AdvApp2Var_Patch*)I->Handle), n, p));
}

OCAdvApp2Var_Patch^ OCAdvApp2Var_SequenceNodeOfSequenceOfPatch::Value()
{
  AdvApp2Var_Patch* tmp = new AdvApp2Var_Patch();
  *tmp = (*((Handle_AdvApp2Var_SequenceNodeOfSequenceOfPatch*)nativeHandle))->Value();
  return gcnew OCAdvApp2Var_Patch(tmp);
}


