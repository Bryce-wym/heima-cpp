#include <iostream>
using namespace std;

//值传递  逻辑上的判断
void myswap1(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "myswap1::a =" << a << endl;
    cout << "myswap1::b =" << b << endl;
}

void test01()
{
    int a = 10;
    int b = 20;
    myswap1(a, b);
    cout << "a =" << a << endl;
    cout << "b =" << b << endl;
}

//地址传递
void myswap2(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
    cout << "myswap2::a =" << *a << endl;
    cout << "myswap2::b =" << *b << endl;
}

void test02()
{
    int a = 10;
    int b = 20;
    myswap2(&a, &b); //值传递  逻辑上的判断
    cout << "a =" << a << endl;
    cout << "b =" << b << endl;
}

//引用传递 类似于传地址
void myswap3(int &a, int &b) //&a = a, &b = b
{
    int tmp = a;
    a = b;
    b = tmp;
}

void test03()
{
    int a = 10;
    int b = 20;
    myswap3(a, b); //值传递  逻辑上的判断
    cout << "a =" << a << endl;
    cout << "b =" << b << endl;
}

//引用的注意事项
//引用的本质就是一个指针常量
// 1.引用必须引一块合法的内存空间
// 2.不要返回一个局部变量的引用

//如果函数的返回值是引用，那么这个函数可以作为左值
int &dowork()
{
    static int a = 10;
    return a;
}

void test04()
{
    dowork() = 1000; //相当于写了a=1000
}



int main()
{
    test03();
    return 0;
}