﻿#region Usings

using System;

//using CleanSolver.SolverSystem;

#endregion

namespace ConstraintsModule.Constraints
{
    public class InternalAngle : ConstraintBase
    {
        public override double Calc()
        {
            var dx = L1.P2.X.Value - L1.P1.X.Value;
            var dy = L1.P2.Y.Value - L1.P1.Y.Value;
            var dx2 = L2.P2.X.Value - L2.P1.X.Value;
            var dy2 = L2.P2.Y.Value - L2.P1.Y.Value;

            var hyp1 = Utils.Hypot(dx, dy);
            var hyp2 = Utils.Hypot(dx2, dy2);

            dx = dx/hyp1;
            dy = dy/hyp1;
            dx2 = dx2/hyp2;
            dy2 = dy2/hyp2;

            var temp = dx*dx2 + dy*dy2;
            var temp2 = Math.Cos(Value);
            return (temp + temp2)*(temp + temp2);
        }
    }
}