//Changed by Ghostxiu 2017/12/26
//原書程序清單17.1內容
//输入、输出和文件
//write()方法
#include <iostream>
#include <cstring>

using namespace std ;



int main()
{
	const char * state1 = "Florida";
	const char * state2 = "Kansas";
	const char * state3 = "Euphoria";

	int len = std::strlen(state2);

    cout << "Increasing loop index: ";
    for( int i = 0 ; i <= len ; ++i)
	{
		cout.write(state2,i);
		cout << endl ;
	}

	cout << "Decreasing loop index: ";
	for( int i = 0; i <= len ; ++i)
	{
		cout.write(state2,i) << endl;
	}
//超出state2字符长度限制的情况,遇到空字符时不停止
//到了输出宽度限制后才结束
	cout << "Exceeding string length: \n";
	cout.write(state2,len) << endl ;

	return 0;
}




//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter17/test
