#include "Observer.h"

void Observer::setObservable(Observable* observable)
{
    this->observable = observable;
}

void Observer::handleStart()
{

}

void Observer::handleEnd(bool isWinner)
{

}

void Observer::handleFrame()
{

}

void Observer::handleSendText(std::string text)
{

}

void Observer::handleReceiveText(Player* player, std::string text)
{

}

void Observer::handlePlayerLeft(Player* player)
{

}

void Observer::handleNukeDetect(Position position)
{

}

void Observer::handleUnitDiscover(Unit* unit)
{

}

void Observer::handleUnitEvade(Unit* unit)
{

}

void Observer::handleUnitShow(Unit* unit)
{

}

void Observer::handleUnitHide(Unit* unit)
{

}

void Observer::handleUnitCreate(Unit* unit)
{

}

void Observer::handleUnitDestroy(Unit* unit)
{

}

void Observer::handleUnitMorph(Unit* unit)
{

}

void Observer::handleUnitRenegade(Unit* unit)
{

}

void Observer::handleSaveGame(std::string gameName)
{

}

void Observer::handleUnitComplete(Unit* unit)
{
}