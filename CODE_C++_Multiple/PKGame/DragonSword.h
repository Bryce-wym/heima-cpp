#pragma once
#include <iostream>
#include <cstring>
#include "Weapon.h"
using namespace std;

class DragonSword : public Weapon
{
public:
    DragonSword();
    //获取基础伤害
    virtual int getBaseDamage();

    //获取吸血
    virtual int getSuckBlood();

    //获取是否定身
    virtual bool getHold();

    //获取是否暴击
    virtual bool getCrit();

    // 吸血率  定身率  暴击率
    int suckRate;
    int holeRate;
    int critRate;

    //传入概率 判断是否触发
    bool isTrigger(int rate);
};