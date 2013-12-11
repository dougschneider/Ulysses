#pragma once

#include "Common.h"

class WorkerManager
{
public:
    static WorkerManager& Instance();

    void onUnitMorph(BWAPI::Unit* unit);
    void onUnitComplete(BWAPI::Unit* unit);
    void onUnitDestroy(BWAPI::Unit* unit);

private:
    std::set<BWAPI::Unit*> workers;
};

