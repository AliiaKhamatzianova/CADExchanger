#include "point.h"

Point::Point():
   m_x(0.0),
   m_y(0.0),
   m_z(0.0)
{

}

Point::Point(DotType x, DotType y, DotType z):
   m_x(x),
   m_y(y),
   m_z(z)
{

}

Point::~Point()
{

}

Point operator+(const Point& left, const Point& right) { return Point(left.m_x + right.m_x, left.m_y + right.m_y, left.m_z + right.m_z ); }
Point operator-(const Point& left, const Point& right) { return Point(left.m_x - right.m_x, left.m_y - right.m_y, left.m_z - right.m_z); }