#include "Observable.h"

#include <algorithm>

void Observable::addObserver(Observer* observer, NotificationType type)
{
    std::vector<Observer*>::iterator it = std::find(categorizedObservers[type].begin(), categorizedObservers[type].end(), observer);
    assert(it == categorizedObservers[type].end());
    categorizedObservers[type].push_back(observer);
}

void Observable::removeObserver(Observer* observer, NotificationType type)
{
    std::vector<Observer*>::iterator it = std::find(categorizedObservers[type].begin(), categorizedObservers[type].end(), observer);
    assert(it != categorizedObservers[type].end());
    categorizedObservers[type].erase(it);
}

void Observable::notifyObserversOfStart()
{
    BOOST_FOREACH(Observer* observer, categorizedObservers[START])
	{
        observer->handleStart();
	}
}

void Observable::notifyObserversOfEnd(bool isWinner)
{
	BOOST_FOREACH(Observer* observer, categorizedObservers[END])
	{
        observer->handleEnd(isWinner);
	}
}

void Observable::notifyObserversOfFrame()
{
	BOOST_FOREACH(Observer* observer, categorizedObservers[FRAME])
	{
        observer->handleFrame();
	}
}

void Observable::notifyObserversOfSendText(std::string text)
{
	BOOST_FOREACH(Observer* observer, categorizedObservers[SEND_TEXT])
	{
        observer->handleSendText(text);
	}
}

void Observable::notifyObserversOfReceiveText(Player* player, std::string text)
{
	BOOST_FOREACH(Observer* observer, categorizedObservers[RECEIVE_TEXT])
	{
        observer->handleReceiveText(player, text);
	}
}

void Observable::notifyObserversOfPlayerLeft(Player* player)
{
	BOOST_FOREACH(Observer* observer, categorizedObservers[PLAYER_LEFT])
	{
        observer->handlePlayerLeft(player);
	}
}

void Observable::notifyObserversOfNukeDetect(Position position)
{
	BOOST_FOREACH(Observer* observer, categorizedObservers[NUKE_DETECT])
	{
        observer->handleNukeDetect(position);
	}
}

void Observable::notifyObserversOfUnitDiscover(Unit* unit)
{
	BOOST_FOREACH(Observer* observer, categorizedObservers[UNIT_DISCOVER])
	{
        observer->handleUnitDiscover(unit);
	}
}

void Observable::notifyObserversOfUnitEvade(Unit* unit)
{
	BOOST_FOREACH(Observer* observer, categorizedObservers[UNIT_EVADE])
	{
        observer->handleUnitEvade(unit);
	}
}

void Observable::notifyObserversOfUnitShow(Unit* unit)
{
	BOOST_FOREACH(Observer* observer, categorizedObservers[UNIT_SHOW])
	{
        observer->handleUnitShow(unit);
	}
}

void Observable::notifyObserversOfUnitHide(Unit* unit)
{
	BOOST_FOREACH(Observer* observer, categorizedObservers[UNIT_HIDE])
	{
        observer->handleUnitHide(unit);
	}
}

void Observable::notifyObserversOfUnitCreate(Unit* unit)
{
	BOOST_FOREACH(Observer* observer, categorizedObservers[UNIT_CREATE])
	{
        observer->handleUnitCreate(unit);
	}
}

void Observable::notifyObserversOfUnitDestroy(Unit* unit)
{
	BOOST_FOREACH(Observer* observer, categorizedObservers[UNIT_DESTROY])
	{
        observer->handleUnitDestroy(unit);
	}
}

void Observable::notifyObserversOfUnitMorph(Unit* unit)
{
	BOOST_FOREACH(Observer* observer, categorizedObservers[UNIT_MORPH])
	{
        observer->handleUnitMorph(unit);
	}
}

void Observable::notifyObserversOfUnitRenegade(Unit* unit)
{
	BOOST_FOREACH(Observer* observer, categorizedObservers[UNIT_RENEGADE])
	{
        observer->handleUnitRenegade(unit);
	}
}

void Observable::notifyObserversOfSaveGame(std::string gameName)
{
	BOOST_FOREACH(Observer* observer, categorizedObservers[SAVE_GAME])
	{
        observer->handleSaveGame(gameName);
	}
}

void Observable::notifyObserversOfUnitComplete(Unit* unit)
{
	BOOST_FOREACH(Observer* observer, categorizedObservers[UNIT_COMPLETE])
	{
        observer->handleUnitComplete(unit);
	}
}