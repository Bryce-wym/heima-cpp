#include <iostream>
#include "MyArry.h"
using namespace std;

void test01()
{
    //创建堆区
    MyArry *array = new MyArry(30);

    //尾插法
    for (int i = 0; i < 10; i++)
    {
        array->push_Back(i);
    }

    MyArry *array2 = new MyArry(*array);

    //获取数据
    for (int i = 0; i < 10; i++)
    {
        cout << array2->getDate(i) << endl;
    }


    MyArry arry3;
    arry3[0] = 100;
    cout<<arry3[0]<<endl;
    
}

int main()
{
    test01();
    return EXIT_SUCCESS;
}