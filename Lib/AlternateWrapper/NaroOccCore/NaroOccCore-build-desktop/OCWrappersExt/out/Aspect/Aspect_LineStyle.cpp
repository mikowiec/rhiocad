// File generated by CPPExt (CPP file)
//

#include "Aspect_LineStyle.h"
#include "../Converter.h"
#include "../TColQuantity/TColQuantity_HArray1OfLength.h"
#include "../TColQuantity/TColQuantity_Array1OfLength.h"


using namespace OCNaroWrappers;

OCAspect_LineStyle::OCAspect_LineStyle(Aspect_LineStyle* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCAspect_LineStyle::OCAspect_LineStyle() 
{
  nativeHandle = new Aspect_LineStyle();
}

OCAspect_LineStyle::OCAspect_LineStyle(OCAspect_TypeOfLine Type) 
{
  nativeHandle = new Aspect_LineStyle((Aspect_TypeOfLine)Type);
}

OCAspect_LineStyle::OCAspect_LineStyle(OCNaroWrappers::OCTColQuantity_Array1OfLength^ Style) 
{
  nativeHandle = new Aspect_LineStyle(*((TColQuantity_Array1OfLength*)Style->Handle));
}

OCAspect_LineStyle^ OCAspect_LineStyle::Assign(OCNaroWrappers::OCAspect_LineStyle^ Other)
{
  Aspect_LineStyle* tmp = new Aspect_LineStyle();
  *tmp = ((Aspect_LineStyle*)nativeHandle)->Assign(*((Aspect_LineStyle*)Other->Handle));
  return gcnew OCAspect_LineStyle(tmp);
}

 void OCAspect_LineStyle::SetValues(OCAspect_TypeOfLine Type)
{
  ((Aspect_LineStyle*)nativeHandle)->SetValues((Aspect_TypeOfLine)Type);
}

 void OCAspect_LineStyle::SetValues(OCNaroWrappers::OCTColQuantity_Array1OfLength^ Style)
{
  ((Aspect_LineStyle*)nativeHandle)->SetValues(*((TColQuantity_Array1OfLength*)Style->Handle));
}

 OCAspect_TypeOfLine OCAspect_LineStyle::Style()
{
  return (OCAspect_TypeOfLine)(((Aspect_LineStyle*)nativeHandle)->Style());
}

 Standard_Integer OCAspect_LineStyle::Length()
{
  return ((Aspect_LineStyle*)nativeHandle)->Length();
}

OCTColQuantity_Array1OfLength^ OCAspect_LineStyle::Values()
{
  TColQuantity_Array1OfLength* tmp = new TColQuantity_Array1OfLength(0, 0);
  *tmp = ((Aspect_LineStyle*)nativeHandle)->Values();
  return gcnew OCTColQuantity_Array1OfLength(tmp);
}

 System::Boolean OCAspect_LineStyle::IsEqual(OCNaroWrappers::OCAspect_LineStyle^ Other)
{
  return OCConverter::StandardBooleanToBoolean(((Aspect_LineStyle*)nativeHandle)->IsEqual(*((Aspect_LineStyle*)Other->Handle)));
}

 System::Boolean OCAspect_LineStyle::IsNotEqual(OCNaroWrappers::OCAspect_LineStyle^ Other)
{
  return OCConverter::StandardBooleanToBoolean(((Aspect_LineStyle*)nativeHandle)->IsNotEqual(*((Aspect_LineStyle*)Other->Handle)));
}

