#include "Game.h"



Game::Game()
	:m_level(0), m_state(Menu)
{
}


Game::~Game()
{
}

int Game::nextLevel()
{
	return ++m_level;
}

void Game::startGame()
{
	m_level = 1;
}

GameState Game::getState()
{
	return m_state;
}
