// File generated by CPPExt (CPP file)
//

#include "IFSelect_SelectModelRoots.h"
#include "../Converter.h"
#include "../Interface/Interface_EntityIterator.h"
#include "../Interface/Interface_Graph.h"
#include "../TCollection/TCollection_AsciiString.h"


using namespace OCNaroWrappers;

OCIFSelect_SelectModelRoots::OCIFSelect_SelectModelRoots(Handle(IFSelect_SelectModelRoots)* nativeHandle) : OCIFSelect_SelectBase((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_IFSelect_SelectModelRoots(*nativeHandle);
}

OCIFSelect_SelectModelRoots::OCIFSelect_SelectModelRoots() : OCIFSelect_SelectBase((OCDummy^)nullptr)

{
  nativeHandle = new Handle_IFSelect_SelectModelRoots(new IFSelect_SelectModelRoots());
}

OCInterface_EntityIterator^ OCIFSelect_SelectModelRoots::RootResult(OCNaroWrappers::OCInterface_Graph^ G)
{
  Interface_EntityIterator* tmp = new Interface_EntityIterator();
  *tmp = (*((Handle_IFSelect_SelectModelRoots*)nativeHandle))->RootResult(*((Interface_Graph*)G->Handle));
  return gcnew OCInterface_EntityIterator(tmp);
}

OCTCollection_AsciiString^ OCIFSelect_SelectModelRoots::Label()
{
  TCollection_AsciiString* tmp = new TCollection_AsciiString();
  *tmp = (*((Handle_IFSelect_SelectModelRoots*)nativeHandle))->Label();
  return gcnew OCTCollection_AsciiString(tmp);
}


