#ifndef CURVE_H
#define CURVE_H

#include "point.h"



class Curve
{
public:
   virtual Point getPointByAngle(AngleType angle) const = 0;
   virtual Point getDerivativeByAngle(AngleType angle) const = 0;
};




#endif