#pragma once

#include "Common.h"
#include "Observer.h"
#include "Unit.h"

class WorkerManager : public Observer
{
public:
    static WorkerManager& Instance();

    void setObservable(Observable* observable);

    void handleUnitMorph(Unit* unit);
    void handleUnitComplete(Unit* unit);
    void handleUnitDestroy(Unit* unit);

private:
    std::set<Unit*> workers;
};

