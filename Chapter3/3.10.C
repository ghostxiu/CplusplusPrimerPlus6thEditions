#include<iostream>
int main()
{
    using namespace std ;
    float hats,heads;

    cout.setf(ios_base::fixed,ios_base::floatfield);
    cout << "Enter a number: " ;
    cin >> hats;
    cout << "Enter another number£º";
    cin >> heads ;

    cout << "hats = " << hats
         << " ; heads = " << heads
         << endl
         <<"hats + heads = " << hats + heads << endl
         <<"hats - heads = " << hats - heads << endl
         <<"hats * heads = " << hats * heads << endl
         <<"hats / heads = " << hats / heads << endl ;

    cin.get();
    cin.get();
    return 0;

}
