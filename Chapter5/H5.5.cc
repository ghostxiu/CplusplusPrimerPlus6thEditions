#include<iostream>
using namespace std ;
const int ArrSize = 12 ;
int main()
{
    string mon[ArrSize] = {"January",
    "February","March","April","May","June","July","August"
    ,"September","October","November","December"};
    int sales[12];
    cout << "Now , please enter the 12 months' sell number: \n";
    for(int i = 0 ; i < ArrSize ; ++i )
    {
        cout << mon[i] << ": " ;
        cin >> sales[i];
    }
    cout << "\n\n\nNow print the year of selling about C++ For Fool:\n";
    double sum = 0.0 ;
    for(int i = 0 ; i < ArrSize ; ++i )
    {
        sum += double(sales[i]);
        cout << mon[i] << ": " ;
        cout << sales[i] << "\t";
        if((i+1)%3 == 0)
        {
            cout << endl;
        }
    }
    cout << "\n The avarange sell number is : " << sum/12.0 << endl;
    return 0 ;
}
