//follwing number input with line input
#include<iostream>

int main()
{
    using namespace std ;

    cout <<"What year was your house buit: \n";
    int year ;
    cin >> year ;
    cout << "What is the street address:\n";
    char address[80];
    cin.get();
    cin.getline(address,80);
    cout << "The house bulit in " <<year<< ".\n";
    cout << "The house address is " << address << ".\n";

    return 0 ;
}
