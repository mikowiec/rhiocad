// File generated by CPPExt (MPV)
//
#ifndef _TColgp_Array1OfLin2d_OCWrappers_HeaderFile
#define _TColgp_Array1OfLin2d_OCWrappers_HeaderFile

// include native header
#include <TColgp_Array1OfLin2d.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCgp_Lin2d;



public ref class OCTColgp_Array1OfLin2d  {

protected:
  TColgp_Array1OfLin2d* nativeHandle;
  OCTColgp_Array1OfLin2d(OCDummy^) {};

public:
  property TColgp_Array1OfLin2d* Handle
  {
    TColgp_Array1OfLin2d* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTColgp_Array1OfLin2d(TColgp_Array1OfLin2d* nativeHandle);

// Methods PUBLIC


OCTColgp_Array1OfLin2d(Standard_Integer Low, Standard_Integer Up);


OCTColgp_Array1OfLin2d(OCNaroWrappers::OCgp_Lin2d^ Item, Standard_Integer Low, Standard_Integer Up);


 /*instead*/  void Init(OCNaroWrappers::OCgp_Lin2d^ V) ;


 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  OCTColgp_Array1OfLin2d^ Assign(OCNaroWrappers::OCTColgp_Array1OfLin2d^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCgp_Lin2d^ Value) ;


 /*instead*/  OCgp_Lin2d^ Value(Standard_Integer Index) ;


 /*instead*/  OCgp_Lin2d^ ChangeValue(Standard_Integer Index) ;

~OCTColgp_Array1OfLin2d()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
