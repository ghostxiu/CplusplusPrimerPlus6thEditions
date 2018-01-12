//Changed by Ghostxiu 2017/12/27
//原書程序清單17.2內容
//cout 默认输出
#include <iostream>





int main()
{
	using std::cout ;
	cout << "12345678901234567890\n";


	int t = 273 ;
	char ch = 'K';
	cout << t << ":\n";
	cout << -t << ":\n";
	cout << ch << ":\n";
//不显示后面的0
	double f1 = 1.2000;
	cout << f1 << ":\n";
	cout << (f1 + 1.0/9.0) << ":\n";
//浮点数默认显示6位
	double f2 = 1.67E2;
	cout << f2 << ":\n";
	f2 += 1.0/9.0;
	cout << (f2 * 1.0e4) << ":\n";
//默认宽度按5位显示
	double f3 = 2.3e-4;
	cout << f3 << ":\n";
	cout << f3 / 10 << ":\n";


	return 0;
}




//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter17/test
