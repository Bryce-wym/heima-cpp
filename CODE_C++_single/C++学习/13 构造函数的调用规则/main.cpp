#include <iostream>
using namespace std;

class myClass
{
private:
    /* data */
public:
    myClass()
    {
        cout << "默认构造函数" << endl;
    }

    myClass(int a)
    {
        cout << "有参构造函数" << endl;
    }

    int m_A;
};

// 系统默认给一个类提供三个函数    默认/有参/拷贝
// 1. 当我们提供了有参构造函数，那么系统就不会给我们提供默认构造函数
//但是 系统还会提供默认拷贝构造函数,进行简单的拷贝

void test01()
{
    myClass c1;
    c1.m_A = 10;
    myClass c2(c1);
    cout << c2.m_A << endl;
}

// 2. 当我们提供了 拷贝函数，那么系统就不会提供其他构造了

class myClass2
{
private:
    /* data */
public:
    myClass2()
    {
        cout << "默认构造函数" << endl;
    }

    myClass2(int a)
    {
        cout << "有参构造函数" << endl;
    }

    myClass2(const myClass2 &m)
    {
    }

    int m_A;
};

void test02()
{
    myClass2 c1;
}

int main()
{
    test01();
    return 0;
}