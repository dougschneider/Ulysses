#include "WorkerManager.h"
#include "ResourceManager.h"

WorkerManager& WorkerManager::Instance()
{
    static WorkerManager instance;
    return instance;
}

void WorkerManager::onUnitMorph(Unit* unit)
{
    if(unit->getType().isWorker() && unit->getPlayer() == *Player::self())
	{
        workers.insert(unit);
        ResourceManager::Instance().assignWorker(unit);
    }
    // TODO: what about workers becoming buildings?
}

void WorkerManager::onUnitComplete(Unit* unit)
{
    if(unit->getType().isWorker() && unit->getPlayer() == *Player::self())
	{
        workers.insert(unit);
        ResourceManager::Instance().assignWorker(unit);
    }
}

void WorkerManager::onUnitDestroy(Unit* unit)
{
    if(unit->getType().isWorker() && unit->getPlayer() == *Player::self())
	{
        workers.erase(unit);
        ResourceManager::Instance().unassignWorker(unit);
    }
}