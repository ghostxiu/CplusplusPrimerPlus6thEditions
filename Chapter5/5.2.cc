//use numeric test for loop
#include<iostream>
int main()
{
    using namespace std ;
    int limit ;
    cout << "Enter the starting coutdown value:\n";
    cin >> limit;
    int i ;
    for(i = limit ; i > 0 ; i-- )//i<0 to quit
    {
        cout <<"i = " << i << endl;
    }
    cout << "Done now i = " << i << endl;
    return 0 ;

}
