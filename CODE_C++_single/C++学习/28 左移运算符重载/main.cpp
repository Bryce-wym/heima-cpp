#include <iostream>
using namespace std;

class Person
{

    friend ostream &operator<<(ostream &cout, Person &p1);

public:
    Person(){};
    Person(int a, int b) : m_A(a), m_B(b)
    {
    }
    //重载左移运算符不能写在成员函数中
private:
    int m_A;
    int m_B;
};

ostream &operator<<(ostream &cout, Person &p1) //第一个参数 cout 第二个参数 person
{
    cout << "m_A=" << p1.m_A << "m_B=" << p1.m_B << endl;
    return cout;
}

void test01()
{
    Person p1(10, 10);

    cout << p1 << endl;
}

int main()
{
    test01();
    return EXIT_SUCCESS;
}