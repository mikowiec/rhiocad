// File generated by CPPExt (CPP file)
//

#include "Graphic3d_ListIteratorOfListOfShortReal.h"
#include "../Converter.h"
#include "Graphic3d_ListOfShortReal.h"
#include "Graphic3d_ListNodeOfListOfShortReal.h"


using namespace OCNaroWrappers;

OCGraphic3d_ListIteratorOfListOfShortReal::OCGraphic3d_ListIteratorOfListOfShortReal(Graphic3d_ListIteratorOfListOfShortReal* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCGraphic3d_ListIteratorOfListOfShortReal::OCGraphic3d_ListIteratorOfListOfShortReal() 
{
  nativeHandle = new Graphic3d_ListIteratorOfListOfShortReal();
}

OCGraphic3d_ListIteratorOfListOfShortReal::OCGraphic3d_ListIteratorOfListOfShortReal(OCNaroWrappers::OCGraphic3d_ListOfShortReal^ L) 
{
  nativeHandle = new Graphic3d_ListIteratorOfListOfShortReal(*((Graphic3d_ListOfShortReal*)L->Handle));
}

 void OCGraphic3d_ListIteratorOfListOfShortReal::Initialize(OCNaroWrappers::OCGraphic3d_ListOfShortReal^ L)
{
  ((Graphic3d_ListIteratorOfListOfShortReal*)nativeHandle)->Initialize(*((Graphic3d_ListOfShortReal*)L->Handle));
}

 System::Boolean OCGraphic3d_ListIteratorOfListOfShortReal::More()
{
  return OCConverter::StandardBooleanToBoolean(((Graphic3d_ListIteratorOfListOfShortReal*)nativeHandle)->More());
}

 void OCGraphic3d_ListIteratorOfListOfShortReal::Next()
{
  ((Graphic3d_ListIteratorOfListOfShortReal*)nativeHandle)->Next();
}

 Standard_ShortReal OCGraphic3d_ListIteratorOfListOfShortReal::Value()
{
  return ((Graphic3d_ListIteratorOfListOfShortReal*)nativeHandle)->Value();
}


