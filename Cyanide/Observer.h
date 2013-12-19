#pragma once

#include "Observable.h"
#include "Player.h"
#include "Unit.h"
#include "Position.h"

class Observable;

class Observer
{
public:
    virtual void setObservable(Observable* observable);

    virtual void handleStart();
    virtual void handleEnd(bool isWinner);
    virtual void handleFrame();
    virtual void handleSendText(std::string text);
    virtual void handleReceiveText(Player* player, std::string text);
    virtual void handlePlayerLeft(Player* player);
    virtual void handleNukeDetect(Position position);
    virtual void handleUnitDiscover(Unit* unit);
    virtual void handleUnitEvade(Unit* unit);
    virtual void handleUnitShow(Unit* unit);
    virtual void handleUnitHide(Unit* unit);
    virtual void handleUnitCreate(Unit* unit);
    virtual void handleUnitDestroy(Unit* unit);
    virtual void handleUnitMorph(Unit* unit);
    virtual void handleUnitRenegade(Unit* unit);
    virtual void handleSaveGame(std::string gameName);
    virtual void handleUnitComplete(Unit* unit);

protected:
    Observable* observable;
};