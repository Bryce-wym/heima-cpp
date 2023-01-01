#pragma once
#include<iostream>
#include<string>
using namespace std;

class Game
{
private:
    /* data */
public:
    Game();
    ~Game();
    Game(string name);
    string m_GameName;
};