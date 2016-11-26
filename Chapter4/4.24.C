//array varistion
//几种数组形式的比较  原生,vector ,array
#include<iostream>
#include<vector>
#include<array>

using namespace std ;
int main()
{
    //C.original C++
    double a1[4] = {1.2,2.4,3.6,4.8};
    //C++ 98 STL
    vector<double> a2(4);//create vector with 4 elements
    //no simple way to initialize in C98
    a2[0] = 1.0 / 3.0 ;
    a2[1] = 1.0 / 5.0 ;
    a2[2] = 1.0 / 7.0 ;
    a2[3] = 1.0 / 9.0 ;

    //C++ 11 create and initialize array object
    array <double ,4> a3 = {3.14, 2.72 , 1.62 ,1.41} ;
    array <double ,4> a4 ;
    a4 = a3 ; //vaild for array objects of same size

    //use array notation
    cout << "a1[2] = " << a1[2] <<" at " << &a1[2] << endl ;
    cout << "a2[2] = " << a2[2] <<" at " << &a2[2] << endl ;
    cout << "a3[2] = " << a3[2] <<" at " << &a3[2] << endl ;
    cout << "a4[2] = " << a4[2] <<" at " << &a4[2] << endl ;

    //misdeed
    a1[-2]= 20.2 ;
    cout << "a1[-2] = " << a2[-2] << " at " << &a1[-2] << endl;
    cout << "a3[2] = " << a3[2] <<" at " << &a3[2] << endl ;
    cout << "a4[2] = " << a4[2] <<" at " << &a4[2] << endl ;
    return 0 ;
}
/*
 array 对象 和数组存储在相同的存储区域（即栈中），
 而vector 存储在另一个区域（自由存储区或者堆中）。
 可以将一个array 对象赋值给另一个array对象，
 而数组只能逐个赋值。
a1[-2] = 20 .2  // 实际上是 *(a1-2) = 20.2 ;
含义：找到a1的地方，向前移动两个double 元素，并将20.2
存储到目标位置，这是一种超界错误，C++和C都不会自动检查

安全的方法：使用vector 或者array的成员函数
at()，at()会捕获非法索引，中断，但是会增加额外的开销
*/
