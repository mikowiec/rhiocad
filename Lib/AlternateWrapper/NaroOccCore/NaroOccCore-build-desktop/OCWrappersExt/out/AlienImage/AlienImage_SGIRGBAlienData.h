// File generated by CPPExt (Transient)
//
#ifndef _AlienImage_SGIRGBAlienData_OCWrappers_HeaderFile
#define _AlienImage_SGIRGBAlienData_OCWrappers_HeaderFile

// include the wrapped class
#include <AlienImage_SGIRGBAlienData.hxx>
#include "../Converter.h"

#include "AlienImage_AlienImageData.h"



namespace OCNaroWrappers
{

ref class OCOSD_File;
ref class OCTCollection_AsciiString;
ref class OCImage_Image;
ref class OCImage_PseudoColorImage;
ref class OCImage_ColorImage;


//! This class defines a SGI .rgb Alien image. <br>
public ref class OCAlienImage_SGIRGBAlienData : OCAlienImage_AlienImageData {

protected:
  // dummy constructor;
  OCAlienImage_SGIRGBAlienData(OCDummy^) : OCAlienImage_AlienImageData((OCDummy^)nullptr) {};

public:

// constructor from native
OCAlienImage_SGIRGBAlienData(Handle(AlienImage_SGIRGBAlienData)* nativeHandle);

// Methods PUBLIC


OCAlienImage_SGIRGBAlienData();

//! Read content of a  SGIRGBAlienData object from a file . <br>
//!          Returns True if file is a SGI .rgb file . <br>
 /*instead*/  System::Boolean Read(OCNaroWrappers::OCOSD_File^ afile) ;

//! Write content of a  SGIRGBAlienData object to a file . <br>
 /*instead*/  System::Boolean Write(OCNaroWrappers::OCOSD_File^ afile) ;

//! Set Image name . <br>
virtual /*instead*/  void SetName(OCNaroWrappers::OCTCollection_AsciiString^ aName) override;

//! Get Image name . <br>
virtual /*instead*/  OCTCollection_AsciiString^ Name() override;

//! convert a SGIRGBAlienData object to a Image object. <br>
 /*instead*/  OCImage_Image^ ToImage() ;

//! convert a Image object to a SGIRGBAlienData object. <br>
 /*instead*/  void FromImage(OCNaroWrappers::OCImage_Image^ anImage) ;

~OCAlienImage_SGIRGBAlienData()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
