// File generated by CPPExt (Transient)
//
#ifndef _PCDM_SequenceNodeOfSequenceOfDocument_OCWrappers_HeaderFile
#define _PCDM_SequenceNodeOfSequenceOfDocument_OCWrappers_HeaderFile

// include the wrapped class
#include <PCDM_SequenceNodeOfSequenceOfDocument.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_SeqNode.h"



namespace OCNaroWrappers
{

ref class OCPCDM_Document;
ref class OCPCDM_SequenceOfDocument;



public ref class OCPCDM_SequenceNodeOfSequenceOfDocument : OCTCollection_SeqNode {

protected:
  // dummy constructor;
  OCPCDM_SequenceNodeOfSequenceOfDocument(OCDummy^) : OCTCollection_SeqNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCPCDM_SequenceNodeOfSequenceOfDocument(Handle(PCDM_SequenceNodeOfSequenceOfDocument)* nativeHandle);

// Methods PUBLIC


OCPCDM_SequenceNodeOfSequenceOfDocument(OCNaroWrappers::OCPCDM_Document^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  OCPCDM_Document^ Value() ;

~OCPCDM_SequenceNodeOfSequenceOfDocument()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
