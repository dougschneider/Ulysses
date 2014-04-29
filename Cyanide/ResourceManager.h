#pragma once

#include "Common.h"

#include "CyanideAIModule.h"
#include "Observer.h"
#include "MineralField.h"

class ResourceManager : public Observer
{
public:
    static ResourceManager& Instance();

    void emptyCache();
    void assignWorker(BWAPI::Unit* worker);
    void unassignWorker(BWAPI::Unit* worker);
    void assignMineralField(BWAPI::Unit* mineralField);
    void unassignMineralField(BWAPI::Unit* mineralField);

    void handleStart();
    void handleEnd();
    void handleFrame();

private:

    ResourceManager();

    MineralField* getOptimalMineralFieldForWorker(BWAPI::Unit* worker);
    std::set<MineralField*> getMineralFieldsNearStartLocation();
    MineralField* getMineralFieldWithLeastWorkers(std::set<MineralField*> mineralFields);
    void ensureWorkersAreGatheringResources();

    std::map<BWAPI::Unit*, MineralField*> mineralWorkersMap;
    std::set<MineralField> mineralFields;
};