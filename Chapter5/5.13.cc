//introducing the while loop
#include<iostream>
const int ArSize = 20 ;
int main()
{
    using namespace std ;
    char name[ArSize] ;
    cout << "Your first name , please: " ;
    cin >> name ;
    cout << "Here is your name , verticalized and ASCIIized:"<<endl;
    int i = 0 ;
    while(name[i] != '\0')
    {
        cout << name[i] <<":" << int(name[i]) << endl ;
        i++ ;// Do not forget this step
    }
    return 0;
}
