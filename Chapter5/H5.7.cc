#include<iostream>
using namespace std;
struct Car{
    string make;
    int year;
};
int main()
{
    cout << "How many do you wish to catlog :";
    int n ;
    cin >> n;
    Car c[n];
    int i =0;
    while(i<n)
    {

        cout <<"Car # "<<i+1 ;

        cout << "\nPlease enter the make:" ;
        cin >> c[i].make;
        cout << "Please enter the year make:" ;
        cin >> c[i].year;
        ++i;

    }
    cout << "Here is your collection:"<< endl;

    for(int j = 0 ; j < n ; j++)
    {
        cout << c[j].make << " " << c[j].year << endl;
    }
    return 0 ;
}
