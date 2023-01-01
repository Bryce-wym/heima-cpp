#include <iostream>
using namespace std;
#include "game1.h"
#include "game2.h"

// namespace命名空间主要用途  用来解决命名冲突的问题 必须在全局作用域下
// 1.命名空间下可以放函数、变量、结构体、类
void test01()
{
    King::atk();
    LOL::atk();
}

// 2.命名空间可以嵌套
namespace A
{
    namespace B

    {
        int m_A = 100;
    }
}
void test02()
{
    cout << "作用域A下的m_A的值" << A::B::m_A << endl;
}

// 3.命名空间是开放的，可以随时往原先的命名空间里添加内容
namespace A
{
    int m_B = 200;
}
void test03()
{
    cout << "作用域A下的m_B的值" << A::m_B << endl;
}

// 4.匿名命名空间,相当于写了static int m_C, static int m_D
//只能在当前文件内使用
namespace
{
    int m_C = 0;
    int m_D = 0;
}

// 5.命名空间可以起别名
namespace verylongname
{
    int m_A = 0;
}
void test04()
{
    //起别名
    namespace shortname = verylongname;
    cout << shortname::m_A << endl;
    cout << verylongname::m_A << endl;
}

int main()
{
    test01();
    test02();
    test03();
    test04();

    return EXIT_SUCCESS;
}
