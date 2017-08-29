#include"ilist.cc"
#include <iostream>

using namespace std ;

int main()
{
	int num ;
	cout << "Enter the list member size:";
	cin >> num ;
    cout << "Now , please enter the " << num << " member.\n";
    ilist a(num);
    int tag = 0 ;
    a.isEmpty();

	while(!(a.isFull()))
	{
		cout << "Please push the " << tag + 1 << " num " << "to list:";
		int mem ;
		cin >> mem;
		a.add_mem(mem);
		tag++;
	}
	cout << "Now show the typex arr first time!\n";
	a.visit(show);
	cout << "Now change the element of typex!\n";
	a.visit(modify);
	cout << "Now show the typex arr :\n";
	a.visit(show);
	return 0 ;
}
