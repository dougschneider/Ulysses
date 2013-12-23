#pragma once

#include "Observer.h"
#include "Unit.h"
#include "MineralField.h"

class ResourceManager : public Observer
{
public:
    static ResourceManager& Instance();

    void ResourceManager::emptyCache();

    void setObservable(Observable* observable);

    void handleStart();
    void handleFrame();

    void assignWorker(Unit* worker);
    void unassignWorker(Unit* worker);

    void assignMineralField(Unit* mineralField);
    void unassignMineralField(Unit* mineralField);

private:

    MineralField* getOptimalMineralFieldForWorker(Unit* worker);
    std::set<MineralField*> getMineralFieldsNearStartLocation();
    MineralField* getMineralFieldWithLeastWorkers(std::set<MineralField*> mineralFields);
    void ensureWorkersAreGatheringResources();

    std::map<Unit*, MineralField*> mineralWorkersMap;
    std::set<MineralField> mineralFields;
};