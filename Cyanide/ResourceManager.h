#pragma once

#include "Observer.h"
#include "Unit.h"
#include "MineralField.h"

class ResourceManager : public Observer
{
public:
    static ResourceManager& Instance();

    void setObservable(Observable* observable);

    void handleFrame();
    void handleUnitShow(Unit* unit);

    void assignWorker(Unit* worker);
    void unassignWorker(Unit* worker);

    void assignMineralField(Unit* mineralField);
    void unassignMineralField(Unit* mineralField);

private:

    MineralField* getOptimalMineralFieldForWorker(Unit* worker);
    void ensureWorkersAreGatheringResources();

    std::map<Unit*, MineralField*> mineralWorkersMap;
    std::set<MineralField> mineralFields;
};