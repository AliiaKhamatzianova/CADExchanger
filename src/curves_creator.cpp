#include "curves_creator.h"
#include "random_getter.h"
#include "circle.h"
#include "ellipse.h"
#include "helix.h"


CurveCreator::CurveCreator()
{
   m_creator[ECurves::circle] = []() {
       return std::static_pointer_cast<Curve>(std::make_shared<Circle>(random<DotType>(MIN_RADIUS, MAX_RADIUS))); 
   };
   m_creator[ECurves::ellipse] = []() {
       return std::static_pointer_cast<Curve>(
        std::make_shared<Ellipse>(random<DotType>(MIN_A, MAX_A), random<DotType>(MIN_B, MAX_B))); 
   };
   m_creator[ECurves::helix] = []() {
       return std::static_pointer_cast<Curve>(
        std::make_shared<Helix>(random<DotType>(MIN_RADIUS, MAX_RADIUS), random<DotType>(MIN_SLOPE, MAX_SLOPE)));
   };
}


Container CurveCreator::getCurvesList()
{
   auto minCount = 10u;
   auto maxCount = 30u;

   auto count = random<unsigned int>(minCount, maxCount);

   Container container;

   for(decltype(count) i = 0; i < count; ++i)
   {
       auto type = static_cast<ECurves>(random<int>(static_cast<int>(ECurves::circle) , static_cast<int>(ECurves::count) - 1));
       container.push_back(m_creator.at(type)());
   }

   return container;
}