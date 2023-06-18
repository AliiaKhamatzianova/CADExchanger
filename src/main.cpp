
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <math.h>
#include <corecrt_math_defines.h>

#include "ellipse.h"
#include "circle.h"
#include "helix.h"
#include "curves_creator.h"


int main(int argc, char* argv[])
{
    CurveCreator curveCreator;

    auto container = curveCreator.getCurvesList();
    
    std::list<std::shared_ptr<Curve>> circles;
    std::copy_if(container.begin(), container.end(),
                 std::back_inserter(circles),
                 [](auto curve) { return std::dynamic_pointer_cast<Circle>(curve); });

    DotType t = M_PI / 4;
    std::for_each(std::begin(container), std::end(container), [t](auto curve) {
        auto pt = curve->getPointByAngle(t);
        auto der = curve->getDerivativeByAngle(t);
        std::cout << "Point {" << pt.m_x << "," << pt.m_y << "," << pt.m_z <<"}" << std::endl;
        std::cout << "Derivative {" << der.m_x << "," << der.m_y << "," << der.m_z << "}" << std::endl;
        });


    circles.sort([](std::shared_ptr<Curve> l, std::shared_ptr<Curve> r) {
            return std::static_pointer_cast<Circle>(l)->getRadius() < std::static_pointer_cast<Circle>(r)->getRadius();
        });

    DotType sum = 0;
    std::for_each(std::begin(circles), std::end(circles),
        [&sum](auto curve) {sum += std::static_pointer_cast<Circle>(curve)->getRadius(); });

    std::cout << "sum = " << sum << std::endl;

    return 0;
}