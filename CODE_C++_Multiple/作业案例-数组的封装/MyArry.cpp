#include "MyArry.h"

//默认构造
MyArry::MyArry()
{
    this->m_Capcity = 100;
    this->m_Size = 0;
    this->pAddress = new int[this->m_Capcity];
}

//有参构造  参数  数组容量
MyArry::MyArry(int capacity)
{
    // cout << "有参函数调用" << endl;
    this->m_Capcity = capacity;
    this->m_Size = 0;
    this->pAddress = new int[this->m_Capcity];
}

//拷贝构造
MyArry::MyArry(const MyArry &array)
{
    cout << "拷贝函数调用" << endl;
    this->m_Capcity = array.m_Capcity;
    this->m_Size = array.m_Size;
    this->pAddress = new int[this->m_Capcity];

    for (int i = 0; i < array.m_Size; i++)
    {
        this->pAddress[i] = array.pAddress[i];
    }
}

//析构
MyArry::~MyArry()
{
    if (this->pAddress != nullptr)
    {
        // cout << "析构函数调用" << endl;
        delete[] this->pAddress;
        this->pAddress = nullptr;
    }
}

void MyArry::push_Back(int val)
{
    this->pAddress[this->m_Size] = val;
    this->m_Size++;
}

int MyArry::getDate(int index)
{
    return this->pAddress[index];
}

void MyArry::setDate(int index, int val)
{
    this->pAddress[index] = val;
}

int MyArry::getCapacity()
{
    return this->m_Capcity;
}

int MyArry::getSize()
{
    return this->m_Size;
}

int &MyArry::operator[](int index)
{
    return this->pAddress[index];
}