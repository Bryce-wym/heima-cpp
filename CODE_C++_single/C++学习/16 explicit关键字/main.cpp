#include <iostream>
using namespace std;

class MyString

{
private:
    /* data */
public:
    MyString(const char *str)
    {
    }

    explicit MyString(int a)
    {
        m_size = a;
    }

    char *m_str;
    int m_size;
};

void test01()
{
    MyString str = "abc";
    MyString str2(10);
    // MyString str3 = 10; //做什么用？ str2字符串为“10”  字符串的长度为10
    //隐式类型转换  MyString str3 = MyString(10)
    // explicit 防止隐式类型转换
}