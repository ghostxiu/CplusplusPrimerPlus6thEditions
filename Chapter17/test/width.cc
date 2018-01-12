//Changed by Ghostxiu 2017/12/26
//原書程序清單17.1內容
//输入、输出和文件
//width()方法
#include <iostream>


int main()
{
	using std::cout ;
	int w = cout.width(30);
	cout << "Default field width = " << w << ":\n";
	cout.width(5);
	cout << "N:" ;
	cout.width(8);
	cout << "N*N" << ":\n" ;
	for(long i = 1 ; i <= 100 ; i *= 10)
	{
		cout.width(5);
		cout << i << ':' ;
		cout.width(8);
		cout << i*i << ":\n" ;

	}
	return 0;
}




//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter17/test
