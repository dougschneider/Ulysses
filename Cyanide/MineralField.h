#pragma once

#include "Unit.h"

class MineralField
{
public:
	MineralField(Unit*);

    bool operator<(const MineralField& rhs) const;

    void assignWorker(Unit* worker);
    void unassignWorker(Unit* worker);
    size_t getNumWorkers() const;
    int getRemainingMinerals() const;

    Unit* getMineralField() const;

private:
    Unit* mineralField;
    std::set<Unit*> assignedWorkers;
};

