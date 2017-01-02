//using the logical OR operator
#include<iostream>
int main()
{
    using namespace std ;
    cout << "This program may refrommat your hard disk\n"
         << "and destroy all you data.\n"
         << "Do you wish to continue?<y/n>";
        char ch ;
        cin >> ch ;
        if( ch == 'y' || ch == 'Y')
            cout << "You are warned\a\a\n";
        else if ( ch == 'n' || ch == 'N')
            cout << "A wise chice ... bye.\n";
        else
            cout << "That wasnt a y or n ! Apperently you "
                 << "can`t follow \n instructions, so "
                 << "I`ll trash your disk anyway.\a\a\a\n";
        return 0 ;

}
