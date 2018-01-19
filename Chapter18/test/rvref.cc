//Changed by Ghostxiu 2018/1/15
//原書程序清單18.1內容
//C++11功能
//右值引用&&
#include <iostream>

inline double f(double tf)
{
	return 5.0*(tf-32.0)/9.0;
}



int main()
{
	using namespace std ;
	double tc = 21.5 ;
	double && rd1 = 7.07;
	double && rd2 = 1.8 * tc + 32.0 ;
	double && rd3 = f(rd2);

	cout << " tc value and address: " << tc << ", " << &tc << endl
		 << "rd1 value and address: " << rd1 << ", " << &rd1 << endl
		 << "rd2 value and address: " << rd2 << ", " << &rd2 << endl
		 << "rd3 value and address: " << rd3 << ", " << &rd3 << endl ;
	return 0;
}




//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter18/test
