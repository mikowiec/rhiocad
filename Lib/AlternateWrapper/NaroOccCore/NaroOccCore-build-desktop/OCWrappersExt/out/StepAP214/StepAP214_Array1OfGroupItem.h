// File generated by CPPExt (MPV)
//
#ifndef _StepAP214_Array1OfGroupItem_OCWrappers_HeaderFile
#define _StepAP214_Array1OfGroupItem_OCWrappers_HeaderFile

// include native header
#include <StepAP214_Array1OfGroupItem.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCStepAP214_GroupItem;



public ref class OCStepAP214_Array1OfGroupItem  {

protected:
  StepAP214_Array1OfGroupItem* nativeHandle;
  OCStepAP214_Array1OfGroupItem(OCDummy^) {};

public:
  property StepAP214_Array1OfGroupItem* Handle
  {
    StepAP214_Array1OfGroupItem* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCStepAP214_Array1OfGroupItem(StepAP214_Array1OfGroupItem* nativeHandle);

// Methods PUBLIC


OCStepAP214_Array1OfGroupItem(Standard_Integer Low, Standard_Integer Up);


OCStepAP214_Array1OfGroupItem(OCNaroWrappers::OCStepAP214_GroupItem^ Item, Standard_Integer Low, Standard_Integer Up);


 /*instead*/  void Init(OCNaroWrappers::OCStepAP214_GroupItem^ V) ;


 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  OCStepAP214_Array1OfGroupItem^ Assign(OCNaroWrappers::OCStepAP214_Array1OfGroupItem^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCStepAP214_GroupItem^ Value) ;


 /*instead*/  OCStepAP214_GroupItem^ Value(Standard_Integer Index) ;


 /*instead*/  OCStepAP214_GroupItem^ ChangeValue(Standard_Integer Index) ;

~OCStepAP214_Array1OfGroupItem()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
