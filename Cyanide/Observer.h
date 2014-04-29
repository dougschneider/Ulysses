#pragma once

#include "Observable.h"

class Observable;

class Observer
{
public:
    virtual void handleStart();
    virtual void handleEnd(bool isWinner);
    virtual void handleFrame();
    virtual void handleSendText(std::string text);
    virtual void handleReceiveText(BWAPI::Player* player, std::string text);
    virtual void handlePlayerLeft(BWAPI::Player* player);
    virtual void handleNukeDetect(BWAPI::Position position);
    virtual void handleUnitDiscover(BWAPI::Unit* unit);
    virtual void handleUnitEvade(BWAPI::Unit* unit);
    virtual void handleUnitShow(BWAPI::Unit* unit);
    virtual void handleUnitHide(BWAPI::Unit* unit);
    virtual void handleUnitCreate(BWAPI::Unit* unit);
    virtual void handleUnitDestroy(BWAPI::Unit* unit);
    virtual void handleUnitMorph(BWAPI::Unit* unit);
    virtual void handleUnitRenegade(BWAPI::Unit* unit);
    virtual void handleSaveGame(std::string gameName);
    virtual void handleUnitComplete(BWAPI::Unit* unit);
};