#pragma once

#include <BWTA.h>
#include "Common.h"
#include "Unit.h"

class Unit;

class BaseLocation
{
public:
    static BaseLocation* getBaseLocation(BWTA::BaseLocation* baseLocation);
    static void emptyCache();

	BaseLocation(BWTA::BaseLocation* baseLocation);

    std::set<Unit*> getStaticMinerals();

private:
    static std::map<BWTA::BaseLocation*, BaseLocation*> baseLocationMap;

    BWTA::BaseLocation* baseLocation;
};