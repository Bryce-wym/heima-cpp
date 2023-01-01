#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        m_A = 100;
    }
    int m_A;

    void func()
    {
        cout << "父类func" << endl;
    }
    void func(int a)
    {
        cout << "父类func(int a)" << endl;
    }
};

class Son : public Base
{
public:
    Son()
    {
        m_A = 200;
    }
    int m_A;

    void func()
    {
        cout << "子类func" << endl;
    }
};

void test01()
{
    Son s1;
    cout << s1.m_A << endl;
    cout << s1.Base::m_A << endl;
    s1.func();
    s1.Base::func(10);
    s1.Base::func();
}
// 如果子类与父类的成员函数名字相同，子类会把父类所有的同名版本都隐藏掉
// 直接调用先调用子类，如果想要调用父类 需要作用域
int main()
{
    test01();
    return EXIT_SUCCESS;
}