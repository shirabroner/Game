#pragma once
#include <SFML/Graphics.hpp>
#include "ResourcesLibrary.h"
#include "Screen.h"
#include "Utilities.h"
#include "Constants.h"
#include "Game.h"

class Controller
{
public:
	static Controller& getInstance();
	void run();
	~Controller();
	void setTimerFor(int seconds);

private:
	Controller();
	Controller(const Controller&);
	void handleTimePassed();
	Timer m_timer;
	Game m_game;
};
