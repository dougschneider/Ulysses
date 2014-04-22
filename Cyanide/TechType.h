#pragma once

#include <BWAPI.h>

class TechType
{
public:
    static TechType* getTechType(BWAPI::TechType techType);
    static void emptyCache();

    bool operator==(const TechType& rhs) const;

	TechType(BWAPI::TechType techType);

    BWAPI::TechType techType;

private:
    static std::map<int, TechType*> techTypeMap;

	TechType(BWAPI::UnitType techType);

public:

    static const TechType Stim_Packs;
    static const TechType Lockdown;
    static const TechType EMP_Shockwave;
    static const TechType Spider_Mines;
    static const TechType Scanner_Sweep;
    static const TechType Tank_Siege_Mode;
    static const TechType Defensive_Matrix;
    static const TechType Irradiate;
    static const TechType Yamato_Gun;
    static const TechType Cloaking_Field;
    static const TechType Personnel_Cloaking;
    static const TechType Burrowing;
    static const TechType Infestation;
    static const TechType Spawn_Broodlings;
    static const TechType Dark_Swarm;
    static const TechType Plague;
    static const TechType Consume;
    static const TechType Ensnare;
    static const TechType Parasite;
    static const TechType Psionic_Storm;
    static const TechType Hallucination;
    static const TechType Recall;
    static const TechType Stasis_Field;
    static const TechType Archon_Warp;
    static const TechType Restoration;
    static const TechType Disruption_Web;
    static const TechType Mind_Control;
    static const TechType Dark_Archon_Meld;
    static const TechType Feedback;
    static const TechType Optical_Flare;
    static const TechType Maelstrom;
    static const TechType Lurker_Aspect;
    static const TechType Healing;
    static const TechType Nuclear_Strike;
};

