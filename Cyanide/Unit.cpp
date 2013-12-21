#include "Unit.h"

std::map<int, Unit*> Unit::unitMap;

Unit* Unit::getUnit(BWAPI::Unit* unit)
{
    if(unitMap.find(unit->getID()) == unitMap.end())
        unitMap.insert(std::pair<int, Unit*>(unit->getID(), new Unit(unit)));

    return unitMap[unit->getID()];
}

void Unit::emptyCache()
{
    std::map<int, Unit*>::iterator it = unitMap.begin(), end = unitMap.end();
    for(; it != end; ++it)
	{
        delete it->second;
        it->second = 0;
	}
    unitMap.clear();
}

Unit::Unit(BWAPI::Unit* unit) :
    unit(unit)
{
}

const UnitType& Unit::getType() const
{
    return *UnitType::getUnitType(unit->getType());
}

const Player& Unit::getPlayer() const
{
    return *Player::getPlayer(unit->getPlayer());
}

int Unit::getResources() const
{
    return unit->getResources();
}

void Unit::gather(Unit* target)
{
    unit->gather(target->unit);
}

bool Unit::isGatheringMinerals()
{
    return unit->isGatheringMinerals();
}

void Unit::stop()
{
    unit->stop();
}