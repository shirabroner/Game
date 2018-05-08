#include "Screen.h"



void Screen::setIcon()
{
	sf::Image icon;
	/*if (!icon.loadFromFile("Images/icon0.png"))
	{
		throw std::exception("Icon could not be loaded");
	}

	m_window.setIcon(256, 256, icon.getPixelsPtr());*/
}

Screen::Screen()
	: m_window(sf::VideoMode(700, 700), "Pacman")
{
	setIcon();
	displayBackground();
}

void Screen::displayBackground(int level)
{
	if (level == 0)
	{
		m_window.clear();
		auto image = ResourcesLibrary::getInstance().getImage("Splash");
		m_window.draw(*image);
		m_window.display();
		auto value = ResourcesLibrary::getInstance().getValue("BackgroundSleepSeconds");
		Sleep(1000 * value);
		m_window.close();
		//

		//TODO: display background image
		//Controller::getInstance().setTimerFor(2);
		
	}
}


Screen::~Screen()
{
}

Screen & Screen::getInstance()
{
	static Screen m_instance;
	return m_instance;
}

void Screen::updateScreen()
{
	m_window.clear();
}

sf::RenderWindow & Screen::getWindow()
{
	return m_window;
}
