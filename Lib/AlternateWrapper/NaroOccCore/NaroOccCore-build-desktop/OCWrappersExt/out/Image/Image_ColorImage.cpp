// File generated by CPPExt (CPP file)
//

#include "Image_ColorImage.h"
#include "../Converter.h"
#include "../Aspect/Aspect_ColorPixel.h"
#include "../Aspect/Aspect_GenericColorMap.h"
#include "../Quantity/Quantity_Color.h"
#include "Image_Image.h"


using namespace OCNaroWrappers;

OCImage_ColorImage::OCImage_ColorImage(Handle(Image_ColorImage)* nativeHandle) : OCImage_DColorImage((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Image_ColorImage(*nativeHandle);
}

OCImage_ColorImage::OCImage_ColorImage(Standard_Integer x, Standard_Integer y, Standard_Integer dx, Standard_Integer dy) : OCImage_DColorImage((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Image_ColorImage(new Image_ColorImage(x, y, dx, dy));
}

OCImage_ColorImage::OCImage_ColorImage(Standard_Integer x, Standard_Integer y, Standard_Integer dx, Standard_Integer dy, OCNaroWrappers::OCAspect_ColorPixel^ BackPixel) : OCImage_DColorImage((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Image_ColorImage(new Image_ColorImage(x, y, dx, dy, *((Aspect_ColorPixel*)BackPixel->Handle)));
}

OCAspect_GenericColorMap^ OCImage_ColorImage::ChooseColorMap(Standard_Integer aSize)
{
  Handle(Aspect_GenericColorMap) tmp = (*((Handle_Image_ColorImage*)nativeHandle))->ChooseColorMap(aSize);
  return gcnew OCAspect_GenericColorMap(&tmp);
}

 OCImage_TypeOfImage OCImage_ColorImage::Type()
{
  return (OCImage_TypeOfImage)((*((Handle_Image_ColorImage*)nativeHandle))->Type());
}

OCQuantity_Color^ OCImage_ColorImage::PixelColor(Standard_Integer X, Standard_Integer Y)
{
  Quantity_Color* tmp = new Quantity_Color();
  *tmp = (*((Handle_Image_ColorImage*)nativeHandle))->PixelColor(X, Y);
  return gcnew OCQuantity_Color(tmp);
}

OCImage_Image^ OCImage_ColorImage::Dup()
{
  Handle(Image_Image) tmp = (*((Handle_Image_ColorImage*)nativeHandle))->Dup();
  return gcnew OCImage_Image(&tmp);
}


