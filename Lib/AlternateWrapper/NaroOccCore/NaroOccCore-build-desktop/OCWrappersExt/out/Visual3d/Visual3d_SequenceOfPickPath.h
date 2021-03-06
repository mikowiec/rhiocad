// File generated by CPPExt (MPV)
//
#ifndef _Visual3d_SequenceOfPickPath_OCWrappers_HeaderFile
#define _Visual3d_SequenceOfPickPath_OCWrappers_HeaderFile

// include native header
#include <Visual3d_SequenceOfPickPath.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BaseSequence.h"

#include "../TCollection/TCollection_BaseSequence.h"


namespace OCNaroWrappers
{

ref class OCVisual3d_PickPath;
ref class OCVisual3d_SequenceNodeOfSequenceOfPickPath;



public ref class OCVisual3d_SequenceOfPickPath  : public OCTCollection_BaseSequence {

protected:
  // dummy constructor;
  OCVisual3d_SequenceOfPickPath(OCDummy^) : OCTCollection_BaseSequence((OCDummy^)nullptr) {};

public:

// constructor from native
OCVisual3d_SequenceOfPickPath(Visual3d_SequenceOfPickPath* nativeHandle);

// Methods PUBLIC


OCVisual3d_SequenceOfPickPath();


 /*instead*/  OCVisual3d_SequenceOfPickPath^ Assign(OCNaroWrappers::OCVisual3d_SequenceOfPickPath^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCVisual3d_PickPath^ T) ;


 /*instead*/  void Append(OCNaroWrappers::OCVisual3d_SequenceOfPickPath^ S) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCVisual3d_PickPath^ T) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCVisual3d_SequenceOfPickPath^ S) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCVisual3d_PickPath^ T) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCVisual3d_SequenceOfPickPath^ S) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCVisual3d_PickPath^ T) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCVisual3d_SequenceOfPickPath^ S) ;


 /*instead*/  OCVisual3d_PickPath^ First() ;


 /*instead*/  OCVisual3d_PickPath^ Last() ;


 /*instead*/  void Split(Standard_Integer Index, OCNaroWrappers::OCVisual3d_SequenceOfPickPath^ Sub) ;


 /*instead*/  OCVisual3d_PickPath^ Value(Standard_Integer Index) ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCVisual3d_PickPath^ I) ;


 /*instead*/  OCVisual3d_PickPath^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer FromIndex, Standard_Integer ToIndex) ;

~OCVisual3d_SequenceOfPickPath()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
