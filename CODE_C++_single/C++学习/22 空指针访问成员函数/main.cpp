#include <iostream>
using namespace std;

class Person
{
public:
    void show()
    {
        cout << "Person show" << endl;
    }
    void showAge()
    {
        if(this == nullptr)  //更严谨的写法
        {
            return;
        }
        cout << this->m_age << endl;
    }

    int m_age;
};


void test01()
{
    Person *p = nullptr;
    p->show();
    p->showAge();
}

int main()
{
    test01();
    return EXIT_SUCCESS;
}