#include "circle.h"

#include <math.h>



Circle::Circle(const Point &center, DotType radius):
   m_center( center ),
   m_radius( fabs(radius) )
{
}

Circle::Circle(DotType radius):
   m_center(0,0,0),
   m_radius(fabs(radius))
{
}

Circle::~Circle()
{
}

Point Circle::getPointByAngle(AngleType angle) const
{
   return Point( m_radius * cos(angle), m_radius * sin(angle), 0  ) + m_center;
}

Point Circle::getDerivativeByAngle(AngleType angle) const
{
   return Point( -m_radius * sin(angle), m_radius * cos(angle), 0);
}

DotType Circle::getRadius() const
{
	return m_radius;
}
