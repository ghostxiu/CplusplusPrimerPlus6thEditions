#include<iostream>
void cheers(int);//no return value
double cube(double x) ;//protypes:returns a double

int main()
{
    using namespace std ;
    cheers(5);//function call\
    cout << "Give me a number:" ;
    double side;
    cin >> side;
    double value = cube(side);//function call
    cout << "A " << side << "-foot cube has a volume of ";
    cout << value << " cubic feet.\n";
    cheers(cube(2));
    return 0 ;

}

void cheers( int n)
{

    using namespace std ;
    for(int i = 0 ; i < n ; ++i)
        cout << "Cheers! " ;
    cout << endl ;
}
double cube(double x)
{
    return x*x*x ;
}
