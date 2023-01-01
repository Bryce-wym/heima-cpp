#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base默认构造函数调用" << endl;
    }

    ~Base()
    {
        cout << "Base析构函数调用" << endl;
    }
};

//子类会继承父类成员属性，成员函数
//但是子类不会继承 父类的构造函数和析构函数

class Son : public Base
{
public:
    Son()
    {
        cout << "Son默认构造函数调用" << endl;
    }
    ~Son()
    {
        cout << "Son析构函数调用" << endl;
    }
};

void test01()
{
    // Base b1;
    Son s1;
}

//如果父类中没有合适的默认构造
class Base2
{
public:
    Base2(int a)
    {
        this->m_A = a;
        cout << "Base2的有参构造函数" << endl;
    }

    int m_A;
};

class Son2 : public Base2
{
public:
    Son2(int a) : Base2(a) //利用初始化列表方式  显示调用 有参构造
    {
    }
};

void test02()
{
    Son2 s2(1000);
}

int main()
{
    test02();
    return EXIT_SUCCESS;
}