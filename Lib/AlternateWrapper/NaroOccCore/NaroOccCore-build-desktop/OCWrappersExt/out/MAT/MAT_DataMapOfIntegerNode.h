// File generated by CPPExt (MPV)
//
#ifndef _MAT_DataMapOfIntegerNode_OCWrappers_HeaderFile
#define _MAT_DataMapOfIntegerNode_OCWrappers_HeaderFile

// include native header
#include <MAT_DataMapOfIntegerNode.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCMAT_Node;
ref class OCTColStd_MapIntegerHasher;
ref class OCMAT_DataMapNodeOfDataMapOfIntegerNode;
ref class OCMAT_DataMapIteratorOfDataMapOfIntegerNode;



public ref class OCMAT_DataMapOfIntegerNode  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCMAT_DataMapOfIntegerNode(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCMAT_DataMapOfIntegerNode(MAT_DataMapOfIntegerNode* nativeHandle);

// Methods PUBLIC


OCMAT_DataMapOfIntegerNode(Standard_Integer NbBuckets);


 /*instead*/  OCMAT_DataMapOfIntegerNode^ Assign(OCNaroWrappers::OCMAT_DataMapOfIntegerNode^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  System::Boolean Bind(Standard_Integer K, OCNaroWrappers::OCMAT_Node^ I) ;


 /*instead*/  System::Boolean IsBound(Standard_Integer K) ;


 /*instead*/  System::Boolean UnBind(Standard_Integer K) ;


 /*instead*/  OCMAT_Node^ Find(Standard_Integer K) ;


 /*instead*/  OCMAT_Node^ ChangeFind(Standard_Integer K) ;


 /*instead*/  Standard_Address Find1(Standard_Integer K) ;


 /*instead*/  Standard_Address ChangeFind1(Standard_Integer K) ;

~OCMAT_DataMapOfIntegerNode()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
