#include "Game.h"

std::set<Unit*> Game::getAllUnits()
{
    std::set<Unit*> units;
    BOOST_FOREACH(BWAPI::Unit* unit, BWAPI::Broodwar->getAllUnits())
	{
        units.insert(Unit::getUnit(unit));
	}
    return units;
}