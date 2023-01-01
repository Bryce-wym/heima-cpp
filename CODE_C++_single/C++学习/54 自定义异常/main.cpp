#include <iostream>
using namespace std;

class myException //自定义异常类
{
public:
    void printError()
    {
        cout << "自定义的异常" << endl;
    }
};

int myDevide(int a, int b)
{
    if (b == 0)
    {
        throw myException(); //匿名对象
    }
    else
    {
        return a / b;
    }
}



void test01()
{
    try
    {
        myDevide(10, 0);
    }
    catch (myException e)
    {
        e.printError();
    }
}

int main()
{
    test01();
    return EXIT_SUCCESS;
}
