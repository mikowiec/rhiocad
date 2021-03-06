// File generated by CPPExt (CPP file)
//

#include "MeshVS_PrsBuilder.h"
#include "../Converter.h"
#include "MeshVS_DataSource.h"
#include "MeshVS_Drawer.h"
#include "../PrsMgr/PrsMgr_PresentationManager3d.h"
#include "MeshVS_Mesh.h"
#include "../Prs3d/Prs3d_Presentation.h"
#include "../SelectBasics/SelectBasics_SensitiveEntity.h"
#include "../SelectBasics/SelectBasics_EntityOwner.h"


using namespace OCNaroWrappers;

OCMeshVS_PrsBuilder::OCMeshVS_PrsBuilder(Handle(MeshVS_PrsBuilder)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_MeshVS_PrsBuilder(*nativeHandle);
}

OCMeshVS_PrsBuilder::OCMeshVS_PrsBuilder(OCNaroWrappers::OCMeshVS_Mesh^ Parent, MeshVS_DisplayModeFlags Flags, OCNaroWrappers::OCMeshVS_DataSource^ DS, Standard_Integer Id, MeshVS_BuilderPriority Priority) : OCMMgt_TShared((OCDummy^)nullptr)

{}

 void OCMeshVS_PrsBuilder::CustomBuild(OCNaroWrappers::OCPrs3d_Presentation^ Prs, TColStd_PackedMapOfInteger IDs, TColStd_PackedMapOfInteger& IDsToExclude, Standard_Integer DisplayMode)
{
  (*((Handle_MeshVS_PrsBuilder*)nativeHandle))->CustomBuild(*((Handle_Prs3d_Presentation*)Prs->Handle), IDs, IDsToExclude, DisplayMode);
}

OCSelectBasics_SensitiveEntity^ OCMeshVS_PrsBuilder::CustomSensitiveEntity(OCNaroWrappers::OCSelectBasics_EntityOwner^ Owner, Standard_Integer SelectMode)
{
  Handle(SelectBasics_SensitiveEntity) tmp = (*((Handle_MeshVS_PrsBuilder*)nativeHandle))->CustomSensitiveEntity(*((Handle_SelectBasics_EntityOwner*)Owner->Handle), SelectMode);
  return gcnew OCSelectBasics_SensitiveEntity(&tmp);
}

 Standard_Integer OCMeshVS_PrsBuilder::GetFlags()
{
  return (*((Handle_MeshVS_PrsBuilder*)nativeHandle))->GetFlags();
}

 System::Boolean OCMeshVS_PrsBuilder::TestFlags(Standard_Integer DisplayMode)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_MeshVS_PrsBuilder*)nativeHandle))->TestFlags(DisplayMode));
}

 Standard_Integer OCMeshVS_PrsBuilder::GetId()
{
  return (*((Handle_MeshVS_PrsBuilder*)nativeHandle))->GetId();
}

 Standard_Integer OCMeshVS_PrsBuilder::GetPriority()
{
  return (*((Handle_MeshVS_PrsBuilder*)nativeHandle))->GetPriority();
}

OCMeshVS_DataSource^ OCMeshVS_PrsBuilder::GetDataSource()
{
  Handle(MeshVS_DataSource) tmp = (*((Handle_MeshVS_PrsBuilder*)nativeHandle))->GetDataSource();
  return gcnew OCMeshVS_DataSource(&tmp);
}

 void OCMeshVS_PrsBuilder::SetDataSource(OCNaroWrappers::OCMeshVS_DataSource^ newDS)
{
  (*((Handle_MeshVS_PrsBuilder*)nativeHandle))->SetDataSource(*((Handle_MeshVS_DataSource*)newDS->Handle));
}

OCMeshVS_Drawer^ OCMeshVS_PrsBuilder::GetDrawer()
{
  Handle(MeshVS_Drawer) tmp = (*((Handle_MeshVS_PrsBuilder*)nativeHandle))->GetDrawer();
  return gcnew OCMeshVS_Drawer(&tmp);
}

 void OCMeshVS_PrsBuilder::SetDrawer(OCNaroWrappers::OCMeshVS_Drawer^ newDr)
{
  (*((Handle_MeshVS_PrsBuilder*)nativeHandle))->SetDrawer(*((Handle_MeshVS_Drawer*)newDr->Handle));
}

 void OCMeshVS_PrsBuilder::SetExcluding(System::Boolean state)
{
  (*((Handle_MeshVS_PrsBuilder*)nativeHandle))->SetExcluding(OCConverter::BooleanToStandardBoolean(state));
}

 System::Boolean OCMeshVS_PrsBuilder::IsExcludingOn()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_MeshVS_PrsBuilder*)nativeHandle))->IsExcludingOn());
}

 void OCMeshVS_PrsBuilder::SetPresentationManager(OCNaroWrappers::OCPrsMgr_PresentationManager3d^ thePrsMgr)
{
  (*((Handle_MeshVS_PrsBuilder*)nativeHandle))->SetPresentationManager(*((Handle_PrsMgr_PresentationManager3d*)thePrsMgr->Handle));
}

OCPrsMgr_PresentationManager3d^ OCMeshVS_PrsBuilder::GetPresentationManager()
{
  Handle(PrsMgr_PresentationManager3d) tmp = (*((Handle_MeshVS_PrsBuilder*)nativeHandle))->GetPresentationManager();
  return gcnew OCPrsMgr_PresentationManager3d(&tmp);
}


