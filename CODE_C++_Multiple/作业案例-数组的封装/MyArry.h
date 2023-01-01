#pragma once
#include <iostream>
using namespace std;

class MyArry
{
public:
    MyArry(); //默认构造 默认100容量
    MyArry(int capacity);
    MyArry(const MyArry &array);
    ~MyArry();

    //尾插法
    void push_Back(int val);

    //根据索引获取值
    int getDate(int index);

    //根据索引设置值
    void setDate(int index, int val);

    //获取容量
    int getCapacity();

    //获取大小
    int getSize();

    int &operator[](int index);

private:
    int *pAddress; //指向真正存储整数数据的指针
    int m_Size;    //数组大小
    int m_Capcity; //数组容量
};