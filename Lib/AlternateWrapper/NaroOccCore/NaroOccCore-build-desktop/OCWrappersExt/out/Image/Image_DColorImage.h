// File generated by CPPExt (Transient)
//
#ifndef _Image_DColorImage_OCWrappers_HeaderFile
#define _Image_DColorImage_OCWrappers_HeaderFile

// include the wrapped class
#include <Image_DColorImage.hxx>
#include "../Converter.h"

#include "Image_Image.h"

#include "../Aspect/Aspect_ColorPixel.h"
#include "Image_TypeOfImage.h"
#include "Image_FlipType.h"


namespace OCNaroWrappers
{

ref class OCAspect_ColorPixel;
ref class OCImage_PixelRowOfDColorImage;
ref class OCImage_PixelFieldOfDColorImage;
ref class OCImage_PixelInterpolation;
ref class OCgp_GTrsf2d;
ref class OCgp_Trsf;
ref class OCImage_Image;
ref class OCAspect_Pixel;



public ref class OCImage_DColorImage : OCImage_Image {

protected:
  // dummy constructor;
  OCImage_DColorImage(OCDummy^) : OCImage_Image((OCDummy^)nullptr) {};

public:

// constructor from native
OCImage_DColorImage(Handle(Image_DColorImage)* nativeHandle);

// Methods PUBLIC


OCImage_DColorImage(Standard_Integer x, Standard_Integer y, Standard_Integer dx, Standard_Integer dy, OCNaroWrappers::OCAspect_ColorPixel^ BackPixel);


 /*instead*/  void SetBackgroundPixel(OCNaroWrappers::OCAspect_ColorPixel^ aPixel) ;


 /*instead*/  OCAspect_ColorPixel^ BackgroundPixel() ;


 /*instead*/  OCAspect_ColorPixel^ Pixel(Standard_Integer X, Standard_Integer Y) ;


 /*instead*/  void SetPixel(Standard_Integer X, Standard_Integer Y, OCNaroWrappers::OCAspect_ColorPixel^ aPixel) ;


 /*instead*/  OCAspect_ColorPixel^ MutPixel(Standard_Integer X, Standard_Integer Y) ;


 /*instead*/  void SetRow(Standard_Integer X, Standard_Integer Y, OCNaroWrappers::OCImage_PixelRowOfDColorImage^ aRow) ;


 /*instead*/  void Row(Standard_Integer X, Standard_Integer Y, OCNaroWrappers::OCImage_PixelRowOfDColorImage^ aRow) ;


 /*instead*/  void SwapRow(Standard_Integer I, Standard_Integer J) ;


 /*instead*/  void SwapCol(Standard_Integer I, Standard_Integer J) ;


 /*instead*/  void Zoom(OCNaroWrappers::OCImage_PixelInterpolation^ anInterpolation, Standard_Real aCoefX, Standard_Real aCoefY) ;


 /*instead*/  void Rotate(OCNaroWrappers::OCImage_PixelInterpolation^ anInterpolation, Quantity_PlaneAngle aAngle) ;


 /*instead*/  void Translate(OCNaroWrappers::OCImage_PixelInterpolation^ anInterpolation, Standard_Real DX, Standard_Real DY) ;


 /*instead*/  void Affine(OCNaroWrappers::OCImage_PixelInterpolation^ anInterpolation, OCNaroWrappers::OCgp_GTrsf2d^ Trsf) ;


 /*instead*/  void Affine(OCNaroWrappers::OCImage_PixelInterpolation^ anInterpolation, OCNaroWrappers::OCgp_Trsf^ Trsf) ;


virtual /*instead*/  void InternalDup(OCNaroWrappers::OCImage_Image^ anImage) ;


 /*instead*/  void SetOrigin(Standard_Integer x, Standard_Integer y) ;


 /*instead*/  Standard_Integer LowerX() ;


 /*instead*/  Standard_Integer UpperX() ;


 /*instead*/  Standard_Integer Width() ;


 /*instead*/  Standard_Integer LowerY() ;


 /*instead*/  Standard_Integer UpperY() ;


 /*instead*/  Standard_Integer Height() ;


 /*instead*/  void Resize(Standard_Real XOffset, Standard_Real XScale, Standard_Real YOffset, Standard_Real YScale) ;


 /*instead*/  System::Boolean isSamePixel(Standard_Integer X, Standard_Integer Y, OCNaroWrappers::OCImage_Image^ anotherImage, Standard_Integer anotherX, Standard_Integer anotherY) ;


 /*instead*/  void Pixel(Standard_Integer X, Standard_Integer Y, OCNaroWrappers::OCAspect_Pixel^ aPixel) ;


 /*instead*/  void SetPixel(Standard_Integer X, Standard_Integer Y, OCNaroWrappers::OCAspect_Pixel^ aPixel) ;


 /*instead*/  void Pixel(Standard_Integer X, Standard_Integer Y, Image_PixelAddress& aPixel) ;


 /*instead*/  void SetPixel(Standard_Integer X, Standard_Integer Y, Image_PixelAddress aPixel) ;


 /*instead*/  void Transpose(OCImage_FlipType aType) ;


 /*instead*/  void Clip(Standard_Integer X, Standard_Integer Y, Standard_Integer Width, Standard_Integer Height) ;


 /*instead*/  void Shift(Standard_Integer XShifth, Standard_Integer YShift) ;


 /*instead*/  void Fill(OCNaroWrappers::OCImage_Image^ SrcImage) ;


 /*instead*/  void Fill(OCNaroWrappers::OCImage_Image^ SrcImage, Standard_Integer SrcX, Standard_Integer SrcY, Standard_Integer SrcWidth, Standard_Integer SrcHeight, Standard_Integer X, Standard_Integer Y) ;


 /*instead*/  void FillRect(OCNaroWrappers::OCAspect_ColorPixel^ aPixel, Standard_Integer X, Standard_Integer Y, Standard_Integer Width, Standard_Integer Height) ;


 /*instead*/  void DrawRect(OCNaroWrappers::OCAspect_ColorPixel^ aPixel, Standard_Integer X, Standard_Integer Y, Standard_Integer Width, Standard_Integer Height) ;


 /*instead*/  void DrawLine(OCNaroWrappers::OCAspect_ColorPixel^ aPixel, Standard_Integer X1, Standard_Integer Y1, Standard_Integer X2, Standard_Integer Y2) ;


 /*instead*/  void Clear() ;


 /*instead*/  void Dump() ;

~OCImage_DColorImage()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
