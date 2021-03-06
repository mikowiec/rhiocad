// File generated by CPPExt (CPP file)
//

#include "Graphic2d_CircleMarker.h"
#include "../Converter.h"
#include "Graphic2d_GraphicObject.h"
#include "Graphic2d_Drawer.h"


using namespace OCNaroWrappers;

OCGraphic2d_CircleMarker::OCGraphic2d_CircleMarker(Handle(Graphic2d_CircleMarker)* nativeHandle) : OCGraphic2d_VectorialMarker((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Graphic2d_CircleMarker(*nativeHandle);
}

OCGraphic2d_CircleMarker::OCGraphic2d_CircleMarker(OCNaroWrappers::OCGraphic2d_GraphicObject^ aGraphicObject, Quantity_Length aXPosition, Quantity_Length aYPosition, Quantity_Length X, Quantity_Length Y, Quantity_Length Radius) : OCGraphic2d_VectorialMarker((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Graphic2d_CircleMarker(new Graphic2d_CircleMarker(*((Handle_Graphic2d_GraphicObject*)aGraphicObject->Handle), aXPosition, aYPosition, X, Y, Radius));
}

OCGraphic2d_CircleMarker::OCGraphic2d_CircleMarker(OCNaroWrappers::OCGraphic2d_GraphicObject^ aGraphicObject, Quantity_Length aXPosition, Quantity_Length aYPosition, Quantity_Length X, Quantity_Length Y, Quantity_Length Radius, Quantity_PlaneAngle Alpha, Quantity_PlaneAngle Beta) : OCGraphic2d_VectorialMarker((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Graphic2d_CircleMarker(new Graphic2d_CircleMarker(*((Handle_Graphic2d_GraphicObject*)aGraphicObject->Handle), aXPosition, aYPosition, X, Y, Radius, Alpha, Beta));
}

 void OCGraphic2d_CircleMarker::Center(Quantity_Length& X, Quantity_Length& Y)
{
  (*((Handle_Graphic2d_CircleMarker*)nativeHandle))->Center(X, Y);
}

 Quantity_Length OCGraphic2d_CircleMarker::Radius()
{
  return (*((Handle_Graphic2d_CircleMarker*)nativeHandle))->Radius();
}

 Quantity_PlaneAngle OCGraphic2d_CircleMarker::FirstAngle()
{
  return (*((Handle_Graphic2d_CircleMarker*)nativeHandle))->FirstAngle();
}

 Quantity_PlaneAngle OCGraphic2d_CircleMarker::SecondAngle()
{
  return (*((Handle_Graphic2d_CircleMarker*)nativeHandle))->SecondAngle();
}

 void OCGraphic2d_CircleMarker::Save(Aspect_FStream& aFStream)
{
  (*((Handle_Graphic2d_CircleMarker*)nativeHandle))->Save(aFStream);
}

 void OCGraphic2d_CircleMarker::Retrieve(Aspect_IFStream& anIFStream, OCNaroWrappers::OCGraphic2d_GraphicObject^ aGraphicObject)
{
  Graphic2d_CircleMarker::Retrieve(anIFStream, *((Handle_Graphic2d_GraphicObject*)aGraphicObject->Handle));
}


