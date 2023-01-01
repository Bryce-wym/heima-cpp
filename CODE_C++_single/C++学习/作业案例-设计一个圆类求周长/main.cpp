#include <iostream>
using namespace std;

const double pi = 3.14;

// 1.设计一个圆类，求圆的周长

class Circle // class 代表一个类，后面紧跟类的名称
{
public: //公共权限
        //求圆的周长
    //在类里面写函数 成员函数
    double calculateZC()  //在此处不需要定义为 double czc(int m_R)
    {
        return m_R * 2 * pi;
    }

    //设置半径的成员方法
    //成员函数 可以修改成员属性
    void set_R(int r)
    {
        m_R = r;
    }

    
    //半径 成员属性
    int m_R;
};

void test01()
{
    // 通过类创建一个圆
    Circle c1;   // c1是一个圆  即一个对象
    c1.set_R(10); //通过成员函数给这个对象来进行半径的幅值
    //输出圆的周长
    cout << "c1的周长为: " << c1.calculateZC() << endl; // c1.calculateZC()要加()!
}

int main()
{
    test01();
    return 0;
}