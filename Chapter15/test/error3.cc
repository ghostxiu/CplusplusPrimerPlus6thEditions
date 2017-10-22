//Changed by Ghostxiu 2017/10/21
//原书程序清单15.9 内容
//中断
//使用异常机制

#include <iostream>
#include <cfloat>
using std::cin ;
using std::cout ;
using std::endl ;

double hmean(double a , double b );

int main()
{
	double x , y , z ;
	cout << "Enter two numbers: " ;
	while(cin >> x >> y)
	{
		try
		{
			z = hmean(x,y);
		}
		catch (const char * s )//注意此处不能用string
		{
			std::cerr << s << endl ;
			cout << "Enter a new pairs of two numbers: ";
			continue ;
		}
		cout << "Harmonic mean of " << x << " and "
			 << y << " is " << z << endl ;
		cout << "Enter next set of numbers <q to quit>: ";

	}
	cout << "Bye!\n";
	return 0;
}

double hmean(double a , double b)
{
	if(a == -b)
	{
		throw "band hmean() arguments: a = -b not allowed!\n";
	}

	return 2.0 * a * b /( a + b );
}

//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter15/test
