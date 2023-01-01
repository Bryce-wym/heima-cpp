#include <iostream>
using namespace std;

class Person
{
public:
    Person()
    {
        // m_Age =10;
    }
    static int m_Age; // 加入static就是静态变量，会共享数据！！！！
    // 静态成员变量，在类内声明，类外初始化
    //静态成员变量也是有权限的

    int m_A;

    //静态成员函数  也是有权限的
    //不可访问 普通成员变量!!!
    //可以访问静态成员变量
    static void func()
    {
        // m_A = 10;  //不可访问 普通成员变量!!!
        m_Age = 10; //可以访问静态成员变量
        cout << "func的调用" << endl;
    }

    // 普通成员函数  可以访问普通成员变量和静态成员变量
    void MyFunc()
    {
        m_A = 100;
        m_Age = 100;
    }

private:
    static int m_other; //私有权限，在类外不可访问
    static void func2()
    {
        cout << "func2的调用" << endl;
    }
};

int Person::m_Age = 0;    //类外初始化实现  前面不加static
int Person::m_other = 10; //本质还是在类内初始化

void test01()
{
    // 1.通过对象访问属性
    Person p1;
    p1.m_Age = 10;

    Person p2;
    p2.m_Age = 20;

    cout << "p1 = " << p1.m_Age << endl; // 10?20?
    cout << "p2 = " << p2.m_Age << endl;
    //共享数据

    // 2. 通过类名访问  更常用！！！
    cout << "通过类名访问Age:" << Person::m_Age << endl;
    // cout << "other=" << Person::m_other << endl;  //不可访问

    //静态成员函数的调用
    p1.func();
    p2.func();
    Person::func();
    // Person::func2();  //私有权限，在类外不可访问
}

int main()
{
    test01();
    return 0;
}