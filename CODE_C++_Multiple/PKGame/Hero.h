#pragma once
#include <iostream>
#include <cstring>
#include "Weapon.h"
#include "Monster.h"
using namespace std;

class Monster;
class Hero
{
public:
    Hero();

    string m_Name;

    int m_Atk;

    int m_Def;

    int m_Hp;

    Weapon *weapon;

    void EquipWeapon(Weapon *weapon);

    void Attack(Monster *monster);
};
