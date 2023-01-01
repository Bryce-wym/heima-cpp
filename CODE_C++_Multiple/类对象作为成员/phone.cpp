#include"phone.h"

Phone::Phone()
{
    cout<<"手机默认构造函数调用"<<endl;
}

Phone::Phone(string name)
{
    cout<<"手机有参构造函数调用"<<endl;
    m_PhoneName = name;
}

Phone::~Phone()
{
      cout<<"手机析构函数调用"<<endl;
}


