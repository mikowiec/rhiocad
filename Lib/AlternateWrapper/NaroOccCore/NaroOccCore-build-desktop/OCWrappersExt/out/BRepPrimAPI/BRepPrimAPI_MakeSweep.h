// File generated by CPPExt (MPV)
//
#ifndef _BRepPrimAPI_MakeSweep_OCWrappers_HeaderFile
#define _BRepPrimAPI_MakeSweep_OCWrappers_HeaderFile

// include native header
#include <BRepPrimAPI_MakeSweep.hxx>
#include "../Converter.h"

#include "../BRepBuilderAPI/BRepBuilderAPI_MakeShape.h"

#include "../BRepBuilderAPI/BRepBuilderAPI_MakeShape.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;


//!  The abstract class MakeSweep is <br>
//! the root class of swept primitives. <br>
//! Sweeps are objects you obtain by sweeping a profile along a path. <br>
//! The profile can be any topology and the path is usually a curve or <br>
//! a wire. The profile generates objects according to the following rules: <br>
//!   -      Vertices generate Edges <br>
//!   -      Edges generate Faces. <br>
//!   -      Wires generate Shells. <br>
//!   -      Faces generate Solids. <br>
//!   -      Shells generate Composite  Solids. <br>
//!     You are not allowed to sweep Solids and Composite Solids. <br>
//! Two kinds of sweeps are implemented in the BRepPrimAPI package: <br>
//!   -      The linear sweep called a   Prism <br>
//!   -      The rotational sweep    called a Revol <br>
//!   Swept constructions along complex profiles such as BSpline curves <br>
//! are also available in the BRepOffsetAPI package.. <br>
public ref class OCBRepPrimAPI_MakeSweep  : public OCBRepBuilderAPI_MakeShape {

protected:
  // dummy constructor;
  OCBRepPrimAPI_MakeSweep(OCDummy^) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepPrimAPI_MakeSweep(BRepPrimAPI_MakeSweep* nativeHandle);

// Methods PUBLIC

~OCBRepPrimAPI_MakeSweep()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif