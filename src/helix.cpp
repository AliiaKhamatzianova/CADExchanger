
#include "helix.h"
#include <math.h>

Helix::Helix(DotType radius, DotType slope):
   m_center(0,0,0),
   m_radius(fabs(radius)),
   m_slope(fabs(slope))

{

}

Helix::Helix(const Point& center, DotType radius, DotType slope):
   m_center(center),
   m_radius(fabs(radius)),
   m_slope(fabs(slope))
{

}

Helix::~Helix()
{

}

Point Helix::getPointByAngle(AngleType angle) const
{
   return Point (m_radius * cos(angle), m_slope * angle, m_radius * sin(angle)) + m_center;
}

Point Helix::getDerivativeByAngle(AngleType angle) const
{
   return Point (-m_radius * sin(angle),  m_slope , m_radius * cos(angle)) ;
}