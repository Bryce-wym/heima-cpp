#include <iostream>
using namespace std;
//分类
//按照参数进行分类  无参构造函数  有参构造函数
//按照类型进行分类  普通构造函数  拷贝构造函数
 
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

void test01()
{
    //构造函数调用方式
    //括号法
    Person p1(1);
    p1.m_Age = 10;
    Person p2(p1);
    cout << "p2的年龄" << p2.m_Age << endl;

    Person p3; //默认构造函数 不加()  !!! 
}

void test02()
{
    //构造函数调用方式
    //显示法调用
    Person p4 = Person(100);
    Person p5 = Person(p4);
    Person(100); //叫匿名对象，如果编译器发现匿名对象是匿名，那么在这行代码执行完就会释放这个对象
    cout << "aaa" << endl; //在aaa之前会有一句析构语句调用
    //不能用拷贝构造函数 初始化匿名对象
    Person p6 = Person(p5);//如果写成左值，编译器会认为是 Person p5 对象的声明
}

//隐式转换
//Person p7 = 100 相当于  Person p7 = Person(100)
//Person p8 = p7 相当于  Person p8 = Person(p7)


int main()
{
    test02();
    
    return 0;
}