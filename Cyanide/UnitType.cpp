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
const UnitType UnitType::Hero_Jim_Raynor_Marine  = *UnitType::getUnitType(BWAPI::UnitTypes::Hero_Jim_Raynor_Marine);
const UnitType UnitType::Terran_Ghost  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Ghost);
const UnitType UnitType::Hero_Sarah_Kerrigan  = *UnitType::getUnitType(BWAPI::UnitTypes::Hero_Sarah_Kerrigan);
const UnitType UnitType::Hero_Samir_Duran  = *UnitType::getUnitType(BWAPI::UnitTypes::Hero_Samir_Duran);
const UnitType UnitType::Hero_Infested_Duran  = *UnitType::getUnitType(BWAPI::UnitTypes::Hero_Infested_Duran);
const UnitType UnitType::Hero_Alexei_Stukov  = *UnitType::getUnitType(BWAPI::UnitTypes::Hero_Alexei_Stukov);
const UnitType UnitType::Terran_Vulture  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Vulture);
const UnitType UnitType::Hero_Jim_Raynor_Vulture  = *UnitType::getUnitType(BWAPI::UnitTypes::Hero_Jim_Raynor_Vulture);
const UnitType UnitType::Terran_Goliath  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Goliath);
const UnitType UnitType::Hero_Alan_Schezar  = *UnitType::getUnitType(BWAPI::UnitTypes::Hero_Alan_Schezar);
const UnitType UnitType::Terran_Siege_Tank_Tank_Mode  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Siege_Tank_Tank_Mode);
const UnitType UnitType::Hero_Edmund_Duke_Tank_Mode  = *UnitType::getUnitType(BWAPI::UnitTypes::Hero_Edmund_Duke_Tank_Mode);
const UnitType UnitType::Terran_SCV  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_SCV);
const UnitType UnitType::Terran_Wraith  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Wraith);
const UnitType UnitType::Hero_Tom_Kazansky  = *UnitType::getUnitType(BWAPI::UnitTypes::Hero_Tom_Kazansky);
const UnitType UnitType::Terran_Science_Vessel  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Science_Vessel);
const UnitType UnitType::Hero_Magellan  = *UnitType::getUnitType(BWAPI::UnitTypes::Hero_Magellan);
const UnitType UnitType::Terran_Dropship  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Dropship);
const UnitType UnitType::Terran_Battlecruiser  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Battlecruiser);
const UnitType UnitType::Hero_Arcturus_Mengsk  = *UnitType::getUnitType(BWAPI::UnitTypes::Hero_Arcturus_Mengsk);
const UnitType UnitType::Hero_Hyperion  = *UnitType::getUnitType(BWAPI::UnitTypes::Hero_Hyperion);
const UnitType UnitType::Hero_Norad_II  = *UnitType::getUnitType(BWAPI::UnitTypes::Hero_Norad_II);
const UnitType UnitType::Hero_Gerard_DuGalle  = *UnitType::getUnitType(BWAPI::UnitTypes::Hero_Gerard_DuGalle);
const UnitType UnitType::Terran_Vulture_Spider_Mine  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Vulture_Spider_Mine);
const UnitType UnitType::Terran_Nuclear_Missile  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Nuclear_Missile);
const UnitType UnitType::Terran_Siege_Tank_Siege_Mode  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Siege_Tank_Siege_Mode);
const UnitType UnitType::Hero_Edmund_Duke_Siege_Mode  = *UnitType::getUnitType(BWAPI::UnitTypes::Hero_Edmund_Duke_Siege_Mode);
const UnitType UnitType::Terran_Firebat  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Firebat);
const UnitType UnitType::Hero_Gui_Montag  = *UnitType::getUnitType(BWAPI::UnitTypes::Hero_Gui_Montag);
const UnitType UnitType::Spell_Scanner_Sweep  = *UnitType::getUnitType(BWAPI::UnitTypes::Spell_Scanner_Sweep);
const UnitType UnitType::Terran_Medic  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Medic);
const UnitType UnitType::Terran_Civilian  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Civilian);
const UnitType UnitType::Zerg_Larva  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Larva);
const UnitType UnitType::Zerg_Egg  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Egg);
const UnitType UnitType::Zerg_Zergling  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Zergling);
const UnitType UnitType::Hero_Devouring_One  = *UnitType::getUnitType(BWAPI::UnitTypes::Hero_Devouring_One);
const UnitType UnitType::Hero_Infested_Kerrigan  = *UnitType::getUnitType(BWAPI::UnitTypes::Hero_Infested_Kerrigan);
const UnitType UnitType::Zerg_Hydralisk  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Hydralisk);
const UnitType UnitType::Hero_Hunter_Killer  = *UnitType::getUnitType(BWAPI::UnitTypes::Hero_Hunter_Killer);
const UnitType UnitType::Zerg_Ultralisk  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Ultralisk);
const UnitType UnitType::Hero_Torrasque  = *UnitType::getUnitType(BWAPI::UnitTypes::Hero_Torrasque);
const UnitType UnitType::Zerg_Broodling  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Broodling);
const UnitType UnitType::Zerg_Drone  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Drone);
const UnitType UnitType::Zerg_Overlord  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Overlord);
const UnitType UnitType::Hero_Yggdrasill  = *UnitType::getUnitType(BWAPI::UnitTypes::Hero_Yggdrasill);
const UnitType UnitType::Zerg_Mutalisk  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Mutalisk);
const UnitType UnitType::Hero_Kukulza_Mutalisk  = *UnitType::getUnitType(BWAPI::UnitTypes::Hero_Kukulza_Mutalisk);
const UnitType UnitType::Zerg_Guardian  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Guardian);
const UnitType UnitType::Hero_Kukulza_Guardian  = *UnitType::getUnitType(BWAPI::UnitTypes::Hero_Kukulza_Guardian);
const UnitType UnitType::Zerg_Queen  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Queen);
const UnitType UnitType::Hero_Matriarch  = *UnitType::getUnitType(BWAPI::UnitTypes::Hero_Matriarch);
const UnitType UnitType::Zerg_Defiler  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Defiler);
const UnitType UnitType::Hero_Unclean_One  = *UnitType::getUnitType(BWAPI::UnitTypes::Hero_Unclean_One);
const UnitType UnitType::Zerg_Scourge  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Scourge);
const UnitType UnitType::Zerg_Infested_Terran  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Infested_Terran);
const UnitType UnitType::Terran_Valkyrie  = *UnitType::getUnitType(BWAPI::UnitTypes::Terran_Valkyrie);
const UnitType UnitType::Zerg_Cocoon  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Cocoon);
const UnitType UnitType::Protoss_Corsair  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Corsair);
const UnitType UnitType::Hero_Raszagal  = *UnitType::getUnitType(BWAPI::UnitTypes::Hero_Raszagal);
const UnitType UnitType::Protoss_Dark_Templar  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Dark_Templar);
const UnitType UnitType::Hero_Dark_Templar  = *UnitType::getUnitType(BWAPI::UnitTypes::Hero_Dark_Templar);
const UnitType UnitType::Hero_Zeratul  = *UnitType::getUnitType(BWAPI::UnitTypes::Hero_Zeratul);
const UnitType UnitType::Zerg_Devourer  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Devourer);
const UnitType UnitType::Protoss_Dark_Archon  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Dark_Archon);
const UnitType UnitType::Protoss_Probe  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Probe);
const UnitType UnitType::Protoss_Zealot  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Zealot);
const UnitType UnitType::Hero_Fenix_Zealot  = *UnitType::getUnitType(BWAPI::UnitTypes::Hero_Fenix_Zealot);
const UnitType UnitType::Protoss_Dragoon  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Dragoon);
const UnitType UnitType::Hero_Fenix_Dragoon  = *UnitType::getUnitType(BWAPI::UnitTypes::Hero_Fenix_Dragoon);
const UnitType UnitType::Protoss_High_Templar  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_High_Templar);
const UnitType UnitType::Hero_Tassadar  = *UnitType::getUnitType(BWAPI::UnitTypes::Hero_Tassadar);
const UnitType UnitType::Hero_Aldaris  = *UnitType::getUnitType(BWAPI::UnitTypes::Hero_Aldaris);
const UnitType UnitType::Protoss_Archon  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Archon);
const UnitType UnitType::Hero_Tassadar_Zeratul_Archon  = *UnitType::getUnitType(BWAPI::UnitTypes::Hero_Tassadar_Zeratul_Archon);
const UnitType UnitType::Protoss_Shuttle  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Shuttle);
const UnitType UnitType::Protoss_Scout  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Scout);
const UnitType UnitType::Hero_Mojo  = *UnitType::getUnitType(BWAPI::UnitTypes::Hero_Mojo);
const UnitType UnitType::Hero_Artanis  = *UnitType::getUnitType(BWAPI::UnitTypes::Hero_Artanis);
const UnitType UnitType::Protoss_Arbiter  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Arbiter);
const UnitType UnitType::Hero_Danimoth  = *UnitType::getUnitType(BWAPI::UnitTypes::Hero_Danimoth);
const UnitType UnitType::Protoss_Carrier  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Carrier);
const UnitType UnitType::Hero_Gantrithor  = *UnitType::getUnitType(BWAPI::UnitTypes::Hero_Gantrithor);
const UnitType UnitType::Protoss_Interceptor  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Interceptor);
const UnitType UnitType::Protoss_Reaver  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Reaver);
const UnitType UnitType::Hero_Warbringer  = *UnitType::getUnitType(BWAPI::UnitTypes::Hero_Warbringer);
const UnitType UnitType::Protoss_Observer  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Observer);
const UnitType UnitType::Protoss_Scarab  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Scarab);
const UnitType UnitType::Critter_Rhynadon  = *UnitType::getUnitType(BWAPI::UnitTypes::Critter_Rhynadon);
const UnitType UnitType::Critter_Bengalaas  = *UnitType::getUnitType(BWAPI::UnitTypes::Critter_Bengalaas);
const UnitType UnitType::Special_Cargo_Ship  = *UnitType::getUnitType(BWAPI::UnitTypes::Special_Cargo_Ship);
const UnitType UnitType::Special_Mercenary_Gunship  = *UnitType::getUnitType(BWAPI::UnitTypes::Special_Mercenary_Gunship);
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
const UnitType UnitType::Special_Crashed_Norad_II  = *UnitType::getUnitType(BWAPI::UnitTypes::Special_Crashed_Norad_II);
const UnitType UnitType::Special_Ion_Cannon  = *UnitType::getUnitType(BWAPI::UnitTypes::Special_Ion_Cannon);
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
const UnitType UnitType::Special_Overmind_With_Shell  = *UnitType::getUnitType(BWAPI::UnitTypes::Special_Overmind_With_Shell);
const UnitType UnitType::Special_Overmind  = *UnitType::getUnitType(BWAPI::UnitTypes::Special_Overmind);
const UnitType UnitType::Zerg_Extractor  = *UnitType::getUnitType(BWAPI::UnitTypes::Zerg_Extractor);
const UnitType UnitType::Special_Mature_Chrysalis  = *UnitType::getUnitType(BWAPI::UnitTypes::Special_Mature_Chrysalis);
const UnitType UnitType::Special_Cerebrate  = *UnitType::getUnitType(BWAPI::UnitTypes::Special_Cerebrate);
const UnitType UnitType::Special_Cerebrate_Daggoth  = *UnitType::getUnitType(BWAPI::UnitTypes::Special_Cerebrate_Daggoth);
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
const UnitType UnitType::Special_Stasis_Cell_Prison  = *UnitType::getUnitType(BWAPI::UnitTypes::Special_Stasis_Cell_Prison);
const UnitType UnitType::Protoss_Fleet_Beacon  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Fleet_Beacon);
const UnitType UnitType::Protoss_Arbiter_Tribunal  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Arbiter_Tribunal);
const UnitType UnitType::Protoss_Robotics_Support_Bay  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Robotics_Support_Bay);
const UnitType UnitType::Protoss_Shield_Battery  = *UnitType::getUnitType(BWAPI::UnitTypes::Protoss_Shield_Battery);
const UnitType UnitType::Special_Khaydarin_Crystal_Form  = *UnitType::getUnitType(BWAPI::UnitTypes::Special_Khaydarin_Crystal_Form);
const UnitType UnitType::Special_Protoss_Temple  = *UnitType::getUnitType(BWAPI::UnitTypes::Special_Protoss_Temple);
const UnitType UnitType::Special_XelNaga_Temple  = *UnitType::getUnitType(BWAPI::UnitTypes::Special_XelNaga_Temple);
const UnitType UnitType::Resource_Mineral_Field  = *UnitType::getUnitType(BWAPI::UnitTypes::Resource_Mineral_Field);
const UnitType UnitType::Resource_Mineral_Field_Type_2  = *UnitType::getUnitType(BWAPI::UnitTypes::Resource_Mineral_Field_Type_2);
const UnitType UnitType::Resource_Mineral_Field_Type_3  = *UnitType::getUnitType(BWAPI::UnitTypes::Resource_Mineral_Field_Type_3);
const UnitType UnitType::Special_Independant_Starport  = *UnitType::getUnitType(BWAPI::UnitTypes::Special_Independant_Starport);
const UnitType UnitType::Resource_Vespene_Geyser  = *UnitType::getUnitType(BWAPI::UnitTypes::Resource_Vespene_Geyser);
const UnitType UnitType::Special_Warp_Gate  = *UnitType::getUnitType(BWAPI::UnitTypes::Special_Warp_Gate);
const UnitType UnitType::Special_Psi_Disrupter  = *UnitType::getUnitType(BWAPI::UnitTypes::Special_Psi_Disrupter);
const UnitType UnitType::Special_Power_Generator  = *UnitType::getUnitType(BWAPI::UnitTypes::Special_Power_Generator);
const UnitType UnitType::Special_Overmind_Cocoon  = *UnitType::getUnitType(BWAPI::UnitTypes::Special_Overmind_Cocoon);
const UnitType UnitType::Special_Zerg_Beacon  = *UnitType::getUnitType(BWAPI::UnitTypes::Special_Zerg_Beacon);
const UnitType UnitType::Special_Terran_Beacon  = *UnitType::getUnitType(BWAPI::UnitTypes::Special_Terran_Beacon);
const UnitType UnitType::Special_Protoss_Beacon  = *UnitType::getUnitType(BWAPI::UnitTypes::Special_Protoss_Beacon);
const UnitType UnitType::Special_Zerg_Flag_Beacon  = *UnitType::getUnitType(BWAPI::UnitTypes::Special_Zerg_Flag_Beacon);
const UnitType UnitType::Special_Terran_Flag_Beacon  = *UnitType::getUnitType(BWAPI::UnitTypes::Special_Terran_Flag_Beacon);
const UnitType UnitType::Special_Protoss_Flag_Beacon  = *UnitType::getUnitType(BWAPI::UnitTypes::Special_Protoss_Flag_Beacon);
const UnitType UnitType::Spell_Dark_Swarm  = *UnitType::getUnitType(BWAPI::UnitTypes::Spell_Dark_Swarm);
const UnitType UnitType::Powerup_Uraj_Crystal  = *UnitType::getUnitType(BWAPI::UnitTypes::Powerup_Uraj_Crystal);
const UnitType UnitType::Powerup_Khalis_Crystal  = *UnitType::getUnitType(BWAPI::UnitTypes::Powerup_Khalis_Crystal);
const UnitType UnitType::Powerup_Flag  = *UnitType::getUnitType(BWAPI::UnitTypes::Powerup_Flag);
const UnitType UnitType::Powerup_Young_Chrysalis  = *UnitType::getUnitType(BWAPI::UnitTypes::Powerup_Young_Chrysalis);
const UnitType UnitType::Powerup_Psi_Emitter  = *UnitType::getUnitType(BWAPI::UnitTypes::Powerup_Psi_Emitter);
const UnitType UnitType::Powerup_Data_Disk  = *UnitType::getUnitType(BWAPI::UnitTypes::Powerup_Data_Disk);
const UnitType UnitType::Powerup_Khaydarin_Crystal  = *UnitType::getUnitType(BWAPI::UnitTypes::Powerup_Khaydarin_Crystal);
const UnitType UnitType::Powerup_Mineral_Cluster_Type_1  = *UnitType::getUnitType(BWAPI::UnitTypes::Powerup_Mineral_Cluster_Type_1);
const UnitType UnitType::Powerup_Mineral_Cluster_Type_2  = *UnitType::getUnitType(BWAPI::UnitTypes::Powerup_Mineral_Cluster_Type_2);
const UnitType UnitType::Powerup_Protoss_Gas_Orb_Type_1  = *UnitType::getUnitType(BWAPI::UnitTypes::Powerup_Protoss_Gas_Orb_Type_1);
const UnitType UnitType::Powerup_Protoss_Gas_Orb_Type_2  = *UnitType::getUnitType(BWAPI::UnitTypes::Powerup_Protoss_Gas_Orb_Type_2);
const UnitType UnitType::Powerup_Zerg_Gas_Sac_Type_1  = *UnitType::getUnitType(BWAPI::UnitTypes::Powerup_Zerg_Gas_Sac_Type_1);
const UnitType UnitType::Powerup_Zerg_Gas_Sac_Type_2  = *UnitType::getUnitType(BWAPI::UnitTypes::Powerup_Zerg_Gas_Sac_Type_2);
const UnitType UnitType::Powerup_Terran_Gas_Tank_Type_1  = *UnitType::getUnitType(BWAPI::UnitTypes::Powerup_Terran_Gas_Tank_Type_1);
const UnitType UnitType::Powerup_Terran_Gas_Tank_Type_2  = *UnitType::getUnitType(BWAPI::UnitTypes::Powerup_Terran_Gas_Tank_Type_2);
const UnitType UnitType::Special_Map_Revealer  = *UnitType::getUnitType(BWAPI::UnitTypes::Special_Map_Revealer);
const UnitType UnitType::Special_Floor_Missile_Trap  = *UnitType::getUnitType(BWAPI::UnitTypes::Special_Floor_Missile_Trap);
const UnitType UnitType::Special_Floor_Hatch  = *UnitType::getUnitType(BWAPI::UnitTypes::Special_Floor_Hatch);
const UnitType UnitType::Special_Upper_Level_Door  = *UnitType::getUnitType(BWAPI::UnitTypes::Special_Upper_Level_Door);
const UnitType UnitType::Special_Right_Upper_Level_Door  = *UnitType::getUnitType(BWAPI::UnitTypes::Special_Right_Upper_Level_Door);
const UnitType UnitType::Special_Pit_Door  = *UnitType::getUnitType(BWAPI::UnitTypes::Special_Pit_Door);
const UnitType UnitType::Special_Right_Pit_Door  = *UnitType::getUnitType(BWAPI::UnitTypes::Special_Right_Pit_Door);
const UnitType UnitType::Special_Floor_Gun_Trap  = *UnitType::getUnitType(BWAPI::UnitTypes::Special_Floor_Gun_Trap);
const UnitType UnitType::Special_Wall_Missile_Trap  = *UnitType::getUnitType(BWAPI::UnitTypes::Special_Wall_Missile_Trap);
const UnitType UnitType::Special_Wall_Flame_Trap  = *UnitType::getUnitType(BWAPI::UnitTypes::Special_Wall_Flame_Trap);
const UnitType UnitType::Special_Right_Wall_Missile_Trap  = *UnitType::getUnitType(BWAPI::UnitTypes::Special_Right_Wall_Missile_Trap);
const UnitType UnitType::Special_Right_Wall_Flame_Trap  = *UnitType::getUnitType(BWAPI::UnitTypes::Special_Right_Wall_Flame_Trap);
const UnitType UnitType::Special_Start_Location  = *UnitType::getUnitType(BWAPI::UnitTypes::Special_Start_Location);

const UnitType UnitType::None  = *UnitType::getUnitType(BWAPI::UnitTypes::None);
const UnitType UnitType::AllUnits  = *UnitType::getUnitType(BWAPI::UnitTypes::AllUnits);
const UnitType UnitType::Men  = *UnitType::getUnitType(BWAPI::UnitTypes::Men);
const UnitType UnitType::Buildings  = *UnitType::getUnitType(BWAPI::UnitTypes::Buildings);
const UnitType UnitType::Factories  = *UnitType::getUnitType(BWAPI::UnitTypes::Factories);
const UnitType UnitType::Unknown  = *UnitType::getUnitType(BWAPI::UnitTypes::Unknown);