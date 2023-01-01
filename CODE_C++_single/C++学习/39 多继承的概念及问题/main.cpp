#include <iostream>
using namespace std;

class Base1
{
public:
    Base1()
    {
        m_A = 10;
    }
    int m_A;
};

class Base2
{
public:
    Base2()
    {
        m_B = 20;
    }
    int m_B;
};

class Son : public Base1, public Base2
{
public:
    int m_C;
    int m_D;
};

void test01()
{
    cout << sizeof(Son) << endl;
    Son s1;
    cout << s1.m_A << endl;
}

int main()
{
    test01();
    return EXIT_SUCCESS;
}