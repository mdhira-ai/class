#include "game.h"


void Game::setname(string name)
{
    this->name = name;
}

void Game::setlevel(int level)
{
    this->level = level;
}

void Game::start()
{ 
    cout << "game name " << name << " and level " << level << endl;
}

Game::~Game()
{
}