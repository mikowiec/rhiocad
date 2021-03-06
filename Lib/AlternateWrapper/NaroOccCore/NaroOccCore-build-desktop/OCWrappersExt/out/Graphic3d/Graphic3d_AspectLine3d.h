// File generated by CPPExt (Transient)
//
#ifndef _Graphic3d_AspectLine3d_OCWrappers_HeaderFile
#define _Graphic3d_AspectLine3d_OCWrappers_HeaderFile

// include the wrapped class
#include <Graphic3d_AspectLine3d.hxx>
#include "../Converter.h"

#include "../Aspect/Aspect_AspectLine.h"

#include "../Aspect/Aspect_TypeOfLine.h"


namespace OCNaroWrappers
{

ref class OCQuantity_Color;


//! Creates and updates a group of attributes <br>
//!	    for 3d line primitives. This group contains the <br>
//!	    colour, the type of line, and its thickness. <br>
public ref class OCGraphic3d_AspectLine3d : OCAspect_AspectLine {

protected:
  // dummy constructor;
  OCGraphic3d_AspectLine3d(OCDummy^) : OCAspect_AspectLine((OCDummy^)nullptr) {};

public:

// constructor from native
OCGraphic3d_AspectLine3d(Handle(Graphic3d_AspectLine3d)* nativeHandle);

// Methods PUBLIC

//! Creates a context table for line primitives <br>
//!	    defined with the following default values: <br>
OCGraphic3d_AspectLine3d();

//! Creates a context table for line primitives <br>
//!	    defined with the specified values. <br>
//!  Warning: <AWidth> is the "linewidth scale factor". <br>
//!	    The nominal line width is 1 pixel. The width of <br>
//!	    the line is determined by applying the linewidth scale <br>
//!	    factor to this nominal line width. <br>
//!	    The supported linewidths vary by 1-pixel units. <br>
OCGraphic3d_AspectLine3d(OCNaroWrappers::OCQuantity_Color^ AColor, OCAspect_TypeOfLine AType, Standard_Real AWidth);

~OCGraphic3d_AspectLine3d()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
