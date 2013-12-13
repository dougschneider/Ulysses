#include "CyanideAIModule.h"

#include "Unit.h"
#include "Player.h"
#include "UnitType.h"

void CyanideAIModule::onStart()
{
    BWAPI::Broodwar->enableFlag(BWAPI::Flag::UserInput);
}

void CyanideAIModule::onEnd(bool isWinner)
{
    Player::emptyCache();
    Unit::emptyCache();
	UnitType::emptyCache();
}

void CyanideAIModule::onFrame()
{
}

void CyanideAIModule::onSendText(std::string text)
{
}

void CyanideAIModule::onReceiveText(BWAPI::Player* player, std::string text)
{
}

void CyanideAIModule::onPlayerLeft(BWAPI::Player* player)
{
}

void CyanideAIModule::onNukeDetect(BWAPI::Position target)
{
}

void CyanideAIModule::onUnitDiscover(BWAPI::Unit* unit)
{
}

void CyanideAIModule::onUnitEvade(BWAPI::Unit* unit)
{
}

void CyanideAIModule::onUnitShow(BWAPI::Unit* unit)
{
}

void CyanideAIModule::onUnitHide(BWAPI::Unit* unit)
{
}

void CyanideAIModule::onUnitCreate(BWAPI::Unit* unit)
{
}

void CyanideAIModule::onUnitDestroy(BWAPI::Unit* unit)
{
    WorkerManager::Instance().onUnitDestroy(Unit::getUnit(unit));
}

void CyanideAIModule::onUnitMorph(BWAPI::Unit* unit)
{
    WorkerManager::Instance().onUnitMorph(Unit::getUnit(unit));
}

void CyanideAIModule::onUnitRenegade(BWAPI::Unit* unit)
{
}

void CyanideAIModule::onSaveGame(std::string gameName)
{
}

void CyanideAIModule::onUnitComplete(BWAPI::Unit *unit)
{
    WorkerManager::Instance().onUnitComplete(Unit::getUnit(unit));
}