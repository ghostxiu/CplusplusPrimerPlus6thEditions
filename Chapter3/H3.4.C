#include<iostream>
int main ()
{
    using namespace std ;
    long second;

    cout << "Enter the number of seconds: " ;
    cin >> second ;
    long sec =second ;


    int day = (second /3600)/24;
    second = second %(3600*24);
    int hour = second/3600 ;
    second %= 3600 ;
    int min = second / 60 ;
    second %= 60;

    cout << sec << " seconds = "
         << day << " days , "
         << hour << " hours , "
         << min << " minutes , "
         <<second << " seconds.\n";

    cin.get();
    cin.get();
    return 0;
}
