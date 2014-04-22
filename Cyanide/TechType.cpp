#include "TechType.h"

std::map<int, TechType*> TechType::techTypeMap;

TechType* TechType::getTechType(BWAPI::TechType techType)
{
    if(techTypeMap.find(techType.getID()) == techTypeMap.end())
        techTypeMap.insert(std::pair<int, TechType*>(techType.getID(), new TechType(techType)));

    return techTypeMap[techType.getID()];
}

void TechType::emptyCache()
{
    std::map<int, TechType*>::iterator it = techTypeMap.begin(), end = techTypeMap.end();
    for(; it != end; ++it)
	{
        delete it->second;
        it->second = 0;
	}
    techTypeMap.clear();
}

bool TechType::operator==(const TechType& rhs) const
{
    return techType.getID() == rhs.techType.getID();
}

TechType::TechType(BWAPI::TechType techType) :
    techType(techType)
{
}

const TechType TechType::Stim_Packs = *TechType::getTechType(BWAPI::TechTypes::Stim_Packs);
const TechType TechType::Lockdown = *TechType::getTechType(BWAPI::TechTypes::Lockdown);
const TechType TechType::EMP_Shockwave = *TechType::getTechType(BWAPI::TechTypes::EMP_Shockwave);
const TechType TechType::Spider_Mines = *TechType::getTechType(BWAPI::TechTypes::Spider_Mines);
const TechType TechType::Scanner_Sweep = *TechType::getTechType(BWAPI::TechTypes::Scanner_Sweep);
const TechType TechType::Tank_Siege_Mode = *TechType::getTechType(BWAPI::TechTypes::Tank_Siege_Mode);
const TechType TechType::Defensive_Matrix = *TechType::getTechType(BWAPI::TechTypes::Defensive_Matrix);
const TechType TechType::Irradiate = *TechType::getTechType(BWAPI::TechTypes::Irradiate);
const TechType TechType::Yamato_Gun = *TechType::getTechType(BWAPI::TechTypes::Yamato_Gun);
const TechType TechType::Cloaking_Field = *TechType::getTechType(BWAPI::TechTypes::Cloaking_Field);
const TechType TechType::Personnel_Cloaking = *TechType::getTechType(BWAPI::TechTypes::Personnel_Cloaking);
const TechType TechType::Burrowing = *TechType::getTechType(BWAPI::TechTypes::Burrowing);
const TechType TechType::Infestation = *TechType::getTechType(BWAPI::TechTypes::Infestation);
const TechType TechType::Spawn_Broodlings = *TechType::getTechType(BWAPI::TechTypes::Spawn_Broodlings);
const TechType TechType::Dark_Swarm = *TechType::getTechType(BWAPI::TechTypes::Dark_Swarm);
const TechType TechType::Plague = *TechType::getTechType(BWAPI::TechTypes::Plague);
const TechType TechType::Consume = *TechType::getTechType(BWAPI::TechTypes::Consume);
const TechType TechType::Ensnare = *TechType::getTechType(BWAPI::TechTypes::Ensnare);
const TechType TechType::Parasite = *TechType::getTechType(BWAPI::TechTypes::Parasite);
const TechType TechType::Psionic_Storm = *TechType::getTechType(BWAPI::TechTypes::Psionic_Storm);
const TechType TechType::Hallucination = *TechType::getTechType(BWAPI::TechTypes::Hallucination);
const TechType TechType::Recall = *TechType::getTechType(BWAPI::TechTypes::Recall);
const TechType TechType::Stasis_Field = *TechType::getTechType(BWAPI::TechTypes::Stasis_Field);
const TechType TechType::Archon_Warp = *TechType::getTechType(BWAPI::TechTypes::Archon_Warp);
const TechType TechType::Restoration = *TechType::getTechType(BWAPI::TechTypes::Restoration);
const TechType TechType::Disruption_Web = *TechType::getTechType(BWAPI::TechTypes::Disruption_Web);
const TechType TechType::Mind_Control = *TechType::getTechType(BWAPI::TechTypes::Mind_Control);
const TechType TechType::Dark_Archon_Meld = *TechType::getTechType(BWAPI::TechTypes::Dark_Archon_Meld);
const TechType TechType::Feedback = *TechType::getTechType(BWAPI::TechTypes::Feedback);
const TechType TechType::Optical_Flare = *TechType::getTechType(BWAPI::TechTypes::Optical_Flare);
const TechType TechType::Maelstrom = *TechType::getTechType(BWAPI::TechTypes::Maelstrom);
const TechType TechType::Lurker_Aspect = *TechType::getTechType(BWAPI::TechTypes::Lurker_Aspect);
const TechType TechType::Healing = *TechType::getTechType(BWAPI::TechTypes::Healing);
const TechType TechType::Nuclear_Strike = *TechType::getTechType(BWAPI::TechTypes::Nuclear_Strike);