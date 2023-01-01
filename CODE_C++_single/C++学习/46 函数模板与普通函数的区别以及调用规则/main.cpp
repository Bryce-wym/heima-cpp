#include <iostream>
using namespace std;

template <class T>
T myPlus(T a, T b)
{
    return a + b;
}

int myPlus2(int a, int b)
{
    return a + b;
}

void test01()
{
    int a = 10;
    int b = 20;
    char c = 'c';
    // myPlus(a, c);   //类型推导不出来    函数模板不可以进行隐式类型转换
    cout << myPlus2(a, c) << endl; //普通的函数 可以进行隐式类型转换
}

// 2. 普通函数和函数模板的调用规则
template <class T>
void myPrint(T a, T b)
{
    cout << "模板调用的myPrint" << endl;
}

template <class T>
void myPrint(T a, T b, T c)
{
    cout << "重载模板调用的myPrint" << endl;
}

void myPrint(int a, int b)
{
    cout << "普通的函数调用myPrint" << endl;
}

void test02()
{
    int a = 10;
    int b = 20;
    // 1.如果出现重载，优先使用普通函数调用,如果没有函数实现就会出现错误
    //  myPrint(a, b);

    // 2.如果想要强制调用模板，那么可以使用空参数列表
    myPrint<>(a, b);

    // 3.函数模板可以发生重载
    int c = 30;
    myPrint(a, b, c);

    // 4.如果函数模板可以产生更好的匹配，则优先调用函数模板
    char c1 = 'c';
    char d = 'd';
    myPrint(c1, d);
}

int main()
{
    test02();
    return EXIT_SUCCESS;
}