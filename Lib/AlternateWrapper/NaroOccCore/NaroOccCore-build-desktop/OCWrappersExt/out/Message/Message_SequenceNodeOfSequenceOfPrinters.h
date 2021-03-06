// File generated by CPPExt (Transient)
//
#ifndef _Message_SequenceNodeOfSequenceOfPrinters_OCWrappers_HeaderFile
#define _Message_SequenceNodeOfSequenceOfPrinters_OCWrappers_HeaderFile

// include the wrapped class
#include <Message_SequenceNodeOfSequenceOfPrinters.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_SeqNode.h"



namespace OCNaroWrappers
{

ref class OCMessage_Printer;
ref class OCMessage_SequenceOfPrinters;



public ref class OCMessage_SequenceNodeOfSequenceOfPrinters : OCTCollection_SeqNode {

protected:
  // dummy constructor;
  OCMessage_SequenceNodeOfSequenceOfPrinters(OCDummy^) : OCTCollection_SeqNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCMessage_SequenceNodeOfSequenceOfPrinters(Handle(Message_SequenceNodeOfSequenceOfPrinters)* nativeHandle);

// Methods PUBLIC


OCMessage_SequenceNodeOfSequenceOfPrinters(OCNaroWrappers::OCMessage_Printer^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  OCMessage_Printer^ Value() ;

~OCMessage_SequenceNodeOfSequenceOfPrinters()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
