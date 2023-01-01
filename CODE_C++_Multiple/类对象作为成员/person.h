#pragma once
#include <iostream>
#include <string>
#include "phone.h"
#include "game.h"
using namespace std;

class Person
{
private:
    /* data */
public:
    Person();
    Person(string name);
    Person(string name, string PhoneName, string GameName);

    ~Person();
    void playGame();
    string m_Name;
    Phone m_Phone;
    Game m_Game;
};
