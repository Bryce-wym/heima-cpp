#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void Speak()
    {
        cout << "动物说话" << endl;
    }
};

class Cat : public Animal
{
public:
    void Speak()
    {
        cout << "小猫说话" << endl;
    }
};

//调用DoSpeak时，函数的地址早就绑定好了，早绑定，静态联编，编译阶段就确定好了地址
//如果想调用猫的speak 不能提前绑定好地址，所以需要在运行时确定函数地址
//动态联编 虚函数  在父类上声明虚函数，发生多态
//父类的引用或指针指向子类对象

void DoSpeak(Animal &animal)
{
    animal.Speak();
}

//如果发生了继承的关系 编译器允许进行类型的转化
void test01()
{
    Cat cat;
    DoSpeak(cat);
    cout << sizeof(Animal) << endl;
}

int main()
{
    test01();
    return EXIT_SUCCESS;
}