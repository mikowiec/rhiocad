// File generated by CPPExt (CPP file)
//

#include "Prs2d_SymCircular.h"
#include "../Converter.h"
#include "../Graphic2d/Graphic2d_GraphicObject.h"
#include "../Graphic2d/Graphic2d_Drawer.h"


using namespace OCNaroWrappers;

OCPrs2d_SymCircular::OCPrs2d_SymCircular(Handle(Prs2d_SymCircular)* nativeHandle) : OCPrs2d_Tolerance((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Prs2d_SymCircular(*nativeHandle);
}

OCPrs2d_SymCircular::OCPrs2d_SymCircular(OCNaroWrappers::OCGraphic2d_GraphicObject^ aGO, Standard_Real aX, Standard_Real aY, Standard_Real aLength, Standard_Real anAngle) : OCPrs2d_Tolerance((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Prs2d_SymCircular(new Prs2d_SymCircular(*((Handle_Graphic2d_GraphicObject*)aGO->Handle), aX, aY, aLength, anAngle));
}

 void OCPrs2d_SymCircular::Save(Aspect_FStream& aFStream)
{
  (*((Handle_Prs2d_SymCircular*)nativeHandle))->Save(aFStream);
}

