//using if else statement
#include<iostream>
int main()
{
    char ch ;
    using namespace std ;
    cout << "Type , and aI shall repeat.\n";
    cin.get(ch);
    while(ch != '.')
    {
        if(ch == '\n')
            cout << ch ;
        else
            cout << 1+ch;
        cin.get(ch);
    }
    //try ch+1 instead of ++ch for interesting effect
    cout << "\nPlease excuse the slight confusion.\n";
    return 0 ;
}
