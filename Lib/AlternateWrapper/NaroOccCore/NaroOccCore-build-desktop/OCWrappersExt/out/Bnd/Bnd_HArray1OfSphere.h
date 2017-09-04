// File generated by CPPExt (Transient)
//
#ifndef _Bnd_HArray1OfSphere_OCWrappers_HeaderFile
#define _Bnd_HArray1OfSphere_OCWrappers_HeaderFile

// include the wrapped class
#include <Bnd_HArray1OfSphere.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "Bnd_Array1OfSphere.h"


namespace OCNaroWrappers
{

ref class OCBnd_Sphere;
ref class OCBnd_Array1OfSphere;



public ref class OCBnd_HArray1OfSphere : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCBnd_HArray1OfSphere(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCBnd_HArray1OfSphere(Handle(Bnd_HArray1OfSphere)* nativeHandle);

// Methods PUBLIC


OCBnd_HArray1OfSphere(Standard_Integer Low, Standard_Integer Up);


OCBnd_HArray1OfSphere(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCBnd_Sphere^ V);


 /*instead*/  void Init(OCNaroWrappers::OCBnd_Sphere^ V) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCBnd_Sphere^ Value) ;


 /*instead*/  OCBnd_Sphere^ Value(Standard_Integer Index) ;


 /*instead*/  OCBnd_Sphere^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  OCBnd_Array1OfSphere^ Array1() ;


 /*instead*/  OCBnd_Array1OfSphere^ ChangeArray1() ;

~OCBnd_HArray1OfSphere()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif