#pragma once

#include "UlyssesAIModule.h"
#include "Common.h"
#include "Observer.h"

class WorkerManager : public Observer
{
public:
    static WorkerManager& Instance();

    void handleUnitMorph(BWAPI::Unit* unit);
    void handleUnitComplete(BWAPI::Unit* unit);
    void handleUnitDestroy(BWAPI::Unit* unit);

private:

    WorkerManager();

    std::set<BWAPI::Unit*> workers;
};

