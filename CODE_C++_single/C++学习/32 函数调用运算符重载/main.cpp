#include <iostream>
#include <string>
using namespace std;

class MyPrint
{

public:
    void operator()(string text)
    {
        cout << text << endl;
    }
};


void test01()
{
    MyPrint myPrint;
    myPrint("hello world"); //仿函数
    MyPrint()("111"); //匿名对象
}


int main()
{
    test01();
    return EXIT_SUCCESS;
}