//using if else else if
#include<iostream>
const int Fave = 27 ;
int main()
{
    using namespace std ;
    int n ;
    cout << "Enter a number in the range 1-100 to find ";
    cout << "My favorite number:" ;
    do{
        cin >> n ;
        if(n < Fave )
        {

            cout << "Too low -- guess again: " ;

        }
        else if (n > Fave)
        {
            cout << "Too high -- guess agin: ";
        }
        else
        {
            cout << Fave << " is right!" <<endl;

        }

    }while(n != Fave);

    return 0 ;
}
