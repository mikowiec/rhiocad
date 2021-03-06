// File generated by CPPExt (MPV)
//
#ifndef _Plate_GlobalTranslationConstraint_OCWrappers_HeaderFile
#define _Plate_GlobalTranslationConstraint_OCWrappers_HeaderFile

// include native header
#include <Plate_GlobalTranslationConstraint.hxx>
#include "../Converter.h"


#include "Plate_LinearXYZConstraint.h"


namespace OCNaroWrappers
{

ref class OCTColgp_SequenceOfXY;
ref class OCPlate_LinearXYZConstraint;


//! force a set of UV points to translate without deformation <br>
//! <br>
//! <br>
public ref class OCPlate_GlobalTranslationConstraint  {

protected:
  Plate_GlobalTranslationConstraint* nativeHandle;
  OCPlate_GlobalTranslationConstraint(OCDummy^) {};

public:
  property Plate_GlobalTranslationConstraint* Handle
  {
    Plate_GlobalTranslationConstraint* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCPlate_GlobalTranslationConstraint(Plate_GlobalTranslationConstraint* nativeHandle);

// Methods PUBLIC


OCPlate_GlobalTranslationConstraint(OCNaroWrappers::OCTColgp_SequenceOfXY^ SOfXY);


 /*instead*/  OCPlate_LinearXYZConstraint^ LXYZC() ;

~OCPlate_GlobalTranslationConstraint()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
