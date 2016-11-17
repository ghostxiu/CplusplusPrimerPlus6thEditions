//reading more than one string
#include<iostream>
using namespace std;
int main()
{
    const int ArSize = 20 ;
    char name[ArSize] ;
    char dessert[ArSize] ;


    cout << "Please enter your name:\n";
    cin >> name ;
    cout << "Then enter your favorite dessert:\n";
    cin >> dessert ;

    cout << "I have some delicious " << dessert
         << " for you , " << name << endl;
    return 0;
    }
