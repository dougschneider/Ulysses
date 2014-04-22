#include "UnitType.h"

std::map<int, UnitType*> UnitType::unitTypeMap;

UnitType* UnitType::getUnitType(BWAPI::UnitType unitType)
{
    if(unitTypeMap.find(unitType.getID()) == unitTypeMap.end())
        unitTypeMap.insert(std::pair<int, UnitType*>(unitType.getID(), new UnitType(unitType)));

    return unitTypeMap[unitType.getID()];
}

void UnitType::emptyCache()
{
    std::map<int, UnitType*>::iterator it = unitTypeMap.begin(), end = unitTypeMap.end();
    for(; it != end; ++it)
	{
        delete it->second;
        it->second = 0;
	}
    unitTypeMap.clear();
}

bool UnitType::operator==(const UnitType& rhs) const
{
    return unitType.getID() == rhs.unitType.getID();
}

UnitType::UnitType(BWAPI::UnitType unitType) :
    unitType(unitType)
{
}

bool UnitType::isWorker() const
{
	return unitType.isWorker();
}

bool UnitType::isMineralField() const
{
    return unitType.isMineralField();
}

const UnitType UnitType::Terran_Marine  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Marine);
const UnitType UnitType::Terran_Ghost  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Ghost);
const UnitType UnitType::Terran_Vulture  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Vulture);
const UnitType UnitType::Terran_Goliath  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Goliath);
const UnitType UnitType::Terran_Siege_Tank_Tank_Mode  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Siege_Tank_Tank_Mode);
const UnitType UnitType::Terran_SCV  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_SCV);
const UnitType UnitType::Terran_Wraith  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Wraith);
const UnitType UnitType::Terran_Science_Vessel  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Science_Vessel);
const UnitType UnitType::Terran_Dropship  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Dropship);
const UnitType UnitType::Terran_Battlecruiser  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Battlecruiser);
const UnitType UnitType::Terran_Vulture_Spider_Mine  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Vulture_Spider_Mine);
const UnitType UnitType::Terran_Nuclear_Missile  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Nuclear_Missile);
const UnitType UnitType::Terran_Siege_Tank_Siege_Mode  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Siege_Tank_Siege_Mode);
const UnitType UnitType::Terran_Firebat  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Firebat);
const UnitType UnitType::Spell_Scanner_Sweep  = *UnitType::getUnitType(BWAPI::UnitTypes::Spell_Scanner_Sweep);
const UnitType UnitType::Terran_Medic  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Medic);
const UnitType UnitType::Zerg_Larva  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Larva);
const UnitType UnitType::Zerg_Egg  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Egg);
const UnitType UnitType::Zerg_Zergling  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Zergling);
const UnitType UnitType::Zerg_Hydralisk  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Hydralisk);
const UnitType UnitType::Zerg_Ultralisk  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Ultralisk);
const UnitType UnitType::Zerg_Broodling  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Broodling);
const UnitType UnitType::Zerg_Drone  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Drone);
const UnitType UnitType::Zerg_Overlord  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Overlord);
const UnitType UnitType::Zerg_Mutalisk  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Mutalisk);
const UnitType UnitType::Zerg_Guardian  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Guardian);
const UnitType UnitType::Zerg_Queen  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Queen);
const UnitType UnitType::Zerg_Defiler  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Defiler);
const UnitType UnitType::Zerg_Scourge  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Scourge);
const UnitType UnitType::Zerg_Infested_Terran  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Infested_Terran);
const UnitType UnitType::Terran_Valkyrie  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Valkyrie);
const UnitType UnitType::Zerg_Cocoon  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Cocoon);
const UnitType UnitType::Protoss_Corsair  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Corsair);
const UnitType UnitType::Protoss_Dark_Templar  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Dark_Templar);
const UnitType UnitType::Zerg_Devourer  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Devourer);
const UnitType UnitType::Protoss_Dark_Archon  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Dark_Archon);
const UnitType UnitType::Protoss_Probe  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Probe);
const UnitType UnitType::Protoss_Zealot  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Zealot);
const UnitType UnitType::Protoss_Dragoon  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Dragoon);
const UnitType UnitType::Protoss_High_Templar  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_High_Templar);
const UnitType UnitType::Protoss_Archon  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Archon);
const UnitType UnitType::Protoss_Shuttle  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Shuttle);
const UnitType UnitType::Protoss_Scout  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Scout);
const UnitType UnitType::Protoss_Arbiter  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Arbiter);
const UnitType UnitType::Protoss_Carrier  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Carrier);
const UnitType UnitType::Protoss_Interceptor  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Interceptor);
const UnitType UnitType::Protoss_Reaver  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Reaver);
const UnitType UnitType::Protoss_Observer  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Observer);
const UnitType UnitType::Protoss_Scarab  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Scarab);
const UnitType UnitType::Critter_Rhynadon  = *UnitType::getUnitType(BWAPI::UnitTypes::Critter_Rhynadon);
const UnitType UnitType::Critter_Bengalaas  = *UnitType::getUnitType(BWAPI::UnitTypes::Critter_Bengalaas);
const UnitType UnitType::Critter_Scantid  = *UnitType::getUnitType(BWAPI::UnitTypes::Critter_Scantid);
const UnitType UnitType::Critter_Kakaru  = *UnitType::getUnitType(BWAPI::UnitTypes::Critter_Kakaru);
const UnitType UnitType::Critter_Ragnasaur  = *UnitType::getUnitType(BWAPI::UnitTypes::Critter_Ragnasaur);
const UnitType UnitType::Critter_Ursadon  = *UnitType::getUnitType(BWAPI::UnitTypes::Critter_Ursadon);
const UnitType UnitType::Zerg_Lurker_Egg  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Lurker_Egg);
const UnitType UnitType::Zerg_Lurker  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Lurker);
const UnitType UnitType::Spell_Disruption_Web  = *UnitType::getUnitType(BWAPI::UnitTypes::Spell_Disruption_Web);
const UnitType UnitType::Terran_Command_Center  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Command_Center);
const UnitType UnitType::Terran_Comsat_Station  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Comsat_Station);
const UnitType UnitType::Terran_Nuclear_Silo  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Nuclear_Silo);
const UnitType UnitType::Terran_Supply_Depot  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Supply_Depot);
const UnitType UnitType::Terran_Refinery  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Refinery);
const UnitType UnitType::Terran_Barracks  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Barracks);
const UnitType UnitType::Terran_Academy  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Academy);
const UnitType UnitType::Terran_Factory  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Factory);
const UnitType UnitType::Terran_Starport  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Starport);
const UnitType UnitType::Terran_Control_Tower  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Control_Tower);
const UnitType UnitType::Terran_Science_Facility  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Science_Facility);
const UnitType UnitType::Terran_Covert_Ops  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Covert_Ops);
const UnitType UnitType::Terran_Physics_Lab  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Physics_Lab);
const UnitType UnitType::Terran_Machine_Shop  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Machine_Shop);
const UnitType UnitType::Terran_Engineering_Bay  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Engineering_Bay);
const UnitType UnitType::Terran_Armory  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Armory);
const UnitType UnitType::Terran_Missile_Turret  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Missile_Turret);
const UnitType UnitType::Terran_Bunker  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Bunker);
const UnitType UnitType::Zerg_Infested_Command_Center  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Infested_Command_Center);
const UnitType UnitType::Zerg_Hatchery  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Hatchery);
const UnitType UnitType::Zerg_Lair  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Lair);
const UnitType UnitType::Zerg_Hive  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Hive);
const UnitType UnitType::Zerg_Nydus_Canal  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Nydus_Canal);
const UnitType UnitType::Zerg_Hydralisk_Den  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Hydralisk_Den);
const UnitType UnitType::Zerg_Defiler_Mound  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Defiler_Mound);
const UnitType UnitType::Zerg_Greater_Spire  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Greater_Spire);
const UnitType UnitType::Zerg_Queens_Nest  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Queens_Nest);
const UnitType UnitType::Zerg_Evolution_Chamber  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Evolution_Chamber);
const UnitType UnitType::Zerg_Ultralisk_Cavern  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Ultralisk_Cavern);
const UnitType UnitType::Zerg_Spire  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Spire);
const UnitType UnitType::Zerg_Spawning_Pool  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Spawning_Pool);
const UnitType UnitType::Zerg_Creep_Colony  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Creep_Colony);
const UnitType UnitType::Zerg_Spore_Colony  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Spore_Colony);
const UnitType UnitType::Zerg_Sunken_Colony  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Sunken_Colony);
const UnitType UnitType::Zerg_Extractor  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Extractor);
const UnitType UnitType::Protoss_Nexus  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Nexus);
const UnitType UnitType::Protoss_Robotics_Facility  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Robotics_Facility);
const UnitType UnitType::Protoss_Pylon  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Pylon);
const UnitType UnitType::Protoss_Assimilator  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Assimilator);
const UnitType UnitType::Protoss_Observatory  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Observatory);
const UnitType UnitType::Protoss_Gateway  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Gateway);
const UnitType UnitType::Protoss_Photon_Cannon  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Photon_Cannon);
const UnitType UnitType::Protoss_Citadel_of_Adun  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Citadel_of_Adun);
const UnitType UnitType::Protoss_Cybernetics_Core  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Cybernetics_Core);
const UnitType UnitType::Protoss_Templar_Archives  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Templar_Archives);
const UnitType UnitType::Protoss_Forge  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Forge);
const UnitType UnitType::Protoss_Stargate  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Stargate);
const UnitType UnitType::Protoss_Fleet_Beacon  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Fleet_Beacon);
const UnitType UnitType::Protoss_Arbiter_Tribunal  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Arbiter_Tribunal);
const UnitType UnitType::Protoss_Robotics_Support_Bay  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Robotics_Support_Bay);
const UnitType UnitType::Protoss_Shield_Battery  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Shield_Battery);
const UnitType UnitType::Resource_Mineral_Field  = *UnitType::getUnitType(BWAPI::UnitTypes::Resource_Mineral_Field);
const UnitType UnitType::Resource_Mineral_Field_Type_2  = *UnitType::getUnitType(BWAPI::UnitTypes::Resource_Mineral_Field_Type_2);
const UnitType UnitType::Resource_Mineral_Field_Type_3  = *UnitType::getUnitType(BWAPI::UnitTypes::Resource_Mineral_Field_Type_3);
const UnitType UnitType::Resource_Vespene_Geyser  = *UnitType::getUnitType(BWAPI::UnitTypes::Resource_Vespene_Geyser);
const UnitType UnitType::Spell_Dark_Swarm  = *UnitType::getUnitType(BWAPI::UnitTypes::Spell_Dark_Swarm);

const UnitType UnitType::None  = *UnitType::getUnitType(BWAPI::UnitTypes::None);
const UnitType UnitType::AllUnits  = *UnitType::getUnitType(BWAPI::UnitTypes::AllUnits);
const UnitType UnitType::Men  = *UnitType::getUnitType(BWAPI::UnitTypes::Men);
const UnitType UnitType::Buildings  = *UnitType::getUnitType(BWAPI::UnitTypes::Buildings);
const UnitType UnitType::Factories  = *UnitType::getUnitType(BWAPI::UnitTypes::Factories);
const UnitType UnitType::Unknown  = *UnitType::getUnitType(BWAPI::UnitTypes::Unknown);