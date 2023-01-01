#pragma once
#include <iostream>
using namespace std;

class MyString
{

    friend ostream &operator<<(ostream &cout, MyString &str);
    friend istream &operator>>(istream &cin, MyString &str);

public:
    MyString(const char *string);
    MyString(const MyString &string);
    ~MyString();

    //重载运算符
    MyString& operator=(const char * str);
    MyString& operator=(const MyString &str);

    //[]重载
    char& operator[](int index);

    //重载 + 
    MyString operator+(const char * str);
    MyString operator+(const MyString & str);

    //重载==
    bool operator==(const char *str);
    bool operator==(const MyString &str);

private:
    char *pString; //用于指向字符串的指针
    int m_size;
};
