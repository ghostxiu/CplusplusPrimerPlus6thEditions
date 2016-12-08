#include<iostream>
using namespace std ;
const int ArrSize = 12 ;
const int Year = 3;
int main()
{
    string mon[ArrSize] = {"January",
    "February","March","April","May","June","July","August"
    ,"September","October","November","December"};
    int sales[Year][ArrSize];
    cout << "Now , please enter the 12 months' sell number: \n";
    for(int i = 0 ; i < Year ; ++i )
    {
        cout << "Now enter the "<< i + 1<< " year:\n";
        for(int j = 0 ; j < ArrSize ; j++)
        {
            cout << mon[j] << ": " ;
            cin >> sales[i][j];
        }

    }
    cout << "\n\n\nNow print the year of selling about C++ For Fool:\n";
    double sum = 0.0 ;
    for(int i = 0 ; i < Year ; ++i )
    {
        cout << "Now Print the "<< i + 1  << " year:\n";
        for(int j = 0 ; j < ArrSize ; j++)
        {
            sum += double(sales[i][j]);
            cout << mon[j] << ": " ;
            cout << sales[i][j] << "\b";
            if((j+1)%3 == 0)
            {
                cout << endl;
            }
        }

    }
    cout << "\n The 3 years all sell number is : " << sum << endl;
    return 0 ;
}
