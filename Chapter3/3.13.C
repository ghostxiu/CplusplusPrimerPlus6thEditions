#include<iostream>
int main()
{

    using namespace std ;
    cout.setf(ios_base::fixed, ios_base::floatfield) ;
    float tree = 3 ; //int converted to  float
    int guess (3.9832); //double converted to int
    int debt = 7.2E12; //result not default in C++


    cout << "tree = " << tree << endl
         << "guess = " << guess << endl
         << "debt = " << debt <<endl ;

    cin.get();
    cin.get();
    return 0 ;

}
