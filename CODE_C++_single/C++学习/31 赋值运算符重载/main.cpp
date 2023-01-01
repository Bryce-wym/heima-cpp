#include <iostream>
#include <cstring>
using namespace std;

//一个类默认创建  赋值运算符  进行简单的值传递
class Person
{

public:
    Person(int a)
    {
        this->m_A = a;
    }

    int m_A;
};

class Person2
{
public:
    Person2(char *name)
    {
        this->pName = new char[strlen(name) + 1];
        strcpy(this->pName, name);
    }

    ~Person2()
    {
        if (this->pName != nullptr)
        {
            delete[] this->pName;
            this->pName = nullptr;
        }
    }

    //重载等号运算符
    Person2 &operator=(const Person2 &p)
    {
        //先判断原来堆区有内容则释放
        if (this->pName != nullptr)
        {
            delete[] this->pName;
            this->pName = nullptr;
        }

        this->pName = new char[strlen(p.pName) + 1];
        strcpy(this->pName, p.pName);
        return *this;
    }

    char *pName;
};

void test01()
{
    Person p1(10);
    Person p2(20);

    p2 = p1; //赋值
    cout << "p2的m_A " << p2.m_A << endl;
}

void test02()
{
    char *pp1 = (char *)"狗蛋";
    char *pp2 = (char *)"猫蛋";

    Person2 p1(pp1);
    Person2 p2(pp2);

    p2 = p1;   //若不重载将发生浅拷贝 析构时两次释放同一堆区
    cout << p2.pName << endl;
}

int main()
{
    test02();
    return EXIT_SUCCESS;
}

//拷贝构造函数只发生在定义一个对象的时候，定义完了以后再赋值，就是=号重载了