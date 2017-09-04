// File generated by CPPExt (CPP file)
//

#include "TDataStd_ListIteratorOfListOfByte.h"
#include "../Converter.h"
#include "TDataStd_ListOfByte.h"
#include "TDataStd_ListNodeOfListOfByte.h"


using namespace OCNaroWrappers;

OCTDataStd_ListIteratorOfListOfByte::OCTDataStd_ListIteratorOfListOfByte(TDataStd_ListIteratorOfListOfByte* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTDataStd_ListIteratorOfListOfByte::OCTDataStd_ListIteratorOfListOfByte() 
{
  nativeHandle = new TDataStd_ListIteratorOfListOfByte();
}

OCTDataStd_ListIteratorOfListOfByte::OCTDataStd_ListIteratorOfListOfByte(OCNaroWrappers::OCTDataStd_ListOfByte^ L) 
{
  nativeHandle = new TDataStd_ListIteratorOfListOfByte(*((TDataStd_ListOfByte*)L->Handle));
}

 void OCTDataStd_ListIteratorOfListOfByte::Initialize(OCNaroWrappers::OCTDataStd_ListOfByte^ L)
{
  ((TDataStd_ListIteratorOfListOfByte*)nativeHandle)->Initialize(*((TDataStd_ListOfByte*)L->Handle));
}

 System::Boolean OCTDataStd_ListIteratorOfListOfByte::More()
{
  return OCConverter::StandardBooleanToBoolean(((TDataStd_ListIteratorOfListOfByte*)nativeHandle)->More());
}

 void OCTDataStd_ListIteratorOfListOfByte::Next()
{
  ((TDataStd_ListIteratorOfListOfByte*)nativeHandle)->Next();
}

 Standard_Byte OCTDataStd_ListIteratorOfListOfByte::Value()
{
  return ((TDataStd_ListIteratorOfListOfByte*)nativeHandle)->Value();
}

