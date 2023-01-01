//对char和int数组进行排序 从大到小  利用选择排序
#include <iostream>
using namespace std;

//交换数据的模板
template <class T>
void mySwap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

//数组排序模板
template <class T>
void mySort(T arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        int max = i;
        for (int j = i + 1; j < len; j++)
        {
            if (arr[max] < arr[j])
            {
                //交换下表
                max = j;
            }
        }
        if (max != i)
        {
            //交换数据
            mySwap(arr[max], arr[i]);
        }
    }
}

//输出数组元素的模板
template <class T>
void printArray(T arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void test01()
{
    char charArray[] = "helloworld";
    int num = sizeof(charArray) / sizeof(char);
    mySort<char>(charArray, num);
    printArray<char>(charArray, num);

    int intArray[] = {1, 4, 6, 7, 2, 21, 212};
    int num2 = sizeof(intArray) / sizeof(int);
    mySort<int>(intArray, num2);
    printArray<int>(intArray, num2);
}

int main()
{
    test01();
    return EXIT_SUCCESS;
}