// File generated by CPPExt (MPV)
//
#ifndef _TopOpeBRep_EdgesFiller_OCWrappers_HeaderFile
#define _TopOpeBRep_EdgesFiller_OCWrappers_HeaderFile

// include native header
#include <TopOpeBRep_EdgesFiller.hxx>
#include "../Converter.h"


#include "../TopoDS/TopoDS_Edge.h"
#include "../TopoDS/TopoDS_Face.h"
#include "../TopOpeBRepDS/TopOpeBRepDS_ListOfInterference.h"
#include "../TopOpeBRepDS/TopOpeBRepDS_Kind.h"
#include "../TopOpeBRepDS/TopOpeBRepDS_Config.h"


namespace OCNaroWrappers
{

ref class OCTopOpeBRepDS_HDataStructure;
ref class OCTopoDS_Shape;
ref class OCTopOpeBRep_EdgesIntersector;
ref class OCTopOpeBRepDS_ListIteratorOfListOfInterference;
ref class OCTopOpeBRep_Point2d;
ref class OCTopOpeBRepDS_Transition;
ref class OCTopOpeBRepDS_Interference;
ref class OCTopoDS_Edge;
ref class OCTopOpeBRepDS_ListOfInterference;


//! Fills a TopOpeBRepDS_DataStructure with Edge/Edge <br>
//!          instersection data described by TopOpeBRep_EdgesIntersector. <br>
public ref class OCTopOpeBRep_EdgesFiller  {

protected:
  TopOpeBRep_EdgesFiller* nativeHandle;
  OCTopOpeBRep_EdgesFiller(OCDummy^) {};

public:
  property TopOpeBRep_EdgesFiller* Handle
  {
    TopOpeBRep_EdgesFiller* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTopOpeBRep_EdgesFiller(TopOpeBRep_EdgesFiller* nativeHandle);

// Methods PUBLIC


OCTopOpeBRep_EdgesFiller();


 /*instead*/  void Insert(OCNaroWrappers::OCTopoDS_Shape^ E1, OCNaroWrappers::OCTopoDS_Shape^ E2, OCNaroWrappers::OCTopOpeBRep_EdgesIntersector^ EI, OCNaroWrappers::OCTopOpeBRepDS_HDataStructure^ HDS) ;


 /*instead*/  void Face(Standard_Integer I, OCNaroWrappers::OCTopoDS_Shape^ F) ;


 /*instead*/  OCTopoDS_Shape^ Face(Standard_Integer I) ;

~OCTopOpeBRep_EdgesFiller()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
