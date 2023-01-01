#include <iostream>
#include <cstring>
using namespace std;

//让编译器提前看到printperson2的声明
//让编译器看到person的声明
template <class T1, class T2>
class person;
template <class T1, class T2>
void printPerson2(person<T1, T2> &p);

template <class T1, class T2>
class person
{
    //友元函数类内实现
    //默认函数为全局函数
    friend void printPerson(person<T1, T2> &p)
    {
        cout << p.m_Age << endl;
    }

    //友元函数类外实现
    // friend void printPerson2(person<T1, T2> &p);  //!!这样写只是普通函数的声明!!
    friend void printPerson2<>(person<T1, T2> &p); //加上<> 模板函数声明

private:
    T1 m_Name;
    T2 m_Age;

public:
    person(T1 name, T2 age)
    {
        this->m_Age = age;
        this->m_Name = name;
    }
};

//友元函数类外实现
template <class T1, class T2>
void printPerson2(person<T1, T2> &p)
{
    cout << p.m_Age << endl;
}

void test01()
{
    person<string, int> p("hh", 10);
    printPerson2(p);
}

int main()
{
    test01();
    return EXIT_SUCCESS;
}