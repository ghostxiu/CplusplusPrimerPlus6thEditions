//Changed by Ghostxiu 2017/12/30
//原書程序清單17.11內容
//cin输入
//检查允许的输入
#include <iostream>

int main()
{
	using namespace std ;
	cout << "Enter numbers: ";

	int input ,sum;
	sum = 0;
	while(cin>>input)
	{
		sum += input;
	}
	cout << "Last value entered = " << input << endl ;
	cout << "Sum " << sum << endl ;
	return 0;
}




//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter17/test
