//在栈中添加和删除customer 结构
#include<iostream>
#include "use_customer.h"
using namespace std;
int main()
{
	int sum  = 0 ;
	CR a{"Ghostxiu",10800};
	CR b;
	Stack s;

	while(s.push(a) == true)
	{
		cout << "now push " << a.fullname << " " <<a.payment <<endl;
	}
	while(s.pop(b) == true)
	{
		cout << "now pop " << b.fullname <<" " <<b.payment <<endl;
		sum += b.payment;
	}

	cout << "\nAll clients consume " << sum << " dollars.\n ";

	cin.get();
	cin.get();

	return 0 ;

}
