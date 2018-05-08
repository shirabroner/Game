#include "Controller.h"

Controller::Controller()
{
}

void Controller::handleTimePassed()
{
	if (!m_timer.m_on)
		return;

	auto state = m_game.getState();
	switch (state)
	{
	case Menu:
		/*if (m_timer.m_clock.getElapsedTime().asSeconds() > BACKGROUND_DISPLAY_SECONDS)
		{
			//TODO: show start game button
			m_timer.m_on = false;
		}*/
		break;
	default:
		break;
	}
	
}


Controller & Controller::getInstance()
{
	static Controller m_instance;
	return m_instance;
}

void Controller::run()
{
	//Screen::getInstance().updateScreen();
	while (Screen::getInstance().getWindow().isOpen())
	{
		sf::Event event;
		while (Screen::getInstance().getWindow().pollEvent(event))
		{

		}

		handleTimePassed();
	}
}

void Controller::setTimerFor(int seconds)
{
	m_timer.m_on = true;
	m_timer.m_seconds = seconds;
	m_timer.m_clock.restart();
}

Controller::~Controller()
{
}
