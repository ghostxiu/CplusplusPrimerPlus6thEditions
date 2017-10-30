//Changed by Ghostxiu 2017/10/23
//原书程序清单15.12 内容
//异常
//栈退解
#include <cmath>
#include <string>
#include "exc_mean.h"

double hmean(double a , double b );//调和平均数（harmonic mean）
double gmean(double a , double b ) ;//几何平均数（Geometric mean）
double means(double a , double b ) ;//算术平均数（ arithmetic mean）
using std::cout ;
using std::cin;
using std::endl;
using std::string ;

class demo
{
private:
	string word ;
public:
	demo (const string & str)
	{
		word = str ;
		cout << "demo " << word << " created\n";
	}
	~demo()
	{
		cout << "demo " << word << " destoryed\n";
	}
	void show() const
	{
		cout << "demo " << word << " lives!\n";
	}
};


int main()
{

	double x, y , z ;
	demo d1("found in block in main()");
	cout << "\nEnter two numbers: " ;
	{
		while(cin >> x >> y)
		{
			try{
				z = means(x,y);
				cout << "The mean mean of " << x << " and " << y
					<< " is " << z << endl ;
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
		}
		d1.show();

	}
	cout << "Bye!\n";
	cin.get();
	cin.get();

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

double means(double a ,double b)
{
	//算数平均数
	double am , hm , gm ;
	demo d2("found in means()");
	am =  ( a + b ) / 2.0 ;
	try{
		hm = hmean(a,b);
		gm = gmean(a,b);
	}
	catch ( bad_hmean & bg)
	{
		bg.mesg();
		cout << "Caught in means()\n";
		throw;
	}
	d2.show();
	return ( am + hm + gm ) / 3.0 ;
}

//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter15/test
