// File generated by CPPExt (Transient)
//
#ifndef _BRepCheck_Shell_OCWrappers_HeaderFile
#define _BRepCheck_Shell_OCWrappers_HeaderFile

// include the wrapped class
#include <BRepCheck_Shell.hxx>
#include "../Converter.h"

#include "BRepCheck_Result.h"

#include "BRepCheck_Status.h"
#include "../TopTools/TopTools_IndexedDataMapOfShapeListOfShape.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shell;
ref class OCTopoDS_Shape;
ref class OCTopTools_ListOfShape;



public ref class OCBRepCheck_Shell : OCBRepCheck_Result {

protected:
  // dummy constructor;
  OCBRepCheck_Shell(OCDummy^) : OCBRepCheck_Result((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepCheck_Shell(Handle(BRepCheck_Shell)* nativeHandle);

// Methods PUBLIC


OCBRepCheck_Shell(OCNaroWrappers::OCTopoDS_Shell^ S);


 /*instead*/  void InContext(OCNaroWrappers::OCTopoDS_Shape^ ContextShape) ;


 /*instead*/  void Minimum() ;


 /*instead*/  void Blind() ;

//! Checks if the oriented  faces of the shell  give a <br>
//!          closed shell.    If the  wire is  closed,  returns <br>
//!          BRepCheck_NoError.If      <Update>     is  set  to <br>
//!          Standard_True, registers the status in the list. <br>
 /*instead*/  OCBRepCheck_Status Closed(System::Boolean Update) ;

//! Checks if the   oriented faces  of  the shell  are <br>
//!          correctly oriented.  An internal  call is  made to <br>
//!          the  method  Closed.   If  <Update>    is set   to <br>
//!          Standard_True, registers the status in the list. <br>
 /*instead*/  OCBRepCheck_Status Orientation(System::Boolean Update) ;


 /*instead*/  void SetUnorientable() ;


 /*instead*/  System::Boolean IsUnorientable() ;


 /*instead*/  Standard_Integer NbConnectedSet(OCNaroWrappers::OCTopTools_ListOfShape^ theSets) ;

~OCBRepCheck_Shell()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
