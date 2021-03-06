// File generated by CPPExt (CPP file)
//

#include "GCE2d_MakeParabola.h"
#include "../Converter.h"
#include "../Geom2d/Geom2d_Parabola.h"
#include "../gp/gp_Parab2d.h"
#include "../gp/gp_Ax22d.h"
#include "../gp/gp_Ax2d.h"
#include "../gp/gp_Pnt2d.h"


using namespace OCNaroWrappers;

OCGCE2d_MakeParabola::OCGCE2d_MakeParabola(GCE2d_MakeParabola* nativeHandle) : OCGCE2d_Root((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCGCE2d_MakeParabola::OCGCE2d_MakeParabola(OCNaroWrappers::OCgp_Parab2d^ Prb) : OCGCE2d_Root((OCDummy^)nullptr)

{
  nativeHandle = new GCE2d_MakeParabola(*((gp_Parab2d*)Prb->Handle));
}

OCGCE2d_MakeParabola::OCGCE2d_MakeParabola(OCNaroWrappers::OCgp_Ax22d^ Axis, Standard_Real Focal) : OCGCE2d_Root((OCDummy^)nullptr)

{
  nativeHandle = new GCE2d_MakeParabola(*((gp_Ax22d*)Axis->Handle), Focal);
}

OCGCE2d_MakeParabola::OCGCE2d_MakeParabola(OCNaroWrappers::OCgp_Ax2d^ MirrorAxis, Standard_Real Focal, System::Boolean Sense) : OCGCE2d_Root((OCDummy^)nullptr)

{
  nativeHandle = new GCE2d_MakeParabola(*((gp_Ax2d*)MirrorAxis->Handle), Focal, OCConverter::BooleanToStandardBoolean(Sense));
}

OCGCE2d_MakeParabola::OCGCE2d_MakeParabola(OCNaroWrappers::OCgp_Ax22d^ D, OCNaroWrappers::OCgp_Pnt2d^ F) : OCGCE2d_Root((OCDummy^)nullptr)

{
  nativeHandle = new GCE2d_MakeParabola(*((gp_Ax22d*)D->Handle), *((gp_Pnt2d*)F->Handle));
}

OCGCE2d_MakeParabola::OCGCE2d_MakeParabola(OCNaroWrappers::OCgp_Ax2d^ D, OCNaroWrappers::OCgp_Pnt2d^ F, System::Boolean Sense) : OCGCE2d_Root((OCDummy^)nullptr)

{
  nativeHandle = new GCE2d_MakeParabola(*((gp_Ax2d*)D->Handle), *((gp_Pnt2d*)F->Handle), OCConverter::BooleanToStandardBoolean(Sense));
}

OCGCE2d_MakeParabola::OCGCE2d_MakeParabola(OCNaroWrappers::OCgp_Pnt2d^ S1, OCNaroWrappers::OCgp_Pnt2d^ O) : OCGCE2d_Root((OCDummy^)nullptr)

{
  nativeHandle = new GCE2d_MakeParabola(*((gp_Pnt2d*)S1->Handle), *((gp_Pnt2d*)O->Handle));
}

OCGeom2d_Parabola^ OCGCE2d_MakeParabola::Value()
{
  Handle(Geom2d_Parabola) tmp = ((GCE2d_MakeParabola*)nativeHandle)->Value();
  return gcnew OCGeom2d_Parabola(&tmp);
}

OCGeom2d_Parabola^ OCGCE2d_MakeParabola::Operator()
{
  Handle(Geom2d_Parabola) tmp = ((GCE2d_MakeParabola*)nativeHandle)->Operator();
  return gcnew OCGeom2d_Parabola(&tmp);
}


