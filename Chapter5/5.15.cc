//exit -condition loop
#include<iostream>
int main()
{
    using namespace std ;
    int n ;
    cout << "Enter the numbers in the range " ;
    cout << "1-10 to find my favorite number ";
    do
    {
        cin >> n ;
    }while(n!=5);
    cout << "Yes,5 is my favorite number.\n ";
    return 0;
}
