// File generated by CPPExt (Transient)
//
#ifndef _Interface_InterfaceModel_OCWrappers_HeaderFile
#define _Interface_InterfaceModel_OCWrappers_HeaderFile

// include the wrapped class
#include <Interface_InterfaceModel.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "../TColStd/TColStd_IndexedMapOfTransient.h"
#include "../TColStd/TColStd_DataMapOfIntegerTransient.h"
#include "Interface_DataState.h"


namespace OCNaroWrappers
{

ref class OCInterface_Check;
ref class OCTCollection_HAsciiString;
ref class OCInterface_GTool;
ref class OCInterface_Protocol;
ref class OCStandard_Transient;
ref class OCStandard_Type;
ref class OCInterface_ReportEntity;
ref class OCInterface_CheckIterator;
ref class OCInterface_GeneralLib;
ref class OCInterface_EntityIterator;
ref class OCMessage_Messenger;
ref class OCTColStd_HSequenceOfHAsciiString;


//! Defines an (Indexed) Set of data corresponding to a complete <br>
//!           Transfer by a File Interface, i.e. File Header and Transient <br>
//!           Entities (Objects) contained in a File. Contained Entities are <br>
//!           identified in the Model by unique and consecutive Numbers. <br>
//! <br>
//!           In addition, a Model can attach to each entity, a specific <br>
//!           Label according to the norm (e.g. Name for VDA, #ident for <br>
//!           Step ...), intended to be output on a string or a stream <br>
//!           (remark : labels are not obliged to be unique) <br>
//! <br>
//!           InterfaceModel itself is not Transient, it is intended to <br>
//!           work on a set of Transient Data. The services offered are <br>
//!           basic Listing and Identification operations on Transient <br>
//!           Entities, storage of Error Reports, Copying. <br>
//! <br>
//!           Moreovere, it is possible to define and use templates. These <br>
//!           are empty Models, from which copies can be obtained in order <br>
//!           to be filled with effective data. This allows to record <br>
//!           standard definitions for headers, avoiding to recreate them <br>
//!           for each sendings, and assuring customisation of produced <br>
//!           files for a given site. <br>
//!           A template is attached to a name. It is possible to define a <br>
//!           template from another one (get it, edit it then record it <br>
//!           under another name). <br>
//! <br>
//!           See also Graph, ShareTool, CheckTool for more <br>
public ref class OCInterface_InterfaceModel : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCInterface_InterfaceModel(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCInterface_InterfaceModel(Handle(Interface_InterfaceModel)* nativeHandle);

// Methods PUBLIC

//! Defines empty InterfaceModel, ready to be filled <br>
OCInterface_InterfaceModel();

//! Sets a Protocol for this Model <br>
//!           It is also set by a call to AddWithRefs with Protocol <br>
//!           It is used for : DumpHeader (as required), ClearEntities ... <br>
 /*instead*/  void SetProtocol(OCNaroWrappers::OCInterface_Protocol^ proto) ;

//! Returns the Protocol which has been set by SetProtocol, or <br>
//!           AddWithRefs with Protocol <br>
virtual /*instead*/  OCInterface_Protocol^ Protocol() ;

//! Sets a GTool for this model, which already defines a Protocol <br>
 /*instead*/  void SetGTool(OCNaroWrappers::OCInterface_GTool^ gtool) ;

//! Returns the GTool, set by SetProtocol or by SetGTool <br>
 /*instead*/  OCInterface_GTool^ GTool() ;

//! Returns the Dispatch Status, either for get or set <br>
//!           A Model which is produced from Dispatch may share entities <br>
//!           with the original (according to the Protocol), hence these <br>
//!           non-copied entities should not be deleted <br>
 /*instead*/  System::Boolean DispatchStatus() ;

//! Erases contained data; used when a Model is copied to others : <br>
//!           the new copied ones begin from clear <br>
//!           Clear calls specific method ClearHeader (see below) <br>
virtual /*instead*/  void Clear() ;

//! Clears the entities; uses the general service WhenDelete, in <br>
//!           addition to the standard Memory Manager; can be redefined <br>
virtual /*instead*/  void ClearEntities() ;

//! Returns count of contained Entities <br>
 /*instead*/  Standard_Integer NbEntities() ;

//! Returns True if a Model contains an Entity (for a ReportEntity, <br>
//!           looks for the ReportEntity itself AND its Concerned Entity) <br>
 /*instead*/  System::Boolean Contains(OCNaroWrappers::OCStandard_Transient^ anentity) ;

//! Returns the Number of an Entity in the Model if it contains it. <br>
//!           Else returns 0. For a ReportEntity, looks at Concerned Entity. <br>//!  Returns the Directory entry   Number of  an Entity in <br>
//!         the  Model if it contains it.   Else returns  0.  For a <br>
//!         ReportEntity, looks at Concerned Entity. <br>
 /*instead*/  Standard_Integer Number(OCNaroWrappers::OCStandard_Transient^ anentity) ;

//! Returns an Entity identified by its number in the Model <br>
//!           Each sub-class of InterfaceModel can define its own method <br>
//!           Entity to return its specific class of Entity (e.g. for VDA, <br>
//!           VDAModel returns a VDAEntity), working by calling Value <br>
//! Remark : For a Reported Entity, (Erroneous, Corrected, Unknown), this <br>
//! 	        method returns this Reported Entity. <br>
//!          See ReportEntity for other questions. <br>
 /*instead*/  OCStandard_Transient^ Value(Standard_Integer num) ;

//! Returns the count of DISTINCT types under which an entity may <br>
//!           be processed. Defined by the Protocol, which gives default as <br>
//!           1 (dynamic Type). <br>
 /*instead*/  Standard_Integer NbTypes(OCNaroWrappers::OCStandard_Transient^ ent) ;

//! Returns a type, given its rank : defined by the Protocol <br>
//!           (by default, the first one) <br>
 /*instead*/  OCStandard_Type^ Type(OCNaroWrappers::OCStandard_Transient^ ent, Standard_Integer num) ;

//! Returns the type name of an entity, from the list of types <br>
//!           (one or more ...) <br>
//!           <complete> True (D) gives the complete type, else packages are <br>
//!             removed <br>
//!           WARNING : buffered, to be immediately copied or printed <br>
 /*instead*/  System::String^ TypeName(OCNaroWrappers::OCStandard_Transient^ ent, System::Boolean complete) ;

//! From a CDL Type Name, returns the Class part (package dropped) <br>
//!           WARNING : buffered, to be immediately copied or printed <br>
static /*instead*/  System::String^ ClassName(System::String^ typnam) ;

//! Returns the State of an entity, given its number <br>
 /*instead*/  OCInterface_DataState EntityState(Standard_Integer num) ;

//! Returns True if <num> identifies a ReportEntity in the Model <br>
//!           Hence, ReportEntity can be called. <br>
//! <br>
//!           By default, queries main report, if <semantic> is True, it <br>
//!           queries report for semantic check <br>
//! <br>
//!           Remember that a Report Entity can be defined for an Unknown <br>
//!           Entity, or a Corrected or Erroneous (at read time) Entity. <br>
//!           The ReportEntity is defined before call to method AddEntity. <br>
 /*instead*/  System::Boolean IsReportEntity(Standard_Integer num, System::Boolean semantic) ;

//! Returns a ReportEntity identified by its number in the Model, <br>
//!           or a Null Handle If <num> does not identify a ReportEntity. <br>
//! <br>
//!           By default, queries main report, if <semantic> is True, it <br>
//!           queries report for semantic check <br>
 /*instead*/  OCInterface_ReportEntity^ ReportEntity(Standard_Integer num, System::Boolean semantic) ;

//! Returns True if <num> identifies an Error Entity : in this <br>
//!           case, a ReportEntity brings Fail Messages and possibly an <br>
//!           "undefined" Content, see IsRedefinedEntity <br>
 /*instead*/  System::Boolean IsErrorEntity(Standard_Integer num) ;

//! Returns True if <num> identifies an Entity which content is <br>
//!           redefined through a ReportEntity (i.e. with literal data only) <br>
//!           This happens when an entity is syntactically erroneous in the <br>
//!           way that its basic content remains empty. <br>
//!           For more details (such as content itself), see ReportEntity <br>
 /*instead*/  System::Boolean IsRedefinedContent(Standard_Integer num) ;

//! Removes the ReportEntity attached to Entity <num>. Returns <br>
//!           True if done, False if no ReportEntity was attached to <num>. <br>
//!  Warning : the caller must assume that this clearing is meaningfull <br>
 /*instead*/  System::Boolean ClearReportEntity(Standard_Integer num) ;

//! Sets or Replaces a ReportEntity for the Entity <num>. Returns <br>
//!           True if Report is replaced, False if it has been replaced <br>
//!  Warning : the caller must assume that this setting is meaningfull <br>
 /*instead*/  System::Boolean SetReportEntity(Standard_Integer num, OCNaroWrappers::OCInterface_ReportEntity^ rep) ;

//! Adds a ReportEntity as such. Returns False if the concerned <br>
//!           entity is not recorded in the Model <br>
//!           Else, adds it into, either the main report list or the <br>
//!           list for semantic checks, then returns True <br>
 /*instead*/  System::Boolean AddReportEntity(OCNaroWrappers::OCInterface_ReportEntity^ rep, System::Boolean semantic) ;

//! Returns True if <num> identifies an Unknown Entity : in this <br>
//!           case, a ReportEntity with no Check Messages designates it. <br>
 /*instead*/  System::Boolean IsUnknownEntity(Standard_Integer num) ;

//! Fills the list of semantic checks. <br>
//!           This list is computed (by CheckTool). Hence, it can be stored <br>
//!           in the model for later queries <br>
//!           <clear> True (D) : new list replaces <br>
//!           <clear> False    : new list is cumulated <br>
 /*instead*/  void FillSemanticChecks(OCNaroWrappers::OCInterface_CheckIterator^ checks, System::Boolean clear) ;

//! Returns True if semantic checks have been filled <br>
 /*instead*/  System::Boolean HasSemanticChecks() ;

//! Returns the check attached to an entity, designated by its <br>
//!           Number. 0 for global check <br>
//!           <semantic> True  : recorded semantic check <br>
//!           <semantic> False : recorded syntactic check (see ReportEntity) <br>
//!           If no check is recorded for <num>, returns an empty Check <br>
 /*instead*/  OCInterface_Check^ Check(Standard_Integer num, System::Boolean syntactic) ;

//! Does a reservation for the List of Entities (for optimized <br>
//!           storage management). If it is not called, storage management <br>
//!           can be less efficient. <nbent> is the expected count of <br>
//!           Entities to store <br>
virtual /*instead*/  void Reservate(Standard_Integer nbent) ;

//! Internal method for adding an Entity. Used by file reading <br>
//!           (defined by each Interface) and Transfer tools. It adds the <br>
//!           entity required to be added, not its refs : see AddWithRefs. <br>
//!           If <anentity> is a ReportEntity, it is added to the list of <br>
//!           Reports, its Concerned Entity (Erroneous or Corrected, else <br>
//!           Unknown) is added to the list of Entities. <br>
//!           That is, the ReportEntity must be created before Adding <br>
virtual /*instead*/  void AddEntity(OCNaroWrappers::OCStandard_Transient^ anentity) ;

//! Adds to the Model, an Entity with all its References, as they <br>
//!           are defined by General Services FillShared and ListImplied. <br>
//!           Process is recursive (any sub-levels) if <level> = 0 (Default) <br>
//!           Else, adds sub-entities until the required sub-level. <br>
//!           Especially, if <level> = 1, adds immediate subs and that's all <br>
//! <br>
//!           If <listall> is False (Default), an entity (<anentity> itself <br>
//!           or one of its subs at any level) which is already recorded in <br>
//!           the Model is not analysed, only the newly added ones are. <br>
//!           If <listall> is True, all items are analysed (this allows to <br>
//!           ensure the consistency of an adding made by steps) <br>
 /*instead*/  void AddWithRefs(OCNaroWrappers::OCStandard_Transient^ anent, OCNaroWrappers::OCInterface_Protocol^ proto, Standard_Integer level, System::Boolean listall) ;

//! Same as above, but works with the Protocol of the Model <br>
 /*instead*/  void AddWithRefs(OCNaroWrappers::OCStandard_Transient^ anent, Standard_Integer level, System::Boolean listall) ;

//! Same as above, but works with an already created GeneralLib <br>
 /*instead*/  void AddWithRefs(OCNaroWrappers::OCStandard_Transient^ anent, OCNaroWrappers::OCInterface_GeneralLib^ lib, Standard_Integer level, System::Boolean listall) ;

//! Replace Entity with Number=nument on other entity - "anent" <br>
 /*instead*/  void ReplaceEntity(Standard_Integer nument, OCNaroWrappers::OCStandard_Transient^ anent) ;

//! Reverses the Numbers of the Entities, between <after> and the <br>
//!           total count of Entities. Thus, the entities : <br>
//!           1,2 ... after, after+1 ... nb-1, nb  become numbered as : <br>
//!           1,2 ... after, nb, nb-1 ... after+1 <br>
//!           By default (after = 0) the whole list of Entities is reversed <br>
 /*instead*/  void ReverseOrders(Standard_Integer after) ;

//! Changes the Numbers of some Entities : <oldnum> is moved to <br>
//!           <newnum>, same for <count> entities. Thus : <br>
//!           1,2 ... newnum-1 newnum ... oldnum .. oldnum+count oldnum+count+1 .. gives <br>
//!           1,2 ... newnum-1 oldnum .. oldnum+count newnum ... oldnum+count+1 <br>
//!           (can be seen as a circular permutation) <br>
 /*instead*/  void ChangeOrder(Standard_Integer oldnum, Standard_Integer newnum, Standard_Integer count) ;

//! Gets contents from an EntityIterator, prepared by a <br>
//!           Transfer tool (e.g TransferCopy). Starts from clear <br>
 /*instead*/  void GetFromTransfer(OCNaroWrappers::OCInterface_EntityIterator^ aniter) ;

//! Records a category number for an entity number <br>
//!           Returns True when done, False if <num> is out of range <br>
 /*instead*/  System::Boolean SetCategoryNumber(Standard_Integer num, Standard_Integer val) ;

//! Returns the recorded category number for a given entity number <br>
//!           0 if none was defined for this entity <br>
 /*instead*/  Standard_Integer CategoryNumber(Standard_Integer num) ;

//! Allows an EntityIterator to get a list of Entities <br>
 /*instead*/  void FillIterator(OCNaroWrappers::OCInterface_EntityIterator^ iter) ;

//! Returns the list of all Entities, as an Iterator on Entities <br>
//!           (the Entities themselves, not the Reports) <br>
 /*instead*/  OCInterface_EntityIterator^ Entities() ;

//! Returns the list of all ReportEntities, i.e. data about <br>
//!           Entities read with Error or Warning informations <br>
//!           (each item has to be casted to Report Entity then it can be <br>
//!           queried for Concerned Entity, Content, Check ...) <br>
//!           By default, returns the main reports, is <semantic> is True it <br>
//!           returns the list for sematic checks <br>
 /*instead*/  OCInterface_EntityIterator^ Reports(System::Boolean semantic) ;

//! Returns the list of ReportEntities which redefine data <br>
//!           (generally, if concerned entity is "Error", a literal content <br>
//!           is added to it : this is a "redefined entity" <br>
 /*instead*/  OCInterface_EntityIterator^ Redefineds() ;

//! Returns the GlobalCheck, which memorizes messages global to <br>
//!           the file (not specific to an Entity), especially Header <br>
 /*instead*/  OCInterface_Check^ GlobalCheck(System::Boolean syntactic) ;

//! Allows to modify GlobalCheck, after getting then completing it <br>
//!           Remark : it is SYNTACTIC check. Semantics, see FillChecks <br>
 /*instead*/  void SetGlobalCheck(OCNaroWrappers::OCInterface_Check^ ach) ;

//! Minimum Semantic Global Check on data in model (header) <br>
//!           Can only check basic Data. See also GlobalCheck from Protocol <br>
//!           for a check which takes the Graph into account <br>
//!           Default does nothing, can be redefined <br>
virtual /*instead*/  void VerifyCheck(OCNaroWrappers::OCInterface_Check^ ach) ;

//! Prints identification of a given entity in <me>, in order to <br>
//!           be printed in a list or phrase <br>
//!           <mode> < 0 : prints only its number <br>
//!           <mode> = 1 : just calls PrintLabel <br>
//!           <mode> = 0 (D) : prints its number plus '/' plus PrintLabel <br>
//!           If <ent> == <me>, simply prints "Global" <br>
//!           If <ent> is unknown, prints "??/its type" <br>
 /*instead*/  void Print(OCNaroWrappers::OCStandard_Transient^ ent, OCNaroWrappers::OCMessage_Messenger^ s, Standard_Integer mode) ;

//! Prints label specific to each norm in log format, for <br>
//!         a given entity. <br>
//!         By default, just calls PrintLabel, can be redefined <br>
virtual /*instead*/  void PrintToLog(OCNaroWrappers::OCStandard_Transient^ ent, OCNaroWrappers::OCMessage_Messenger^ S) ;

//! Searches a label which matches with one entity. <br>
//!           Begins from <lastnum>+1 (default:1) and scans the entities <br>
//!           until <NbEntities>. For the first which matches <label>, <br>
//!           this method returns its Number. Returns 0 if nothing found <br>
//!           Can be called recursively (labels are not specified as unique) <br>
//!           <exact> : if True (default), exact match is required <br>
//!           else, checks the END of entity label <br>
//! <br>
//!           This method is virtual, hence it can be redefined for a more <br>
//!           efficient search (if exact is true). <br>
virtual /*instead*/  Standard_Integer NextNumberForLabel(System::String^ label, Standard_Integer lastnum, System::Boolean exact) ;

//! Returns true if a template is attached to a given name <br>
static /*instead*/  System::Boolean HasTemplate(System::String^ name) ;

//! Returns the template model attached to a name, or a Null Handle <br>
static /*instead*/  OCInterface_InterfaceModel^ Template(System::String^ name) ;

//! Records a new template model with a name. If the name was <br>
//!           already recorded, the corresponding template is replaced by <br>
//!           the new one. Then, WARNING : test HasTemplate to avoid <br>
//!           surprises <br>
static /*instead*/  System::Boolean SetTemplate(System::String^ name, OCNaroWrappers::OCInterface_InterfaceModel^ model) ;

//! Returns the complete list of names attached to template models <br>
static /*instead*/  OCTColStd_HSequenceOfHAsciiString^ ListTemplates() ;

~OCInterface_InterfaceModel()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
