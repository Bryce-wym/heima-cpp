#include <iostream>
using namespace std;

//C语言中没有函数参数和占位参数
//函数的默认参数 参数后面 = ...
//函数参数的注意事项，如果有一个位置有了默认参数
//那么从这个位置开始，从左往右都必须有默认参数
//传入参数，如果有参数，就用传入的参数，没有参数就用默认值


//如果函数声明里面有了默认参数，那么函数实现时必须没有
void myFunc(int a =10 ,int b =10);
void myFunc(int a , int b){}


void func(int a, int b = 10, int c = 1)
{
    cout << "a+b+c=" << a + b + c << endl;
}

void test01()
{
    func(1, 2); // a = 1 ,b = 2 ,c = 1
}

// 函数的占位参数
//如果有个占位参数，函数调用的时候必须要提供这个参数
//占位参数没有大用处，只有后面重载++符号有一点点用
//占位参数可以有默认值
void func2(int a, int)
{

}

void test02()
{
    func2(10,1);
}



int main()
{
    test01();
    return 0;
}