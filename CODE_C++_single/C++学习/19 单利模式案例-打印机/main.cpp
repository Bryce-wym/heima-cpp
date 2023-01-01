#include <iostream>
#include <string>
using namespace std;

class Printer
{
private:
    Printer(){};
    Printer(const Printer &p);

    static int m_Count;
    static Printer *singlePrinter;

public:
    static Printer *getInstance()
    {
        return singlePrinter;
    }

    void printText(string text)
    {
        cout << text << endl;
        ++m_Count;
        cout << "打印次数：" << m_Count << endl;
    }
};

Printer *Printer::singlePrinter = new Printer;
int Printer::m_Count = 0;

void test01()
{
    // 拿到打印机
    Printer *p = Printer::getInstance();
    p->printText("离职报告");

}

int main()
{
    test01();
    return EXIT_SUCCESS;
}