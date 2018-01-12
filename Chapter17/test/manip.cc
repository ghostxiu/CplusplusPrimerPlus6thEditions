//Changed by Ghostxiu 2017/12/27
//原書程序清單17.3內容
//cout 默认输出
#include <iostream>





int main()
{
	using namespace std;
	cout << "Enter an integer: " ;
	int n ;
	cin >> n ;
	cout << "n\t n*n \n";
	cout << n<<"\t"<<n*n<<" (decimal)\n";

	cout << hex ;
	cout << n<<"\t"<<n*n<<" (hexadecimal)\n";

	cout << oct ;
	cout << n<<"\t"<<n*n<<" (octal)\n";

	dec(cout);
	cout << n<<"\t"<<n*n<<" (decimal)\n";
	return 0;
}




//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter17/test
