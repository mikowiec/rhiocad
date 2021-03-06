// File generated by CPPExt (MPV)
//
#ifndef _IntTools_SequenceOfRoots_OCWrappers_HeaderFile
#define _IntTools_SequenceOfRoots_OCWrappers_HeaderFile

// include native header
#include <IntTools_SequenceOfRoots.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BaseSequence.h"

#include "../TCollection/TCollection_BaseSequence.h"


namespace OCNaroWrappers
{

ref class OCIntTools_Root;
ref class OCIntTools_SequenceNodeOfSequenceOfRoots;



public ref class OCIntTools_SequenceOfRoots  : public OCTCollection_BaseSequence {

protected:
  // dummy constructor;
  OCIntTools_SequenceOfRoots(OCDummy^) : OCTCollection_BaseSequence((OCDummy^)nullptr) {};

public:

// constructor from native
OCIntTools_SequenceOfRoots(IntTools_SequenceOfRoots* nativeHandle);

// Methods PUBLIC


OCIntTools_SequenceOfRoots();


 /*instead*/  OCIntTools_SequenceOfRoots^ Assign(OCNaroWrappers::OCIntTools_SequenceOfRoots^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCIntTools_Root^ T) ;


 /*instead*/  void Append(OCNaroWrappers::OCIntTools_SequenceOfRoots^ S) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCIntTools_Root^ T) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCIntTools_SequenceOfRoots^ S) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCIntTools_Root^ T) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCIntTools_SequenceOfRoots^ S) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCIntTools_Root^ T) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCIntTools_SequenceOfRoots^ S) ;


 /*instead*/  OCIntTools_Root^ First() ;


 /*instead*/  OCIntTools_Root^ Last() ;


 /*instead*/  void Split(Standard_Integer Index, OCNaroWrappers::OCIntTools_SequenceOfRoots^ Sub) ;


 /*instead*/  OCIntTools_Root^ Value(Standard_Integer Index) ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCIntTools_Root^ I) ;


 /*instead*/  OCIntTools_Root^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer FromIndex, Standard_Integer ToIndex) ;

~OCIntTools_SequenceOfRoots()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
