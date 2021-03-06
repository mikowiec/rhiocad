// File generated by CPPExt (CPP file)
//

#include "TopOpeBRep_ShapeScanner.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TopOpeBRepTool/TopOpeBRepTool_ShapeExplorer.h"
#include "../TopOpeBRepTool/TopOpeBRepTool_BoxSort.h"


using namespace OCNaroWrappers;

OCTopOpeBRep_ShapeScanner::OCTopOpeBRep_ShapeScanner(TopOpeBRep_ShapeScanner* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTopOpeBRep_ShapeScanner::OCTopOpeBRep_ShapeScanner() 
{
  nativeHandle = new TopOpeBRep_ShapeScanner();
}

 void OCTopOpeBRep_ShapeScanner::Clear()
{
  ((TopOpeBRep_ShapeScanner*)nativeHandle)->Clear();
}

 void OCTopOpeBRep_ShapeScanner::AddBoxesMakeCOB(OCNaroWrappers::OCTopoDS_Shape^ S, OCTopAbs_ShapeEnum TS, OCTopAbs_ShapeEnum TA)
{
  ((TopOpeBRep_ShapeScanner*)nativeHandle)->AddBoxesMakeCOB(*((TopoDS_Shape*)S->Handle), (TopAbs_ShapeEnum)TS, (TopAbs_ShapeEnum)TA);
}

 void OCTopOpeBRep_ShapeScanner::Init(OCNaroWrappers::OCTopoDS_Shape^ E)
{
  ((TopOpeBRep_ShapeScanner*)nativeHandle)->Init(*((TopoDS_Shape*)E->Handle));
}

 void OCTopOpeBRep_ShapeScanner::Init(OCNaroWrappers::OCTopOpeBRepTool_ShapeExplorer^ X)
{
  ((TopOpeBRep_ShapeScanner*)nativeHandle)->Init(*((TopOpeBRepTool_ShapeExplorer*)X->Handle));
}

 System::Boolean OCTopOpeBRep_ShapeScanner::More()
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRep_ShapeScanner*)nativeHandle)->More());
}

 void OCTopOpeBRep_ShapeScanner::Next()
{
  ((TopOpeBRep_ShapeScanner*)nativeHandle)->Next();
}

OCTopoDS_Shape^ OCTopOpeBRep_ShapeScanner::Current()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((TopOpeBRep_ShapeScanner*)nativeHandle)->Current();
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopOpeBRepTool_BoxSort^ OCTopOpeBRep_ShapeScanner::BoxSort()
{
  TopOpeBRepTool_BoxSort* tmp = new TopOpeBRepTool_BoxSort();
  *tmp = ((TopOpeBRep_ShapeScanner*)nativeHandle)->BoxSort();
  return gcnew OCTopOpeBRepTool_BoxSort(tmp);
}

OCTopOpeBRepTool_BoxSort^ OCTopOpeBRep_ShapeScanner::ChangeBoxSort()
{
  TopOpeBRepTool_BoxSort* tmp = new TopOpeBRepTool_BoxSort();
  *tmp = ((TopOpeBRep_ShapeScanner*)nativeHandle)->ChangeBoxSort();
  return gcnew OCTopOpeBRepTool_BoxSort(tmp);
}

 Standard_Integer OCTopOpeBRep_ShapeScanner::Index()
{
  return ((TopOpeBRep_ShapeScanner*)nativeHandle)->Index();
}

 Standard_OStream& OCTopOpeBRep_ShapeScanner::DumpCurrent(Standard_OStream& OS)
{
  return ((TopOpeBRep_ShapeScanner*)nativeHandle)->DumpCurrent(OS);
}


