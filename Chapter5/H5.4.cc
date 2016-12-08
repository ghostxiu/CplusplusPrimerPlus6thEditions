//投资相关,两个人的存款数
#include<iostream>
using namespace std ;
int main()
{
    double Dman = 100.0,Cman = 100.0;
    int count = 1;
    Dman +=  Dman * 0.1 ;
    Cman += Cman * 0.05 ;
    while(Cman < Dman)
    {
        Cman += Cman * 0.05;
        Dman += 100.0 *0.1;
        ++count;
    }
    cout << "After " << count << " years ,"
        << "Celo's assert is large than Daphne.\n";
    cout << "Celo's assert is " << Cman <<"$.\n";
    cout << " Daphne's assert is " << Dman <<"$.\n";
}
