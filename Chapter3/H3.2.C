#include<iostream>
#include<cmath>
int main()
{
    using namespace std ;
    int inch , footer , pound ;
    const int in_ft = 12 ;
    const double kg_pd = 2.2;
    const double in_m = 0.0254 ;

    cout << "This program will show you BMI."<<endl
         << "(Body Mass Index)"<<endl
         << "Now please enter your weight in pounds:"<<endl
         << "Weight:____\b\b\b\b" ;
    cin  >> pound ;
    cout << "Then enter your height in footers and inchs :\n"
         << "First the footers:___\b\b\b";
    cin >> footer;
    cout << "\nNext the inchs:___\b\b\b";
    cin >> inch;

    double m , kg ;
    m =  (footer*in_ft+inch)*in_m ;
    kg = pound/2.2 ;
    cout << "\n\n\nYour health status :"
         << "\nHeight: " << m
         << " M   ,Weight: " << kg
         <<" Kgs \n"
         <<"BMI(Body Mass Index): "
         <<kg/(pow(m,2))
         <<endl;

    cin.get();
    cin.get();
    return 0;




}
