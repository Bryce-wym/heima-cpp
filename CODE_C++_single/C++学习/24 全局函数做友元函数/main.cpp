#include <iostream>
#include <string>

using namespace std;

class Building
{
    //让全局的函数 变成友元函数
    friend void GoodGay(Building *building);
public:
    Building()
    {
        this->m_BedRoom = "卧室";
        this->m_SittingRoom = "客厅";
    }

public:
    string m_SittingRoom; //客厅
private:
    string m_BedRoom; //卧室
};

//全局函数
void GoodGay(Building *building)
{
    cout<<"好基友正在访问"<<building->m_SittingRoom<<endl;
    cout<<"好基友正在访问"<<building->m_BedRoom<<endl;
}

void test01()
{
    Building * b = new Building;
    GoodGay(b); 
}

int main()
{
    test01();
    return EXIT_SUCCESS;
}