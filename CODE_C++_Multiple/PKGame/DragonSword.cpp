#include "DragonSword.h"

DragonSword::DragonSword()
{
    this->m_BaseDanage = 20;
    this->m_WeaponName = "屠龙宝刀";
    this->suckRate = 20;
    this->holeRate = 30;
    this->critRate = 35;
}

int DragonSword::getBaseDamage()
{
    return this->m_BaseDanage;
}

int DragonSword::getSuckBlood()
{
    if (isTrigger(this->suckRate))
    {
        return this->m_BaseDanage * 0.5;
    }
    return 0;
}

bool DragonSword::getHold()
{
    if (isTrigger(this->holeRate))
    {
        return true;
    }
    return false;
}

bool DragonSword::getCrit()
{
    if (isTrigger(this->critRate))
    {
        return true;
    }
    return false;
}

bool DragonSword::isTrigger(int rate)
{
    //通过isTrigger判断
    //随机数
    int num = rand() % 100 + 1;
    if (num < rate)
    {
        return true;
    }
    return false;
}