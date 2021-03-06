// File generated by CPPExt (MPV)
//
#ifndef _IntTools_Array1OfRoots_OCWrappers_HeaderFile
#define _IntTools_Array1OfRoots_OCWrappers_HeaderFile

// include native header
#include <IntTools_Array1OfRoots.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCIntTools_Root;



public ref class OCIntTools_Array1OfRoots  {

protected:
  IntTools_Array1OfRoots* nativeHandle;
  OCIntTools_Array1OfRoots(OCDummy^) {};

public:
  property IntTools_Array1OfRoots* Handle
  {
    IntTools_Array1OfRoots* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCIntTools_Array1OfRoots(IntTools_Array1OfRoots* nativeHandle);

// Methods PUBLIC


OCIntTools_Array1OfRoots(Standard_Integer Low, Standard_Integer Up);


OCIntTools_Array1OfRoots(OCNaroWrappers::OCIntTools_Root^ Item, Standard_Integer Low, Standard_Integer Up);


 /*instead*/  void Init(OCNaroWrappers::OCIntTools_Root^ V) ;


 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  OCIntTools_Array1OfRoots^ Assign(OCNaroWrappers::OCIntTools_Array1OfRoots^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCIntTools_Root^ Value) ;


 /*instead*/  OCIntTools_Root^ Value(Standard_Integer Index) ;


 /*instead*/  OCIntTools_Root^ ChangeValue(Standard_Integer Index) ;

~OCIntTools_Array1OfRoots()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
