// File generated by CPPExt (CPP file)
//

#include "BOP_WireSolidHistoryCollector.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"


using namespace OCNaroWrappers;

OCBOP_WireSolidHistoryCollector::OCBOP_WireSolidHistoryCollector(Handle(BOP_WireSolidHistoryCollector)* nativeHandle) : OCBOP_HistoryCollector((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_BOP_WireSolidHistoryCollector(*nativeHandle);
}

OCBOP_WireSolidHistoryCollector::OCBOP_WireSolidHistoryCollector(OCNaroWrappers::OCTopoDS_Shape^ theShape1, OCNaroWrappers::OCTopoDS_Shape^ theShape2, OCBOP_Operation theOperation) : OCBOP_HistoryCollector((OCDummy^)nullptr)

{
  nativeHandle = new Handle_BOP_WireSolidHistoryCollector(new BOP_WireSolidHistoryCollector(*((TopoDS_Shape*)theShape1->Handle), *((TopoDS_Shape*)theShape2->Handle), (BOP_Operation)theOperation));
}

 void OCBOP_WireSolidHistoryCollector::SetResult(OCNaroWrappers::OCTopoDS_Shape^ theResult, BOPTools_PDSFiller theDSFiller)
{
  (*((Handle_BOP_WireSolidHistoryCollector*)nativeHandle))->SetResult(*((TopoDS_Shape*)theResult->Handle), theDSFiller);
}


