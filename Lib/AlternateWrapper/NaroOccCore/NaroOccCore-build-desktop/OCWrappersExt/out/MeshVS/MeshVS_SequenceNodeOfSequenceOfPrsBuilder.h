// File generated by CPPExt (Transient)
//
#ifndef _MeshVS_SequenceNodeOfSequenceOfPrsBuilder_OCWrappers_HeaderFile
#define _MeshVS_SequenceNodeOfSequenceOfPrsBuilder_OCWrappers_HeaderFile

// include the wrapped class
#include <MeshVS_SequenceNodeOfSequenceOfPrsBuilder.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_SeqNode.h"



namespace OCNaroWrappers
{

ref class OCMeshVS_PrsBuilder;
ref class OCMeshVS_SequenceOfPrsBuilder;



public ref class OCMeshVS_SequenceNodeOfSequenceOfPrsBuilder : OCTCollection_SeqNode {

protected:
  // dummy constructor;
  OCMeshVS_SequenceNodeOfSequenceOfPrsBuilder(OCDummy^) : OCTCollection_SeqNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCMeshVS_SequenceNodeOfSequenceOfPrsBuilder(Handle(MeshVS_SequenceNodeOfSequenceOfPrsBuilder)* nativeHandle);

// Methods PUBLIC


OCMeshVS_SequenceNodeOfSequenceOfPrsBuilder(OCNaroWrappers::OCMeshVS_PrsBuilder^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  OCMeshVS_PrsBuilder^ Value() ;

~OCMeshVS_SequenceNodeOfSequenceOfPrsBuilder()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif