#include "person.h"


Person::Person()
{
    cout << "Person的默认构造函数调用" << endl;
}

Person::Person(string name)
{
    cout << "Person的有参构造函数调用" << endl;
    m_Name = name;
}

Person::~Person()
{
    cout << "Person的析构函数调用" << endl;
}

Person::Person(string name, string PhoneName, string GameName) : m_Name(name), m_Phone(PhoneName), m_Game(GameName)
{

    cout << "Person的有参构造函数调用" << endl;
}

void Person::playGame()
{

    cout << m_Name << "拿着" << m_Phone.m_PhoneName << "玩着" << m_Game.m_GameName << endl;
}
