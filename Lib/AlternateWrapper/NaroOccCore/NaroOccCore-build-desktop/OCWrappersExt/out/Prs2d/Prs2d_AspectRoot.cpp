// File generated by CPPExt (CPP file)
//

#include "Prs2d_AspectRoot.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCPrs2d_AspectRoot::OCPrs2d_AspectRoot(Handle(Prs2d_AspectRoot)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Prs2d_AspectRoot(*nativeHandle);
}

OCPrs2d_AspectRoot::OCPrs2d_AspectRoot(OCPrs2d_AspectName anAspectName) : OCMMgt_TShared((OCDummy^)nullptr)

{}

 OCPrs2d_AspectName OCPrs2d_AspectRoot::GetAspectName()
{
  return (OCPrs2d_AspectName)((*((Handle_Prs2d_AspectRoot*)nativeHandle))->GetAspectName());
}


