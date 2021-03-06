// File generated by CPPExt (CPP file)
//

#include "IntTools_BeanBeanIntersector.h"
#include "../Converter.h"
#include "../Geom/Geom_Curve.h"
#include "../TopoDS/TopoDS_Edge.h"
#include "../BRepAdaptor/BRepAdaptor_Curve.h"
#include "IntTools_SequenceOfRanges.h"
#include "IntTools_Range.h"


using namespace OCNaroWrappers;

OCIntTools_BeanBeanIntersector::OCIntTools_BeanBeanIntersector(IntTools_BeanBeanIntersector* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCIntTools_BeanBeanIntersector::OCIntTools_BeanBeanIntersector() 
{
  nativeHandle = new IntTools_BeanBeanIntersector();
}

OCIntTools_BeanBeanIntersector::OCIntTools_BeanBeanIntersector(OCNaroWrappers::OCTopoDS_Edge^ theEdge1, OCNaroWrappers::OCTopoDS_Edge^ theEdge2) 
{
  nativeHandle = new IntTools_BeanBeanIntersector(*((TopoDS_Edge*)theEdge1->Handle), *((TopoDS_Edge*)theEdge2->Handle));
}

OCIntTools_BeanBeanIntersector::OCIntTools_BeanBeanIntersector(OCNaroWrappers::OCBRepAdaptor_Curve^ theCurve1, OCNaroWrappers::OCBRepAdaptor_Curve^ theCurve2, Standard_Real theBeanTolerance1, Standard_Real theBeanTolerance2) 
{
  nativeHandle = new IntTools_BeanBeanIntersector(*((BRepAdaptor_Curve*)theCurve1->Handle), *((BRepAdaptor_Curve*)theCurve2->Handle), theBeanTolerance1, theBeanTolerance2);
}

OCIntTools_BeanBeanIntersector::OCIntTools_BeanBeanIntersector(OCNaroWrappers::OCBRepAdaptor_Curve^ theCurve1, OCNaroWrappers::OCBRepAdaptor_Curve^ theCurve2, Standard_Real theFirstParOnCurve1, Standard_Real theLastParOnCurve1, Standard_Real theFirstParOnCurve2, Standard_Real theLastParOnCurve2, Standard_Real theBeanTolerance1, Standard_Real theBeanTolerance2) 
{
  nativeHandle = new IntTools_BeanBeanIntersector(*((BRepAdaptor_Curve*)theCurve1->Handle), *((BRepAdaptor_Curve*)theCurve2->Handle), theFirstParOnCurve1, theLastParOnCurve1, theFirstParOnCurve2, theLastParOnCurve2, theBeanTolerance1, theBeanTolerance2);
}

 void OCIntTools_BeanBeanIntersector::Init(OCNaroWrappers::OCTopoDS_Edge^ theEdge1, OCNaroWrappers::OCTopoDS_Edge^ theEdge2)
{
  ((IntTools_BeanBeanIntersector*)nativeHandle)->Init(*((TopoDS_Edge*)theEdge1->Handle), *((TopoDS_Edge*)theEdge2->Handle));
}

 void OCIntTools_BeanBeanIntersector::Init(OCNaroWrappers::OCBRepAdaptor_Curve^ theCurve1, OCNaroWrappers::OCBRepAdaptor_Curve^ theCurve2, Standard_Real theBeanTolerance1, Standard_Real theBeanTolerance2)
{
  ((IntTools_BeanBeanIntersector*)nativeHandle)->Init(*((BRepAdaptor_Curve*)theCurve1->Handle), *((BRepAdaptor_Curve*)theCurve2->Handle), theBeanTolerance1, theBeanTolerance2);
}

 void OCIntTools_BeanBeanIntersector::Init(OCNaroWrappers::OCBRepAdaptor_Curve^ theCurve1, OCNaroWrappers::OCBRepAdaptor_Curve^ theCurve2, Standard_Real theFirstParOnCurve1, Standard_Real theLastParOnCurve1, Standard_Real theFirstParOnCurve2, Standard_Real theLastParOnCurve2, Standard_Real theBeanTolerance1, Standard_Real theBeanTolerance2)
{
  ((IntTools_BeanBeanIntersector*)nativeHandle)->Init(*((BRepAdaptor_Curve*)theCurve1->Handle), *((BRepAdaptor_Curve*)theCurve2->Handle), theFirstParOnCurve1, theLastParOnCurve1, theFirstParOnCurve2, theLastParOnCurve2, theBeanTolerance1, theBeanTolerance2);
}

 void OCIntTools_BeanBeanIntersector::SetBeanParameters(System::Boolean IsFirstBean, Standard_Real theFirstParOnCurve, Standard_Real theLastParOnCurve)
{
  ((IntTools_BeanBeanIntersector*)nativeHandle)->SetBeanParameters(OCConverter::BooleanToStandardBoolean(IsFirstBean), theFirstParOnCurve, theLastParOnCurve);
}

 void OCIntTools_BeanBeanIntersector::Perform()
{
  ((IntTools_BeanBeanIntersector*)nativeHandle)->Perform();
}

 System::Boolean OCIntTools_BeanBeanIntersector::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((IntTools_BeanBeanIntersector*)nativeHandle)->IsDone());
}

OCIntTools_SequenceOfRanges^ OCIntTools_BeanBeanIntersector::Result()
{
  IntTools_SequenceOfRanges* tmp = new IntTools_SequenceOfRanges();
  *tmp = ((IntTools_BeanBeanIntersector*)nativeHandle)->Result();
  return gcnew OCIntTools_SequenceOfRanges(tmp);
}

 void OCIntTools_BeanBeanIntersector::Result(OCNaroWrappers::OCIntTools_SequenceOfRanges^ theResults)
{
  ((IntTools_BeanBeanIntersector*)nativeHandle)->Result(*((IntTools_SequenceOfRanges*)theResults->Handle));
}


