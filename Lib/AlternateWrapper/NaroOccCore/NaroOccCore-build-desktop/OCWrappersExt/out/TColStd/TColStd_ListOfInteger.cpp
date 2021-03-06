// File generated by CPPExt (CPP file)
//

#include "TColStd_ListOfInteger.h"
#include "../Converter.h"
#include "TColStd_ListIteratorOfListOfInteger.h"
#include "TColStd_ListNodeOfListOfInteger.h"


using namespace OCNaroWrappers;

OCTColStd_ListOfInteger::OCTColStd_ListOfInteger(TColStd_ListOfInteger* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTColStd_ListOfInteger::OCTColStd_ListOfInteger() 
{
  nativeHandle = new TColStd_ListOfInteger();
}

 void OCTColStd_ListOfInteger::Assign(OCNaroWrappers::OCTColStd_ListOfInteger^ Other)
{
  ((TColStd_ListOfInteger*)nativeHandle)->Assign(*((TColStd_ListOfInteger*)Other->Handle));
}

 Standard_Integer OCTColStd_ListOfInteger::Extent()
{
  return ((TColStd_ListOfInteger*)nativeHandle)->Extent();
}

 System::Boolean OCTColStd_ListOfInteger::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean(((TColStd_ListOfInteger*)nativeHandle)->IsEmpty());
}

 void OCTColStd_ListOfInteger::Prepend(Standard_Integer I)
{
  ((TColStd_ListOfInteger*)nativeHandle)->Prepend(I);
}

 void OCTColStd_ListOfInteger::Prepend(Standard_Integer I, OCNaroWrappers::OCTColStd_ListIteratorOfListOfInteger^ theIt)
{
  ((TColStd_ListOfInteger*)nativeHandle)->Prepend(I, *((TColStd_ListIteratorOfListOfInteger*)theIt->Handle));
}

 void OCTColStd_ListOfInteger::Prepend(OCNaroWrappers::OCTColStd_ListOfInteger^ Other)
{
  ((TColStd_ListOfInteger*)nativeHandle)->Prepend(*((TColStd_ListOfInteger*)Other->Handle));
}

 void OCTColStd_ListOfInteger::Append(Standard_Integer I)
{
  ((TColStd_ListOfInteger*)nativeHandle)->Append(I);
}

 void OCTColStd_ListOfInteger::Append(Standard_Integer I, OCNaroWrappers::OCTColStd_ListIteratorOfListOfInteger^ theIt)
{
  ((TColStd_ListOfInteger*)nativeHandle)->Append(I, *((TColStd_ListIteratorOfListOfInteger*)theIt->Handle));
}

 void OCTColStd_ListOfInteger::Append(OCNaroWrappers::OCTColStd_ListOfInteger^ Other)
{
  ((TColStd_ListOfInteger*)nativeHandle)->Append(*((TColStd_ListOfInteger*)Other->Handle));
}

 Standard_Integer OCTColStd_ListOfInteger::First()
{
  return ((TColStd_ListOfInteger*)nativeHandle)->First();
}

 Standard_Integer OCTColStd_ListOfInteger::Last()
{
  return ((TColStd_ListOfInteger*)nativeHandle)->Last();
}

 void OCTColStd_ListOfInteger::RemoveFirst()
{
  ((TColStd_ListOfInteger*)nativeHandle)->RemoveFirst();
}

 void OCTColStd_ListOfInteger::Remove(OCNaroWrappers::OCTColStd_ListIteratorOfListOfInteger^ It)
{
  ((TColStd_ListOfInteger*)nativeHandle)->Remove(*((TColStd_ListIteratorOfListOfInteger*)It->Handle));
}

 void OCTColStd_ListOfInteger::InsertBefore(Standard_Integer I, OCNaroWrappers::OCTColStd_ListIteratorOfListOfInteger^ It)
{
  ((TColStd_ListOfInteger*)nativeHandle)->InsertBefore(I, *((TColStd_ListIteratorOfListOfInteger*)It->Handle));
}

 void OCTColStd_ListOfInteger::InsertBefore(OCNaroWrappers::OCTColStd_ListOfInteger^ Other, OCNaroWrappers::OCTColStd_ListIteratorOfListOfInteger^ It)
{
  ((TColStd_ListOfInteger*)nativeHandle)->InsertBefore(*((TColStd_ListOfInteger*)Other->Handle), *((TColStd_ListIteratorOfListOfInteger*)It->Handle));
}

 void OCTColStd_ListOfInteger::InsertAfter(Standard_Integer I, OCNaroWrappers::OCTColStd_ListIteratorOfListOfInteger^ It)
{
  ((TColStd_ListOfInteger*)nativeHandle)->InsertAfter(I, *((TColStd_ListIteratorOfListOfInteger*)It->Handle));
}

 void OCTColStd_ListOfInteger::InsertAfter(OCNaroWrappers::OCTColStd_ListOfInteger^ Other, OCNaroWrappers::OCTColStd_ListIteratorOfListOfInteger^ It)
{
  ((TColStd_ListOfInteger*)nativeHandle)->InsertAfter(*((TColStd_ListOfInteger*)Other->Handle), *((TColStd_ListIteratorOfListOfInteger*)It->Handle));
}


