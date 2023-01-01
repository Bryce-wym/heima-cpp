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

void test01()
{

    //类模板不支持自动类型推导
    // Person p("孙悟空",100);

    //显示指定类型
    Person<string, int> p("孙悟空", 100);
    p.showName();
}

class Person1
{
public:
    void showPerson1()
    {
        cout << "person1的调用" << endl;
    }
};

class Person2
{
public:
    void showPerson2()
    {
        cout << "person2的调用" << endl;
    }
};

template <class T>
class myClass
{
public:
    T obj;
    void fun1()
    {
        obj.showPerson1();
    }

    void fun2()
    {
        obj.showPerson2();
    }
};
//类模板成员函数一开始不被创建出来，而是运行时才会去创建

void test02()
{
    myClass<Person1> m;
    m.fun1();
}

int main()
{
    test02();
    return EXIT_SUCCESS;
}

// 类模板
// 写法 templa<T...> 紧跟着是类
// 与函数模板的区别，可以有默认类型参数
// 类模板不支持自动类型推导