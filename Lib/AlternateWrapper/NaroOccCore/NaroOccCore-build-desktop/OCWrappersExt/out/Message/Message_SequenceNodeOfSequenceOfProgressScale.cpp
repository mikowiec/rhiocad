// File generated by CPPExt (CPP file)
//

#include "Message_SequenceNodeOfSequenceOfProgressScale.h"
#include "../Converter.h"
#include "Message_ProgressScale.h"
#include "Message_SequenceOfProgressScale.h"


using namespace OCNaroWrappers;

OCMessage_SequenceNodeOfSequenceOfProgressScale::OCMessage_SequenceNodeOfSequenceOfProgressScale(Handle(Message_SequenceNodeOfSequenceOfProgressScale)* nativeHandle) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Message_SequenceNodeOfSequenceOfProgressScale(*nativeHandle);
}

OCMessage_SequenceNodeOfSequenceOfProgressScale::OCMessage_SequenceNodeOfSequenceOfProgressScale(OCNaroWrappers::OCMessage_ProgressScale^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Message_SequenceNodeOfSequenceOfProgressScale(new Message_SequenceNodeOfSequenceOfProgressScale(*((Message_ProgressScale*)I->Handle), n, p));
}

OCMessage_ProgressScale^ OCMessage_SequenceNodeOfSequenceOfProgressScale::Value()
{
  Message_ProgressScale* tmp = new Message_ProgressScale();
  *tmp = (*((Handle_Message_SequenceNodeOfSequenceOfProgressScale*)nativeHandle))->Value();
  return gcnew OCMessage_ProgressScale(tmp);
}


