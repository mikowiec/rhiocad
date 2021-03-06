// File generated by CPPExt (MPV)
//
#ifndef _Convert_CircleToBSplineCurve_OCWrappers_HeaderFile
#define _Convert_CircleToBSplineCurve_OCWrappers_HeaderFile

// include native header
#include <Convert_CircleToBSplineCurve.hxx>
#include "../Converter.h"

#include "Convert_ConicToBSplineCurve.h"

#include "Convert_ConicToBSplineCurve.h"
#include "Convert_ParameterisationType.h"


namespace OCNaroWrappers
{

ref class OCgp_Circ2d;



//!  This algorithm converts a circle into a rational B-spline curve. <br>
//!  The circle is a Circ2d from package gp and its parametrization is : <br>
//!  P (U) = Loc + R * (Cos(U) * Xdir + Sin(U) * YDir) where Loc is the <br>
//!  center of the circle Xdir and Ydir are the normalized directions <br>
//!  of the local cartesian coordinate system of the circle. <br>
//!  The parametrization range for the circle is U [0, 2Pi]. <br>
//! <br>
//! Warnings : <br>
//!  The parametrization range for the B-spline curve is not [0, 2Pi]. <br>
//! <br>
//! KeyWords : <br>
//!  Convert, Circle, BSplineCurve, 2D . <br>
public ref class OCConvert_CircleToBSplineCurve  : public OCConvert_ConicToBSplineCurve {

protected:
  // dummy constructor;
  OCConvert_CircleToBSplineCurve(OCDummy^) : OCConvert_ConicToBSplineCurve((OCDummy^)nullptr) {};

public:

// constructor from native
OCConvert_CircleToBSplineCurve(Convert_CircleToBSplineCurve* nativeHandle);

// Methods PUBLIC


//!  The equivalent B-spline curve has the same orientation <br>
//!  as the circle C. <br>
OCConvert_CircleToBSplineCurve(OCNaroWrappers::OCgp_Circ2d^ C, OCConvert_ParameterisationType Parameterisation);


//!  The circle C is limited between the parametric values U1, U2 <br>
//!  in radians. U1 and U2 [0.0, 2*Pi] . <br>
//!  The equivalent B-spline curve is oriented from U1 to U2 and has <br>
//!  the same orientation as the circle C. <br>
//!  Raised if U1 = U2 or U1 = U2 + 2.0 * Pi <br>
OCConvert_CircleToBSplineCurve(OCNaroWrappers::OCgp_Circ2d^ C, Standard_Real U1, Standard_Real U2, OCConvert_ParameterisationType Parameterisation);

~OCConvert_CircleToBSplineCurve()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
