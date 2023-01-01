#include <iostream>
#include <cstring>
using namespace std;

class Animal
{
public:
    virtual void speak()
    {
        cout << "动物在说话" << endl;
    }

    //普通的析构 是不会调用子类的析构的 可能会导致释放不干净
    //利用虚析构来解决这个问题
    // virtual ~Animal()
    // {
    //     cout << "animal析构函数调用" << endl;
    // }

    //纯虚析构
    //纯虚析构 需要类内声明 类外实现
    virtual ~Animal() = 0;
    //如果函数出现了纯虚析构函数  那么这个类也算抽象类
};

Animal::~Animal()
{
    //纯虚析构函数实现
    cout << "animal纯析构函数调用" << endl;
}

class Cat : public Animal
{
public:
    Cat(const char *name)
    {
        this->m_name = new char[strlen(name) + 1];
        strcpy(this->m_name, name);
    }

    virtual void speak()
    {
        cout << "小猫说话" << endl;
    }

    ~Cat()
    {
        cout << "cat的析构函数调用" << endl;
        if (this->m_name != nullptr)
        {
            delete[] this->m_name;
            this->m_name = nullptr;
        }
    }
    char *m_name;
};

void test01()
{
    Animal *animal = new Cat("TOM");
    animal->speak();
    delete animal;
    // Animal *animal = new Animal;
    // Animal abc;
}

int main()
{
    test01();
    return EXIT_SUCCESS;
}


//虚析构可以实例化  纯虚析构不可实例化
