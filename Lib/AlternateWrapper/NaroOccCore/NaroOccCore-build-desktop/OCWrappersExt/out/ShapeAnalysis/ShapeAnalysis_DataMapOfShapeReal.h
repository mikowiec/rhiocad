// File generated by CPPExt (MPV)
//
#ifndef _ShapeAnalysis_DataMapOfShapeReal_OCWrappers_HeaderFile
#define _ShapeAnalysis_DataMapOfShapeReal_OCWrappers_HeaderFile

// include native header
#include <ShapeAnalysis_DataMapOfShapeReal.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCTopTools_ShapeMapHasher;
ref class OCShapeAnalysis_DataMapNodeOfDataMapOfShapeReal;
ref class OCShapeAnalysis_DataMapIteratorOfDataMapOfShapeReal;



public ref class OCShapeAnalysis_DataMapOfShapeReal  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCShapeAnalysis_DataMapOfShapeReal(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCShapeAnalysis_DataMapOfShapeReal(ShapeAnalysis_DataMapOfShapeReal* nativeHandle);

// Methods PUBLIC


OCShapeAnalysis_DataMapOfShapeReal(Standard_Integer NbBuckets);


 /*instead*/  OCShapeAnalysis_DataMapOfShapeReal^ Assign(OCNaroWrappers::OCShapeAnalysis_DataMapOfShapeReal^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  System::Boolean Bind(OCNaroWrappers::OCTopoDS_Shape^ K, Standard_Real I) ;


 /*instead*/  System::Boolean IsBound(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  System::Boolean UnBind(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  Standard_Real Find(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  Standard_Real ChangeFind(OCNaroWrappers::OCTopoDS_Shape^ K) ;

~OCShapeAnalysis_DataMapOfShapeReal()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
