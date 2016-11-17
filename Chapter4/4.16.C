//initialize a pointer
#include<iostream>

using namespace std;
int main()
{
    int higgens = 5;
    int* pt = &higgens;//C++风格指针的申请

    cout << "Value of higgens = " << higgens
        << " , Address of higgens = " << &higgens << ".\n";

    cout << "Value of * pt = " << *pt  << " , Adderss of  pt = "
         << pt << ".\n";
    return 0 ;
}
