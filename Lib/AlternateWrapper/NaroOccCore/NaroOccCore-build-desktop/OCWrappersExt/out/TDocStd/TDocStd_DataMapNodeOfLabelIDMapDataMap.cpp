// File generated by CPPExt (CPP file)
//

#include "TDocStd_DataMapNodeOfLabelIDMapDataMap.h"
#include "../Converter.h"
#include "../TDF/TDF_Label.h"
#include "../TDF/TDF_IDMap.h"
#include "../TDF/TDF_LabelMapHasher.h"
#include "TDocStd_LabelIDMapDataMap.h"
#include "TDocStd_DataMapIteratorOfLabelIDMapDataMap.h"


using namespace OCNaroWrappers;

OCTDocStd_DataMapNodeOfLabelIDMapDataMap::OCTDocStd_DataMapNodeOfLabelIDMapDataMap(Handle(TDocStd_DataMapNodeOfLabelIDMapDataMap)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TDocStd_DataMapNodeOfLabelIDMapDataMap(*nativeHandle);
}

OCTDocStd_DataMapNodeOfLabelIDMapDataMap::OCTDocStd_DataMapNodeOfLabelIDMapDataMap(OCNaroWrappers::OCTDF_Label^ K, OCNaroWrappers::OCTDF_IDMap^ I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TDocStd_DataMapNodeOfLabelIDMapDataMap(new TDocStd_DataMapNodeOfLabelIDMapDataMap(*((TDF_Label*)K->Handle), *((TDF_IDMap*)I->Handle), n));
}

OCTDF_Label^ OCTDocStd_DataMapNodeOfLabelIDMapDataMap::Key()
{
  TDF_Label* tmp = new TDF_Label();
  *tmp = (*((Handle_TDocStd_DataMapNodeOfLabelIDMapDataMap*)nativeHandle))->Key();
  return gcnew OCTDF_Label(tmp);
}

OCTDF_IDMap^ OCTDocStd_DataMapNodeOfLabelIDMapDataMap::Value()
{
  TDF_IDMap* tmp = new TDF_IDMap(0);
  *tmp = (*((Handle_TDocStd_DataMapNodeOfLabelIDMapDataMap*)nativeHandle))->Value();
  return gcnew OCTDF_IDMap(tmp);
}

