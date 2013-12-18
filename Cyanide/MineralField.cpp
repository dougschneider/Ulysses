#include "MineralField.h"

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
    worker->gather(mineralField);
}

void MineralField::unassignWorker(Unit* worker)
{
    assert(worker->getType().isWorker());
    assignedWorkers.erase(worker);
    worker->stop();
}

size_t MineralField::getNumWorkers()
{
    return assignedWorkers.size();
}

int MineralField::getRemainingMinerals()
{
    return mineralField->getResources();
}