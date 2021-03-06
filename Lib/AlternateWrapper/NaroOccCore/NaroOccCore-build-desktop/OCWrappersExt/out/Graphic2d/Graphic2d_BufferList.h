// File generated by CPPExt (Transient)
//
#ifndef _Graphic2d_BufferList_OCWrappers_HeaderFile
#define _Graphic2d_BufferList_OCWrappers_HeaderFile

// include the wrapped class
#include <Graphic2d_BufferList.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "Graphic2d_SequenceOfBuffer.h"


namespace OCNaroWrappers
{

ref class OCGraphic2d_Buffer;
ref class OCGraphic2d_SequenceOfBuffer;



public ref class OCGraphic2d_BufferList : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCGraphic2d_BufferList(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCGraphic2d_BufferList(Handle(Graphic2d_BufferList)* nativeHandle);

// Methods PUBLIC


OCGraphic2d_BufferList();


 /*instead*/  System::Boolean IsEmpty() ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  void Clear() ;


 /*instead*/  void Append(OCNaroWrappers::OCGraphic2d_Buffer^ anItem) ;


 /*instead*/  void Append(OCNaroWrappers::OCGraphic2d_BufferList^ aSequence) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCGraphic2d_Buffer^ anItem) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCGraphic2d_BufferList^ aSequence) ;


 /*instead*/  void Reverse() ;


 /*instead*/  void InsertBefore(Standard_Integer anIndex, OCNaroWrappers::OCGraphic2d_Buffer^ anItem) ;


 /*instead*/  void InsertBefore(Standard_Integer anIndex, OCNaroWrappers::OCGraphic2d_BufferList^ aSequence) ;


 /*instead*/  void InsertAfter(Standard_Integer anIndex, OCNaroWrappers::OCGraphic2d_Buffer^ anItem) ;


 /*instead*/  void InsertAfter(Standard_Integer anIndex, OCNaroWrappers::OCGraphic2d_BufferList^ aSequence) ;


 /*instead*/  void Exchange(Standard_Integer anIndex, Standard_Integer anOtherIndex) ;


 /*instead*/  OCGraphic2d_BufferList^ Split(Standard_Integer anIndex) ;


 /*instead*/  void SetValue(Standard_Integer anIndex, OCNaroWrappers::OCGraphic2d_Buffer^ anItem) ;


 /*instead*/  OCGraphic2d_Buffer^ Value(Standard_Integer anIndex) ;


 /*instead*/  OCGraphic2d_Buffer^ ChangeValue(Standard_Integer anIndex) ;


 /*instead*/  void Remove(Standard_Integer anIndex) ;


 /*instead*/  void Remove(Standard_Integer fromIndex, Standard_Integer toIndex) ;


 /*instead*/  OCGraphic2d_SequenceOfBuffer^ Sequence() ;


 /*instead*/  OCGraphic2d_SequenceOfBuffer^ ChangeSequence() ;


 /*instead*/  OCGraphic2d_BufferList^ ShallowCopy() ;

~OCGraphic2d_BufferList()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
