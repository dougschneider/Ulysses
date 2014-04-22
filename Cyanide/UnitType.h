#pragma once

#include <BWAPI.h>

class UnitType
{
public:
    static UnitType* getUnitType(BWAPI::UnitType unitType);
    static void emptyCache();

    bool operator==(const UnitType& rhs) const;

    bool isWorker() const;
    bool isMineralField() const;

private:
    static std::map<int, UnitType*> unitTypeMap;

	UnitType(BWAPI::UnitType unitType);

    BWAPI::UnitType unitType;

public:
    static const UnitType Terran_Marine;
    static const UnitType Terran_Ghost;
    static const UnitType Terran_Vulture;
    static const UnitType Terran_Goliath;
    static const UnitType Terran_Siege_Tank_Tank_Mode;
    static const UnitType Terran_SCV;
    static const UnitType Terran_Wraith;
    static const UnitType Terran_Science_Vessel;
    static const UnitType Terran_Dropship;
    static const UnitType Terran_Battlecruiser;
    static const UnitType Terran_Vulture_Spider_Mine;
    static const UnitType Terran_Nuclear_Missile;
    static const UnitType Terran_Siege_Tank_Siege_Mode;
    static const UnitType Terran_Firebat;
    static const UnitType Spell_Scanner_Sweep;
    static const UnitType Terran_Medic;
    static const UnitType Zerg_Larva;
    static const UnitType Zerg_Egg;
    static const UnitType Zerg_Zergling;
    static const UnitType Zerg_Hydralisk;
    static const UnitType Zerg_Ultralisk;
    static const UnitType Zerg_Broodling;
    static const UnitType Zerg_Drone;
    static const UnitType Zerg_Overlord;
    static const UnitType Zerg_Mutalisk;
    static const UnitType Zerg_Guardian;
    static const UnitType Zerg_Queen;
    static const UnitType Zerg_Defiler;
    static const UnitType Zerg_Scourge;
    static const UnitType Zerg_Infested_Terran;
    static const UnitType Terran_Valkyrie;
    static const UnitType Zerg_Cocoon;
    static const UnitType Protoss_Corsair;
    static const UnitType Protoss_Dark_Templar;
    static const UnitType Zerg_Devourer;
    static const UnitType Protoss_Dark_Archon;
    static const UnitType Protoss_Probe;
    static const UnitType Protoss_Zealot;
    static const UnitType Protoss_Dragoon;
    static const UnitType Protoss_High_Templar;
    static const UnitType Protoss_Archon;
    static const UnitType Protoss_Shuttle;
    static const UnitType Protoss_Scout;
    static const UnitType Protoss_Arbiter;
    static const UnitType Protoss_Carrier;
    static const UnitType Protoss_Interceptor;
    static const UnitType Protoss_Reaver;
    static const UnitType Protoss_Observer;
    static const UnitType Protoss_Scarab;
    static const UnitType Critter_Rhynadon;
    static const UnitType Critter_Bengalaas;
    static const UnitType Critter_Scantid;
    static const UnitType Critter_Kakaru;
    static const UnitType Critter_Ragnasaur;
    static const UnitType Critter_Ursadon;
    static const UnitType Zerg_Lurker_Egg;
    static const UnitType Zerg_Lurker;
    static const UnitType Spell_Disruption_Web;
    static const UnitType Terran_Command_Center;
    static const UnitType Terran_Comsat_Station;
    static const UnitType Terran_Nuclear_Silo;
    static const UnitType Terran_Supply_Depot;
    static const UnitType Terran_Refinery;
    static const UnitType Terran_Barracks;
    static const UnitType Terran_Academy;
    static const UnitType Terran_Factory;
    static const UnitType Terran_Starport;
    static const UnitType Terran_Control_Tower;
    static const UnitType Terran_Science_Facility;
    static const UnitType Terran_Covert_Ops;
    static const UnitType Terran_Physics_Lab;
    static const UnitType Terran_Machine_Shop;
    static const UnitType Terran_Engineering_Bay;
    static const UnitType Terran_Armory;
    static const UnitType Terran_Missile_Turret;
    static const UnitType Terran_Bunker;
    static const UnitType Zerg_Infested_Command_Center;
    static const UnitType Zerg_Hatchery;
    static const UnitType Zerg_Lair;
    static const UnitType Zerg_Hive;
    static const UnitType Zerg_Nydus_Canal;
    static const UnitType Zerg_Hydralisk_Den;
    static const UnitType Zerg_Defiler_Mound;
    static const UnitType Zerg_Greater_Spire;
    static const UnitType Zerg_Queens_Nest;
    static const UnitType Zerg_Evolution_Chamber;
    static const UnitType Zerg_Ultralisk_Cavern;
    static const UnitType Zerg_Spire;
    static const UnitType Zerg_Spawning_Pool;
    static const UnitType Zerg_Creep_Colony;
    static const UnitType Zerg_Spore_Colony;
    static const UnitType Zerg_Sunken_Colony;
    static const UnitType Zerg_Extractor;
    static const UnitType Protoss_Nexus;
    static const UnitType Protoss_Robotics_Facility;
    static const UnitType Protoss_Pylon;
    static const UnitType Protoss_Assimilator;
    static const UnitType Protoss_Observatory;
    static const UnitType Protoss_Gateway;
    static const UnitType Protoss_Photon_Cannon;
    static const UnitType Protoss_Citadel_of_Adun;
    static const UnitType Protoss_Cybernetics_Core;
    static const UnitType Protoss_Templar_Archives;
    static const UnitType Protoss_Forge;
    static const UnitType Protoss_Stargate;
    static const UnitType Protoss_Fleet_Beacon;
    static const UnitType Protoss_Arbiter_Tribunal;
    static const UnitType Protoss_Robotics_Support_Bay;
    static const UnitType Protoss_Shield_Battery;
    static const UnitType Resource_Mineral_Field;
    static const UnitType Resource_Mineral_Field_Type_2;
    static const UnitType Resource_Mineral_Field_Type_3;
    static const UnitType Resource_Vespene_Geyser;
    static const UnitType Spell_Dark_Swarm;

    static const UnitType None;
    static const UnitType AllUnits;
    static const UnitType Men;
    static const UnitType Buildings;
    static const UnitType Factories;
    static const UnitType Unknown;
};