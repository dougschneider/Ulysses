#pragma once

#include "Common.h"
#include "Observer.h"

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
    void notifyObserversOfReceiveText(BWAPI::Player* player, std::string text);
    void notifyObserversOfPlayerLeft(BWAPI::Player* player);
    void notifyObserversOfNukeDetect(BWAPI::Position position);
    void notifyObserversOfUnitDiscover(BWAPI::Unit* unit);
    void notifyObserversOfUnitEvade(BWAPI::Unit* unit);
    void notifyObserversOfUnitShow(BWAPI::Unit* unit);
    void notifyObserversOfUnitHide(BWAPI::Unit* unit);
    void notifyObserversOfUnitCreate(BWAPI::Unit* unit);
    void notifyObserversOfUnitDestroy(BWAPI::Unit* unit);
    void notifyObserversOfUnitMorph(BWAPI::Unit* unit);
    void notifyObserversOfUnitRenegade(BWAPI::Unit* unit);
    void notifyObserversOfSaveGame(std::string gameName);
    void notifyObserversOfUnitComplete(BWAPI::Unit* unit);

    std::map<NotificationType, std::vector<Observer*>> categorizedObservers;
};

