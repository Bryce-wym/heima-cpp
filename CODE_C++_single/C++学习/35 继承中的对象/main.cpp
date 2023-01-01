#include <iostream>
using namespace std;

class Base
{
public:
    int m_a;

protected:
    int m_b;

private:
    int m_c;
};


//子类中  会继承父类的私有程序  ，只是编译器将其隐藏，访问不到私有成员
class Son : public Base
{
public:
    int m_d;
};

void test01()
{
    cout << sizeof(Son) << endl;
}

int main()
{
    test01();
    return EXIT_SUCCESS;
}