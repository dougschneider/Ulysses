#pragma once

#include <BWAPI.h>
#include "Common.h"
#include "BaseLocation.h"

class BaseLocation;

class Player
{
public:
    static Player* getPlayer(BWAPI::Player* player);
    static Player* self();
    static void emptyCache();

    bool operator==(const Player& player) const;

    BaseLocation* getStartLocation();

private:
    static std::map<int, Player*> playerMap;

    Player(BWAPI::Player* player);

    BWAPI::Player* player;
};