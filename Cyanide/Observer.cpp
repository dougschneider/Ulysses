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

void Observer::handleReceiveText(BWAPI::Player* player, std::string text)
{

}

void Observer::handlePlayerLeft(BWAPI::Player* player)
{

}

void Observer::handleNukeDetect(BWAPI::Position position)
{

}

void Observer::handleUnitDiscover(BWAPI::Unit* unit)
{

}

void Observer::handleUnitEvade(BWAPI::Unit* unit)
{

}

void Observer::handleUnitShow(BWAPI::Unit* unit)
{

}

void Observer::handleUnitHide(BWAPI::Unit* unit)
{

}

void Observer::handleUnitCreate(BWAPI::Unit* unit)
{

}

void Observer::handleUnitDestroy(BWAPI::Unit* unit)
{

}

void Observer::handleUnitMorph(BWAPI::Unit* unit)
{

}

void Observer::handleUnitRenegade(BWAPI::Unit* unit)
{

}

void Observer::handleSaveGame(std::string gameName)
{

}

void Observer::handleUnitComplete(BWAPI::Unit* unit)
{
}