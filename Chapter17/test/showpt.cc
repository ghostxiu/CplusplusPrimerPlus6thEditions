//Changed by Ghostxiu 2017/12/29
//原書程序清單17.7內容
//使用常量 ios_base::showpoint
#include <iostream>


int main()
{
	using std::cout ;
	using std::ios_base;
	float price1 = 20.4 ;
	float price2 = 1.9 + 8.0/9.0 ;
	cout.setf(ios_base::showpoint);
	cout << "Furry Friends is  $" << price1 << "!\n";
	cout << "Fiery Friends is  $" << price2 << "!\n";

	cout.precision(2);
	cout << "Furry Friends is  $" << price1 << "!\n";
	cout << "Fiery Friends is  $" << price2 << "!\n";

	return 0;
}




//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter17/test
