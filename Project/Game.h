#pragma once
#include "Utilities.h"

class Game
{
public:
	Game();
	~Game();
	int nextLevel();
	void startGame();
	GameState getState();

private:
	int m_level;
	GameState m_state;
};

