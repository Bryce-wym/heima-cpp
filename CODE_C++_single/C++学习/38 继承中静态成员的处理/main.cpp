#include <iostream>
using namespace std;

class Base
{
public:
    static int m_A;

    static void func()
    {
        cout << "base func()" << endl;
    }

    static void func(int a)
    {
        cout << "base func(int a)" << endl;
    }
};
int Base::m_A = 10;

//静态成员属性  子类可以继承下来
class Son : public Base
{
public:
    static int m_A;

    static void func()
    {
        cout << "Son func()" << endl;
    }
};
int Son::m_A = 20;

void test01()
{
    cout << Son::m_A << endl;
    //访问父类的 m_A
    cout << Base::m_A << endl;
    Son::func();
    //访问 父类中的同名的函数
    Son::Base::func(10);
}

int main()
{
    test01();
    return EXIT_SUCCESS;
}