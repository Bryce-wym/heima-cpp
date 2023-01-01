#include <iostream>
#include <typeinfo>
using namespace std;

template <class T>
class Base
{
public:
    T m_A;
};

// child继承于base必须告诉base中的T的类型，否则无法分配内存
class Child : public Base<int>
{
};

// child2也是模板类
template <class T1, class T2>
class Child2 : public Base<T2>
{
public:
    Child2()
    {
        cout << typeid(T1).name() << endl;
        cout << typeid(T2).name() << endl;
    }
    T1 m_B;
};

void test01()
{

    Child2<int, double> c1; //有用户来指定类型

}

int main()
{
    test01();
    return EXIT_SUCCESS;
}