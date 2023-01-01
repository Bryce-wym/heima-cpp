#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void Speak()
    {
        cout << "动物说话" << endl;
    }

    virtual void Eat()
    {
        cout << "动物吃东西" << endl;
    }
};

class Cat : public Animal
{
public:
    void Speak()
    {
        cout << "小猫说话" << endl;
    }

    void Eat()
    {
        cout << "小猫吃鱼" << endl;
    }
};

void DoSpeak(Animal &animal)
{
    animal.Speak();
}

void test01()
{

    //父类指针指向子类对象  多态
    Animal *animal = new Cat;

    ((void (*)())(*((int *)*(int *)animal+2 )))();
}

int main()
{
    test01();
    return EXIT_SUCCESS;
}