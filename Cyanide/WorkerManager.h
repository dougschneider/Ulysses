#pragma once

#include "Common.h"
#include "Unit.h"

class WorkerManager
{
public:
    static WorkerManager& Instance();

    void onUnitMorph(Unit* unit);
    void onUnitComplete(Unit* unit);
    void onUnitDestroy(Unit* unit);

private:
    std::set<Unit*> workers;
};

