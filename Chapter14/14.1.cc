//Changed by Ghostxiu 2017/10/14
//编程练习1
//包括文件 wine.h wine.cc 14.1.cc
#include "wine.cc"

int main(void)
{
	cout << "Enter name  of wine: " ;
	char lab[50];
	cin.getline(lab,50);
	cout << "Enter number of years: " ;
	int yrs ;
	cin >> yrs ;


	Wine holding(lab,yrs);
	holding.GetBottles();
	holding.Show();

	const int YRS = 3 ;

	int y[YRS] = {1993,1995,1998};
	int b[YRS] = {48,60,72};


	Wine more("Gushing Grape Red",YRS,y,b);
	more.Show();
	cout << "Total bottles for " << more.Label()
		<<": " << more.sum() <<endl;

	cout << "Bye!\n";
	return 0;
}


//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter14
