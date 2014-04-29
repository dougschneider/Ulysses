#include "WorkerManager.h"
#include "ResourceManager.h"

WorkerManager& WorkerManager::Instance()
{
    static WorkerManager instance;
    return instance;
}

void WorkerManager::setObservable(Observable* observable)
{
    Observer::setObservable(observable);

    observable->addObserver(this, Observable::UNIT_MORPH);
    observable->addObserver(this, Observable::UNIT_COMPLETE);
    observable->addObserver(this, Observable::UNIT_DESTROY);
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