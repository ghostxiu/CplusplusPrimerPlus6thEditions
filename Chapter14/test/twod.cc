//Changed by Ghostxiu 2017/10/11
//原书程序清单14.18 内容
//数组模板示例

#include<iostream>

#include "arraytp.h"


int main( void )
{
	using std::cout;
	using std::endl ;
	ArrayTP<int , 10> sums ;
	ArrayTP<double ,10 > aves ;
	ArrayTP< ArrayTP<int,5> , 10 > twodee ;//递归使用模板

	int i , j ;

	for(int i = 0 ; i  < 10 ; ++i)
	{
		sums[i] = 0 ;
		for(int j = 0 ; j < 5 ; ++j)
		{
			twodee[i][j] = (i + 1) * (j + 1);
			sums[i] += twodee[i][j];
		}
		aves[i] = (double) sums[i] / 10 ;
	}

	for( int i = 0 ; i < 10 ; ++i)
	{
		for(j = 0 ; j < 5 ; ++j)
		{
			cout.width(2);
			cout << twodee[i][j] << ' ' ;
		}
		cout << ": sum = ";
		cout.width(3);
		cout << sums[i] << ", average = " << aves[i] << endl;
	}
	cout << "Done.\n";

	return 0 ;
}

//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter14/test
