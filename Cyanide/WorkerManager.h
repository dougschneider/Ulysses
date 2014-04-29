#pragma once

#include "Common.h"
#include "Observer.h"

class WorkerManager : public Observer
{
public:
    static WorkerManager& Instance();

    void setObservable(Observable* observable);

    void handleUnitMorph(BWAPI::Unit* unit);
    void handleUnitComplete(BWAPI::Unit* unit);
    void handleUnitDestroy(BWAPI::Unit* unit);

private:
    std::set<BWAPI::Unit*> workers;
};

