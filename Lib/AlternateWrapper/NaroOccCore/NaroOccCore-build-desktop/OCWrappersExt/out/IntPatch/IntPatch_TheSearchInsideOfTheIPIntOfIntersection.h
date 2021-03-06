// File generated by CPPExt (MPV)
//
#ifndef _IntPatch_TheSearchInsideOfTheIPIntOfIntersection_OCWrappers_HeaderFile
#define _IntPatch_TheSearchInsideOfTheIPIntOfIntersection_OCWrappers_HeaderFile

// include native header
#include <IntPatch_TheSearchInsideOfTheIPIntOfIntersection.hxx>
#include "../Converter.h"


#include "../IntSurf/IntSurf_SequenceOfInteriorPoint.h"


namespace OCNaroWrappers
{

ref class OCAdaptor3d_HSurface;
ref class OCIntPatch_HSurfaceTool;
ref class OCAdaptor3d_TopolTool;
ref class OCIntPatch_HInterTool;
ref class OCIntPatch_TheSurfFunctionOfTheIPIntOfIntersection;
ref class OCIntSurf_InteriorPoint;



public ref class OCIntPatch_TheSearchInsideOfTheIPIntOfIntersection  {

protected:
  IntPatch_TheSearchInsideOfTheIPIntOfIntersection* nativeHandle;
  OCIntPatch_TheSearchInsideOfTheIPIntOfIntersection(OCDummy^) {};

public:
  property IntPatch_TheSearchInsideOfTheIPIntOfIntersection* Handle
  {
    IntPatch_TheSearchInsideOfTheIPIntOfIntersection* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCIntPatch_TheSearchInsideOfTheIPIntOfIntersection(IntPatch_TheSearchInsideOfTheIPIntOfIntersection* nativeHandle);

// Methods PUBLIC


OCIntPatch_TheSearchInsideOfTheIPIntOfIntersection();


OCIntPatch_TheSearchInsideOfTheIPIntOfIntersection(OCNaroWrappers::OCIntPatch_TheSurfFunctionOfTheIPIntOfIntersection^ F, OCNaroWrappers::OCAdaptor3d_HSurface^ Surf, OCNaroWrappers::OCAdaptor3d_TopolTool^ T, Standard_Real Epsilon);


 /*instead*/  void Perform(OCNaroWrappers::OCIntPatch_TheSurfFunctionOfTheIPIntOfIntersection^ F, OCNaroWrappers::OCAdaptor3d_HSurface^ Surf, OCNaroWrappers::OCAdaptor3d_TopolTool^ T, Standard_Real Epsilon) ;


 /*instead*/  void Perform(OCNaroWrappers::OCIntPatch_TheSurfFunctionOfTheIPIntOfIntersection^ F, OCNaroWrappers::OCAdaptor3d_HSurface^ Surf, Standard_Real UStart, Standard_Real VStart) ;


 /*instead*/  System::Boolean IsDone() ;


 /*instead*/  Standard_Integer NbPoints() ;


 /*instead*/  OCIntSurf_InteriorPoint^ Value(Standard_Integer Index) ;

~OCIntPatch_TheSearchInsideOfTheIPIntOfIntersection()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
