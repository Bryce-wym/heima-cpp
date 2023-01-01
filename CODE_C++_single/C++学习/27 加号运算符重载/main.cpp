#include <iostream>
using namespace std;

class Person
{
public:
    Person() {}
    Person(int a, int b) : m_A(a), m_B(b) {}
    int m_A;
    int m_B;

    //加号重载运算符
    // Person operator+(Person &p)
    // {
    //     Person tmp;
    //     tmp.m_A = this->m_A + p.m_A;
    //     tmp.m_B = this->m_B + p.m_B;
    //     return tmp;
    // }
};

//利用全局函数  进行加号重载运算符的重载
Person operator+(Person &p1, Person &p2)
{
    Person tmp;
    tmp.m_A = p1.m_A + p2.m_A;
    tmp.m_B = p1.m_B + p2.m_B;
    return tmp;
}

//重载
Person operator+(Person &p1, int a)
{
    Person tmp;
    tmp.m_A = p1.m_A + a;
    tmp.m_B = p1.m_B + a;
    return tmp;
}

void test01()
{
    Person p1(10, 10);
    Person p2(10, 10);

    Person p3 = p1 + p2;
    Person p4 = p1 + 30;

    cout << p3.m_A << p3.m_B << endl;
    cout << p4.m_A << p4.m_B << endl;
}

int main()
{
    test01();
    return EXIT_SUCCESS;
}