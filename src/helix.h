#ifndef HELIX_H
#define HELIX_H

#include "curve.h"
#include "point.h"

class Helix : public Curve
{
public:
   Helix(DotType radius, DotType slope);
   Helix(const Point& center, DotType radius, DotType slope);
   
   virtual ~Helix();

   Point getPointByAngle(AngleType angle) const override final;
   Point getDerivativeByAngle(AngleType angle) const override final;


private:
   Point m_center;
   DotType m_radius = 0;
   DotType m_slope = 0;
   
};





#endif