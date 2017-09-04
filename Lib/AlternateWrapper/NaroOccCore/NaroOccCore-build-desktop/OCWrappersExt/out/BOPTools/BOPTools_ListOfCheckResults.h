// File generated by CPPExt (MPV)
//
#ifndef _BOPTools_ListOfCheckResults_OCWrappers_HeaderFile
#define _BOPTools_ListOfCheckResults_OCWrappers_HeaderFile

// include native header
#include <BOPTools_ListOfCheckResults.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCBOPTools_ListIteratorOfListOfCheckResults;
ref class OCBOPTools_CheckResult;
ref class OCBOPTools_ListNodeOfListOfCheckResults;



public ref class OCBOPTools_ListOfCheckResults  {

protected:
  BOPTools_ListOfCheckResults* nativeHandle;
  OCBOPTools_ListOfCheckResults(OCDummy^) {};

public:
  property BOPTools_ListOfCheckResults* Handle
  {
    BOPTools_ListOfCheckResults* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBOPTools_ListOfCheckResults(BOPTools_ListOfCheckResults* nativeHandle);

// Methods PUBLIC


OCBOPTools_ListOfCheckResults();


 /*instead*/  void Assign(OCNaroWrappers::OCBOPTools_ListOfCheckResults^ Other) ;


 /*instead*/  Standard_Integer Extent() ;


 /*instead*/  System::Boolean IsEmpty() ;


 /*instead*/  void Prepend(OCNaroWrappers::OCBOPTools_CheckResult^ I) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCBOPTools_CheckResult^ I, OCNaroWrappers::OCBOPTools_ListIteratorOfListOfCheckResults^ theIt) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCBOPTools_ListOfCheckResults^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCBOPTools_CheckResult^ I) ;


 /*instead*/  void Append(OCNaroWrappers::OCBOPTools_CheckResult^ I, OCNaroWrappers::OCBOPTools_ListIteratorOfListOfCheckResults^ theIt) ;


 /*instead*/  void Append(OCNaroWrappers::OCBOPTools_ListOfCheckResults^ Other) ;


 /*instead*/  OCBOPTools_CheckResult^ First() ;


 /*instead*/  OCBOPTools_CheckResult^ Last() ;


 /*instead*/  void RemoveFirst() ;


 /*instead*/  void Remove(OCNaroWrappers::OCBOPTools_ListIteratorOfListOfCheckResults^ It) ;


 /*instead*/  void InsertBefore(OCNaroWrappers::OCBOPTools_CheckResult^ I, OCNaroWrappers::OCBOPTools_ListIteratorOfListOfCheckResults^ It) ;


 /*instead*/  void InsertBefore(OCNaroWrappers::OCBOPTools_ListOfCheckResults^ Other, OCNaroWrappers::OCBOPTools_ListIteratorOfListOfCheckResults^ It) ;


 /*instead*/  void InsertAfter(OCNaroWrappers::OCBOPTools_CheckResult^ I, OCNaroWrappers::OCBOPTools_ListIteratorOfListOfCheckResults^ It) ;


 /*instead*/  void InsertAfter(OCNaroWrappers::OCBOPTools_ListOfCheckResults^ Other, OCNaroWrappers::OCBOPTools_ListIteratorOfListOfCheckResults^ It) ;

~OCBOPTools_ListOfCheckResults()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif