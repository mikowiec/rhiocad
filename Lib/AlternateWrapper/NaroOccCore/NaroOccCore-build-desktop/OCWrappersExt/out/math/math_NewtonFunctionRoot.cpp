// File generated by CPPExt (CPP file)
//

#include "math_NewtonFunctionRoot.h"
#include "../Converter.h"
#include "math_FunctionWithDerivative.h"


using namespace OCNaroWrappers;

OCmath_NewtonFunctionRoot::OCmath_NewtonFunctionRoot(math_NewtonFunctionRoot* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCmath_NewtonFunctionRoot::OCmath_NewtonFunctionRoot(OCNaroWrappers::OCmath_FunctionWithDerivative^ F, Standard_Real Guess, Standard_Real EpsX, Standard_Real EpsF, Standard_Integer NbIterations) 
{
  nativeHandle = new math_NewtonFunctionRoot(*((math_FunctionWithDerivative*)F->Handle), Guess, EpsX, EpsF, NbIterations);
}

OCmath_NewtonFunctionRoot::OCmath_NewtonFunctionRoot(OCNaroWrappers::OCmath_FunctionWithDerivative^ F, Standard_Real Guess, Standard_Real EpsX, Standard_Real EpsF, Standard_Real A, Standard_Real B, Standard_Integer NbIterations) 
{
  nativeHandle = new math_NewtonFunctionRoot(*((math_FunctionWithDerivative*)F->Handle), Guess, EpsX, EpsF, A, B, NbIterations);
}

OCmath_NewtonFunctionRoot::OCmath_NewtonFunctionRoot(Standard_Real A, Standard_Real B, Standard_Real EpsX, Standard_Real EpsF, Standard_Integer NbIterations) 
{
  nativeHandle = new math_NewtonFunctionRoot(A, B, EpsX, EpsF, NbIterations);
}

 void OCmath_NewtonFunctionRoot::Perform(OCNaroWrappers::OCmath_FunctionWithDerivative^ F, Standard_Real Guess)
{
  ((math_NewtonFunctionRoot*)nativeHandle)->Perform(*((math_FunctionWithDerivative*)F->Handle), Guess);
}

 System::Boolean OCmath_NewtonFunctionRoot::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((math_NewtonFunctionRoot*)nativeHandle)->IsDone());
}

 Standard_Real OCmath_NewtonFunctionRoot::Root()
{
  return ((math_NewtonFunctionRoot*)nativeHandle)->Root();
}

 Standard_Real OCmath_NewtonFunctionRoot::Derivative()
{
  return ((math_NewtonFunctionRoot*)nativeHandle)->Derivative();
}

 Standard_Real OCmath_NewtonFunctionRoot::Value()
{
  return ((math_NewtonFunctionRoot*)nativeHandle)->Value();
}

 Standard_Integer OCmath_NewtonFunctionRoot::NbIterations()
{
  return ((math_NewtonFunctionRoot*)nativeHandle)->NbIterations();
}

 void OCmath_NewtonFunctionRoot::Dump(Standard_OStream& o)
{
  ((math_NewtonFunctionRoot*)nativeHandle)->Dump(o);
}

