//limits.cpp
#include<iostream>
#include<climits>
int main()
{
    using namespace std ;
    int m_int = INT_MAX;
    int i_int = INT_MIN;
    short m_short = SHRT_MAX;
    short i_short = SHRT_MIN;
    long m_long = LONG_MAX;
    long i_long = LONG_MIN;
    long long m_llong = LLONG_MAX;
    long long i_llong = LLONG_MIN;



    //size of operator yields size of type or a of variable
    cout << "int is " << sizeof(int) << " bytes. " << endl ;
    cout << "short is " << sizeof m_short << " bytes. "<<endl ;
    cout << "long is " << sizeof m_long << " bytes. "<<endl ;
    cout << "longlong is " << sizeof m_llong << " bytes. "<<endl ;
    cout <<endl ;


    cout << "Maximum and Minimum values: "<< endl ;
    cout << "Max of int is : " << m_int << ",Min of int is : " << i_int  << endl;
    cout << "Max of short is : " << m_short << ",Min of short is : " << i_short  << endl;
    cout << "Max of long is : " << m_long << ",Min of long is : " << i_long  << endl;
    cout << "Max of long long is : " << m_llong  << ",Min of long long is : " << i_llong  << endl;
    cout <<endl ;

    cout << "Bits per byte = " << CHAR_BIT <<endl;


    cin.get();
    cin.get();
    return 0;

}
