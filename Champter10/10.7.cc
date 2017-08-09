#include "user_plorg.h"
#include<iostream>
static const int Len = 19;
int main()
{
	char na[Len];
	using namespace std ;
	cout << "Please enter the Betegeusean name: ";
	cin >> na ;
    plorg Betegeusean(na);
    cout << "Now the plorg Betegeusean is created:\n";
    Betegeusean.show();

    cout << "Now input a number to change CI:";
    int num ;
    cin >> num ;
    while(!Betegeusean.reset(num))cin >> num ;
    Betegeusean.show();

    return 0 ;
}
