//pointer addtion
#include<iostream>
int main()
{
    using namespace std ;

    double wages[3] {10000.0, 20000.0 , 30000.0};
    short stacks[3] {3 , 2 , 1};

    //Here are two way to get the address of an array
    double * pw = wages ; //name of an array
    short * ps = &stacks[0];// or use address operator
    //with array element

    cout << "pw = " << pw << ", *pw = " << "pw" <<endl;
    pw = pw + 1 ;
    cout << "add 1 to the pw pointer :" <<endl;
    cout << "pw = " << pw << ", *pw = " << "pw" <<endl;


    cout << "\nps = " << ps << ",*ps = " << "ps" << endl;
    ps++;
    cout << "ps = " << ps << ",*ps = " << "ps" << endl;

    cout << "\naccess two elements with array notion \n"
         << "stacks[0] = " << stacks[0] <<" ,stacks[1] = "
         <<stacks[1] <<endl ;
    //C++将数组名解释为指针
    cout << "\naccess two elements with pointer notion :\n"
         << "*stacks = " << *stacks <<",*(stacks+1) = "
         << *(stacks+1) << endl;

    cout << sizeof(wages) <<" =  size of wages" << endl ;
    cout << sizeof(pw) << " = size of pw" << endl ;
    cout << sizeof(*pw) << " = size of *pw" << endl ;
    return 0 ;
}
