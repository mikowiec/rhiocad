// File generated by CPPExt (Transient)
//
#ifndef _Transfer_FinderProcess_OCWrappers_HeaderFile
#define _Transfer_FinderProcess_OCWrappers_HeaderFile

// include the wrapped class
#include <Transfer_FinderProcess.hxx>
#include "../Converter.h"

#include "Transfer_ProcessForFinder.h"



namespace OCNaroWrappers
{

ref class OCInterface_InterfaceModel;
ref class OCTransfer_TransientMapper;
ref class OCStandard_Transient;
ref class OCTransfer_Finder;
ref class OCMessage_Messenger;


//! Adds specific features to the generic definition : <br>
//!           PrintTrace is adapted <br>
public ref class OCTransfer_FinderProcess : OCTransfer_ProcessForFinder {

protected:
  // dummy constructor;
  OCTransfer_FinderProcess(OCDummy^) : OCTransfer_ProcessForFinder((OCDummy^)nullptr) {};

public:

// constructor from native
OCTransfer_FinderProcess(Handle(Transfer_FinderProcess)* nativeHandle);

// Methods PUBLIC

//! Sets FinderProcess at initial state, with an initial size <br>
OCTransfer_FinderProcess(Standard_Integer nb);

//! Sets an InterfaceModel, which can be used during transfer <br>
//!           for instance if a context must be managed, it is in the Model <br>
 /*instead*/  void SetModel(OCNaroWrappers::OCInterface_InterfaceModel^ model) ;

//! Returns the Model which can be used for context <br>
 /*instead*/  OCInterface_InterfaceModel^ Model() ;

//! In the list of mapped items (between 1 and NbMapped), <br>
//!           searches for the first mapped item which follows <num0> <br>
//!           (not included) and which has an attribute named <name> <br>
//!           The considered Attributes are those brought by Finders,i.e. <br>
//!           by Input data. <br>
//!           While NextItemWithAttribute works on Result data (Binders) <br>
//! <br>
//!           Hence, allows such an iteration <br>
//! <br>
//!           for (num = FP->NextMappedWithAttribute(name,0); <br>
//!                num > 0; <br>
//!                num = FP->NextMappedWithAttribute(name,num) { <br>
//!                .. process mapped item <num> <br>
//!           } <br>
 /*instead*/  Standard_Integer NextMappedWithAttribute(System::String^ name, Standard_Integer num0) ;

//! Returns a TransientMapper for a given Transient Object <br>
//!           Either <obj> is already mapped, then its Mapper is returned <br>
//!           Or it is not, then a new one is created then returned, BUT <br>
//!             it is not mapped here (use Bind or FindElseBind to do this) <br>
 /*instead*/  OCTransfer_TransientMapper^ TransientMapper(OCNaroWrappers::OCStandard_Transient^ obj) ;

//! Specific printing to trace a Finder (by its method ValueType) <br>
virtual /*instead*/  void PrintTrace(OCNaroWrappers::OCTransfer_Finder^ start, OCNaroWrappers::OCMessage_Messenger^ S) override;

//! Prints statistics on a given output, according mode <br>
 /*instead*/  void PrintStats(Standard_Integer mode, OCNaroWrappers::OCMessage_Messenger^ S) ;

~OCTransfer_FinderProcess()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif