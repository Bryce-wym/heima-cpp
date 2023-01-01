#include <iostream>
#include "MyString.h"
#include <cstring>
using namespace std;

void test01()
{
    //     MyString mystr("hahah");
    //     cin>> mystr;
    //     cout<<mystr<<endl;

    MyString s1 = "abc";
    MyString s2(s1); // 拷贝构造
    MyString s3 = " ";
    s3 = s2; // 赋值  不是拷贝构造
    cout << s3 << endl;
    s3[0] = 'w';
    cout << "s3第一个位置=" << s3[0] << endl;

    MyString s4 = "  ";
    s4 = s2 + s3; //字符串拼接
    cout << "s4=" << s4 << endl;

    if (s3 == s4)
    {
        cout << "s3与s4相等" << endl;
    }
    else
    {
        cout << "s3与s4不相等" << endl;
    }
}

int main()
{
    test01();
    return EXIT_SUCCESS;
}