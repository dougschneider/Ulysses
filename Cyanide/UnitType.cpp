#include "UnitType.h"

std::map<int, UnitType*> UnitType::unitTypeMap;

UnitType* UnitType::getUnitType(BWAPI::UnitType unitType)
{
    if(unitTypeMap.find(unitType.getID()) == unitTypeMap.end())
        unitTypeMap.insert(std::pair<int, UnitType*>(unitType.getID(), new UnitType(unitType)));

    return unitTypeMap[unitType.getID()];
}

void UnitType::emptyCache()
{
    std::map<int, UnitType*>::iterator it = unitTypeMap.begin(), end = unitTypeMap.end();
    for(; it != end; ++it)
	{
        delete it->second;
        it->second = 0;
	}
    unitTypeMap.clear();
}

UnitType::UnitType(BWAPI::UnitType unitType) :
    unitType(unitType)
{
}

bool UnitType::isWorker() const
{
	return unitType.isWorker();
}

bool UnitType::isMineralField() const
{
    return unitType.isMineralField();
}