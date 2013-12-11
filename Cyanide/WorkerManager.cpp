#include "WorkerManager.h"

WorkerManager& WorkerManager::Instance()
{
    static WorkerManager instance;
    return instance;
}

void WorkerManager::onUnitMorph(BWAPI::Unit* unit)
{
    if(unit->getType().isWorker() && unit->getPlayer() == BWAPI::Broodwar->self())
        workers.insert(unit);
}

void WorkerManager::onUnitComplete(BWAPI::Unit* unit)
{
    if(unit->getType().isWorker() && unit->getPlayer() == BWAPI::Broodwar->self())
        workers.insert(unit);
}

void WorkerManager::onUnitDestroy(BWAPI::Unit* unit)
{
    if(unit->getType().isWorker() && unit->getPlayer() == BWAPI::Broodwar->self())
        workers.erase(unit);
}