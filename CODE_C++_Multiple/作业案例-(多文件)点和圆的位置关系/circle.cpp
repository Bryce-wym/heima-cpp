#include"circle.h"

void Circle::setR(double r)
{
    m_R = r;
}

double Circle::getR()
{
    return m_R;
}

void Circle::setCenter(point center)
{
    m_Center = center;
}

point Circle::getCenter()
{
    return m_Center;
}

//利用成员函数来判断
void Circle::CompareByClass(point &p)
{
    //获得圆心和点的距离的平方
    double distance = pow(m_Center.getX() - p.getX(), 2) + pow(m_Center.getY() - p.getY(), 2);
    double rDistance = pow(m_R, 2);

    if (distance == rDistance)
    {
        cout << "成员函数：：点在圆上" << endl;
    }
    else if (distance < rDistance)
    {
        cout << "成员函数：：点在圆内" << endl;
    }
    else
    {
        cout << "成员函数：：点在圆外" << endl;
    }
}


