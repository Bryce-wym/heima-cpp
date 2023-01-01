#include <iostream>
using namespace std;

class Person
{
private:
    /* data */
public:
    Person();
    Person(int a);
    //拷贝构造函数
    Person(const Person &p);
    ~Person();

    int m_Age;
};

Person::Person()
{
    cout << "默认构造函数调用" << endl;
}

Person::Person(int a)
{
    cout << "有参构造函数调用" << endl;
}

Person::Person(const Person &p)
{
    m_Age = p.m_Age;
    cout << "拷贝构造函数调用" << endl;
}

Person::~Person()
{
    cout << "析构函数调用" << endl;
}

//拷贝函数调用的时机
// 1. 用已经创建好的对象来初始化新的对象
void test01()
{
    Person p1;
    p1.m_Age = 10;

    Person p2(p1);
}

// 2. 以值传递的方式给函数传值
void doWork(Person p1) // Person p1 = Person (p)
{
}

void test02()
{
    Person p;
    p.m_Age = 10;
    doWork(p);
}
//引用传递不会开辟新的开销

// 3.以值方式返回局部对象
Person doWork2()
{
    Person p1;
    return p1;
}

void test03()
{
    Person p = doWork2();
}

//本编译器优化为
/* Person P;  不调用默认构造
   doWork2(p);

   void doWork2(Person &p)
   {
       Person p1  //调用默认构造
   }
*/

int main()

{
    
    test03();
    return 0;
}