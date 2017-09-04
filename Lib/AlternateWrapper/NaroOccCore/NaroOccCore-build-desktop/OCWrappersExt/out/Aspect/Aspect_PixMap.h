// File generated by CPPExt (Transient)
//
#ifndef _Aspect_PixMap_OCWrappers_HeaderFile
#define _Aspect_PixMap_OCWrappers_HeaderFile

// include the wrapped class
#include <Aspect_PixMap.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{



//! This class allows the definition of a pixmap(bitmap) <br>
public ref class OCAspect_PixMap : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCAspect_PixMap(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCAspect_PixMap(Handle(Aspect_PixMap)* nativeHandle);

// Methods PUBLIC

//! Initializes the datas of a pixmap with a pixel size <br>
//! <aWidth,<anHeight> and depth. <br>
OCAspect_PixMap(Standard_Integer aWidth, Standard_Integer anHeight, Standard_Integer aDepth);

//! Returns the allocated pixmap's size in PIXEL <br>
 /*instead*/  void Size(Standard_Integer& aWidth, Standard_Integer& anHeight) ;

//! Returns the allocated pixmap's depth (planes number) <br>
 /*instead*/  Standard_Integer Depth() ;

~OCAspect_PixMap()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif