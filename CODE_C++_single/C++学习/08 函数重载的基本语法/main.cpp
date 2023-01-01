#include <iostream>
using namespace std;

//函数重载
// c++中函数名称可以重复
//必须在同一个作用域，函数名称相同
//函数的参数  个数不同 或者  类型不同  或者  顺序不同

void func()
{
    cout << "无参数的func()" << endl;
}

void func(int a)
{
    cout << "有参数的func(int a)" << endl;
}

void func(double a)
{
    cout << "有参数的func(double a)" << endl;
}

void func(double a, int b)
{
    cout << "有参数的func(double a, int b)" << endl;
}

void func(int b, double a)
{
    cout << "有参数的func(int b, double a,)" << endl;
}

//返回值可以作为函数重载的条件吗？？？   不可以

void test01()
{
    func(1.1, 3);
    func(3, 1.1);
}

//当函数重载 碰到了默认参数时候，需要注意避免二义性问题
void func2(int a, int b = 10)
{
}
void func2(int a)
{
}

void test02()
{
    //func2(10);
}


//引用的重载
void func3(int &a) //引用必须要引合法的内存空间
{
}

void func3(const int &a) //const 可以作为重载条件  int tmp =10; const int &a =tmp;
{
}

void test03()
{
    //int a =10;
    func3(10);// 调用func3(const int &a)
}


int main()
{
    test01();
    return EXIT_SUCCESS;
}