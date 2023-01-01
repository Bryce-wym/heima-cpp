#include <iostream>
using namespace std;

class Base1
{
public:
    int m_a;

protected:
    int m_b;

private:
    int m_c;
};

//公有继承
class Son1 : public Base1
{
public:
    void func()
    {
        // cout << m_c << endl; //基类中私有的属性 不可继承
        cout << m_a << endl; //基类中的公有属性 可继承 还是public
        cout << m_b << endl; //基类中的保护属性 可继承 还是protected  类外不可访问
    }
};

//保护继承
class Son2 : protected Base1
{
public:
    void func()
    {
        // cout << m_c << endl; //基类中私有的属性 不可继承
        cout << m_a << endl; //基类中的公有属性 可继承 变为protected  类外不可访问
        cout << m_b << endl; //基类中的保护属性 可继承 还是protected  类外不可访问
    }
};

//私有继承
class Son3 : private Base1
{
public:
    void func()
    {
        // cout << m_c << endl; //基类中私有的属性 不可继承
        cout << m_a << endl; //基类中的公有属性 可继承 变为private
        cout << m_b << endl; //基类中的保护属性 可继承 变为private
    }
};

class GrandSon3 : public Son3
{
public:
    void func()
    {
        // cout << m_a << endl;  //孙子类中访问不到
    }
};