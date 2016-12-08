//ÖØÐ´5.4
#include<iostream>
#include<array>
using namespace std;
const int ArSize = 16 ;
int main()
{
    array<long double,ArSize> x;
    x[0] = x[1] = 1.0;
    for(long double i = 2.0; i < ArSize ; i++)
    {
        x[i]=i * x[i-1];
    }
    for(int i = 0 ; i < ArSize ; i++)
        cout << i << " != "<< x[i] << endl;
}
