// File generated by CPPExt (Transient)
//
#ifndef _PColStd_HSequenceOfHExtendedString_OCWrappers_HeaderFile
#define _PColStd_HSequenceOfHExtendedString_OCWrappers_HeaderFile

// include the wrapped class
#include <PColStd_HSequenceOfHExtendedString.hxx>
#include "../Converter.h"

#include "../Standard/Standard_Persistent.h"



namespace OCNaroWrappers
{

ref class OCPColStd_SeqNodeOfHSequenceOfHExtendedString;
ref class OCPColStd_SeqExplorerOfHSequenceOfHExtendedString;
ref class OCPCollection_HExtendedString;
ref class OCStandard_Persistent;



public ref class OCPColStd_HSequenceOfHExtendedString : OCStandard_Persistent {

protected:
  // dummy constructor;
  OCPColStd_HSequenceOfHExtendedString(OCDummy^) : OCStandard_Persistent((OCDummy^)nullptr) {};

public:

// constructor from native
OCPColStd_HSequenceOfHExtendedString(Handle(PColStd_HSequenceOfHExtendedString)* nativeHandle);

// Methods PUBLIC


OCPColStd_HSequenceOfHExtendedString();


 /*instead*/  System::Boolean IsEmpty() ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  OCPCollection_HExtendedString^ First() ;


 /*instead*/  OCPCollection_HExtendedString^ Last() ;


 /*instead*/  void Clear() ;


 /*instead*/  void Append(OCNaroWrappers::OCPCollection_HExtendedString^ T) ;


 /*instead*/  void Append(OCNaroWrappers::OCPColStd_HSequenceOfHExtendedString^ S) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCPCollection_HExtendedString^ T) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCPColStd_HSequenceOfHExtendedString^ S) ;


 /*instead*/  void Reverse() ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCPCollection_HExtendedString^ T) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCPColStd_HSequenceOfHExtendedString^ S) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCPCollection_HExtendedString^ T) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCPColStd_HSequenceOfHExtendedString^ S) ;


 /*instead*/  void Exchange(Standard_Integer I, Standard_Integer J) ;


 /*instead*/  OCPColStd_HSequenceOfHExtendedString^ SubSequence(Standard_Integer FromIndex, Standard_Integer ToIndex) ;


 /*instead*/  OCPColStd_HSequenceOfHExtendedString^ Split(Standard_Integer Index) ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCPCollection_HExtendedString^ T) ;


 /*instead*/  OCPCollection_HExtendedString^ Value(Standard_Integer Index) ;


 /*instead*/  System::Boolean Contains(OCNaroWrappers::OCPCollection_HExtendedString^ T) ;


 /*instead*/  Standard_Integer Location(Standard_Integer N, OCNaroWrappers::OCPCollection_HExtendedString^ T, Standard_Integer FromIndex, Standard_Integer ToIndex) ;


 /*instead*/  Standard_Integer Location(Standard_Integer N, OCNaroWrappers::OCPCollection_HExtendedString^ T) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer FromIndex, Standard_Integer ToIndex) ;


virtual /*instead*/  OCStandard_Persistent^ ShallowCopy() ;


virtual /*instead*/  void ShallowDump(Standard_OStream& s) override;

~OCPColStd_HSequenceOfHExtendedString()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
