// File generated by CPPExt (MPV)
//
#ifndef _MAT2d_DataMapOfIntegerBisec_OCWrappers_HeaderFile
#define _MAT2d_DataMapOfIntegerBisec_OCWrappers_HeaderFile

// include native header
#include <MAT2d_DataMapOfIntegerBisec.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCBisector_Bisec;
ref class OCTColStd_MapIntegerHasher;
ref class OCMAT2d_DataMapNodeOfDataMapOfIntegerBisec;
ref class OCMAT2d_DataMapIteratorOfDataMapOfIntegerBisec;



public ref class OCMAT2d_DataMapOfIntegerBisec  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCMAT2d_DataMapOfIntegerBisec(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCMAT2d_DataMapOfIntegerBisec(MAT2d_DataMapOfIntegerBisec* nativeHandle);

// Methods PUBLIC


OCMAT2d_DataMapOfIntegerBisec(Standard_Integer NbBuckets);


 /*instead*/  OCMAT2d_DataMapOfIntegerBisec^ Assign(OCNaroWrappers::OCMAT2d_DataMapOfIntegerBisec^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  System::Boolean Bind(Standard_Integer K, OCNaroWrappers::OCBisector_Bisec^ I) ;


 /*instead*/  System::Boolean IsBound(Standard_Integer K) ;


 /*instead*/  System::Boolean UnBind(Standard_Integer K) ;


 /*instead*/  OCBisector_Bisec^ Find(Standard_Integer K) ;


 /*instead*/  OCBisector_Bisec^ ChangeFind(Standard_Integer K) ;


 /*instead*/  Standard_Address Find1(Standard_Integer K) ;


 /*instead*/  Standard_Address ChangeFind1(Standard_Integer K) ;

~OCMAT2d_DataMapOfIntegerBisec()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif