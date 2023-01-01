#include <iostream>
#include "MyString.h"
#include <cstring>

ostream &operator<<(ostream &cout, MyString &str)
{
    cout << str.pString;
    return cout;
}

istream &operator>>(istream &cin, MyString &str)
{
    if (str.pString != nullptr)
    {
        delete[] str.pString;
        str.pString = nullptr;
    }

    char bull[1024];
    cin >> bull;

    str.pString = new char[strlen(bull) + 1];
    strcpy(str.pString, bull);
    str.m_size = strlen(bull);
    return cin;
}

MyString::MyString(const char *string)
{
    // cout << "有参构造调用" << endl;
    this->pString = new char[strlen(string) + 1];
    strcpy(this->pString, string);
    this->m_size = strlen(string);
}

MyString::MyString(const MyString &string)
{
    // cout << "拷贝构造调用" << endl;
    this->pString = new char[strlen(string.pString) + 1];
    strcpy(this->pString, string.pString);
    this->m_size = string.m_size;
}

MyString::~MyString()
{
    // cout << "析构调用" << endl;
    if (this->pString != nullptr)
    {
        delete[] this->pString;
        this->pString = nullptr;
    }
}

MyString &MyString::operator=(const char *str)
{
    if (this->pString != nullptr)
    {
        delete[] this->pString;
        this->pString = nullptr;
    }

    this->pString = new char[strlen(str) + 1];
    strcpy(this->pString, str);
    return *this;
}

MyString &MyString::operator=(const MyString &str)
{
    if (this->pString != nullptr)
    {
        delete[] this->pString;
        this->pString = nullptr;
    }

    this->pString = new char[strlen(str.pString) + 1];
    strcpy(this->pString, str.pString);
    return *this;
}

char &MyString::operator[](int index)
{
    return this->pString[index];
}

MyString MyString::operator+(const char *str)
{
    //计算返回大小
    int newSize = this->m_size + strlen(str) + 1;
    char *tmp = new char[newSize];
    memset(tmp, 0, newSize);
    //拼接字符串
    strcat(tmp, this->pString);
    strcat(tmp, str);

    MyString newStr(tmp);
    delete[] tmp;
    return newStr;
}

MyString MyString::operator+(const MyString &str)
{
    //计算返回大小
    int newSize = this->m_size + strlen(str.pString) + 1;
    char *tmp = new char[newSize];
    memset(tmp, 0, newSize);

    //拼接字符串
    strcat(tmp, this->pString);
    strcat(tmp, str.pString);

    MyString newStr(tmp);
    delete[] tmp;
    return newStr;
}

bool MyString::operator==(const char *str)
{
    if (strcmp(this->pString, str) == 0 && this->m_size == strlen(str))
    {
        return true;
    }
    return false;
}

bool MyString::operator==(const MyString &str)
{
    if (strcmp(this->pString, str.pString) == 0 && this->m_size == str.m_size)
    {
        return true;
    }
    return false;
}