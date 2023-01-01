#include "Person.h"

template <class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
    this->m_Age = age;
    this->m_Name = name;
}

template <class T1, class T2>
void Person<T1, T2>::show()
{
    cout << this->m_Name << endl;
}