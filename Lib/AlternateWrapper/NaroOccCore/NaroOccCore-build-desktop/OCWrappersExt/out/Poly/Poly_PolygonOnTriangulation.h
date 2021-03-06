// File generated by CPPExt (Transient)
//
#ifndef _Poly_PolygonOnTriangulation_OCWrappers_HeaderFile
#define _Poly_PolygonOnTriangulation_OCWrappers_HeaderFile

// include the wrapped class
#include <Poly_PolygonOnTriangulation.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "../TColStd/TColStd_Array1OfInteger.h"


namespace OCNaroWrappers
{

ref class OCTColStd_HArray1OfReal;
ref class OCTColStd_Array1OfInteger;
ref class OCTColStd_Array1OfReal;


//! This class provides a polygon in 3D space, based on the triangulation <br>
//! of a surface. It may be the approximate representation of a <br>
//! curve on the surface, or more generally the shape. <br>
//! A PolygonOnTriangulation is defined by a table of <br>
//! nodes. Each node is an index in the table of nodes specific <br>
//! to a triangulation, and represents a point on the surface. If <br>
//! the polygon is closed, the index of the point of closure is <br>
//! repeated at the end of the table of nodes. <br>
//! If the polygon is an approximate representation of a curve <br>
//! on a surface, you can associate with each of its nodes the <br>
//! value of the parameter of the corresponding point on the <br>
//! curve.represents a 3d Polygon <br>
public ref class OCPoly_PolygonOnTriangulation : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCPoly_PolygonOnTriangulation(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCPoly_PolygonOnTriangulation(Handle(Poly_PolygonOnTriangulation)* nativeHandle);

// Methods PUBLIC

//! Constructs a 3D polygon on the triangulation of a shape, <br>
//! defined by the table of nodes, <Nodes>. <br>
OCPoly_PolygonOnTriangulation(OCNaroWrappers::OCTColStd_Array1OfInteger^ Nodes);


//! Constructs a 3D polygon on the triangulation of a shape, defined by: <br>
//!  -   the table of nodes, Nodes, and the table of parameters, <Parameters>. <br>
//! where: <br>
//! -   a node value is an index in the table of nodes specific <br>
//!   to an existing triangulation of a shape <br>
//! -   and a parameter value is the value of the parameter of <br>
//!   the corresponding point on the curve approximated by <br>
//!   the constructed polygon. <br>
//! Warning <br>
//! The tables Nodes and Parameters must be the same size. <br>
//! This property is not checked at construction time. <br>
OCPoly_PolygonOnTriangulation(OCNaroWrappers::OCTColStd_Array1OfInteger^ Nodes, OCNaroWrappers::OCTColStd_Array1OfReal^ Parameters);

//! Returns the deflection of this polygon <br>
 /*instead*/  Standard_Real Deflection() ;

//! Sets the deflection of this polygon to D. <br>
//! See more on deflection in Poly_Polygones2D. <br>
 /*instead*/  void Deflection(Standard_Real D) ;


//! Returns the number of nodes for this polygon. <br>
//! Note: If the polygon is closed, the point of closure is <br>
//! repeated at the end of its table of nodes. Thus, on a closed <br>
//! triangle, the function NbNodes returns 4. <br>
 /*instead*/  Standard_Integer NbNodes() ;

//! Returns the table of nodes for this polygon. A node value <br>
//! is an index in the table of nodes specific to an existing <br>
//! triangulation of a shape. <br>
 /*instead*/  OCTColStd_Array1OfInteger^ Nodes() ;


//! Returns true if parameters are associated with the nodes in this polygon. <br>
 /*instead*/  System::Boolean HasParameters() ;

//! Returns the table of the parameters associated with each node in this polygon. <br>
//! Warning <br>
//! Use the function HasParameters to check if parameters <br>
//! are associated with the nodes in this polygon. <br>
//! <br>
 /*instead*/  OCTColStd_HArray1OfReal^ Parameters() ;

~OCPoly_PolygonOnTriangulation()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
