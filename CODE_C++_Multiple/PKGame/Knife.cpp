#include "Knife.h"

Knife::Knife()
{
    this->m_BaseDanage = 10;
    this->m_WeaponName = "小刀";
}

int Knife::getBaseDamage()
{
    return this->m_BaseDanage;
}
int Knife::getSuckBlood()
{
    return 0;
}
bool Knife::getHold()
{
    return false;
}
bool Knife::getCrit()
{
    return false;
}