// File generated by CPPExt (Transient)
//
#ifndef _SelectMgr_DataMapNodeOfDataMapOfIntegerSensitive_OCWrappers_HeaderFile
#define _SelectMgr_DataMapNodeOfDataMapOfIntegerSensitive_OCWrappers_HeaderFile

// include the wrapped class
#include <SelectMgr_DataMapNodeOfDataMapOfIntegerSensitive.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"



namespace OCNaroWrappers
{

ref class OCSelectBasics_SensitiveEntity;
ref class OCTColStd_MapIntegerHasher;
ref class OCSelectMgr_DataMapOfIntegerSensitive;
ref class OCSelectMgr_DataMapIteratorOfDataMapOfIntegerSensitive;



public ref class OCSelectMgr_DataMapNodeOfDataMapOfIntegerSensitive : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCSelectMgr_DataMapNodeOfDataMapOfIntegerSensitive(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCSelectMgr_DataMapNodeOfDataMapOfIntegerSensitive(Handle(SelectMgr_DataMapNodeOfDataMapOfIntegerSensitive)* nativeHandle);

// Methods PUBLIC


OCSelectMgr_DataMapNodeOfDataMapOfIntegerSensitive(Standard_Integer K, OCNaroWrappers::OCSelectBasics_SensitiveEntity^ I, TCollection_MapNodePtr n);


 /*instead*/  Standard_Integer Key() ;


 /*instead*/  OCSelectBasics_SensitiveEntity^ Value() ;

~OCSelectMgr_DataMapNodeOfDataMapOfIntegerSensitive()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
