#include <iostream>
#include <string>

using namespace std;

class Building;

class GoodGay
{
public:
    GoodGay();
    void visit();

private:
    Building *building;
};

class Building
{
    //让类 变成友元类
    friend class GoodGay;

public:
    Building();

public:
    string m_SittingRoom; //客厅
private:
    string m_BedRoom; //卧室
};

GoodGay::GoodGay()
{
    building = new Building;
}

void GoodGay::visit()
{
    cout << "好基友正在访问" << building->m_SittingRoom << endl;
    cout << "好基友正在访问" << building->m_BedRoom << endl;
}

Building::Building()
{
    this->m_BedRoom = "卧室";
    this->m_SittingRoom = "客厅";
}


int main()
{

    return EXIT_SUCCESS;
}