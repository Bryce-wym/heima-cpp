#include <iostream>
using namespace std;
#pragma pack(1) //以下代码编译出来的是以1个字节的方式对齐的。这样能节约内存资源，但是会在效率上有所影响.

class Person
{
public:
    int m_A;               // 非静态成员变量，属于对象身上
    void func() {}         // 非静态成员函数  不属于对象身上
    static int m_B;        // 静态成员变量也不属于对象身上
    static void func2() {} // 静态成员函数，不属于对象身上
    double m_C;            // 不加 #pragma pack(1) 则是16 字节对齐
};

//结论：只有非静态成员变量，才属于对象身上
void test01()
{
    cout << "size of (Person)=" << sizeof(Person) << endl;
    // 空类的大小为1 每个实例的对象 都有一个独一无二的地址，char维护这个地址
}

void test02()
{
    // this指针指向被调用的成员函数所属的对象
    Person p1;
    p1.func(); //编译器会偷偷加入一个this指针  Person *this

    Person p2;
    p2.func();
}

int main()
{
    test01();
    return EXIT_SUCCESS;
}