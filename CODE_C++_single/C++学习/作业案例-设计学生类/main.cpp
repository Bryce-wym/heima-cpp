#include <iostream>
#include <string>
using namespace std;

/*
2.设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号
*/

class Student
{
public:
    //设置姓名
    void setName(string name)
    {
        m_Name = name;
    }
    // 设置学号
    void setID(int id)
    {
        m_ID = id;
    }

    //打印信息
    void printInformation()
    {
        cout << m_ID << endl;
        cout << m_Name << endl;
    }

    string m_Name;
    int m_ID;
};

void test01()
{
    Student sd1;
    sd1.setName("wuyiming");
    sd1.setID(2018300560);
    sd1.printInformation();
}

int main()
{
    test01();
    return 0;
}