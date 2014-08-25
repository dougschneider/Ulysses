#include "UlyssesAIModule.h"

#include "ResourceManager.h"

UlyssesAIModule* UlyssesAIModule::ai = NULL;

void UlyssesAIModule::onStart()
{
    BWAPI::Broodwar->enableFlag(BWAPI::Flag::UserInput);

    BWTA::readMap();
    BWTA::analyze();

    // initialize the managers so they recieve all event notifications
    WorkerManager::Instance();
    ResourceManager::Instance();

    Observable::notifyObserversOfStart();
}

void UlyssesAIModule::onEnd(bool isWinner)
{
    Observable::notifyObserversOfEnd(isWinner);
}

void UlyssesAIModule::onFrame()
{
    Observable::notifyObserversOfFrame();
}

void UlyssesAIModule::onSendText(std::string text)
{
    Observable::notifyObserversOfSendText(text);
}

void UlyssesAIModule::onReceiveText(BWAPI::Player* player, std::string text)
{
    Observable::notifyObserversOfReceiveText(player, text);
}

void UlyssesAIModule::onPlayerLeft(BWAPI::Player* player)
{
    Observable::notifyObserversOfPlayerLeft(player);
}

void UlyssesAIModule::onNukeDetect(BWAPI::Position target)
{
    Observable::notifyObserversOfNukeDetect(BWAPI::Position(target));
}

void UlyssesAIModule::onUnitDiscover(BWAPI::Unit* unit)
{
    Observable::notifyObserversOfUnitDiscover(unit);
}

void UlyssesAIModule::onUnitEvade(BWAPI::Unit* unit)
{
    Observable::notifyObserversOfUnitEvade(unit);
}

void UlyssesAIModule::onUnitShow(BWAPI::Unit* unit)
{
    Observable::notifyObserversOfUnitShow(unit);
}

void UlyssesAIModule::onUnitHide(BWAPI::Unit* unit)
{
    Observable::notifyObserversOfUnitHide(unit);
}

void UlyssesAIModule::onUnitCreate(BWAPI::Unit* unit)
{
    Observable::notifyObserversOfUnitCreate(unit);
}

void UlyssesAIModule::onUnitDestroy(BWAPI::Unit* unit)
{
    Observable::notifyObserversOfUnitDestroy(unit);
}

void UlyssesAIModule::onUnitMorph(BWAPI::Unit* unit)
{
    Observable::notifyObserversOfUnitMorph(unit);
}

void UlyssesAIModule::onUnitRenegade(BWAPI::Unit* unit)
{
    Observable::notifyObserversOfUnitRenegade(unit);
}

void UlyssesAIModule::onSaveGame(std::string gameName)
{
    Observable::notifyObserversOfSaveGame(gameName);
}

void UlyssesAIModule::onUnitComplete(BWAPI::Unit *unit)
{
    Observable::notifyObserversOfUnitComplete(unit);
}