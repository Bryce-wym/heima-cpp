#include<iostream>
#include<string>
#include"person.h"


// 类对象作为成员，构造的顺序先将类对象一一构造，然后构造自己，析构的顺序是相反的
void test01()
{
    Person p("苾苾","iphone","王者荣耀");
    p.playGame();

}

int main()
{
    test01();
    return 0;
}