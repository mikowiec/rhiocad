// File generated by CPPExt (MPV)
//
#ifndef _IntSurf_ListIteratorOfListOfPntOn2S_OCWrappers_HeaderFile
#define _IntSurf_ListIteratorOfListOfPntOn2S_OCWrappers_HeaderFile

// include native header
#include <IntSurf_ListIteratorOfListOfPntOn2S.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCIntSurf_ListOfPntOn2S;
ref class OCIntSurf_PntOn2S;
ref class OCIntSurf_ListNodeOfListOfPntOn2S;



public ref class OCIntSurf_ListIteratorOfListOfPntOn2S  {

protected:
  IntSurf_ListIteratorOfListOfPntOn2S* nativeHandle;
  OCIntSurf_ListIteratorOfListOfPntOn2S(OCDummy^) {};

public:
  property IntSurf_ListIteratorOfListOfPntOn2S* Handle
  {
    IntSurf_ListIteratorOfListOfPntOn2S* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCIntSurf_ListIteratorOfListOfPntOn2S(IntSurf_ListIteratorOfListOfPntOn2S* nativeHandle);

// Methods PUBLIC


OCIntSurf_ListIteratorOfListOfPntOn2S();


OCIntSurf_ListIteratorOfListOfPntOn2S(OCNaroWrappers::OCIntSurf_ListOfPntOn2S^ L);


 /*instead*/  void Initialize(OCNaroWrappers::OCIntSurf_ListOfPntOn2S^ L) ;


 /*instead*/  System::Boolean More() ;


 /*instead*/  void Next() ;


 /*instead*/  OCIntSurf_PntOn2S^ Value() ;

~OCIntSurf_ListIteratorOfListOfPntOn2S()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
