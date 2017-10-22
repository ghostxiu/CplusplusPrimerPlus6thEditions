//Changed by Ghostxiu 2017/10/21
//原书程序清单15.8 内容
//中断
//使用错误码

#include <iostream>
#include <cfloat>
using std::cout;
using std::endl;
using std::cin;
bool hmean(double a , double b , double *ans);

int main()
{
	double x , y , z ;
	cout << "Enter two numbers: " ;
	while(cin >> x >> y)
	{
		if(hmean(x,y,&z))
		{
			cout << "Harmonic mean of " << x << " and "
			 << y << " is " << z << endl ;
		}
		else
			cout << "One value should not to be the negative "
				<< "of the other - try again.\n";
		cout << "Enter next set of numbers <q to quit>: ";

	}
	cout << "Bye!\n";
	return 0;
}

bool hmean(double a , double b, double * ans)
{
	if(a == -b)
	{
		*ans = DBL_MAX ;
		return false ;
	}
	else
	{
		*ans = 2.0 * a * b /( a + b );
		return true ;
	}
}

//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter15/test
