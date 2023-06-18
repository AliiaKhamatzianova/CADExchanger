#include "ellipse.h"
#include <math.h>

Ellipse::Ellipse(DotType a, DotType b) :
m_center(0,0,0),
m_A(fabs(a)),
m_B(fabs(b))
{


}

Ellipse::Ellipse(const Point& center, DotType a, DotType b):
   m_center(center),
   m_A(fabs(a)),
   m_B(fabs(b))
{

}

Ellipse::~Ellipse()
{

}

Point Ellipse::getPointByAngle(AngleType angle) const
{
   return Point(m_A * cos(angle), m_B * sin(angle), 0) + m_center;
}


Point Ellipse::getDerivativeByAngle(AngleType angle) const
{
   return Point(-m_A * sin(angle), m_B * cos(angle), 0);
}

