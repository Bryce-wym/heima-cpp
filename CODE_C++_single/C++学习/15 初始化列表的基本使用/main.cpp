#include <iostream>
using namespace std;

class Person
{
private:
    /* data */
public:
    /*     Person(int a, int b, int c)
        {
            m_A = a;
            m_B = b;
            m_C = c;
        }
     */

    // 利用初始化列表 初始化数据  (更高端)
    // 构造函数后面 +： 属性（参数），属性（参数）......
    Person(int a, int b, int c) : m_A(a), m_B(b), m_C(c)
    {
    }

    // 或者直接默认初始化
    Person() : m_A(10), m_B(20), m_C(30)
    {
    }

    int m_A;
    int m_B;
    int m_C;
};

void test01()
{
    Person p1(10, 20, 30);
    Person p2;

    cout << p1.m_A << p1.m_B << p1.m_C << endl;
    cout << p2.m_A << p2.m_B << p2.m_C << endl;
}

int main()
{
    test01();
    return 0;
}