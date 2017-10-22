//Changed by Ghostxiu 2017/10/22
//原书程序清单15.10 内容
//中断
//将对象当作异常类型
#include "exc_mean.h"
#include <cmath>

double hmean(double a , double b );
double gmean(double a , double b ) ;

using std::cout ;
using std::cin;
using std::endl;

int main()
{
	cout << "Enter two numbers: " ;
	double x, y , z ;
	while(cin >> x >> y)
	{
		try{
			z = hmean(x,y);
			cout << "Harmoic mean of " << x << " and " << y
				<< " is " << z << endl ;
			cout << "Geomtric mean of " << x << " and " << y
				<< " is " << gmean(x,y) << endl ;
			cout << "Enter next two numbers < q to quit > : " ;
		}
		catch ( bad_hmean & hg)
		{
			hg.mesg();
			cout << "Try again.\n";
			continue ;
		}
		catch ( bad_gmean & bg)
		{
			cout << bg.mesg() ;
			cout << "Value used: " << bg.v1 << ","
				 << bg.v2 << endl ;
			cout << "Sorry , you don't get to play any more.\n";
			break;
		}
		cout << "Bye!\n";
	}
	return 0;
}

double hmean(double a , double b)
{
	if ( a == -b )
		throw bad_hmean(a,b);
	return 2.0 * a * b / ( a + b ) ;
}

double gmean(double a , double b)
{
	if(a < 0 || b < 0)
	{
		throw bad_gmean(a,b);
	}
	return std::sqrt( a * b );
}


//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter15/test
