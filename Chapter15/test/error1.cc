//Changed by Ghostxiu 2017/10/21
//原书程序清单15.7 内容
//异常，使用abort中断
#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;
using std::cin;

double hmean(double a , double b);
int main()
{
	double x ,y ,z ;
	cout << "Enter two numbers: " ;
	while(cin >> x >> y)
	{
		z = hmean(x,y);
		cout << "Harmonic mean of " << x << " and "
			 << y << " is " << z << endl ;
		cout << "Enter next set of numbers <q to quit>: ";
		cout << "Bye!\n";

	}
	return 0 ;
}

double hmean(double a ,double b)
{
	if(a == -b)
	{
		cout << "untenable arguments to hmean()\n";
		abort();
	}
	return 2.0 * a * b /(a + b) ;
}

//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter15/test
