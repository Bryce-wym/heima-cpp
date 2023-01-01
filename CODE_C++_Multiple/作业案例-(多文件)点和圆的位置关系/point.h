#pragma once
#include <iostream>
using namespace std;

class point
{
private:
    double m_X;
    double m_Y;

public:
    void setX(double x);
    void setY(double y);
    double getX();
    double getY();
};