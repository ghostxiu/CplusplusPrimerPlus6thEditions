#include<iostream>
int main()
{
    using namespace std ;

    int chest = 42 ; //decimal integer literal
    int waist = 0x42 ; //hexadecimal integer literal
    int inseam = 042 ; //octal integer literal

    cout << "Monsieur cuts a striking figure !\n" ;
    cout << "chest = " << chest << " (42 in decimal)\n";
    cout << hex ; //manuipulator for chaing number base
    cout << "waist = " << waist << " (0x42 in hex )\n";
    cout << oct ;//manuipulator to changing number  base
    cout << "inseam = "<< inseam<< " (042 in octal)\n";

    cin.get();
    cin.get();
    return 0;
}
