#include <iostream>
using namespace std;

class MyInteger
{

    friend ostream &operator<<(ostream &, const MyInteger &myint) ;

public:
    MyInteger()
    {
        m_num = 0;
    }

    //前置++重载
    MyInteger &operator++()
    {
        //先++ 后返回值
        this->m_num++;
        return *this;
    }

    //后置++重载
    MyInteger operator++(int)
    {
        //先保存一下数据
        //先返回值 后++
        MyInteger tmp = *this;
        this->m_num++;
        return tmp;   //临时变量不能返回引用
    }

    int m_num;
};


//注意：因为实现重载后自增时，返回的是值
//所以此时参数myint加const或使用值传递不用引用
ostream &operator<<(ostream &, const MyInteger &myint) 

{
    cout << myint.m_num;
    return cout;
}

void test01()
{
    MyInteger myint;
    cout << ++myint << endl;
    cout << myint++ << endl;
}

int main()
{
    test01();
    return EXIT_SUCCESS;
}