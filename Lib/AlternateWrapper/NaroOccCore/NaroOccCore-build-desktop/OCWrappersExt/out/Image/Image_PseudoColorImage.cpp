// File generated by CPPExt (CPP file)
//

#include "Image_PseudoColorImage.h"
#include "../Converter.h"
#include "../Aspect/Aspect_ColorMap.h"
#include "../Aspect/Aspect_IndexPixel.h"
#include "../Quantity/Quantity_Color.h"
#include "../Quantity/Quantity_HArray1OfColor.h"
#include "../Quantity/Quantity_Array1OfColor.h"
#include "Image_LookupTable.h"
#include "Image_Image.h"


using namespace OCNaroWrappers;

OCImage_PseudoColorImage::OCImage_PseudoColorImage(Handle(Image_PseudoColorImage)* nativeHandle) : OCImage_DIndexedImage((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Image_PseudoColorImage(*nativeHandle);
}

OCImage_PseudoColorImage::OCImage_PseudoColorImage(Standard_Integer x, Standard_Integer y, Standard_Integer dx, Standard_Integer dy, OCNaroWrappers::OCAspect_ColorMap^ aColorMap) : OCImage_DIndexedImage((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Image_PseudoColorImage(new Image_PseudoColorImage(x, y, dx, dy, *((Handle_Aspect_ColorMap*)aColorMap->Handle)));
}

OCImage_PseudoColorImage::OCImage_PseudoColorImage(Standard_Integer x, Standard_Integer y, Standard_Integer dx, Standard_Integer dy, OCNaroWrappers::OCAspect_ColorMap^ aColorMap, OCNaroWrappers::OCAspect_IndexPixel^ BackPixel) : OCImage_DIndexedImage((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Image_PseudoColorImage(new Image_PseudoColorImage(x, y, dx, dy, *((Handle_Aspect_ColorMap*)aColorMap->Handle), *((Aspect_IndexPixel*)BackPixel->Handle)));
}

 OCImage_TypeOfImage OCImage_PseudoColorImage::Type()
{
  return (OCImage_TypeOfImage)((*((Handle_Image_PseudoColorImage*)nativeHandle))->Type());
}

OCAspect_ColorMap^ OCImage_PseudoColorImage::ColorMap()
{
  Handle(Aspect_ColorMap) tmp = (*((Handle_Image_PseudoColorImage*)nativeHandle))->ColorMap();
  return gcnew OCAspect_ColorMap(&tmp);
}

OCQuantity_Color^ OCImage_PseudoColorImage::PixelColor(Standard_Integer X, Standard_Integer Y)
{
  Quantity_Color* tmp = new Quantity_Color();
  *tmp = (*((Handle_Image_PseudoColorImage*)nativeHandle))->PixelColor(X, Y);
  return gcnew OCQuantity_Color(tmp);
}

OCQuantity_HArray1OfColor^ OCImage_PseudoColorImage::RowColor(Standard_Integer Y)
{
  Handle(Quantity_HArray1OfColor) tmp = (*((Handle_Image_PseudoColorImage*)nativeHandle))->RowColor(Y);
  return gcnew OCQuantity_HArray1OfColor(&tmp);
}

 void OCImage_PseudoColorImage::RowColor(Standard_Integer Y, OCNaroWrappers::OCQuantity_Array1OfColor^ aArray1)
{
  (*((Handle_Image_PseudoColorImage*)nativeHandle))->RowColor(Y, *((Quantity_Array1OfColor*)aArray1->Handle));
}

OCImage_PseudoColorImage^ OCImage_PseudoColorImage::Squeeze(OCNaroWrappers::OCAspect_IndexPixel^ BasePixel)
{
  Handle(Image_PseudoColorImage) tmp = (*((Handle_Image_PseudoColorImage*)nativeHandle))->Squeeze(*((Aspect_IndexPixel*)BasePixel->Handle));
  return gcnew OCImage_PseudoColorImage(&tmp);
}

 void OCImage_PseudoColorImage::SqueezedLookupTable(OCNaroWrappers::OCAspect_IndexPixel^ BasePixel, OCNaroWrappers::OCImage_LookupTable^ aLookup)
{
  (*((Handle_Image_PseudoColorImage*)nativeHandle))->SqueezedLookupTable(*((Aspect_IndexPixel*)BasePixel->Handle), *((Image_LookupTable*)aLookup->Handle));
}

 void OCImage_PseudoColorImage::Lookup(OCNaroWrappers::OCImage_LookupTable^ aLookup)
{
  (*((Handle_Image_PseudoColorImage*)nativeHandle))->Lookup(*((Image_LookupTable*)aLookup->Handle));
}

 void OCImage_PseudoColorImage::Extrema(OCNaroWrappers::OCAspect_IndexPixel^ Min, OCNaroWrappers::OCAspect_IndexPixel^ Max)
{
  (*((Handle_Image_PseudoColorImage*)nativeHandle))->Extrema(*((Aspect_IndexPixel*)Min->Handle), *((Aspect_IndexPixel*)Max->Handle));
}

 void OCImage_PseudoColorImage::Threshold(OCNaroWrappers::OCAspect_IndexPixel^ Min, OCNaroWrappers::OCAspect_IndexPixel^ Max, OCNaroWrappers::OCAspect_IndexPixel^ Map)
{
  (*((Handle_Image_PseudoColorImage*)nativeHandle))->Threshold(*((Aspect_IndexPixel*)Min->Handle), *((Aspect_IndexPixel*)Max->Handle), *((Aspect_IndexPixel*)Map->Handle));
}

 void OCImage_PseudoColorImage::Rescale(Standard_Real Scale, Standard_Real Offset)
{
  (*((Handle_Image_PseudoColorImage*)nativeHandle))->Rescale(Scale, Offset);
}

OCImage_Image^ OCImage_PseudoColorImage::Dup()
{
  Handle(Image_Image) tmp = (*((Handle_Image_PseudoColorImage*)nativeHandle))->Dup();
  return gcnew OCImage_Image(&tmp);
}


