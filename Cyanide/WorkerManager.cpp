#include "WorkerManager.h"
#include "ResourceManager.h"

WorkerManager& WorkerManager::Instance()
{
    static WorkerManager instance;
    return instance;
}

WorkerManager::WorkerManager()
{
    assert(CyanideAIModule::ai != NULL);
    CyanideAIModule::ai->addObserver(this);
}

void WorkerManager::handleUnitMorph(BWAPI::Unit* unit)
{
	if(unit->getType().isWorker() && unit->getPlayer() == BWAPI::Broodwar->self())
	{
        workers.insert(unit);
        ResourceManager::Instance().assignWorker(unit);
    }
	else if(workers.find(unit) != workers.end())
	{
        workers.erase(unit);
	}
}

void WorkerManager::handleUnitComplete(BWAPI::Unit* unit)
{
	if(unit->getType().isWorker() && unit->getPlayer() == BWAPI::Broodwar->self())
	{
        workers.insert(unit);
        ResourceManager::Instance().assignWorker(unit);
    }
}

void WorkerManager::handleUnitDestroy(BWAPI::Unit* unit)
{
	if(unit->getType().isWorker() && unit->getPlayer() == BWAPI::Broodwar->self())
	{
        workers.erase(unit);
        ResourceManager::Instance().unassignWorker(unit);
    }
}