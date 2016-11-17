#include<iostream>
//yam 红薯
//数组的初始化规则
using namespace std;
int main()
{
    int yams[3];
    //creates array with three elements

    yams[0] = 6 ;
    //assign value to first element
    yams[1] = 8 ;
    yams[2] = 7 ;

    //不说明数组元素个数，交给编译器去做
    //int car[] = {2,3 ,34} ; int num_elements = sizeof things / sizeof(int);

    int yamcosts[3] = {20,30,5};
    //if your C++ complier or tanslater cant initialize array
    //this array use static int yams[3]  instead of
    //int yams[3]
    int x = yams[0]*yamcosts[0] + yams[1]*yamcosts[1];
    x +=  yams[2]*yamcosts[2];
    cout << "The yam cost is " << x << endl ;
    cout << "Size of Array yams is " << sizeof yams ;

    cout << "\nSize of a memeber is " << sizeof yams[0]<<endl;
    //cout << sizeof(int);
    //sizeof 被允许使用的方法
    //sizeof(type) ||  sizeof (elem) || sizeof elem ;
    return 0;



}
/*
首先：初始化数组时，可以省略等号=
double earning[4] {1.0 2.0 3.0 4.087} ;
其次，大括号内可以不包含任何东西，这将把所有元素置为0
unsigned int sbc[11] = {}; // all elements set 0
第三，列表初始化禁止缩窄转换（比如整型转int）
char title[4] = { 'h' , 'i' , 1122011 , '\0'};
