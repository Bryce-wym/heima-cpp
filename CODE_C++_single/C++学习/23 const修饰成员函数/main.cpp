#include <iostream>
using namespace std;

class Person
{
public:
    Person()
    {
        //构造函数中修改属性
        // this 永远指向本体

        this->m_A = 0;
        this->m_B = 0;
    }

    void showInfo() const //常函数  不允许修改指针指向的值
    {
        // this->m_A = 1000;  //报错
        this->m_B = 1000;

        // const Person * const this
        cout << "m_A " << this->m_A << endl;
        cout << "m_B " << this->m_B << endl;
    }

    void show2()
    {
    }

    int m_A;
    mutable int m_B; //就算是常函数  仍执意修改
};

void test01()
{
    Person p1;
    p1.showInfo();

    //常对象  不允许修改属性
    const Person p2;
    // p2.m_A =100;  //报错
    // 常对象只能调用常函数
    // p2.show2();
    p2.showInfo();
}

int main()
{
    test01();
    return EXIT_SUCCESS;
}

//常函数修饰的是this指针   const type * const this
//常函数不能修改this指针指向的值
