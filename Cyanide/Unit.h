#pragma once

#include "Common.h"
#include <BWAPI.h>

#include "UnitType.h"
#include "Player.h"

class Unit
{
public:
    static Unit* getUnit(BWAPI::Unit* unit);
    static void emptyCache();

    const UnitType& getType() const;
    const Player& getPlayer() const;
    int getResources() const;

    void gather(Unit* target);
    void stop();

private:
    static std::map<int, Unit*> unitMap;

    Unit(BWAPI::Unit* unit);

    BWAPI::Unit* unit;
};

