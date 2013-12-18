#pragma once

#include "Unit.h"
#include "MineralField.h"

class ResourceManager
{
public:
    static ResourceManager& Instance();

    void onUnitShow(Unit* unit);

    void assignWorker(Unit* worker);
    void unassignWorker(Unit* worker);

    void assignMineralField(Unit* mineralField);
    void unassignMineralField(Unit* mineralField);

private:

    MineralField* ResourceManager::getOptimalMineralFieldForWorker(Unit* worker);

    std::map<Unit*, MineralField*> mineralWorkersMap;
    std::set<MineralField> mineralFields;
};