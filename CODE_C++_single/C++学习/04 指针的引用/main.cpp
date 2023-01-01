#include <iostream>
using namespace std;

struct person
{
    int m_Age;
};

//二级指针
void allocatmemory(person **p)
{
    *p = (person *)malloc(sizeof(person));
    (*p)->m_Age = 100;
}

void test01()
{
    person *p = NULL;
    allocatmemory(&p);
    cout << "p的年龄:  " << p->m_Age << endl;
}

//利用指针引用开辟空间
void allocatmemoryByRef(person *&p)
{
    p = (person *)malloc(sizeof(person));
    p->m_Age = 100;
}

void test02()
{
    person *p = NULL;
    allocatmemoryByRef(p);
    cout << "p的年龄:  " << p->m_Age << endl;
}

int main()
{
    test02();
    return 0;
}