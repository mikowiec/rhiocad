// File generated by CPPExt (Transient)
//
#ifndef _WNT_FontMapEntry_OCWrappers_HeaderFile
#define _WNT_FontMapEntry_OCWrappers_HeaderFile

// include the wrapped class
#include <WNT_FontMapEntry.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{

ref class OCWNT_WDriver;
ref class OCWNT_DDriver;


//! Defines correspondence between FontMapEntry from <br>
//!          Aspect and Windows NT font handle. Also, provides <br>
//!          some optimizations due to rotation, italics & underlining <br>
//!          of fonts. Each font can be reffered by its name which <br>
//!          is a character string. The format of the string takes <br>
//!          after format of font name of X window system but there <br>
//!          are some differences. The font name string format is: <br>
//!          "h-w-e-o-wgt-i-u-so-cs-op-cp-q-pf-face". <br>
//!           ^ ^ ^ ^  ^  ^ ^ ^  ^  ^  ^  ^ ^   ^ <br>
//!           | | | |  |  | | |  |  |  |  | |   | <br>
//!           | | | |  |  | | |  |  |  |  | |   +- name of the typeface <br>
//!           | | | |  |  | | |  |  |  |  | |      (Courier, Arial ...) <br>
//!           | | | |  |  | | |  |  |  |  | +- pitch and family <br>
//!           | | | |  |  | | |  |  |  |  +- quality <br>
//!           | | | |  |  | | |  |  |  +- clip precision <br>
//!           | | | |  |  | | |  |  +- out precision <br>
//!           | | | |  |  | | |  +- character set <br>
//!           | | | |  |  | | +- strike out <br>
//!           | | | |  |  | +- underline <br>
//!           | | | |  |  +- italic <br>
//!           | | | |  +- weight <br>
//!           | | | +- orientation <br>
//!           | | +- escapement <br>
//!           | +- width <br>
//!           +- height <br>
//!           Wildcarding is allowed by specifying '*' sign. This means <br>
//!           a default value for parameter. <br>
//!  Example: "13-8-*-*-400-*-*-*-255-1-2-*-25-courier". <br>
//!          For more detail information see Microsoft Windows manual. <br>
//!  Warning: Windows can output rotated text only if the selected for <br>
//!          drawing font is True Type. <br>
public ref class OCWNT_FontMapEntry : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCWNT_FontMapEntry(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCWNT_FontMapEntry(Handle(WNT_FontMapEntry)* nativeHandle);

// Methods PUBLIC

//! Creates a class and loads font. <br>
//!  Warning: Windows finds the real font that most closely matches <br>
//!          the request. In doing so, it uses a <br>
//!          "font-mapping-algorythm". So it is possible that loaded <br>
//!          font differs from font in the request. <br>
//!  Trigger: Raises if font loading failed. <br>
OCWNT_FontMapEntry(System::String^ aFontName);

//! Returns handle of the font. <br>
 /*instead*/  System::IntPtr HFont() ;

//! Sets certain attributes ( italics etc. ) for font. <br>
//!  Warning: If <aRepl> is True then creates a new handle for font. <br>
//!          In this case calling routine MUST DELETE THE FONT ITSELF <br>
//!          WHEN THE FONT BECOME NO LONGER NEEDED. <br>
 /*instead*/  System::IntPtr SetAttrib(WNT_Dword aFlags, Standard_Address aData, System::Boolean aRepl) ;

//! Sets the font's slant and returns a previous one. <br>
 /*instead*/  Quantity_PlaneAngle SetSlant(Quantity_PlaneAngle aSlant) ;

//! Sets the font's scale and returns a previous one. <br>
 /*instead*/  Quantity_Factor SetScale(Quantity_Factor aScale) ;

//! Returns value of the font's slant. <br>
 /*instead*/  Quantity_PlaneAngle Slant() ;

//! Returns value of the font's scale. <br>
 /*instead*/  Quantity_Factor Scale() ;

//! Returns pointer to LogFont structure. <br>
 /*instead*/  Standard_Address LogFont() ;

~OCWNT_FontMapEntry()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
