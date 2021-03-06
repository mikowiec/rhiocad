// File generated by CPPExt (Transient)
//
#ifndef _BRepFill_EdgeOnSurfLaw_OCWrappers_HeaderFile
#define _BRepFill_EdgeOnSurfLaw_OCWrappers_HeaderFile

// include the wrapped class
#include <BRepFill_EdgeOnSurfLaw.hxx>
#include "../Converter.h"

#include "BRepFill_LocationLaw.h"



namespace OCNaroWrappers
{

ref class OCTopoDS_Wire;
ref class OCTopoDS_Shape;


//! Build Location Law, with a Wire and a  Surface. <br>
public ref class OCBRepFill_EdgeOnSurfLaw : OCBRepFill_LocationLaw {

protected:
  // dummy constructor;
  OCBRepFill_EdgeOnSurfLaw(OCDummy^) : OCBRepFill_LocationLaw((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepFill_EdgeOnSurfLaw(Handle(BRepFill_EdgeOnSurfLaw)* nativeHandle);

// Methods PUBLIC


OCBRepFill_EdgeOnSurfLaw(OCNaroWrappers::OCTopoDS_Wire^ Path, OCNaroWrappers::OCTopoDS_Shape^ Surf);

//! returns <False> if one  Edge of <Path> do not have <br>
//!           representation on  <Surf>.   In this  case  it is <br>
//!          impossible to use this object. <br>
 /*instead*/  System::Boolean HasResult() ;

~OCBRepFill_EdgeOnSurfLaw()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
