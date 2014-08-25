#include "UlyssesAIModule.h"

#include "ResourceManager.h"

CyanideAIModule* CyanideAIModule::ai = NULL;

void CyanideAIModule::onStart()
{
    BWAPI::Broodwar->enableFlag(BWAPI::Flag::UserInput);

    BWTA::readMap();
    BWTA::analyze();

    // initialize the managers so they recieve all event notifications
    WorkerManager::Instance();
    ResourceManager::Instance();

    Observable::notifyObserversOfStart();
}

void CyanideAIModule::onEnd(bool isWinner)
{
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
    Observable::notifyObserversOfReceiveText(player, text);
}

void CyanideAIModule::onPlayerLeft(BWAPI::Player* player)
{
    Observable::notifyObserversOfPlayerLeft(player);
}

void CyanideAIModule::onNukeDetect(BWAPI::Position target)
{
    Observable::notifyObserversOfNukeDetect(BWAPI::Position(target));
}

void CyanideAIModule::onUnitDiscover(BWAPI::Unit* unit)
{
    Observable::notifyObserversOfUnitDiscover(unit);
}

void CyanideAIModule::onUnitEvade(BWAPI::Unit* unit)
{
    Observable::notifyObserversOfUnitEvade(unit);
}

void CyanideAIModule::onUnitShow(BWAPI::Unit* unit)
{
    Observable::notifyObserversOfUnitShow(unit);
}

void CyanideAIModule::onUnitHide(BWAPI::Unit* unit)
{
    Observable::notifyObserversOfUnitHide(unit);
}

void CyanideAIModule::onUnitCreate(BWAPI::Unit* unit)
{
    Observable::notifyObserversOfUnitCreate(unit);
}

void CyanideAIModule::onUnitDestroy(BWAPI::Unit* unit)
{
    Observable::notifyObserversOfUnitDestroy(unit);
}

void CyanideAIModule::onUnitMorph(BWAPI::Unit* unit)
{
    Observable::notifyObserversOfUnitMorph(unit);
}

void CyanideAIModule::onUnitRenegade(BWAPI::Unit* unit)
{
    Observable::notifyObserversOfUnitRenegade(unit);
}

void CyanideAIModule::onSaveGame(std::string gameName)
{
    Observable::notifyObserversOfSaveGame(gameName);
}

void CyanideAIModule::onUnitComplete(BWAPI::Unit *unit)
{
    Observable::notifyObserversOfUnitComplete(unit);
}