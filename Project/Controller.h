#pragma once
#include <SFML/Graphics.hpp>
#include "ImagesLibrary.h"


class Controller
{
public:
	static Controller& getInstance();
	void run();
	~Controller();

private:
	void openWindow();
	void openMenuWindow();
	Controller();
	Controller(const Controller&);
};
