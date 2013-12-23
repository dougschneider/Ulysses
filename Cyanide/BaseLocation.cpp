#include "BaseLocation.h"

std::map<BWTA::BaseLocation*, BaseLocation*> BaseLocation::baseLocationMap;

BaseLocation* BaseLocation::getBaseLocation(BWTA::BaseLocation* baseLocation)
{
    if(baseLocationMap.find(baseLocation) == baseLocationMap.end())
        baseLocationMap.insert(std::pair<BWTA::BaseLocation*, BaseLocation*>(baseLocation, new BaseLocation(baseLocation)));

    return baseLocationMap[baseLocation];
}

void BaseLocation::emptyCache()
{
    std::map<BWTA::BaseLocation*, BaseLocation*>::iterator it = baseLocationMap.begin(), end = baseLocationMap.end();
    for(; it != end; ++it)
	{
        delete it->second;
        it->second = 0;
	}
    baseLocationMap.clear();
}

BaseLocation::BaseLocation(BWTA::BaseLocation* baseLocation) :
    baseLocation(baseLocation)
{
}

std::set<Unit*> BaseLocation::getStaticMinerals()
{
    std::set<Unit*> staticMinerals;
    BOOST_FOREACH(BWAPI::Unit* unit, baseLocation->getStaticMinerals())
	{
        staticMinerals.insert(Unit::getUnit(unit));
	}
    return staticMinerals;
}