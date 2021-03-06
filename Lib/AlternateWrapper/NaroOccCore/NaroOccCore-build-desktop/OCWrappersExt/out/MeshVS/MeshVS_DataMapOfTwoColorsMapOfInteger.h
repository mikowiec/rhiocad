// File generated by CPPExt (MPV)
//
#ifndef _MeshVS_DataMapOfTwoColorsMapOfInteger_OCWrappers_HeaderFile
#define _MeshVS_DataMapOfTwoColorsMapOfInteger_OCWrappers_HeaderFile

// include native header
#include <MeshVS_DataMapOfTwoColorsMapOfInteger.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCTColStd_MapOfInteger;
ref class OCMeshVS_TwoColorsHasher;
ref class OCMeshVS_DataMapNodeOfDataMapOfTwoColorsMapOfInteger;
ref class OCMeshVS_DataMapIteratorOfDataMapOfTwoColorsMapOfInteger;



public ref class OCMeshVS_DataMapOfTwoColorsMapOfInteger  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCMeshVS_DataMapOfTwoColorsMapOfInteger(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCMeshVS_DataMapOfTwoColorsMapOfInteger(MeshVS_DataMapOfTwoColorsMapOfInteger* nativeHandle);

// Methods PUBLIC


OCMeshVS_DataMapOfTwoColorsMapOfInteger(Standard_Integer NbBuckets);


 /*instead*/  OCMeshVS_DataMapOfTwoColorsMapOfInteger^ Assign(OCNaroWrappers::OCMeshVS_DataMapOfTwoColorsMapOfInteger^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  System::Boolean Bind(MeshVS_TwoColors K, OCNaroWrappers::OCTColStd_MapOfInteger^ I) ;


 /*instead*/  System::Boolean IsBound(MeshVS_TwoColors K) ;


 /*instead*/  System::Boolean UnBind(MeshVS_TwoColors K) ;


 /*instead*/  OCTColStd_MapOfInteger^ Find(MeshVS_TwoColors K) ;


 /*instead*/  OCTColStd_MapOfInteger^ ChangeFind(MeshVS_TwoColors K) ;


 /*instead*/  Standard_Address Find1(MeshVS_TwoColors K) ;


 /*instead*/  Standard_Address ChangeFind1(MeshVS_TwoColors K) ;

~OCMeshVS_DataMapOfTwoColorsMapOfInteger()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
