#include <iostream>
#include <cstring>
using namespace std;

template <class T1, class T2>
class Person
{
public:
    Person(T1 name, T2 age);
    // {
    //     this->m_Age = age;
    //     this->m_Name = name;
    // }
    void show();
    // {
    //     cout << this->m_Name << endl;
    // }

    T1 m_Name;
    T2 m_Age;
};

//类外实现成员函数
template <class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
    this->m_Age = age;
    this->m_Name = name;
}

//类外实现成员函数
template <class T1, class T2>
void Person<T1, T2>::show()
{
    cout << this->m_Name << endl;
}

void test01()
{
    Person<string, int> p1("mt", 10);
    p1.show();
}

int main()
{
    test01();
    return EXIT_SUCCESS;
}