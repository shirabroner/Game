#pragma once
#include <SFML/Graphics.hpp>

struct Timer
{
	int m_seconds = 0;
	bool m_on = 0;
	sf::Clock m_clock;
};

enum GameState
{
	Menu
};

/*enum TimerFor
{

};*/

