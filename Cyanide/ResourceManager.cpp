#include "ResourceManager.h"

ResourceManager& ResourceManager::Instance()
{
    static ResourceManager instance;
    return instance;
}

void ResourceManager::onUnitShow(Unit* unit)
{
	if(unit->getType().isMineralField())
        assignMineralField(unit);
}

void ResourceManager::assignWorker(Unit* worker)
{
    MineralField* mineralField = getOptimalMineralFieldForWorker(worker);
    mineralField->assignWorker(worker);
    mineralWorkersMap.insert(std::pair<Unit*, MineralField*>(worker, mineralField));
}

MineralField* ResourceManager::getOptimalMineralFieldForWorker(Unit* worker)
{
    MineralField* optimalMineralField;
    int minWorkers = -1;
    BOOST_FOREACH(MineralField& mineralField, mineralFields)
	{
        int numWorkers = mineralField.getNumWorkers();
        if(minWorkers == -1 || numWorkers < minWorkers)
		{
            optimalMineralField = &mineralField;
            minWorkers = numWorkers;
		}
	}

    BWAPI::Broodwar->printf("Assigning to: %d", optimalMineralField->getNumWorkers());
    return optimalMineralField;
}

void ResourceManager::unassignWorker(Unit* worker)
{
    std::map<Unit*, MineralField*>::iterator it = mineralWorkersMap.find(worker);
    assert(it != mineralWorkersMap.end());
    it->second->unassignWorker(worker);
    mineralWorkersMap.erase(worker);
}

void ResourceManager::assignMineralField(Unit* mineralField)
{
    MineralField field = MineralField(mineralField);
    if(mineralFields.find(field) == mineralFields.end())
        mineralFields.insert(field);
}

void ResourceManager::unassignMineralField(Unit* mineralField)
{
    MineralField field = MineralField(mineralField);
    if(mineralFields.find(field) != mineralFields.end())
        mineralFields.erase(field);
}