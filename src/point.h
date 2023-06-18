#ifndef POINT_H
#define POINT_H

#include "constants.h"

struct Point
{
   DotType m_x = 0;
   DotType m_y = 0;
   DotType m_z = 0;
   
   Point();
   Point(DotType x, DotType y, DotType z);
   ~Point();

   friend Point operator+(const Point& left, const Point& right);
   friend Point operator-(const Point& left, const Point& right);
};



#endif