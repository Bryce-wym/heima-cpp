#include <iostream>
using namespace std;
#include <cstring>

struct Person
{
    int mAge;
    char mName[64];

    void PersonEat()
    {
        cout << mName << "吃人饭" << endl;
    }
};

struct Dog
{
    int mAge;
    char mName[64];

    void DogEat()
    {
        cout << mName << "吃狗粮" << endl;
    }
};

// C++中的封装 严格类型转换检测，让属性和行为绑定在一起
//属性和行为作为一个整体来表示生活中的事物
//控制权限 public  共有权限 protected 保护权限 private 私有权限
void test01()
{
    Person p1;
    strcpy(p1.mName, "老王");
    p1.PersonEat();
    // p1.DogEat();
}

// class和struc唯一的不同 ：默认权限
// struct是public  class默认权限是private
class Animal
{
    //如果不声明权限，默认是private权限
private:
    void eat();
    int mAge;

public:  
    int mHeight;

protected: //保护权限  类内部可以访问 （当前类的子类可以访问） 类外部不可以访问
    int mWeight;
    void setWeight() { mWeight = 100; }
};

//所谓私有权限 就是私有成员（属性、函数）在类内部可以访问，类外不可以访问
void test02()
{
    Animal an;
    // an.mAge; 私有不可访问
    an.mHeight = 100; //共有权限在类外部可以访问到
    //an.mWeight = 100 //保护权限在类外部不可访问
}






int main()
{
    test01();
    return 0;
}