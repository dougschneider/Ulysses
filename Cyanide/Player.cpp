#include "Player.h"

std::map<int, Player*> Player::playerMap;

Player* Player::getPlayer(BWAPI::Player* player)
{
    if(playerMap.find(player->getID()) == playerMap.end())
        playerMap.insert(std::pair<int, Player*>(player->getID(), new Player(player)));

    return playerMap[player->getID()];
}

Player* Player::self()
{
    return getPlayer(BWAPI::Broodwar->self());
}

void Player::emptyCache()
{
    std::map<int, Player*>::iterator it = playerMap.begin(), end = playerMap.end();
    for(; it != end; ++it)
	{
        delete it->second;
        it->second = 0;
	}
    playerMap.clear();
}

Player::Player(BWAPI::Player* player) :
    player(player)
{
}

bool Player::operator==(const Player& player) const
{
    return this->player->getID() == player.player->getID();
}