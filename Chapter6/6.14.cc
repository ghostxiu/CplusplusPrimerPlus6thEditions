// non-numeric input skipped
#include<iostream>
const int Max = 5 ;
int main()
{
    using namespace std ;
//get data
    int golf[Max] ;
    cout << "Please enter your golf socres.\n" ;
    cout << "You must enter " << Max << " rounds .\n" ;
    int i ;
    for( i = 0 ; i < Max ; ++i)
    {
        cout << "round #" << i+1 << ": " ;
        while(!(cin >> golf[i]))
        {
            cin.clear(); //reset input
            while(cin.get() != '\n')
                continue ;
            cout << "Please enter a number: " ;
        }
    }
    // cacluate average
    double total = 0.0 ;
    for( i = 0 ;i <  Max ; ++i)
    {
        total += golf[i];
    }
    //report results
    cout << total / Max << " = average score "
        << Max << " rounds.\n";
    return 0 ;

}
