#include "MineralField.h"

MineralField* getMineralField(BWAPI::Unit* unit);

MineralField::MineralField(Unit* mineralField) :
    mineralField(mineralField)
{
    assert(mineralField->getType().isMineralField());
}

bool MineralField::operator<(const MineralField& rhs) const
{
    return mineralField < rhs.mineralField;
}

void MineralField::assignWorker(Unit* worker)
{
    assert(worker->getType().isWorker());
    assignedWorkers.insert(worker);
}

void MineralField::unassignWorker(Unit* worker)
{
    assert(worker->getType().isWorker());
    assignedWorkers.erase(worker);
}

size_t MineralField::getNumWorkers() const
{
    return assignedWorkers.size();
}

int MineralField::getRemainingMinerals() const
{
    return mineralField->getResources();
}

Unit* MineralField::getMineralField() const
{
    return mineralField;
}