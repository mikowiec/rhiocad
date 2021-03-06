// File generated by CPPExt (MPV)
//
#ifndef _StepShape_DirectedDimensionalLocation_OCWrappers_HeaderFile
#define _StepShape_DirectedDimensionalLocation_OCWrappers_HeaderFile

// include native header
#include <StepShape_DirectedDimensionalLocation.hxx>
#include "../Converter.h"

#include "StepShape_DimensionalLocation.h"

#include "StepShape_DimensionalLocation.h"


namespace OCNaroWrappers
{



//! Representation of STEP entity DirectedDimensionalLocation <br>
public ref class OCStepShape_DirectedDimensionalLocation  : public OCStepShape_DimensionalLocation {

protected:
  // dummy constructor;
  OCStepShape_DirectedDimensionalLocation(OCDummy^) : OCStepShape_DimensionalLocation((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepShape_DirectedDimensionalLocation(StepShape_DirectedDimensionalLocation* nativeHandle);

// Methods PUBLIC

//! Empty constructor <br>
OCStepShape_DirectedDimensionalLocation();

~OCStepShape_DirectedDimensionalLocation()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
