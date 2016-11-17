#include<iostream>
int main()
{
    using namespace std ;
    cout.setf(ios_base::fixed,ios_base::floatfield);//fixed-point
    float tub = 10.0 /3.0 ; //good to about 6 places
    double mint = 10.0 / 3.0 ;// good to about 15 places
    const float million = 1.0e6 ;

    cout << "tub = " << tub
         << ", a million tubs = "
         << million * tub
         <<"\nand ten million tubs = "
         << 10 * tub *million
         <<"\nmint = "
         << mint
         <<", a million mints = "
         <<mint*million
         <<endl ;

         cin.get();
         cin.get();
         return 0;
}
