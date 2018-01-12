//Changed by Ghostxiu 2017/12/29
//原書程序清單17.10內容
//iomanip头文件中的控制符
//setw() 宽度 setfill() 填充符 setprecision() 精度控制
#include <iostream>
#include <cmath> //sqrt() need
#include <iomanip>
int main()
{
	using namespace std ;

	cout << fixed << right ;

	cout << setw(6) << "N" << setw(14) << "square root"
		 << setw(16) << "fourth root" << endl ;

	double root ;

	for(int i = 10 ; i <= 100 ; i += 10 )
	{
		root = sqrt(double(i));
		cout << setw(6) << setfill('.') << i <<setfill(' ') ;
		cout << setw(12) << setprecision(3) << root ;
		cout << setw(14) << setprecision(4) << sqrt(root);
		 cout <<endl ;
	}


	return 0;
}




//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter17/test
