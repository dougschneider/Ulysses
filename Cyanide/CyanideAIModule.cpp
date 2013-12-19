#include "CyanideAIModule.h"

#include "Player.h"
#include "Position.h"
#include "ResourceManager.h"
#include "Unit.h"
#include "UnitType.h"

void CyanideAIModule::onStart()
{
    BWAPI::Broodwar->enableFlag(BWAPI::Flag::UserInput);

    WorkerManager::Instance().setObservable(this);
    ResourceManager::Instance().setObservable(this);

    Observable::notifyObserversOfStart();
}

void CyanideAIModule::onEnd(bool isWinner)
{
    Player::emptyCache();
    Unit::emptyCache();
	UnitType::emptyCache();

    Observable::notifyObserversOfEnd(isWinner);
}

void CyanideAIModule::onFrame()
{
    Observable::notifyObserversOfFrame();
}

void CyanideAIModule::onSendText(std::string text)
{
    Observable::notifyObserversOfSendText(text);
}

void CyanideAIModule::onReceiveText(BWAPI::Player* player, std::string text)
{
    Observable::notifyObserversOfReceiveText(Player::getPlayer(player), text);
}

void CyanideAIModule::onPlayerLeft(BWAPI::Player* player)
{
    Observable::notifyObserversOfPlayerLeft(Player::getPlayer(player));
}

void CyanideAIModule::onNukeDetect(BWAPI::Position target)
{
    Observable::notifyObserversOfNukeDetect(Position(target));
}

void CyanideAIModule::onUnitDiscover(BWAPI::Unit* unit)
{
    Observable::notifyObserversOfUnitDiscover(Unit::getUnit(unit));
}

void CyanideAIModule::onUnitEvade(BWAPI::Unit* unit)
{
    Observable::notifyObserversOfUnitEvade(Unit::getUnit(unit));
}

void CyanideAIModule::onUnitShow(BWAPI::Unit* unit)
{
    Observable::notifyObserversOfUnitShow(Unit::getUnit(unit));
}

void CyanideAIModule::onUnitHide(BWAPI::Unit* unit)
{
    Observable::notifyObserversOfUnitHide(Unit::getUnit(unit));
}

void CyanideAIModule::onUnitCreate(BWAPI::Unit* unit)
{
    Observable::notifyObserversOfUnitCreate(Unit::getUnit(unit));
}

void CyanideAIModule::onUnitDestroy(BWAPI::Unit* unit)
{
    Observable::notifyObserversOfUnitDestroy(Unit::getUnit(unit));
}

void CyanideAIModule::onUnitMorph(BWAPI::Unit* unit)
{
    Observable::notifyObserversOfUnitMorph(Unit::getUnit(unit));
}

void CyanideAIModule::onUnitRenegade(BWAPI::Unit* unit)
{
    Observable::notifyObserversOfUnitRenegade(Unit::getUnit(unit));
}

void CyanideAIModule::onSaveGame(std::string gameName)
{
    Observable::notifyObserversOfSaveGame(gameName);
}

void CyanideAIModule::onUnitComplete(BWAPI::Unit *unit)
{
    Observable::notifyObserversOfUnitComplete(Unit::getUnit(unit));
}