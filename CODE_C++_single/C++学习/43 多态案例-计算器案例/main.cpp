#include <iostream>
#include <cstring>
using namespace std;

/* class Calculator
{
public:
    void setVal_1(int val)
    {
        this->val_1 = val;
    }

    void setVal_2(int val)
    {
        this->val_2 = val;
    }

    int getResult(string oper)
    {
        if (oper == "+")
        {
            return val_1 + val_2;
        }
        else if (oper == "-")
        {
            return val_1 - val_2;
        }
        else
            return 0;
    }

private:
    int val_1;
    int val_2;
}; */

/* void test01()
{
    Calculator cal;
    cal.setVal_1(10);
    cal.setVal_2(10);
    cout << cal.getResult("+") << endl;
    cout << cal.getResult("-") << endl;
} */

//真正的开发中，有一个开发原则  开闭原则
//对扩展开放  对修改关闭

//利用多态实现计算器

class abstractCalculator
{
public:
    // virtual int getResult() { return 0; }  //虚函数

    //纯虚函数
    //如果父类中有了纯虚函数  子类继承父类，就必须要实现 纯虚函数
    //如果父类中 有了 纯虚函数 这个父类 就无法实例化对象了
    //这个类有了纯虚函数，通常又称为 抽象类
    virtual int getResult() = 0;

    void setVal_1(int val)
    {
        this->val_1 = val;
    }

    void setVal_2(int val)
    {
        this->val_2 = val;
    }

public:
    int val_1;
    int val_2;
};

//加法计算器
class PlusCalculator : public abstractCalculator
{
public:
    virtual int getResult()
    {
        return val_1 + val_2;
    }
};
//减法计算器
class SubCalculator : public abstractCalculator
{
public:
    virtual int getResult()
    {
        return val_1 - val_2;
    }
};

//乘法计算器
class MulCalculator : public abstractCalculator
{
public:
    virtual int getResult()
    {
        return val_1 * val_2;
    }
};

//如果父类中有了纯虚函数  子类继承父类，就必须要实现 纯虚函数
class A : public abstractCalculator
{
    virtual int getResult()
    {
        return 0;
    }
};

void test02()
{
    abstractCalculator *abc;
    //加法计算器
    abc = new PlusCalculator;
    abc->setVal_1(10);
    abc->setVal_2(20);
    cout << abc->getResult() << endl;

    delete abc;

    //减法计算器
    abc = new SubCalculator;
    abc->setVal_1(10);
    abc->setVal_2(20);
    cout << abc->getResult() << endl;

    delete abc;
    //乘法计算器
    abc = new MulCalculator;
    abc->setVal_1(10);
    abc->setVal_2(20);
    cout << abc->getResult() << endl;

    A a;

    //如果父类中 有了 纯虚函数 这个父类 就无法实例化对象了
    // abstractCalculator abc;
    // abstractCalculator *abc = new abstractCalculator;
}

int main()
{
    test02();
    return EXIT_SUCCESS;
}