//exceeding some integer limits
//实际上是个溢出检测程序
#include<iostream>
#define ZERO 0
#include<climits>
int main()
{
    using namespace std ;
    short sam = SHRT_MAX; //initialize a variable to max value
    unsigned short sue = sam;//okay if variable sam alredy defined

    cout << "Sam has " << sam << " dollars and Sue has "<< sue
         <<  " dollars deposited."<<endl
         << "Add $1 to each account."<<endl
         << "Now ";
    sam = sam + 1;
    sue = sue + 1;
    cout << "Sam has " << sam
         << " dollars and Sue has "
         << sue
         << " dollars deposited."
         << endl
         <<"Poor Sam!"
         <<endl;




    sam = sue = ZERO;
        cout << "Sam has " << sam << " dollars and Sue has "<< sue
         <<  " dollars deposited."<<endl
         << "Take $1 to each account."<<endl
         << "Now ";
    sam = sam - 1;
    sue = sue - 1;
    cout << "Sam has " << sam
         << " dollars and Sue has "
         << sue
         << " dollars deposited."
         << endl
         <<"Luckly Sue!"
         <<endl;
    cin.get();
    cin.get();
    return 0;
}
