#pragma once

#include <BWAPI.h>

class UnitType
{
public:
    static UnitType* getUnitType(BWAPI::UnitType unitType);
    static void emptyCache();

    bool isWorker() const;

private:
    static std::map<int, UnitType*> unitTypeMap;

	UnitType(BWAPI::UnitType unitType);

    BWAPI::UnitType unitType;
};