#include <iostream>
using namespace std;

//继承写法
//抽象一个  基类网页
class BasePage //基类（父类）
{
public:
    void header()
    {
        cout << "公共头部" << endl;
    }

    void footer()
    {
        cout << "公共底部" << endl;
    }

    void left()
    {
        cout << "左侧列表" << endl;
    }
};

//新闻类
class News : public BasePage //派生类（子类）
{
public:
    void content()
    {
        cout << "新闻播报" << endl;
    }
};

//娱乐类
class Amusement : public BasePage
{
public:
    void content()
    {
        cout << "刘亦菲" << endl;
    }
};

void test01()
{
    News news;
    news.header();
    news.footer();
    news.left();
    news.content();

    //娱乐
    Amusement amusement;
    amusement.header();
    amusement.footer();
    amusement.left();
    amusement.content();
}

int main()
{

    test01();
    return EXIT_SUCCESS;
}