// File generated by CPPExt (CPP file)
//

#include "BOP_AreaBuilder.h"
#include "../Converter.h"
#include "BOP_LoopSet.h"
#include "BOP_LoopClassifier.h"
#include "BOP_Loop.h"
#include "BOP_ListOfLoop.h"
#include "BOP_ListIteratorOfListOfLoop.h"


using namespace OCNaroWrappers;

OCBOP_AreaBuilder::OCBOP_AreaBuilder(BOP_AreaBuilder* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBOP_AreaBuilder::OCBOP_AreaBuilder() 
{
  nativeHandle = new BOP_AreaBuilder();
}

OCBOP_AreaBuilder::OCBOP_AreaBuilder(OCNaroWrappers::OCBOP_LoopSet^ LS, OCNaroWrappers::OCBOP_LoopClassifier^ LC, System::Boolean ForceClass) 
{
  nativeHandle = new BOP_AreaBuilder(*((BOP_LoopSet*)LS->Handle), *((BOP_LoopClassifier*)LC->Handle), OCConverter::BooleanToStandardBoolean(ForceClass));
}

 void OCBOP_AreaBuilder::Delete()
{
  ((BOP_AreaBuilder*)nativeHandle)->Delete();
}

 void OCBOP_AreaBuilder::InitAreaBuilder(OCNaroWrappers::OCBOP_LoopSet^ LS, OCNaroWrappers::OCBOP_LoopClassifier^ LC, System::Boolean ForceClass)
{
  ((BOP_AreaBuilder*)nativeHandle)->InitAreaBuilder(*((BOP_LoopSet*)LS->Handle), *((BOP_LoopClassifier*)LC->Handle), OCConverter::BooleanToStandardBoolean(ForceClass));
}

 Standard_Integer OCBOP_AreaBuilder::InitArea()
{
  return ((BOP_AreaBuilder*)nativeHandle)->InitArea();
}

 System::Boolean OCBOP_AreaBuilder::MoreArea()
{
  return OCConverter::StandardBooleanToBoolean(((BOP_AreaBuilder*)nativeHandle)->MoreArea());
}

 void OCBOP_AreaBuilder::NextArea()
{
  ((BOP_AreaBuilder*)nativeHandle)->NextArea();
}

 Standard_Integer OCBOP_AreaBuilder::InitLoop()
{
  return ((BOP_AreaBuilder*)nativeHandle)->InitLoop();
}

 System::Boolean OCBOP_AreaBuilder::MoreLoop()
{
  return OCConverter::StandardBooleanToBoolean(((BOP_AreaBuilder*)nativeHandle)->MoreLoop());
}

 void OCBOP_AreaBuilder::NextLoop()
{
  ((BOP_AreaBuilder*)nativeHandle)->NextLoop();
}

OCBOP_Loop^ OCBOP_AreaBuilder::Loop()
{
  Handle(BOP_Loop) tmp = ((BOP_AreaBuilder*)nativeHandle)->Loop();
  return gcnew OCBOP_Loop(&tmp);
}

 void OCBOP_AreaBuilder::ADD_Loop_TO_LISTOFLoop(OCNaroWrappers::OCBOP_Loop^ L, OCNaroWrappers::OCBOP_ListOfLoop^ LOL)
{
  ((BOP_AreaBuilder*)nativeHandle)->ADD_Loop_TO_LISTOFLoop(*((Handle_BOP_Loop*)L->Handle), *((BOP_ListOfLoop*)LOL->Handle));
}

 void OCBOP_AreaBuilder::REM_Loop_FROM_LISTOFLoop(OCNaroWrappers::OCBOP_ListIteratorOfListOfLoop^ ITLOL, OCNaroWrappers::OCBOP_ListOfLoop^ LOL)
{
  ((BOP_AreaBuilder*)nativeHandle)->REM_Loop_FROM_LISTOFLoop(*((BOP_ListIteratorOfListOfLoop*)ITLOL->Handle), *((BOP_ListOfLoop*)LOL->Handle));
}

 void OCBOP_AreaBuilder::ADD_LISTOFLoop_TO_LISTOFLoop(OCNaroWrappers::OCBOP_ListOfLoop^ LOL1, OCNaroWrappers::OCBOP_ListOfLoop^ LOL2)
{
  ((BOP_AreaBuilder*)nativeHandle)->ADD_LISTOFLoop_TO_LISTOFLoop(*((BOP_ListOfLoop*)LOL1->Handle), *((BOP_ListOfLoop*)LOL2->Handle));
}


