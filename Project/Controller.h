#pragma once
#include <SFML/Graphics.hpp>


class Controller
{
public:
	static Controller& getInstance();
	void run();
	~Controller();

private:
	void openWindow();
	Controller();
	Controller(const Controller&);
};
