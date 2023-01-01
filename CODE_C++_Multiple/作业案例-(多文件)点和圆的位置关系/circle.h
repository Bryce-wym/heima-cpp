#pragma once
#include <iostream>
#include "point.h"
#include <cmath>
using namespace std;

class Circle
{
private:
    double m_R;     //半径
    point m_Center; //圆心
public:
    void setR(double r);
    double getR();
    void setCenter(point center);
    point getCenter();
    //利用成员函数来判断
    void CompareByClass(point &p);
};