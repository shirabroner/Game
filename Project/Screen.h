#pragma once
#include <SFML/Graphics.hpp>
#include "ResourcesLibrary.h"
#include <windows.h>

class Controller;
class Screen
{
public:
	~Screen();
	static Screen& getInstance();
	void updateScreen();
	sf::RenderWindow& getWindow();

private:
	void setIcon();
	Screen();
	sf::RenderWindow m_window;
	void displayBackground(int level = 0);
	Screen(const Screen&);
};

