#ifndef CIRCLE_H
#define CIRCLE_H

#include "curve.h"
#include "point.h"

class Circle : public Curve
{
public:
   Circle(DotType radius);
   Circle(const Point& center, DotType radius);
   
   virtual ~Circle();

   Point getPointByAngle(AngleType angle) const override final;
   Point getDerivativeByAngle(AngleType angle) const override final;
   DotType getRadius() const;
   
private:
   Point m_center;
   DotType m_radius = 0;
   
};





#endif