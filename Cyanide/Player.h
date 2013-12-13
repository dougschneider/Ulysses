#pragma once

#include <BWAPI.h>
#include "Common.h"

class Player
{
public:
    static Player* getPlayer(BWAPI::Player* player);
    static Player* self();
    static void emptyCache();

    bool operator==(const Player& player) const;

private:
    static std::map<int, Player*> playerMap;

    Player(BWAPI::Player* player);

    BWAPI::Player* player;
};