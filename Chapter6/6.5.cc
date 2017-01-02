//using the logical AND operator
#include<iostream>
const int ArSize = 6 ;
int main ()
{
    using namespace std;
    float naaq[ArSize];
    cout << "Enter the naaqs (New Age awareness Quotients) of \n";
    cout << "your neighbors. Program terminates when you make \n";
    cout << "6 enteries or enter a negative values.\n";
    int i = 0 ;
    float temp ;
    cout << "First value: ";
    cin >> temp ;
    while( i < ArSize && temp  >= 0 )
    {
        naaq[i] = temp ;
        ++i ;
        if(i < ArSize)
        {
            cout << "Next value:";
            cin >> temp ;
        }


    }
    if( i == 0 )
        cout << "No data--bye\n" ;
    else
    {
        cout << "Enter your NAAQ:" ;
        float you ;
        cin >> you ;
        int count = 0 ;
        for(int j = 0 ; j < i ; j++)
        {
            if(naaq[j] > you)
                ++count ;
        }
        cout << count ;
        cout << " of your neighbors habve greateer awareness of "
             <<  "the new age than you do.";
    }
    return 0 ;
}
