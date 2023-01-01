#include <iostream>
using namespace std;

//静态类型转换
//基础类型
void test01()
{
    char a = 'a';
    double d = static_cast<double>(a);
    cout << d << endl;
}

//父子之间转换
class Base
{
};
class Child : public Base
{
};
class Other
{
};

void test02()
{
    Base *base = NULL;
    Child *child = NULL;

    //把base转为child*   向下  不安全
    Child *child2 = static_cast<Child *>(base);

    //把child转为base* 向上 安全
    Base *base2 = static_cast<Base *>(child);

    //转other类型
    // Other *other = static_cast<Other *>(base); // 转换类型无效
}

// static_cast使用  static_cast <目标类型>（原始数据）
// 可以进行基础数据类型和父子类型转换

// 动态转换

void test03()
{
    //基础类型不可以转换
    char c = 'a';
    // dynamic_cast 非常严格，失去精度或者不安全都不可以转换
    //  double d = dynamic_cast<double>(c);
}

class Base2
{
    virtual void func(){};
};
class Child2 : public Base2
{
    virtual void func(){};
};
class Other2
{
};

void test04()
{
    Base2 *base = NULL;
    Child2 *child = NULL;

    // child转base2 * 安全
    Base2 *base2 = dynamic_cast<Base2 *>(child);
    // base转child2 * 不安全
    // Child2 *child2 = dynamic_cast<Child2 *>(base);

    //发生多态的情况可以使用
    Base2 *base3 = new Child2;
    Child2 *child3 = dynamic_cast<Child2 *>(base3);
}
// dynamic_cast 如果发生了多态，那么可以让基类转为派生类，向下转换

//常量转换、
void test05()
{
    const int *p = NULL;
    //去除const
    int *newp = const_cast<int *>(p);

    int *p2 = NULL;
    const int *newp2 = const_cast<const int *>(p2);

    //不能对非指针  或  非引用 的变量进行转换
}

int main()
{
    test02();


    return EXIT_SUCCESS;
}