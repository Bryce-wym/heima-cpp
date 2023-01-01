#include <iostream>
using namespace std;

// 1.全局变量检测增??

// 2.函数检测增??
int getrects(int w, int h) //参数检测增强，必须指明参数类型
{
    return w * h; // 返回值检测增强，必须要有返回??
}

void test02()
{
    getrects(10, 10); // 函数调用参数检测增??
}

// 3. 类型转换检测增??
void test03()
{
    char *p = (char *)malloc(sizeof(64));
    //"void *" 类型的值不能用于初始化 "char *" 类型的实??,必须强制转换
}

// 4. struct增强
struct Person
{
    int m_Age;
    void plusAge() { ++m_Age; }; // c++中strcut可以加函??
};

void test04()
{
    Person pl; //使用时可以不加struct关键??
    pl.m_Age = 10;
    pl.plusAge();
    cout << pl.m_Age << endl;
}

// 5. bool类型增强 c语言中没有bool类型
bool flog = true; //只有真或??
void test05()
{
    flog = 100;
    cout << flog << endl;
}

// 6.三目运算符增??
void test06()
{
    int a = 10;
    int b = 20;
    cout << (a < b ? a : b) << endl;
    (a < b ? a : b) = 100; // c语言中不能这样使??  ?? *(a < b ? &a : &b) = 100
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
}

// 7. const 增强
const int m_A = 10;
void test07()
{
    const int m_B = 20; //C++中，const 不会分配内存
    int *p = (int *)&m_B; //编译器临时开辟一块内存空?? p指向的是临时那块空间
    *p = 200;
    cout << "*p=" << *p << endl;
    cout << "m_B=" << m_B << endl;

    int arr[m_B];//c++中可以用幅值，c中不可以，定义的m_B是伪常量
}



int main()
{
    
    test07();

    return 0;
}