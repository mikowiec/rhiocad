// File generated by CPPExt (MPV)
//
#ifndef _TColStd_SetListOfSetOfInteger_OCWrappers_HeaderFile
#define _TColStd_SetListOfSetOfInteger_OCWrappers_HeaderFile

// include native header
#include <TColStd_SetListOfSetOfInteger.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCTColStd_ListIteratorOfSetListOfSetOfInteger;
ref class OCTColStd_ListNodeOfSetListOfSetOfInteger;



public ref class OCTColStd_SetListOfSetOfInteger  {

protected:
  TColStd_SetListOfSetOfInteger* nativeHandle;
  OCTColStd_SetListOfSetOfInteger(OCDummy^) {};

public:
  property TColStd_SetListOfSetOfInteger* Handle
  {
    TColStd_SetListOfSetOfInteger* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTColStd_SetListOfSetOfInteger(TColStd_SetListOfSetOfInteger* nativeHandle);

// Methods PUBLIC


OCTColStd_SetListOfSetOfInteger();


 /*instead*/  void Assign(OCNaroWrappers::OCTColStd_SetListOfSetOfInteger^ Other) ;


 /*instead*/  Standard_Integer Extent() ;


 /*instead*/  System::Boolean IsEmpty() ;


 /*instead*/  void Prepend(Standard_Integer I) ;


 /*instead*/  void Prepend(Standard_Integer I, OCNaroWrappers::OCTColStd_ListIteratorOfSetListOfSetOfInteger^ theIt) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCTColStd_SetListOfSetOfInteger^ Other) ;


 /*instead*/  void Append(Standard_Integer I) ;


 /*instead*/  void Append(Standard_Integer I, OCNaroWrappers::OCTColStd_ListIteratorOfSetListOfSetOfInteger^ theIt) ;


 /*instead*/  void Append(OCNaroWrappers::OCTColStd_SetListOfSetOfInteger^ Other) ;


 /*instead*/  Standard_Integer First() ;


 /*instead*/  Standard_Integer Last() ;


 /*instead*/  void RemoveFirst() ;


 /*instead*/  void Remove(OCNaroWrappers::OCTColStd_ListIteratorOfSetListOfSetOfInteger^ It) ;


 /*instead*/  void InsertBefore(Standard_Integer I, OCNaroWrappers::OCTColStd_ListIteratorOfSetListOfSetOfInteger^ It) ;


 /*instead*/  void InsertBefore(OCNaroWrappers::OCTColStd_SetListOfSetOfInteger^ Other, OCNaroWrappers::OCTColStd_ListIteratorOfSetListOfSetOfInteger^ It) ;


 /*instead*/  void InsertAfter(Standard_Integer I, OCNaroWrappers::OCTColStd_ListIteratorOfSetListOfSetOfInteger^ It) ;


 /*instead*/  void InsertAfter(OCNaroWrappers::OCTColStd_SetListOfSetOfInteger^ Other, OCNaroWrappers::OCTColStd_ListIteratorOfSetListOfSetOfInteger^ It) ;

~OCTColStd_SetListOfSetOfInteger()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
