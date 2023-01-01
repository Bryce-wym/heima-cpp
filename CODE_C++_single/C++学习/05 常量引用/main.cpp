#include <iostream>
using namespace std;

void test01()
{
    // int &ref = 10; //引用了不合法的内存，不可以
    const int &ref = 10; //加入const后，相当于： int tmp =10； const int &ref =10;  会分配内存

    int *p = (int *)&ref;
    *p = 1000;
    cout << "ref = " << ref << endl;
}

//常量引用适用的场景  用于修饰形参
void showValue(const int &val)
{
    // val +=1000;  //如果只是想显示内容，而不是修改内容，那么用const修饰
    cout << "val = " << val << endl;
}

void test02()
{
    int a = 10;
    showValue(a);
}


int main()
{
    test01();
    return 0;
}