// File generated by CPPExt (Transient)
//
#ifndef _TDataStd_Shape_OCWrappers_HeaderFile
#define _TDataStd_Shape_OCWrappers_HeaderFile

// include the wrapped class
#include <TDataStd_Shape.hxx>
#include "../Converter.h"

#include "../TDF/TDF_Attribute.h"



namespace OCNaroWrappers
{

ref class OCTDF_Label;
ref class OCTopoDS_Shape;
ref class OCStandard_GUID;
ref class OCTDF_Attribute;
ref class OCTDF_RelocationTable;
ref class OCTDF_DataSet;


//! A Shape is associated in the framework with : <br>
//!          a NamedShape attribute <br>
public ref class OCTDataStd_Shape : OCTDF_Attribute {

protected:
  // dummy constructor;
  OCTDataStd_Shape(OCDummy^) : OCTDF_Attribute((OCDummy^)nullptr) {};

public:

// constructor from native
OCTDataStd_Shape(Handle(TDataStd_Shape)* nativeHandle);

// Methods PUBLIC

//! class methods <br>
//!          ============= <br>//! try to retrieve a Shape attribute at <current> label <br>
//!           or in  fathers  label of  <current>. Returns True  if <br>
//!          found and set <S>. <br>
static /*instead*/  System::Boolean Find(OCNaroWrappers::OCTDF_Label^ current, OCNaroWrappers::OCTDataStd_Shape^ S) ;

//! Find, or create, a Shape attribute.  the Shape attribute <br>
//!          is returned. Raises if <label> has attribute. <br>
static /*instead*/  OCTDataStd_Shape^ New(OCNaroWrappers::OCTDF_Label^ label) ;

//! Create or update associated NamedShape attribute.  the <br>
//!          Shape attribute is returned. <br>
static /*instead*/  OCTDataStd_Shape^ Set(OCNaroWrappers::OCTDF_Label^ label, OCNaroWrappers::OCTopoDS_Shape^ shape) ;

//!   the Shape from  associated NamedShape attribute <br>
//!            is returned. <br>
static /*instead*/  OCTopoDS_Shape^ Get(OCNaroWrappers::OCTDF_Label^ label) ;

//! Shape methods <br>
//!          ============ <br>
static /*instead*/  OCStandard_GUID^ GetID() ;


OCTDataStd_Shape();


 /*instead*/  OCStandard_GUID^ ID() ;


 /*instead*/  void Restore(OCNaroWrappers::OCTDF_Attribute^ with) ;


 /*instead*/  OCTDF_Attribute^ NewEmpty() ;


 /*instead*/  void Paste(OCNaroWrappers::OCTDF_Attribute^ into, OCNaroWrappers::OCTDF_RelocationTable^ RT) ;


virtual /*instead*/  void References(OCNaroWrappers::OCTDF_DataSet^ DS) override;


virtual /*instead*/  Standard_OStream& Dump(Standard_OStream& anOS) override;

~OCTDataStd_Shape()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
