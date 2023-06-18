#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "curve.h"
#include "point.h"

class Ellipse : public Curve
{
public:
   Ellipse(DotType radius1, DotType radius2);
   Ellipse(const Point& center, DotType radius1, DotType radius2);
   
   virtual ~Ellipse();

   Point getPointByAngle(AngleType angle) const override final;
   Point getDerivativeByAngle(AngleType angle) const override final;


private:
   Point m_center;
   DotType m_A = 0;
   DotType m_B = 0;
   
};





#endif