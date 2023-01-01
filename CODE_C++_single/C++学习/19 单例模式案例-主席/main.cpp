#include <iostream>
using namespace std;

// 创建主席类
// 需求 单利模式  为了创建类中的对象，并且保证只有一个对象实例
class ChairMan
{
private:
    // 1.构造函数私有化
    ChairMan()
    {
        cout << "创建国家主席" << endl;
    }
    // 2. 拷贝函数私有化
    ChairMan(const ChairMan &c)
    {

    }

    static ChairMan *SingleMan;

public:
    //提供 get方法 访问主席
    static ChairMan *getInstance()
    {
        return SingleMan;
    }
};

ChairMan *ChairMan::SingleMan = new ChairMan;

void test01()
{
    /*     ChairMan c1;
        ChairMan *c2 = new ChairMan;
        ChairMan *c3 = new ChairMan; */

    // ChairMan *cm = ChairMan::SingleMan;
    // ChairMan *cm2 = ChairMan::SingleMan;

    // ChairMan::SingleMan =nullptr;

    ChairMan *cm1 = ChairMan::getInstance();
    ChairMan *cm2 = ChairMan::getInstance();
    if (cm1 == cm2)
    {
        cout << "cm1 与 cm2 相同" << endl;
    }
    else
    {
        cout << "cm1 与 cm2 不相同" << endl;
    }


/*     ChairMan *cm3 = new ChairMan(*cm2); //调用拷贝构造
    if (cm2 == cm3)
    {
        cout << "cm2 与 cm3 相同" << endl;
    }
    else
    {
        cout << "cm2 与 cm3 不相同" << endl;
    } */

}

int main()
{
    cout << "main调用" << endl; //主席的创建先于main
    test01();
    return EXIT_SUCCESS;
}


/* 总结：
目前：为了类中只有一个实例，实例也不需要自己释放
1.将 默认构造 和 拷贝构造 私有化
2.内部维护一个  静态对象指针  并对其进行私有化
3.对外提供一个getInstance方法来访问这个指针
 */