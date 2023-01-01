#include <iostream>
using namespace std;

//定义一个宏
#define MyAdd(x, y) (x + y)

void test01()
{
    int result = MyAdd(10, 20) * 20;

    cout << result << endl;
}

#define MyCompare(a, b) ((a) < (b)) ? (a) : (b)

void test02()
{
    int a = 10;
    int b = 20;
    int result = MyCompare(++a, b); //预期结果11  ((++a)<(b))?(++a):(b) 结果是12
    cout << result << endl;
}

//  宏函数没有作用域

//内联函数  用空间换时间
inline void MyCompare2(int a, int b)
{
    int ret = a < b ? a : b;
    cout << ret << endl;
}

void test03()
{
    int a = 10;
    int b = 20;
    MyCompare2(++a, b);
}

//内联函数的注意事项
inline void fun();   //内联函数声明
inline void fun(){}; //内联函数实现

int main()
{
    test03();

    return 0;
}