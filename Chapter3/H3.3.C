#include<iostream>
int main()
{
    using namespace std ;
    const double xc = 60.0 ;
    int degree , minute , second ;

    cout << "Enter a latitude in degrees , minutes ,and seconds:\n:"
         << "First, enter the degrees:__\b\b";
    cin >> degree ;
    cout << "Next,enter the minutes of arc:__\b\b";
    cin >> minute ;
    cout << "Then, enter the seconds of arc:__\b\b";
    cin >> second ;

    cout << degree << " degrees, "
         << minute << " minutes, "
         << second << " secnod = "
         << degree + minute/xc+second/xc/xc
         << " degrees \n";


    cin.get();
    cin.get();
    return 0;

}
