#pragma once

#include "Common.h"
#include "Observer.h"
#include "Player.h"
#include "Position.h"
#include "Unit.h"

class Observer;

class Observable
{
public:
	enum NotificationType {START, END, FRAME, SEND_TEXT, RECEIVE_TEXT, PLAYER_LEFT,
	                       NUKE_DETECT, UNIT_DISCOVER, UNIT_EVADE, UNIT_SHOW, UNIT_HIDE,
	                       UNIT_CREATE, UNIT_DESTROY, UNIT_MORPH, UNIT_RENEGADE, SAVE_GAME,
	                       UNIT_COMPLETE};

    void addObserver(Observer* observer, NotificationType type);
    void removeObserver(Observer* observer, NotificationType type);

protected:
    void notifyObserversOfStart();
    void notifyObserversOfEnd(bool isWinner);
    void notifyObserversOfFrame();
    void notifyObserversOfSendText(std::string text);
    void notifyObserversOfReceiveText(Player* player, std::string text);
    void notifyObserversOfPlayerLeft(Player* player);
    void notifyObserversOfNukeDetect(Position position);
    void notifyObserversOfUnitDiscover(Unit* unit);
    void notifyObserversOfUnitEvade(Unit* unit);
    void notifyObserversOfUnitShow(Unit* unit);
    void notifyObserversOfUnitHide(Unit* unit);
    void notifyObserversOfUnitCreate(Unit* unit);
    void notifyObserversOfUnitDestroy(Unit* unit);
    void notifyObserversOfUnitMorph(Unit* unit);
    void notifyObserversOfUnitRenegade(Unit* unit);
    void notifyObserversOfSaveGame(std::string gameName);
    void notifyObserversOfUnitComplete(Unit* unit);

    std::map<NotificationType, std::vector<Observer*>> categorizedObservers;
};

