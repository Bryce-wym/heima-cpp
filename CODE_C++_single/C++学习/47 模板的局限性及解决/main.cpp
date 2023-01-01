#include <iostream>
#include <cstring>
using namespace std;

class Person
{
public:
    Person(string name, int age)
    {
        this->m_Age = age;
        this->m_Name = name;
    }

    string m_Name;
    int m_Age;
};

template <class T>
bool myCompare(T &a, T &b)
{
    if (a == b)
    {
        return true;
    }
    return false;
}

//通过具体化自定义数据类型，解决上述问题
template <> bool myCompare<Person>(Person &a, Person &b)
{
    if (a.m_Age == b.m_Age)
    {
        return true;
    }
    return false;
}

void test01()
{
    int a = 20;
    int b = 10;
    int ret = myCompare(a, b);
    cout << ret << endl;

    Person p1("tom", 23);
    Person p2("bryce", 23);
    int ret2 = myCompare(p1, p2);
    cout << ret2 << endl;
}

int main()
{
    test01();
    return EXIT_SUCCESS;
}