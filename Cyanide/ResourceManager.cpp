#include "ResourceManager.h"

ResourceManager& ResourceManager::Instance()
{
    static ResourceManager instance;
    return instance;
}

ResourceManager::ResourceManager()
{
    assert(CyanideAIModule::ai != NULL);
    CyanideAIModule::ai->addObserver(this);
}

void ResourceManager::handleStart()
{
	BOOST_FOREACH(BWAPI::Unit* unit, BWAPI::Broodwar->getAllUnits())
	{
		if(unit->getType().isMineralField())
		{
            assignMineralField(unit);
		}
	}
}

void ResourceManager::assignMineralField(BWAPI::Unit* mineralField)
{
    MineralField field = MineralField(mineralField);
    if(mineralFields.find(field) == mineralFields.end())
        mineralFields.insert(field);
}

void ResourceManager::handleEnd()
{
    emptyCache();
}

void ResourceManager::emptyCache()
{
    mineralFields.clear();
    mineralWorkersMap.clear();
}

void ResourceManager::handleFrame()
{
    ensureWorkersAreGatheringResources();
}

void ResourceManager::ensureWorkersAreGatheringResources()
{
    std::map<BWAPI::Unit*, MineralField*>::iterator it = mineralWorkersMap.begin(), end = mineralWorkersMap.end();
    for(; it != end; ++it)
	{
        BWAPI::Unit* worker = it->first;
        MineralField* mineralField = it->second;
        if(!worker->isGatheringMinerals())
            worker->gather(mineralField->getMineralField());
	}
}

void ResourceManager::assignWorker(BWAPI::Unit* worker)
{
    assert(worker->getType().isWorker());
    MineralField* mineralField = getOptimalMineralFieldForWorker(worker);
    mineralField->assignWorker(worker);
    worker->gather(mineralField->getMineralField());
    mineralWorkersMap.insert(std::pair<BWAPI::Unit*, MineralField*>(worker, mineralField));
}

MineralField* ResourceManager::getOptimalMineralFieldForWorker(BWAPI::Unit* worker)
{
    assert(mineralFields.size() > 0);
    std::set<MineralField*> mineralFields = getMineralFieldsNearStartLocation();
    return getMineralFieldWithLeastWorkers(mineralFields);

}

std::set<MineralField*> ResourceManager::getMineralFieldsNearStartLocation()
{
    std::set<MineralField*> mineralFieldsNearStartLocation;
	BWTA::BaseLocation* startLocation = BWTA::getStartLocation(BWAPI::Broodwar->self());
    assert(startLocation != NULL);// BWTA::getStartLocation was returning null before
    BOOST_FOREACH(MineralField& mineralField, mineralFields)
	{
        BOOST_FOREACH(BWAPI::Unit* unit, startLocation->getStaticMinerals())
		{
            if(mineralField.getMineralField() == unit)
                mineralFieldsNearStartLocation.insert(&mineralField);
		}
	}
    return mineralFieldsNearStartLocation;
}

MineralField* ResourceManager::getMineralFieldWithLeastWorkers(std::set<MineralField*> mineralFields)
{
    assert(mineralFields.size() > 0);
    MineralField* mineralFieldWithLeastWorkers;
    int leastWorkers = -1;
    BOOST_FOREACH(MineralField* mineralField, mineralFields)
	{
        int numWorkers = mineralField->getNumWorkers();
        if(leastWorkers == -1 || numWorkers < leastWorkers)
		{
            mineralFieldWithLeastWorkers = mineralField;
            leastWorkers = numWorkers;
		}
	}

    return mineralFieldWithLeastWorkers;
}

void ResourceManager::unassignWorker(BWAPI::Unit* worker)
{
    std::map<BWAPI::Unit*, MineralField*>::iterator it = mineralWorkersMap.find(worker);
    assert(it != mineralWorkersMap.end());
    it->second->unassignWorker(worker);
    mineralWorkersMap.erase(worker);
    worker->stop();
}

void ResourceManager::unassignMineralField(BWAPI::Unit* mineralField)
{
    MineralField field = MineralField(mineralField);
    if(mineralFields.find(field) != mineralFields.end())
        mineralFields.erase(field);
}