//using new operator
//为指针分配内存地址的方式new 和  C 语言的malloc()功能类似
#include<iostream>
int main()
{
    using namespace std;
    int nights = 1001 ;
    int *pt = new int ;
    *pt = 1001 ;

    cout << "nights value = " << nights << ": location "<< &nights
         <<endl << "int " ;
    cout << "value = " << *pt << ": location = " << pt <<endl;
    double *pd = new double ;
    *pd = 1000000000.1 ;

    cout << "double " <<"value = " << *pd  << ": location = "
         << pd << endl << "loaction of pointer pd: " << &pd << endl;
    cout << "size of pt = " << sizeof(pt);
    cout << ": size of *pt = " << sizeof(*pt) << endl;
    cout << "size of pd = " << sizeof(pd);
    cout << ": size of *pd = " << sizeof(*pd) << endl;
    return 0 ;
}
