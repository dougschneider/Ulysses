#include "Observable.h"

#include <algorithm>

void Observable::addObserver(Observer* observer)
{
	assert(observers.find(observer) == observers.end());
    observers.insert(observer);
}

void Observable::removeObserver(Observer* observer)
{
	assert(observers.find(observer) != observers.end());
	observers.erase(observer);
}

void Observable::notifyObserversOfStart()
{
    BOOST_FOREACH(Observer* observer, observers)
	{
        observer->handleStart();
	}
}

void Observable::notifyObserversOfEnd(bool isWinner)
{
	BOOST_FOREACH(Observer* observer, observers)
	{
        observer->handleEnd(isWinner);
	}
}

void Observable::notifyObserversOfFrame()
{
	BOOST_FOREACH(Observer* observer, observers)
	{
        observer->handleFrame();
	}
}

void Observable::notifyObserversOfSendText(std::string text)
{
	BOOST_FOREACH(Observer* observer, observers)
	{
        observer->handleSendText(text);
	}
}

void Observable::notifyObserversOfReceiveText(BWAPI::Player* player, std::string text)
{
	BOOST_FOREACH(Observer* observer, observers)
	{
        observer->handleReceiveText(player, text);
	}
}

void Observable::notifyObserversOfPlayerLeft(BWAPI::Player* player)
{
	BOOST_FOREACH(Observer* observer, observers)
	{
        observer->handlePlayerLeft(player);
	}
}

void Observable::notifyObserversOfNukeDetect(BWAPI::Position position)
{
	BOOST_FOREACH(Observer* observer, observers)
	{
        observer->handleNukeDetect(position);
	}
}

void Observable::notifyObserversOfUnitDiscover(BWAPI::Unit* unit)
{
	BOOST_FOREACH(Observer* observer, observers)
	{
        observer->handleUnitDiscover(unit);
	}
}

void Observable::notifyObserversOfUnitEvade(BWAPI::Unit* unit)
{
	BOOST_FOREACH(Observer* observer, observers)
	{
        observer->handleUnitEvade(unit);
	}
}

void Observable::notifyObserversOfUnitShow(BWAPI::Unit* unit)
{
	BOOST_FOREACH(Observer* observer, observers)
	{
        observer->handleUnitShow(unit);
	}
}

void Observable::notifyObserversOfUnitHide(BWAPI::Unit* unit)
{
	BOOST_FOREACH(Observer* observer, observers)
	{
        observer->handleUnitHide(unit);
	}
}

void Observable::notifyObserversOfUnitCreate(BWAPI::Unit* unit)
{
	BOOST_FOREACH(Observer* observer, observers)
	{
        observer->handleUnitCreate(unit);
	}
}

void Observable::notifyObserversOfUnitDestroy(BWAPI::Unit* unit)
{
	BOOST_FOREACH(Observer* observer, observers)
	{
        observer->handleUnitDestroy(unit);
	}
}

void Observable::notifyObserversOfUnitMorph(BWAPI::Unit* unit)
{
	BOOST_FOREACH(Observer* observer, observers)
	{
        observer->handleUnitMorph(unit);
	}
}

void Observable::notifyObserversOfUnitRenegade(BWAPI::Unit* unit)
{
	BOOST_FOREACH(Observer* observer, observers)
	{
        observer->handleUnitRenegade(unit);
	}
}

void Observable::notifyObserversOfSaveGame(std::string gameName)
{
	BOOST_FOREACH(Observer* observer, observers)
	{
        observer->handleSaveGame(gameName);
	}
}

void Observable::notifyObserversOfUnitComplete(BWAPI::Unit* unit)
{
	BOOST_FOREACH(Observer* observer, observers)
	{
        observer->handleUnitComplete(unit);
	}
}