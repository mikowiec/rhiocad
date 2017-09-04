// File generated by CPPExt (Transient)
//
#ifndef _TopOpeBRep_HArray1OfLineInter_OCWrappers_HeaderFile
#define _TopOpeBRep_HArray1OfLineInter_OCWrappers_HeaderFile

// include the wrapped class
#include <TopOpeBRep_HArray1OfLineInter.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "TopOpeBRep_Array1OfLineInter.h"


namespace OCNaroWrappers
{

ref class OCTopOpeBRep_LineInter;
ref class OCTopOpeBRep_Array1OfLineInter;



public ref class OCTopOpeBRep_HArray1OfLineInter : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCTopOpeBRep_HArray1OfLineInter(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCTopOpeBRep_HArray1OfLineInter(Handle(TopOpeBRep_HArray1OfLineInter)* nativeHandle);

// Methods PUBLIC


OCTopOpeBRep_HArray1OfLineInter(Standard_Integer Low, Standard_Integer Up);


OCTopOpeBRep_HArray1OfLineInter(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCTopOpeBRep_LineInter^ V);


 /*instead*/  void Init(OCNaroWrappers::OCTopOpeBRep_LineInter^ V) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCTopOpeBRep_LineInter^ Value) ;


 /*instead*/  OCTopOpeBRep_LineInter^ Value(Standard_Integer Index) ;


 /*instead*/  OCTopOpeBRep_LineInter^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  OCTopOpeBRep_Array1OfLineInter^ Array1() ;


 /*instead*/  OCTopOpeBRep_Array1OfLineInter^ ChangeArray1() ;

~OCTopOpeBRep_HArray1OfLineInter()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif