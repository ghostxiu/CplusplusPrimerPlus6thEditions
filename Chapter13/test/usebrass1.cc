//Changed by Ghostxiu 2017/9/15
//原书程序清单13.9内容
//包含文件 brass.h brass.cc

#include "brass.cc"

int main()
{
	Brass Piggy("Porcelot Pigg" ,381299 ,4000.00);
	BrassPlus Hoggy("Horatio Hogg",382288,3000.00);
	Piggy.ViewAcct();
	cout << endl;
	Hoggy.ViewAcct();
	cout <<endl ;
	cout << "Depositing $1000 in to Hoggy account:\n";
	Hoggy.Deposit(1000.0);
	cout << "New balance : $ " << Hoggy.Balance() << endl;
	cout << "Withdrawing $4200 from the Piggy Account:\n";

	cout << "Piggy account balance : $" << Piggy.Balance() << endl ;
	cout << "Withdrawing $4200 from the Hoggy Account:\n";
	Hoggy.WithDraw(4200.0);
	Hoggy.ViewAcct();


	return 0;
}


//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter13/test
