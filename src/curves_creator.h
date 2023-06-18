#ifndef CURVES_CREATOR
#define CURVES_CREATOR

#include <unordered_map>
#include <functional>
#include <memory>
#include <list>
#include "constants.h"

class Curve;
using Container = std::list<std::shared_ptr<Curve>>;

class CurveCreator
{
public:
	CurveCreator();
	Container getCurvesList();

private:
	std::unordered_map<ECurves, std::function<std::shared_ptr<Curve>()>> m_creator;
};

#endif