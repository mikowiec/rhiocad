// File generated by CPPExt (CPP file)
//

#include "BRepClass3d_SolidClassifier.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../gp/gp_Pnt.h"


using namespace OCNaroWrappers;

OCBRepClass3d_SolidClassifier::OCBRepClass3d_SolidClassifier(BRepClass3d_SolidClassifier* nativeHandle) : OCBRepClass3d_SClassifier((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepClass3d_SolidClassifier::OCBRepClass3d_SolidClassifier() : OCBRepClass3d_SClassifier((OCDummy^)nullptr)

{
  nativeHandle = new BRepClass3d_SolidClassifier();
}

 void OCBRepClass3d_SolidClassifier::Load(OCNaroWrappers::OCTopoDS_Shape^ S)
{
  ((BRepClass3d_SolidClassifier*)nativeHandle)->Load(*((TopoDS_Shape*)S->Handle));
}

OCBRepClass3d_SolidClassifier::OCBRepClass3d_SolidClassifier(OCNaroWrappers::OCTopoDS_Shape^ S) : OCBRepClass3d_SClassifier((OCDummy^)nullptr)

{
  nativeHandle = new BRepClass3d_SolidClassifier(*((TopoDS_Shape*)S->Handle));
}

OCBRepClass3d_SolidClassifier::OCBRepClass3d_SolidClassifier(OCNaroWrappers::OCTopoDS_Shape^ S, OCNaroWrappers::OCgp_Pnt^ P, Standard_Real Tol) : OCBRepClass3d_SClassifier((OCDummy^)nullptr)

{
  nativeHandle = new BRepClass3d_SolidClassifier(*((TopoDS_Shape*)S->Handle), *((gp_Pnt*)P->Handle), Tol);
}

 void OCBRepClass3d_SolidClassifier::Perform(OCNaroWrappers::OCgp_Pnt^ P, Standard_Real Tol)
{
  ((BRepClass3d_SolidClassifier*)nativeHandle)->Perform(*((gp_Pnt*)P->Handle), Tol);
}

 void OCBRepClass3d_SolidClassifier::PerformInfinitePoint(Standard_Real Tol)
{
  ((BRepClass3d_SolidClassifier*)nativeHandle)->PerformInfinitePoint(Tol);
}

