// File generated by CPPExt (CPP file)
//

#include "TopTools_ShapeSet.h"
#include "../Converter.h"
#include "../Message/Message_ProgressIndicator.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "TopTools_LocationSet.h"
#include "../TCollection/TCollection_AsciiString.h"


using namespace OCNaroWrappers;

OCTopTools_ShapeSet::OCTopTools_ShapeSet(TopTools_ShapeSet* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTopTools_ShapeSet::OCTopTools_ShapeSet() 
{
  nativeHandle = new TopTools_ShapeSet();
}

 void OCTopTools_ShapeSet::Delete()
{
  ((TopTools_ShapeSet*)nativeHandle)->Delete();
}

 void OCTopTools_ShapeSet::SetFormatNb(Standard_Integer theFormatNb)
{
  ((TopTools_ShapeSet*)nativeHandle)->SetFormatNb(theFormatNb);
}

 Standard_Integer OCTopTools_ShapeSet::FormatNb()
{
  return ((TopTools_ShapeSet*)nativeHandle)->FormatNb();
}

 void OCTopTools_ShapeSet::Clear()
{
  ((TopTools_ShapeSet*)nativeHandle)->Clear();
}

 Standard_Integer OCTopTools_ShapeSet::Add(OCNaroWrappers::OCTopoDS_Shape^ S)
{
  return ((TopTools_ShapeSet*)nativeHandle)->Add(*((TopoDS_Shape*)S->Handle));
}

OCTopoDS_Shape^ OCTopTools_ShapeSet::Shape(Standard_Integer I)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((TopTools_ShapeSet*)nativeHandle)->Shape(I);
  return gcnew OCTopoDS_Shape(tmp);
}

 Standard_Integer OCTopTools_ShapeSet::Index(OCNaroWrappers::OCTopoDS_Shape^ S)
{
  return ((TopTools_ShapeSet*)nativeHandle)->Index(*((TopoDS_Shape*)S->Handle));
}

OCTopTools_LocationSet^ OCTopTools_ShapeSet::Locations()
{
  TopTools_LocationSet* tmp = new TopTools_LocationSet();
  *tmp = ((TopTools_ShapeSet*)nativeHandle)->Locations();
  return gcnew OCTopTools_LocationSet(tmp);
}

OCTopTools_LocationSet^ OCTopTools_ShapeSet::ChangeLocations()
{
  TopTools_LocationSet* tmp = new TopTools_LocationSet();
  *tmp = ((TopTools_ShapeSet*)nativeHandle)->ChangeLocations();
  return gcnew OCTopTools_LocationSet(tmp);
}

 Standard_OStream& OCTopTools_ShapeSet::DumpExtent(Standard_OStream& OS)
{
  return ((TopTools_ShapeSet*)nativeHandle)->DumpExtent(OS);
}

 void OCTopTools_ShapeSet::DumpExtent(OCNaroWrappers::OCTCollection_AsciiString^ S)
{
  ((TopTools_ShapeSet*)nativeHandle)->DumpExtent(*((TCollection_AsciiString*)S->Handle));
}

 void OCTopTools_ShapeSet::Dump(Standard_OStream& OS)
{
  ((TopTools_ShapeSet*)nativeHandle)->Dump(OS);
}

 void OCTopTools_ShapeSet::Write(Standard_OStream& OS)
{
  ((TopTools_ShapeSet*)nativeHandle)->Write(OS);
}

 void OCTopTools_ShapeSet::Read(Standard_IStream& IS)
{
  ((TopTools_ShapeSet*)nativeHandle)->Read(IS);
}

 void OCTopTools_ShapeSet::Dump(OCNaroWrappers::OCTopoDS_Shape^ S, Standard_OStream& OS)
{
  ((TopTools_ShapeSet*)nativeHandle)->Dump(*((TopoDS_Shape*)S->Handle), OS);
}

 void OCTopTools_ShapeSet::Write(OCNaroWrappers::OCTopoDS_Shape^ S, Standard_OStream& OS)
{
  ((TopTools_ShapeSet*)nativeHandle)->Write(*((TopoDS_Shape*)S->Handle), OS);
}

 void OCTopTools_ShapeSet::Read(OCNaroWrappers::OCTopoDS_Shape^ S, Standard_IStream& IS)
{
  ((TopTools_ShapeSet*)nativeHandle)->Read(*((TopoDS_Shape*)S->Handle), IS);
}

 void OCTopTools_ShapeSet::AddGeometry(OCNaroWrappers::OCTopoDS_Shape^ S)
{
  ((TopTools_ShapeSet*)nativeHandle)->AddGeometry(*((TopoDS_Shape*)S->Handle));
}

 void OCTopTools_ShapeSet::DumpGeometry(Standard_OStream& OS)
{
  ((TopTools_ShapeSet*)nativeHandle)->DumpGeometry(OS);
}

 void OCTopTools_ShapeSet::WriteGeometry(Standard_OStream& OS)
{
  ((TopTools_ShapeSet*)nativeHandle)->WriteGeometry(OS);
}

 void OCTopTools_ShapeSet::ReadGeometry(Standard_IStream& IS)
{
  ((TopTools_ShapeSet*)nativeHandle)->ReadGeometry(IS);
}

 void OCTopTools_ShapeSet::DumpGeometry(OCNaroWrappers::OCTopoDS_Shape^ S, Standard_OStream& OS)
{
  ((TopTools_ShapeSet*)nativeHandle)->DumpGeometry(*((TopoDS_Shape*)S->Handle), OS);
}

 void OCTopTools_ShapeSet::WriteGeometry(OCNaroWrappers::OCTopoDS_Shape^ S, Standard_OStream& OS)
{
  ((TopTools_ShapeSet*)nativeHandle)->WriteGeometry(*((TopoDS_Shape*)S->Handle), OS);
}

 void OCTopTools_ShapeSet::ReadGeometry(OCTopAbs_ShapeEnum T, Standard_IStream& IS, OCNaroWrappers::OCTopoDS_Shape^ S)
{
  ((TopTools_ShapeSet*)nativeHandle)->ReadGeometry((TopAbs_ShapeEnum)T, IS, *((TopoDS_Shape*)S->Handle));
}

 void OCTopTools_ShapeSet::AddShapes(OCNaroWrappers::OCTopoDS_Shape^ S1, OCNaroWrappers::OCTopoDS_Shape^ S2)
{
  ((TopTools_ShapeSet*)nativeHandle)->AddShapes(*((TopoDS_Shape*)S1->Handle), *((TopoDS_Shape*)S2->Handle));
}

 void OCTopTools_ShapeSet::Check(OCTopAbs_ShapeEnum T, OCNaroWrappers::OCTopoDS_Shape^ S)
{
  ((TopTools_ShapeSet*)nativeHandle)->Check((TopAbs_ShapeEnum)T, *((TopoDS_Shape*)S->Handle));
}

 Standard_Integer OCTopTools_ShapeSet::NbShapes()
{
  return ((TopTools_ShapeSet*)nativeHandle)->NbShapes();
}

 void OCTopTools_ShapeSet::SetProgress(OCNaroWrappers::OCMessage_ProgressIndicator^ PR)
{
  ((TopTools_ShapeSet*)nativeHandle)->SetProgress(*((Handle_Message_ProgressIndicator*)PR->Handle));
}

OCMessage_ProgressIndicator^ OCTopTools_ShapeSet::GetProgress()
{
  Handle(Message_ProgressIndicator) tmp = ((TopTools_ShapeSet*)nativeHandle)->GetProgress();
  return gcnew OCMessage_ProgressIndicator(&tmp);
}


