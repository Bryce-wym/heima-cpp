#include <iostream>
#include <cstring>
using namespace std;

template <class NameType, class AgeType = int> //类模板可以有默认参数
class Person
{
public:
    Person(NameType name, AgeType age)
    {
        this->m_Age = age;
        this->m_Name = name;
    }

    void showName()
    {
        cout << this->m_Name << endl;
    }

    NameType m_Name;
    AgeType m_Age;
};

// 1. 指定传入类型
void dowork(Person<string, int> &p)
{
    p.showName();
}
void test01()
{
    Person<string, int> p("MT", 10);
    dowork(p);
}

// 2. 参数模板化
template <class T1, class T2>
void dowork2(Person<T1, T2> &p)
{
    //查看类型
    cout << typeid(T1).name() << endl;
    cout << typeid(T2).name() << endl;
    p.showName();
}
void test02()
{
    Person<string, int> p("DB", 10);
    dowork2(p);
}

// 3. 整体模板化
template <class T>
void dowork3(T &p)
{
    p.showName();
}
void test03()
{
    Person<string, int> p("HH", 10);
    dowork3(p);
}

int main()
{
    test02();
    return EXIT_SUCCESS;
}