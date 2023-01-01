//利用全局方法计算
#include <iostream>
using namespace std;
#include "point.h"
#include "circle.h"


void Compare(Circle &c, point &p)
{
    //获得圆心和点的距离的平方
    double distance = pow(c.getCenter().getX() - p.getX(), 2) + pow(c.getCenter().getY() - p.getY(), 2);
    double rDistance = pow(c.getR(), 2);

    if (distance == rDistance)
    {
        cout << "点在圆上" << endl;
    }
    else if (distance < rDistance)
    {
        cout << "点在圆内" << endl;
    }
    else
    {
        cout << "点在圆外" << endl;
    }
}

void test01()
{
    point p1; //点
    p1.setX(10);
    p1.setY(11);

    point center; //圆心
    Circle c1;    //圆
    center.setX(10);
    center.setY(0);
    c1.setR(10);
    c1.setCenter(center);

    //利用全局判断
    Compare(c1, p1);
    //利用成员函数判断
    c1.CompareByClass(p1);
}

int main()
{
    test01();
    return 0;
}