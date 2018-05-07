#include "Controller.h"


void Controller::openWindow()
{
	sf::RenderWindow window(sf::VideoMode(700, 700),
		"Tetris");

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{

		}
	}
}

Controller::Controller()
{
}


Controller & Controller::getInstance()
{
	static Controller m_instance;
	return m_instance;
}

void Controller::run()
{
	openWindow();
}

Controller::~Controller()
{
}
