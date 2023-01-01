#include <iostream>
using namespace std;

class Animal
{
public:
    int m_Age;
};

//虚基类 sheep
class Sheep : virtual public Animal
{
};
//虚基类 tuo
class Tuo : virtual public Animal
{
};

class SheepTuo : public Sheep, public Tuo
{
};

// 菱形继承的解决 利用虚继承
// 操作的是共享的一份数据
void test01()
{
    SheepTuo st;
    st.Sheep::m_Age = 10;
    st.Tuo::m_Age = 20;

    cout << st.Sheep::m_Age << endl;
    cout << st.Tuo::m_Age << endl;
    cout << st.m_Age << endl; //可以直接访问了 没有二义性的问题
}

int main()
{
    test01();
    return EXIT_SUCCESS;
}

/* vbptr 虚基类指针
指向一张 虚基类表
通过表找到偏移量
找到共有的数据 */