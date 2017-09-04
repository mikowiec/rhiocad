// File generated by CPPExt (MPV)
//
#ifndef _StepShape_PolyLoop_OCWrappers_HeaderFile
#define _StepShape_PolyLoop_OCWrappers_HeaderFile

// include native header
#include <StepShape_PolyLoop.hxx>
#include "../Converter.h"

#include "StepShape_Loop.h"

#include "StepShape_Loop.h"


namespace OCNaroWrappers
{

ref class OCStepGeom_HArray1OfCartesianPoint;
ref class OCTCollection_HAsciiString;
ref class OCStepGeom_CartesianPoint;



public ref class OCStepShape_PolyLoop  : public OCStepShape_Loop {

protected:
  // dummy constructor;
  OCStepShape_PolyLoop(OCDummy^) : OCStepShape_Loop((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepShape_PolyLoop(StepShape_PolyLoop* nativeHandle);

// Methods PUBLIC

//! Returns a PolyLoop <br>
OCStepShape_PolyLoop();


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName) ;


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepGeom_HArray1OfCartesianPoint^ aPolygon) ;


 /*instead*/  void SetPolygon(OCNaroWrappers::OCStepGeom_HArray1OfCartesianPoint^ aPolygon) ;


 /*instead*/  OCStepGeom_HArray1OfCartesianPoint^ Polygon() ;


 /*instead*/  OCStepGeom_CartesianPoint^ PolygonValue(Standard_Integer num) ;


 /*instead*/  Standard_Integer NbPolygon() ;

~OCStepShape_PolyLoop()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif