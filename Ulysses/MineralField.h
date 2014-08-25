#pragma once

#include "Common.h"

class MineralField
{
public:
	MineralField(BWAPI::Unit*);

    bool operator<(const MineralField& rhs) const;

    void assignWorker(BWAPI::Unit* worker);
    void unassignWorker(BWAPI::Unit* worker);
    size_t getNumWorkers() const;
    int getRemainingMinerals() const;

    BWAPI::Unit* getMineralField() const;

private:
    BWAPI::Unit* mineralField;
    std::set<BWAPI::Unit*> assignedWorkers;
};