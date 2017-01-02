#include<iostream>
int main ()
{
    using std::cin ;
    using std::endl;
    using std::cout;
    char ch ;
    int spaces = 0 ;
    int total = 0 ;
    while(cin.get(ch),ch != '.')
    {
        if(ch == ' ')
            spaces++;
        total++;
    }
    cout << spaces << " spaces, " << total ;
    cout << " charaters total in sentences!"<< endl ;
    return 0 ;
}
