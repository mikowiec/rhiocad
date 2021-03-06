// File generated by CPPExt (MPV)
//
#ifndef _Graphic3d_Array1OfBytes_OCWrappers_HeaderFile
#define _Graphic3d_Array1OfBytes_OCWrappers_HeaderFile

// include native header
#include <Graphic3d_Array1OfBytes.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{




public ref class OCGraphic3d_Array1OfBytes  {

protected:
  Graphic3d_Array1OfBytes* nativeHandle;
  OCGraphic3d_Array1OfBytes(OCDummy^) {};

public:
  property Graphic3d_Array1OfBytes* Handle
  {
    Graphic3d_Array1OfBytes* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCGraphic3d_Array1OfBytes(Graphic3d_Array1OfBytes* nativeHandle);

// Methods PUBLIC


OCGraphic3d_Array1OfBytes(Standard_Integer Low, Standard_Integer Up);


OCGraphic3d_Array1OfBytes(Standard_Byte Item, Standard_Integer Low, Standard_Integer Up);


 /*instead*/  void Init(Standard_Byte V) ;


 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  OCGraphic3d_Array1OfBytes^ Assign(OCNaroWrappers::OCGraphic3d_Array1OfBytes^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, Standard_Byte Value) ;


 /*instead*/  Standard_Byte Value(Standard_Integer Index) ;


 /*instead*/  Standard_Byte ChangeValue(Standard_Integer Index) ;

~OCGraphic3d_Array1OfBytes()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
