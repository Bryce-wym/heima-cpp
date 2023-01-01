#include <iostream>
using namespace std;
#include "Person.hpp"


//建议模板不要做分文件编写，写到一个类中即可，进行声明和实现，最后把后缀名改为.hpp
int main()
{
    Person<string, int> P("ZZ", 10);
    P.show();
    return EXIT_SUCCESS;
}