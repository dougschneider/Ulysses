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
    type = UnitType::getUnitType(unit->getType());
    player = Player::getPlayer(unit->getPlayer());
}

const UnitType& Unit::getType() const
{
    return *type;
}

const Player& Unit::getPlayer() const
{
    return *player;
}

int Unit::getResources() const
{
    return unit->getResources();
}

void Unit::gather(Unit* target)
{
    unit->gather(target->unit);
}

void Unit::stop()
{
    unit->stop();
}