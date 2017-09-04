// File generated by CPPExt (CPP file)
//

#include "Message_Messenger.h"
#include "../Converter.h"
#include "Message_Printer.h"
#include "../Standard/Standard_Type.h"
#include "Message_SequenceOfPrinters.h"
#include "../TCollection/TCollection_AsciiString.h"
#include "../TCollection/TCollection_ExtendedString.h"


using namespace OCNaroWrappers;

OCMessage_Messenger::OCMessage_Messenger(Handle(Message_Messenger)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Message_Messenger(*nativeHandle);
}

OCMessage_Messenger::OCMessage_Messenger() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Message_Messenger(new Message_Messenger());
}

OCMessage_Messenger::OCMessage_Messenger(OCNaroWrappers::OCMessage_Printer^ thePrinter) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Message_Messenger(new Message_Messenger(*((Handle_Message_Printer*)thePrinter->Handle)));
}

 System::Boolean OCMessage_Messenger::AddPrinter(OCNaroWrappers::OCMessage_Printer^ thePrinter)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Message_Messenger*)nativeHandle))->AddPrinter(*((Handle_Message_Printer*)thePrinter->Handle)));
}

 System::Boolean OCMessage_Messenger::RemovePrinter(OCNaroWrappers::OCMessage_Printer^ thePrinter)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Message_Messenger*)nativeHandle))->RemovePrinter(*((Handle_Message_Printer*)thePrinter->Handle)));
}

 Standard_Integer OCMessage_Messenger::RemovePrinters(OCNaroWrappers::OCStandard_Type^ theType)
{
  return (*((Handle_Message_Messenger*)nativeHandle))->RemovePrinters(*((Handle_Standard_Type*)theType->Handle));
}

OCMessage_SequenceOfPrinters^ OCMessage_Messenger::Printers()
{
  Message_SequenceOfPrinters* tmp = new Message_SequenceOfPrinters();
  *tmp = (*((Handle_Message_Messenger*)nativeHandle))->Printers();
  return gcnew OCMessage_SequenceOfPrinters(tmp);
}

OCMessage_SequenceOfPrinters^ OCMessage_Messenger::ChangePrinters()
{
  Message_SequenceOfPrinters* tmp = new Message_SequenceOfPrinters();
  *tmp = (*((Handle_Message_Messenger*)nativeHandle))->ChangePrinters();
  return gcnew OCMessage_SequenceOfPrinters(tmp);
}

 void OCMessage_Messenger::Send(System::String^ theString, OCMessage_Gravity theGravity, System::Boolean putEndl)
{
  (*((Handle_Message_Messenger*)nativeHandle))->Send(OCConverter::StringToStandardCString(theString), (Message_Gravity)theGravity, OCConverter::BooleanToStandardBoolean(putEndl));
}

 void OCMessage_Messenger::Send(OCNaroWrappers::OCTCollection_AsciiString^ theString, OCMessage_Gravity theGravity, System::Boolean putEndl)
{
  (*((Handle_Message_Messenger*)nativeHandle))->Send(*((TCollection_AsciiString*)theString->Handle), (Message_Gravity)theGravity, OCConverter::BooleanToStandardBoolean(putEndl));
}

 void OCMessage_Messenger::Send(OCNaroWrappers::OCTCollection_ExtendedString^ theString, OCMessage_Gravity theGravity, System::Boolean putEndl)
{
  (*((Handle_Message_Messenger*)nativeHandle))->Send(*((TCollection_ExtendedString*)theString->Handle), (Message_Gravity)theGravity, OCConverter::BooleanToStandardBoolean(putEndl));
}

