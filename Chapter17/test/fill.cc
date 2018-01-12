//Changed by Ghostxiu 2017/12/29
//原書程序清單17.5內容
//使用成员函数 fill()
#include <iostream>


int main()
{
	using std::cout ;
	cout.fill('*');
	const char *staff[2] = {"Waldo Whipsnade","Wilmarie Wooper"};
	long bonus[2] = {900,1350};
	for(int i = 0 ; i < 2 ; ++i)
	{
		cout << staff[i] << ": $";
		cout.width(7);
		cout << bonus[i] << "\n";
	}

	return 0;
}




//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter17/test
