// File generated by CPPExt (Transient)
//
#ifndef _StepData_GlobalNodeOfWriterLib_OCWrappers_HeaderFile
#define _StepData_GlobalNodeOfWriterLib_OCWrappers_HeaderFile

// include the wrapped class
#include <StepData_GlobalNodeOfWriterLib.hxx>
#include "../Converter.h"

#include "../Standard/Standard_Transient.h"



namespace OCNaroWrappers
{

ref class OCStepData_ReadWriteModule;
ref class OCStepData_Protocol;
ref class OCStandard_Transient;
ref class OCStepData_WriterLib;
ref class OCStepData_NodeOfWriterLib;



public ref class OCStepData_GlobalNodeOfWriterLib : OCStandard_Transient {

protected:
  // dummy constructor;
  OCStepData_GlobalNodeOfWriterLib(OCDummy^) : OCStandard_Transient((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepData_GlobalNodeOfWriterLib(Handle(StepData_GlobalNodeOfWriterLib)* nativeHandle);

// Methods PUBLIC


OCStepData_GlobalNodeOfWriterLib();


 /*instead*/  void Add(OCNaroWrappers::OCStepData_ReadWriteModule^ amodule, OCNaroWrappers::OCStepData_Protocol^ aprotocol) ;


 /*instead*/  OCStepData_ReadWriteModule^ Module() ;


 /*instead*/  OCStepData_Protocol^ Protocol() ;


 /*instead*/  OCStepData_GlobalNodeOfWriterLib^ Next() ;

~OCStepData_GlobalNodeOfWriterLib()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
