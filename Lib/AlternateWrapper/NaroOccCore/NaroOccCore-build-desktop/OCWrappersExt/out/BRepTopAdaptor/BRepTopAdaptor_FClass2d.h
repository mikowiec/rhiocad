// File generated by CPPExt (MPV)
//
#ifndef _BRepTopAdaptor_FClass2d_OCWrappers_HeaderFile
#define _BRepTopAdaptor_FClass2d_OCWrappers_HeaderFile

// include native header
#include <BRepTopAdaptor_FClass2d.hxx>
#include "../Converter.h"


#include "../TColStd/TColStd_SequenceOfInteger.h"
#include "../TopoDS/TopoDS_Face.h"
#include "../TopAbs/TopAbs_State.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Face;
ref class OCgp_Pnt2d;



public ref class OCBRepTopAdaptor_FClass2d  {

protected:
  BRepTopAdaptor_FClass2d* nativeHandle;
  OCBRepTopAdaptor_FClass2d(OCDummy^) {};

public:
  property BRepTopAdaptor_FClass2d* Handle
  {
    BRepTopAdaptor_FClass2d* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBRepTopAdaptor_FClass2d(BRepTopAdaptor_FClass2d* nativeHandle);

// Methods PUBLIC


OCBRepTopAdaptor_FClass2d(OCNaroWrappers::OCTopoDS_Face^ F, Standard_Real Tol);


 /*instead*/  OCTopAbs_State PerformInfinitePoint() ;


 /*instead*/  OCTopAbs_State Perform(OCNaroWrappers::OCgp_Pnt2d^ Puv, System::Boolean RecadreOnPeriodic) ;


 /*instead*/  OCBRepTopAdaptor_FClass2d^ Copy(OCNaroWrappers::OCBRepTopAdaptor_FClass2d^ Other) ;

//! Test a point with +- an offset (Tol) and returns <br>
//!          On if some points are OUT an some are IN <br>
//!          (Caution: Internal use . see the code for more details) <br>
 /*instead*/  OCTopAbs_State TestOnRestriction(OCNaroWrappers::OCgp_Pnt2d^ Puv, Standard_Real Tol, System::Boolean RecadreOnPeriodic) ;

~OCBRepTopAdaptor_FClass2d()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif