//Changed by Ghostxiu 2017/1/12
//原書程序清單17.22 內容
//string 类的内核格式化
//输入

#include <iostream>
#include <string  >
#include <sstream >



using namespace std ;

int main()
{
	string lit = "It was a dark and stormy day, "
				"and the full moon glowed brilliantly.\n";

	istringstream instr(lit);
	string word ;
	while(instr >> word )
		cout << word << endl;//一次读取一个单词
	return 0;
}



//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter17/test
