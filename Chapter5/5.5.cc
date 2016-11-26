//cout as directed
#include<iostream>
int main ()
{
    using std::cout ; // a using decleration
    using std::cin ;
    using std::endl;

    cout << "Enter an integer :";
    int by ;
    cin >> by ;
    cout << "Couting by £º" << by << "s:\n";
    for(int i = 0 ; i < 100 ; i += by)
    {
        cout << i << endl;
    }
    return 0;
}
