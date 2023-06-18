#ifndef CONSTANTS_H
#define CONSTANTS_H

using DotType = double;
using AngleType = double; 

enum class ECurves
{
   circle = 0,
   ellipse = 1,
   helix = 2,

   count
};


constexpr DotType MIN_RADIUS = 1;
constexpr DotType MAX_RADIUS = 100;

constexpr DotType MIN_A = 1;
constexpr DotType MAX_A = 100;

constexpr DotType MIN_B = 1;
constexpr DotType MAX_B = 100;

constexpr DotType MIN_SLOPE = 1;
constexpr DotType MAX_SLOPE = 10;



#endif