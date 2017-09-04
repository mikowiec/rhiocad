// File generated by CPPExt (MPV)
//
#ifndef _StepGeom_Array1OfCompositeCurveSegment_OCWrappers_HeaderFile
#define _StepGeom_Array1OfCompositeCurveSegment_OCWrappers_HeaderFile

// include native header
#include <StepGeom_Array1OfCompositeCurveSegment.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCStepGeom_CompositeCurveSegment;



public ref class OCStepGeom_Array1OfCompositeCurveSegment  {

protected:
  StepGeom_Array1OfCompositeCurveSegment* nativeHandle;
  OCStepGeom_Array1OfCompositeCurveSegment(OCDummy^) {};

public:
  property StepGeom_Array1OfCompositeCurveSegment* Handle
  {
    StepGeom_Array1OfCompositeCurveSegment* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCStepGeom_Array1OfCompositeCurveSegment(StepGeom_Array1OfCompositeCurveSegment* nativeHandle);

// Methods PUBLIC


OCStepGeom_Array1OfCompositeCurveSegment(Standard_Integer Low, Standard_Integer Up);


OCStepGeom_Array1OfCompositeCurveSegment(OCNaroWrappers::OCStepGeom_CompositeCurveSegment^ Item, Standard_Integer Low, Standard_Integer Up);


 /*instead*/  void Init(OCNaroWrappers::OCStepGeom_CompositeCurveSegment^ V) ;


 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  OCStepGeom_Array1OfCompositeCurveSegment^ Assign(OCNaroWrappers::OCStepGeom_Array1OfCompositeCurveSegment^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCStepGeom_CompositeCurveSegment^ Value) ;


 /*instead*/  OCStepGeom_CompositeCurveSegment^ Value(Standard_Integer Index) ;


 /*instead*/  OCStepGeom_CompositeCurveSegment^ ChangeValue(Standard_Integer Index) ;

~OCStepGeom_Array1OfCompositeCurveSegment()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif