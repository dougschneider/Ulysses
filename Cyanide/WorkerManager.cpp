#include "WorkerManager.h"

WorkerManager& WorkerManager::Instance()
{
    static WorkerManager instance;
    return instance;
}

void WorkerManager::onUnitMorph(Unit* unit)
{
    if(unit->getType().isWorker() && unit->getPlayer() == *Player::self())
        workers.insert(unit);
}

void WorkerManager::onUnitComplete(Unit* unit)
{
    if(unit->getType().isWorker() && unit->getPlayer() == *Player::self())
        workers.insert(unit);
}

void WorkerManager::onUnitDestroy(Unit* unit)
{
    if(unit->getType().isWorker() && unit->getPlayer() == *Player::self())
        workers.erase(unit);
}