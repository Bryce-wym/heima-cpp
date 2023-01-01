
#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
    /* data */
public:
    Person() {}

    //初始化属性
    Person(char *name, int age)
    {
        m_name = (char *)malloc(strlen(name) + 1); //开辟空间
        strcpy(m_name, name);
        m_age = age;
    }
    //拷贝构造  系统会提供默认拷贝构造，而且是简单的值拷贝
    //自己提供拷贝构造，原因：简单的浅拷贝会释放堆区空间两次，导致挂掉

    //深拷贝

    Person(const Person &p)
    {
        m_age = p.m_age;
        m_name = (char *)malloc(strlen(p.m_name) + 1);
        strcpy(m_name, p.m_name);
    }

    ~Person()
    {
        cout << "析构函数的调用" << endl;

        if (m_name != nullptr)
        {
            free(m_name);
            m_name = nullptr;
        }
        cout << (int *)m_name << endl;

        /* 1.如果给cout提供一个指针，它将打印指针所指向的地址单元的地址，但如果指针类型为char *，则cout将打印char *指针所指向的字符串。
        2.如果要显示char *指针所指向的地址单元的地址，需要将char *类型的指针强制转化为另一种类型的指针，我将char *类型的指针强制转化为int *类型指针。 */
    }

    //姓名
    char *m_name;
    //年龄
    int m_age;
};

void test01()
{
    char *pp = (char *)"老王";
    Person p1(pp, 10);
    Person p2(p1);
}

int main()
{
    test01();
    return 0;
}