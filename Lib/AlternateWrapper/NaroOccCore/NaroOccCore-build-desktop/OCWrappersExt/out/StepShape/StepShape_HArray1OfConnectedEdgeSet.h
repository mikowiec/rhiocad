// File generated by CPPExt (Transient)
//
#ifndef _StepShape_HArray1OfConnectedEdgeSet_OCWrappers_HeaderFile
#define _StepShape_HArray1OfConnectedEdgeSet_OCWrappers_HeaderFile

// include the wrapped class
#include <StepShape_HArray1OfConnectedEdgeSet.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "StepShape_Array1OfConnectedEdgeSet.h"


namespace OCNaroWrappers
{

ref class OCStepShape_ConnectedEdgeSet;
ref class OCStepShape_Array1OfConnectedEdgeSet;



public ref class OCStepShape_HArray1OfConnectedEdgeSet : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepShape_HArray1OfConnectedEdgeSet(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepShape_HArray1OfConnectedEdgeSet(Handle(StepShape_HArray1OfConnectedEdgeSet)* nativeHandle);

// Methods PUBLIC


OCStepShape_HArray1OfConnectedEdgeSet(Standard_Integer Low, Standard_Integer Up);


OCStepShape_HArray1OfConnectedEdgeSet(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCStepShape_ConnectedEdgeSet^ V);


 /*instead*/  void Init(OCNaroWrappers::OCStepShape_ConnectedEdgeSet^ V) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCStepShape_ConnectedEdgeSet^ Value) ;


 /*instead*/  OCStepShape_ConnectedEdgeSet^ Value(Standard_Integer Index) ;


 /*instead*/  OCStepShape_ConnectedEdgeSet^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  OCStepShape_Array1OfConnectedEdgeSet^ Array1() ;


 /*instead*/  OCStepShape_Array1OfConnectedEdgeSet^ ChangeArray1() ;

~OCStepShape_HArray1OfConnectedEdgeSet()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
