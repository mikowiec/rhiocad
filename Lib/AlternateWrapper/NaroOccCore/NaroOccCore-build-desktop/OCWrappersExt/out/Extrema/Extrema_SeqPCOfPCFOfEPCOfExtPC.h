// File generated by CPPExt (MPV)
//
#ifndef _Extrema_SeqPCOfPCFOfEPCOfExtPC_OCWrappers_HeaderFile
#define _Extrema_SeqPCOfPCFOfEPCOfExtPC_OCWrappers_HeaderFile

// include native header
#include <Extrema_SeqPCOfPCFOfEPCOfExtPC.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BaseSequence.h"

#include "../TCollection/TCollection_BaseSequence.h"


namespace OCNaroWrappers
{

ref class OCExtrema_POnCurv;
ref class OCExtrema_SequenceNodeOfSeqPCOfPCFOfEPCOfExtPC;



public ref class OCExtrema_SeqPCOfPCFOfEPCOfExtPC  : public OCTCollection_BaseSequence {

protected:
  // dummy constructor;
  OCExtrema_SeqPCOfPCFOfEPCOfExtPC(OCDummy^) : OCTCollection_BaseSequence((OCDummy^)nullptr) {};

public:

// constructor from native
OCExtrema_SeqPCOfPCFOfEPCOfExtPC(Extrema_SeqPCOfPCFOfEPCOfExtPC* nativeHandle);

// Methods PUBLIC


OCExtrema_SeqPCOfPCFOfEPCOfExtPC();


 /*instead*/  OCExtrema_SeqPCOfPCFOfEPCOfExtPC^ Assign(OCNaroWrappers::OCExtrema_SeqPCOfPCFOfEPCOfExtPC^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCExtrema_POnCurv^ T) ;


 /*instead*/  void Append(OCNaroWrappers::OCExtrema_SeqPCOfPCFOfEPCOfExtPC^ S) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCExtrema_POnCurv^ T) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCExtrema_SeqPCOfPCFOfEPCOfExtPC^ S) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCExtrema_POnCurv^ T) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCExtrema_SeqPCOfPCFOfEPCOfExtPC^ S) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCExtrema_POnCurv^ T) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCExtrema_SeqPCOfPCFOfEPCOfExtPC^ S) ;


 /*instead*/  OCExtrema_POnCurv^ First() ;


 /*instead*/  OCExtrema_POnCurv^ Last() ;


 /*instead*/  void Split(Standard_Integer Index, OCNaroWrappers::OCExtrema_SeqPCOfPCFOfEPCOfExtPC^ Sub) ;


 /*instead*/  OCExtrema_POnCurv^ Value(Standard_Integer Index) ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCExtrema_POnCurv^ I) ;


 /*instead*/  OCExtrema_POnCurv^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer FromIndex, Standard_Integer ToIndex) ;

~OCExtrema_SeqPCOfPCFOfEPCOfExtPC()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif