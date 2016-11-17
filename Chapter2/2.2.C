#include<iostream>
int main()
{
    using namespace std ;
    int carrots;// declare an integer variable
    carrots = 25;//assign a value to the variable
    cout << "I have ";
    cout << carrots ;
    cout << endl;
    carrots = carrots - 1;//modify the variables
    cout << "Cruch, Cruch, Now I have " << carrots << " carrots"<<endl;
    cin.get();
    cin.get();
    return 0;
}
