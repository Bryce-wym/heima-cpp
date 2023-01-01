#include "game.h"

Game::Game()
{
    cout << "Game的默认构造函数调用" << endl;
}

Game::Game(string name)
{
    cout << "Game的有参构造函数调用" << endl;
    m_GameName =name;
}

Game::~Game()
{
    cout << "Game的析构函数调用" << endl;
}