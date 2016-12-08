#include<iostream>
using namespace std ;
int main()
{
    cout << "Please input two int number:";
    int x,y;
    cin >>x >> y ;
    int sum = 0 ;
    cout<< "Now start caculate the sum of x~y:";
    for(int i = x ; i <= y ; i++)
    {
        sum +=i;
    }
    cout << sum << endl ;

    return 0 ;
}
