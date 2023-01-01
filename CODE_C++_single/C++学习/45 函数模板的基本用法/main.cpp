#include <iostream>
using namespace std;

//交换int类型两个数字
void mySwapInt(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

//交换double
void mySwapDouble(double &a, double &b)
{
    double tmp = a;
    a = b;
    b = tmp;
}

//类型，逻辑有非常相似
//类型参数化，泛型编程--模板技术
template <class T> //告诉编译器   下面如果出现T不要报错，T是一个通用的类型
void mySwap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T> //等价于template <class T>
void mySwap2()
{
}

void test()
{
    int a = 10;
    int b = 20;
    // mySwapInt(a, b);
    // 1.自动类型推导,必须有参数类型才可以推导
    mySwap(a, b);
    // 2.显式指定类型
    mySwap<int>(a, b);
    cout << a << b << endl;

    // 模板必须指定出T才可以使用
    mySwap2<double>();
}

int main()
{
    test();
    return EXIT_SUCCESS;
}
