#include <iostream>
using namespace std;

class Person
{
public:
    Person()
    {
        cout << "默认构造调用" << endl;
    }

    Person(int a)
    {
    }

    ~Person()
    {
        cout << "析构函数调用" << endl;
    }
};


void test01()
{
    // Person p1;  //栈区开辟
    Person *p2 = new Person(10); // 堆区开辟
    // 所有new出来的对象  都会返回该类型的指针
    // malloc 返回 void *  还要强制转换
    // malloc 不会调用构造
    // new  运算符  malloc 函数

    //释放堆区空间
    // delete 也是运算法  配合new用   malloc配合free用
    delete p2;
}

void test02()
{
    // void *p = new Person;
    // //当void*接受new出来的指针，会出现释放问题
    // delete p;
    // //无法释放p,所以要避免
}

void test03()
{
    // 通过new开辟数组  一定会调用默认构造函数,所以一定要提供默认构造
    Person *pArray = new Person[10];

    // 在栈上开辟数组，可以指定有参构造
    Person pArray2[2] = {Person(1), Person(2)};

    // 释放数组  delete[]
    delete[] pArray;
}

int main()
{
    test01();
    return 0;
}

