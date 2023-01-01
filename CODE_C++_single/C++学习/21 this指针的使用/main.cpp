#include <iostream>
using namespace std;

// this 可以解决命名冲突
class Person
{
public:
    Person(int age)
    {
        this->age = age;
    }
    //对比年龄
    void compare(Person &p)
    {
        if (this->age == p.age)
        {
            cout << "年龄相等" << endl;
        }
        else
        {
            cout << "年龄不相等" << endl;
        }
    }

    //年龄相加
    Person &PlusAge(Person &p) //如果想要返回值加在自身上 则需要加上&
    {
        this->age += p.age;
        return *this; //*this指向本体
    }

    int age;
};

void test01()
{
    Person p1(10);

    Person p2(10);

    p1.PlusAge(p2).PlusAge(p2).PlusAge(p2); //链式编程
    cout << p1.age << endl;
}

int main()
{
    test01();
    return EXIT_SUCCESS;
}

// this指针永远都指向当前的对象
// 非静态的成员函数才有this指针