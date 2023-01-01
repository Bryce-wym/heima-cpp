#include <iostream>
using namespace std;

class Person
{
private:
    /* data */
public:
    Person(int age)
    {
        this->m_age = age;
    }

    ~Person()
    {
        cout << "person 析构了" << endl;
    }

    void showAge()
    {
        cout << this->m_age << endl;
    }

private:
    int m_age;
};

//智能指针
//用来托管自定义类型的对象，让对象进行自动释放
class smartPointer
{
public:
    smartPointer(Person *person)
    {
        this->person = person;
    }

    ~smartPointer()
    {
        cout << "智能指针析构了" << endl;
        if (this->person != nullptr)
        {
            delete this->person;
            this->person = nullptr;
        }
    }

    //重载->让sp像person *p一样使用
    Person *operator->()
    {
        return this->person;
    }

    //重载*
    Person &    operator*()
    {
        return *this->person;
    }

private:
    Person *person;
};

void test01()
{

    smartPointer sp(new Person(10));
    sp->showAge(); // sp->->showAge()  编译器优化了
    (*sp).showAge();
}

int main()
{
    test01();
    return EXIT_SUCCESS;
}